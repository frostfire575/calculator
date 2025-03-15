#pragma once

namespace $safeprojectname$
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
public
	ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			// TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::TextBox ^ input;

	protected:
	protected:
	private:
		System::Windows::Forms::Button ^ clearbtn;

	private:
		System::Windows::Forms::Button ^ divisionbtn;

	private:
		System::Windows::Forms::Button ^ plusbtn;

	private:
		System::Windows::Forms::Button ^ multiplybtn;

	private:
		System::Windows::Forms::Button ^ equalbtn;

	private:
		System::Windows::Forms::Button ^ minusbtn;

	private:
		System::Windows::Forms::Button ^ btn1;

	private:
		System::Windows::Forms::Button ^ btn2;

	private:
		System::Windows::Forms::Button ^ btn3;

	private:
		System::Windows::Forms::Button ^ btn4;

	private:
		System::Windows::Forms::Button ^ btn5;

	private:
		System::Windows::Forms::Button ^ button6;

	private:
		System::Windows::Forms::Button ^ btn7;

	private:
		System::Windows::Forms::Button ^ btn8;

	private:
		System::Windows::Forms::Button ^ btn9;

	private:
		System::Windows::Forms::Button ^ button10;

	private:
		System::Windows::Forms::Button ^ btn0;

	private:
		System::Windows::Forms::Button ^ pointbtn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->clearbtn = (gcnew System::Windows::Forms::Button());
			this->divisionbtn = (gcnew System::Windows::Forms::Button());
			this->plusbtn = (gcnew System::Windows::Forms::Button());
			this->minusbtn = (gcnew System::Windows::Forms::Button());
			this->multiplybtn = (gcnew System::Windows::Forms::Button());
			this->equalbtn = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->pointbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			//
			// input
			//
			this->input->BackColor = System::Drawing::SystemColors::WindowText;
			this->input->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->input->Font = (gcnew System::Drawing::Font(L"Verdana", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
															 static_cast<System::Byte>(0)));
			this->input->ForeColor = System::Drawing::Color::White;
			this->input->Location = System::Drawing::Point(12, 12);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(398, 66);
			this->input->TabIndex = 0;
			this->input->TextChanged += gcnew System::EventHandler(this, &MyForm::input_TextChanged);
			//
			// clearbtn
			//
			this->clearbtn->BackColor = System::Drawing::Color::DimGray;
			this->clearbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clearbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->clearbtn->Location = System::Drawing::Point(298, 98);
			this->clearbtn->Name = L"clearbtn";
			this->clearbtn->Size = System::Drawing::Size(112, 69);
			this->clearbtn->TabIndex = 2;
			this->clearbtn->Text = L"CLEAR";
			this->clearbtn->UseVisualStyleBackColor = false;
			this->clearbtn->Click += gcnew System::EventHandler(this, &MyForm::clearbtn_Click);
			//
			// divisionbtn
			//
			this->divisionbtn->BackColor = System::Drawing::Color::DimGray;
			this->divisionbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->divisionbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->divisionbtn->Location = System::Drawing::Point(298, 173);
			this->divisionbtn->Name = L"divisionbtn";
			this->divisionbtn->Size = System::Drawing::Size(112, 49);
			this->divisionbtn->TabIndex = 2;
			this->divisionbtn->Text = L"/";
			this->divisionbtn->UseVisualStyleBackColor = false;
			this->divisionbtn->Click += gcnew System::EventHandler(this, &MyForm::divisionbtn_Click);
			//
			// plusbtn
			//
			this->plusbtn->BackColor = System::Drawing::Color::DimGray;
			this->plusbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->plusbtn->Location = System::Drawing::Point(298, 228);
			this->plusbtn->Name = L"plusbtn";
			this->plusbtn->Size = System::Drawing::Size(112, 49);
			this->plusbtn->TabIndex = 2;
			this->plusbtn->Text = L"+";
			this->plusbtn->UseVisualStyleBackColor = false;
			this->plusbtn->Click += gcnew System::EventHandler(this, &MyForm::plusbtn_Click);
			//
			// minusbtn
			//
			this->minusbtn->BackColor = System::Drawing::Color::DimGray;
			this->minusbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->minusbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->minusbtn->Location = System::Drawing::Point(298, 283);
			this->minusbtn->Name = L"minusbtn";
			this->minusbtn->Size = System::Drawing::Size(112, 49);
			this->minusbtn->TabIndex = 2;
			this->minusbtn->Text = L"-";
			this->minusbtn->UseVisualStyleBackColor = false;
			this->minusbtn->Click += gcnew System::EventHandler(this, &MyForm::minusbtn_Click);
			//
			// multiplybtn
			//
			this->multiplybtn->BackColor = System::Drawing::Color::DimGray;
			this->multiplybtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->multiplybtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																   static_cast<System::Byte>(0)));
			this->multiplybtn->Location = System::Drawing::Point(298, 338);
			this->multiplybtn->Name = L"multiplybtn";
			this->multiplybtn->Size = System::Drawing::Size(112, 49);
			this->multiplybtn->TabIndex = 2;
			this->multiplybtn->Text = L"X";
			this->multiplybtn->UseVisualStyleBackColor = false;
			this->multiplybtn->Click += gcnew System::EventHandler(this, &MyForm::multiplybtn_Click);
			//
			// equalbtn
			//
			this->equalbtn->BackColor = System::Drawing::Color::DimGray;
			this->equalbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->equalbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->equalbtn->Location = System::Drawing::Point(298, 393);
			this->equalbtn->Name = L"equalbtn";
			this->equalbtn->Size = System::Drawing::Size(112, 49);
			this->equalbtn->TabIndex = 2;
			this->equalbtn->Text = L"=";
			this->equalbtn->UseVisualStyleBackColor = false;
			this->equalbtn->Click += gcnew System::EventHandler(this, &MyForm::equalbtn_Click);
			//
			// btn1
			//
			this->btn1->BackColor = System::Drawing::Color::DimGray;
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(16, 183);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(88, 49);
			this->btn1->TabIndex = 2;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			//
			// btn2
			//
			this->btn2->BackColor = System::Drawing::Color::DimGray;
			this->btn2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(110, 183);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(88, 49);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			//
			// btn3
			//
			this->btn3->BackColor = System::Drawing::Color::DimGray;
			this->btn3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(204, 183);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(88, 49);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			//
			// btn4
			//
			this->btn4->BackColor = System::Drawing::Color::DimGray;
			this->btn4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(16, 254);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(88, 49);
			this->btn4->TabIndex = 2;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			//
			// btn5
			//
			this->btn5->BackColor = System::Drawing::Color::DimGray;
			this->btn5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(110, 254);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(88, 49);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			//
			// button6
			//
			this->button6->BackColor = System::Drawing::Color::DimGray;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															   static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(204, 254);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 49);
			this->button6->TabIndex = 2;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			//
			// btn7
			//
			this->btn7->BackColor = System::Drawing::Color::DimGray;
			this->btn7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(16, 322);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(88, 49);
			this->btn7->TabIndex = 2;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			//
			// btn8
			//
			this->btn8->BackColor = System::Drawing::Color::DimGray;
			this->btn8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(110, 322);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(88, 49);
			this->btn8->TabIndex = 2;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			//
			// btn9
			//
			this->btn9->BackColor = System::Drawing::Color::DimGray;
			this->btn9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(204, 322);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(88, 49);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			//
			// button10
			//
			this->button10->BackColor = System::Drawing::Color::DimGray;
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(16, 391);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(88, 49);
			this->button10->TabIndex = 2;
			this->button10->Text = L"/";
			this->button10->UseVisualStyleBackColor = false;
			//
			// btn0
			//
			this->btn0->BackColor = System::Drawing::Color::DimGray;
			this->btn0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
															static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(110, 391);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(88, 49);
			this->btn0->TabIndex = 2;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			//
			// pointbtn
			//
			this->pointbtn->BackColor = System::Drawing::Color::DimGray;
			this->pointbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pointbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																static_cast<System::Byte>(0)));
			this->pointbtn->Location = System::Drawing::Point(204, 391);
			this->pointbtn->Name = L"pointbtn";
			this->pointbtn->Size = System::Drawing::Size(88, 49);
			this->pointbtn->TabIndex = 2;
			this->pointbtn->Text = L".";
			this->pointbtn->UseVisualStyleBackColor = false;
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(420, 470);
			this->Controls->Add(this->equalbtn);
			this->Controls->Add(this->multiplybtn);
			this->Controls->Add(this->minusbtn);
			this->Controls->Add(this->plusbtn);
			this->Controls->Add(this->pointbtn);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->divisionbtn);
			this->Controls->Add(this->clearbtn);
			this->Controls->Add(this->input);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		System::String ^ tempValue = "";
		System::String ^ operationType = "";
		double firstValue = 0;
		bool operationPerformed = false;

