#pragma once
#include<Math.h>
namespace MyForms {

	using namespace Microsoft::Win32;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//

			Registry::CurrentUser->GetSubKeyNames();
			RegistryKey^ rkl;
			rkl = Registry::CurrentUser->OpenSubKey("Software", true);
			RegistryKey^ nk = rkl->CreateSubKey("NewRegKey");
			RegistryKey^ la = nk->CreateSubKey("A");
			RegistryKey^ lb = nk->CreateSubKey("B");
			RegistryKey^ lc = nk->CreateSubKey("C");


			array<String^>^ key = Registry::CurrentUser->GetSubKeyNames();
			RegistryKey^ rk = nullptr;
			rk = Registry::CurrentUser->OpenSubKey("Software\\NewRegKey\\C");
			array<String^>^ name = rk->GetValueNames();
			for (int i = 0; i < name->Length; i++)
			{
				String^ value = rk->GetValue(name[i])->ToString();
				textBox2->Text = value;
			}
			rk = Registry::CurrentUser->OpenSubKey("Software\\NewRegKey\\B");
			array<String^>^ name1 = rk->GetValueNames();
			for (int i = 0; i < name1->Length; i++)
			{
				String^ value = rk->GetValue(name1[i])->ToString();
				textBox3->Text = value;
			}
			rk = Registry::CurrentUser->OpenSubKey("Software\\NewRegKey\\A");
			array<String^>^ name2 = rk->GetValueNames();
			for (int i = 0; i < name2->Length; i++)
			{
				String^ value = rk->GetValue(name2[i])->ToString();
				textBox1->Text = value;
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label10;
	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arbat", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(395, 72);
			this->label10->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(15, 13);
			this->label10->TabIndex = 60;
			this->label10->Text = L"_";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arbat", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(353, 102);
			this->label9->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 13);
			this->label9->TabIndex = 59;
			this->label9->Text = L"_";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arbat", 8.249999F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(353, 127);
			this->label8->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 58;
			this->label8->Text = L"_";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Agency FB", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::OrangeRed;
			this->label7->Location = System::Drawing::Point(274, 68);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 17);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Дискриминант: D =";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(82, 111);
			this->textBox3->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(91, 20);
			this->textBox3->TabIndex = 56;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(82, 152);
			this->textBox2->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(91, 20);
			this->textBox2->TabIndex = 55;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 65);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(91, 20);
			this->textBox1->TabIndex = 54;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label6->Location = System::Drawing::Point(297, 124);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 16);
			this->label6->TabIndex = 53;
			this->label6->Text = L"2 корень:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(297, 99);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 16);
			this->label5->TabIndex = 52;
			this->label5->Text = L"1 корень:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gabriola", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Crimson;
			this->label4->Location = System::Drawing::Point(53, 143);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 35);
			this->label4->TabIndex = 51;
			this->label4->Text = L"c =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gabriola", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::SpringGreen;
			this->label3->Location = System::Drawing::Point(53, 102);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 35);
			this->label3->TabIndex = 50;
			this->label3->Text = L"b =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gabriola", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(53, 56);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 35);
			this->label2->TabIndex = 49;
			this->label2->Text = L"a =";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->button1->Location = System::Drawing::Point(82, 196);
			this->button1->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 35);
			this->button1->TabIndex = 48;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Indigo;
			this->label1->Location = System::Drawing::Point(55, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 21);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Введите данные:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 270);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Программа для решения квадратных уравнений";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		RegistryKey^ rkl;
		rkl = Registry::CurrentUser->OpenSubKey("Software", true);
		RegistryKey^ nk = rkl->CreateSubKey("NewRegKey");
		RegistryKey^ la = nk->CreateSubKey("A");
		RegistryKey^ lb = nk->CreateSubKey("B");
		RegistryKey^ lc = nk->CreateSubKey("C");

		String^ vla;
		vla = textBox1->Text;
		String^ vlb;
		vlb = textBox3->Text;
		String^ vlc;
		vlc = textBox2->Text;
		la->SetValue("Value.A", vla);
		lb->SetValue("Value.B", vlb);
		lc->SetValue("Value.C", vlc);


		double a, b, c, x, D;
		a = System::Double::Parse(this->textBox1->Text);
		b = System::Double::Parse(this->textBox3->Text);
		c = System::Double::Parse(this->textBox2->Text);
		D = pow(b, 2) - 4 * a * c;
		label10->Text = D.ToString();
		this->label10->ForeColor = Color::Green;
		if (D > 0)
		{
			x = (-b + sqrt(D)) / (2 * a);
			label9->Text = x.ToString();
			this->label9->ForeColor = Color::Green;
			x = (-b - sqrt(D)) / (2 * a);
			label8->Text = x.ToString();
			this->label8->ForeColor = Color::Green;
		}
		else if (D == 0)
		{
			x = (-b) / (2 * a);
			label9->Text = x.ToString();
			this->label9->ForeColor = Color::Green;
			label8->Text = "Так как D = 0, то 2 нет.";
			this->label8->ForeColor = Color::Green;
		}
		else
		{
			label9->Text = "Так как D < 0,";
			this->label9->ForeColor = Color::Green;
			label8->Text = "то корни невещественные.";
			this->label8->ForeColor = Color::Green;
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}