#pragma endregion
	private:
		System::Void input_TextChanged(System::Object ^ sender, System::EventArgs ^ e)
		{
		}

	private:
		System::Void NumberButton_Click(System::String ^ number)
		{
			if (operationPerformed)
			{
				input->Text = "";
				operationPerformed = false;
			}
			input->Text += number;
		}

	private:
		System::Void btn1_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("1"); }
	private:
		System::Void btn2_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("2"); }
	private:
		System::Void btn3_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("3"); }
	private:
		System::Void btn4_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("4"); }
	private:
		System::Void btn5_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("5"); }
	private:
		System::Void btn6_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("6"); }
	private:
		System::Void btn7_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("7"); }
	private:
		System::Void btn8_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("8"); }
	private:
		System::Void btn9_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("9"); }
	private:
		System::Void btn0_Click(System::Object ^ sender, System::EventArgs ^ e) { NumberButton_Click("0"); }

	private:
		System::Void OperationButton_Click(System::String ^ operation)
		{
			if (tempValue != "")
			{
				equalbtn_Click(nullptr, nullptr);
			}
			
			tempValue = input->Text;
			operationType = operation;
			operationPerformed = true;
		}

	private:
		System::Void plusbtn_Click(System::Object ^ sender, System::EventArgs ^ e) { OperationButton_Click("plus"); }
	private:
		System::Void minusbtn_Click(System::Object ^ sender, System::EventArgs ^ e) { OperationButton_Click("minus"); }
	private:
		System::Void multiplybtn_Click(System::Object ^ sender, System::EventArgs ^ e) { OperationButton_Click("multiply"); }
	private:
		System::Void divisionbtn_Click(System::Object ^ sender, System::EventArgs ^ e) { OperationButton_Click("division"); }

	private:
		System::Void equalbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			if (tempValue != "")
			{
				double value_one = Convert::ToDouble(tempValue);
				double value_two = Convert::ToDouble(input->Text);
				double result = 0;

				if (operationType == "plus")
				{
					result = value_one + value_two;
				}
				else if (operationType == "minus")
				{
					result = value_one - value_two;
				}
				else if (operationType == "multiply")
				{
					result = value_one * value_two;
				}
				else if (operationType == "division")
				{
					if (value_two != 0)
						result = value_one / value_two;
					else
						input->Text = "Error";
				}

				if (input->Text != "Error")
					input->Text = result.ToString();
				
				tempValue = input->Text;
				operationPerformed = true;
			}
		}

	private:
		System::Void clearbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			input->Text = "";
			tempValue = "";
			operationType = "";
		}
	};
}
