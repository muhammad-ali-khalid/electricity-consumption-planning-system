
#pragma once
#include "User.h"

namespace ECPS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		User^ user = nullptr;
		Input(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->user = user;
		}

		Input()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;


	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label7;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Input::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(320, 23);
			this->panel2->Margin = System::Windows::Forms::Padding(6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(692, 133);
			this->panel2->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(136, 23);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Appliance Details";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Input::label1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 23);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(112, 88);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Input::pictureBox2_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(24, 220);
			this->panel3->Margin = System::Windows::Forms::Padding(6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(608, 160);
			this->panel3->TabIndex = 11;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Fan", L"A.C", L"Light Bulb", L"Microwave", L"Refrigerator",
					L"Iron", L"Water Motor", L"T.V"
			});
			this->comboBox2->Location = System::Drawing::Point(32, 69);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(315, 33);
			this->comboBox2->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 17);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(323, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Appliance Name";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(24, 531);
			this->panel4->Margin = System::Windows::Forms::Padding(6);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(608, 189);
			this->panel4->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Morning", L"Afternoon", L"Evening", L"Night",
					L"Any Time"
			});
			this->comboBox1->Location = System::Drawing::Point(32, 96);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(315, 33);
			this->comboBox1->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(24, 17);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(568, 37);
			this->label4->TabIndex = 2;
			this->label4->Text = L"When do you prefer using this Appliance";
			this->label4->Click += gcnew System::EventHandler(this, &Input::label4_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(56, 908);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(294, 75);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Input::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Orange;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(830, 1035);
			this->button2->Margin = System::Windows::Forms::Padding(6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(418, 75);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Edit a response";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Input::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Orange;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(56, 1035);
			this->button3->Margin = System::Windows::Forms::Padding(6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(576, 75);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Save and Add another response";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Input::button3_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Location = System::Drawing::Point(24, 742);
			this->panel5->Margin = System::Windows::Forms::Padding(6);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(608, 127);
			this->panel5->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 17);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 37);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Enter Priority";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(32, 63);
			this->textBox4->Margin = System::Windows::Forms::Padding(6);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(528, 44);
			this->textBox4->TabIndex = 5;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox3);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Location = System::Drawing::Point(24, 392);
			this->panel6->Margin = System::Windows::Forms::Padding(6);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(608, 127);
			this->panel6->TabIndex = 17;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(31, 70);
			this->textBox3->Margin = System::Windows::Forms::Padding(6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(528, 44);
			this->textBox3->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 17);
			this->label6->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(385, 37);
			this->label6->TabIndex = 2;
			this->label6->Text = L"How many hours you use it";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(658, 220);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(608, 162);
			this->panel1->TabIndex = 18;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::White;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(31, 83);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(237, 44);
			this->numericUpDown1->TabIndex = 19;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Input::numericUpDown1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 17);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(506, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter the Consumption in Watts (W)";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Orange;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(954, 908);
			this->button4->Margin = System::Windows::Forms::Padding(6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(294, 75);
			this->button4->TabIndex = 19;
			this->button4->Text = L"Dashboard";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Input::button4_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->comboBox3);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Location = System::Drawing::Point(658, 409);
			this->panel7->Margin = System::Windows::Forms::Padding(6);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(608, 127);
			this->panel7->TabIndex = 20;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->comboBox3->Location = System::Drawing::Point(31, 77);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(315, 33);
			this->comboBox3->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(24, 17);
			this->label7->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(409, 37);
			this->label7->TabIndex = 2;
			this->label7->Text = L"No. of units of this Appliance";
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1391, 1152);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Input";
			this->Text = L"Input";
			this->Load += gcnew System::EventHandler(this, &Input::Input_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ appliance_name = comboBox2->Text;
		String^ no_of_hrs = textBox3->Text;
		String^ interval = comboBox1->Text;
		String^ priority = textBox4->Text;
		int no_of_units = 0;
		if (comboBox3->Text != "") {
			no_of_units = Convert::ToInt32(comboBox3->Text);
		}

		int per_unit_price = 0;
		float expenses;
		float kw_unit = 0;
		float watts = Decimal::ToInt32(numericUpDown1->Value);
		kw_unit = watts / 1000;
		int expense_to_minus = 0;


		if (watts == 0 && is_hrs_right(no_of_hrs) == false) {
			MessageBox::Show("Power Consumption Should be Greater than Zero");
		}
		else {
			int hrs_int = Convert::ToInt32(no_of_hrs);
			String^ interval_time = "";

			if (priority != "High" && watts > 1000) {
				interval = "Morning";
			}

			if (interval == "Morning") {
				interval_time = "5AM - 12PM";
			}
			else if (interval == "Afternoon") {
				interval_time = "12PM - 4PM";
			}
			else if (interval == "Evening") {
				interval_time = "4PM - 7PM";
			}
			else if (interval == "Night") {
				interval_time = "7PM - 4AM";
			}
			else {
				interval_time = "Any time of the Day";
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Select Expense from plan_data where Id = @id AND Appliance = @appliance";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", this->user->id);
				command->Parameters->AddWithValue("@appliance", appliance_name);

				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					expense_to_minus = reader->GetInt32(0);
				}
			}

			catch (Exception^ e) {
				MessageBox::Show(this->user->id);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Select Pricing from Tariff Where Location = @loc AND Unit_range = @unit_range";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@loc", this->user->location);
				command->Parameters->AddWithValue("@unit_range", this->user->unit_range);


				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					per_unit_price = reader->GetInt32(0);
				}
				//MessageBox::Show(Convert::ToString(per_unit_price));

				expenses = kw_unit * per_unit_price * hrs_int * no_of_units;
				this->user->expenses -= expense_to_minus;
				this->user->expenses += expenses;
			}

			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Delete from plan_data WHERE ID = @id AND Appliance = @appliance;";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", this->user->id);				
				command->Parameters->AddWithValue("@appliance", appliance_name);


				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(this->user->id);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Insert Into plan_data (ID , Priority , no_of_hours, section_of_day , Appliance, time, Watts, Expense) Values (@id , @priority , @hrs , @interval ,@appliance, @time, @watts , @expense)";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", this->user->id);
				command->Parameters->AddWithValue("@priority", priority);
				command->Parameters->AddWithValue("@hrs", no_of_hrs);
				command->Parameters->AddWithValue("@interval", interval);
				command->Parameters->AddWithValue("@appliance", appliance_name);
				command->Parameters->AddWithValue("@time", interval_time);
				command->Parameters->AddWithValue("@watts", watts);
				command->Parameters->AddWithValue("@expense", expenses);

				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(this->user->id);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "UPDATE Credentials SET Expenses = @expenses Where ID = @id AND Password = @pass";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@expenses", this->user->expenses);
				command->Parameters->AddWithValue("@id", this->user->id);
				command->Parameters->AddWithValue("@pass", this->user->password);

				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

		}
		this->Close();
	}

		   bool is_hrs_right(String^ hrs) {
			   if (hrs != "") {
				   int hrs_int = Convert::ToInt32(hrs);
				   if (hrs_int >= 0 && hrs_int <= 24) {
					   return true;
				   }
			   }
			   return false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ appliance_name = comboBox2->Text;
		String^ no_of_hrs = textBox3->Text;
		String^ interval = comboBox1->Text;
		String^ priority = textBox4->Text;
		int no_of_units = Convert::ToInt32(comboBox3->Text);
		int per_unit_price = 0;
		float expenses;
		float kw_unit = 0;
		float watts = Decimal::ToInt32(numericUpDown1->Value);
		kw_unit = watts / 1000;


		if (watts == 0 && is_hrs_right(no_of_hrs) == false) {
			MessageBox::Show("Power Consumption Should be Greater than Zero");
		}
		else {
			int hrs_int = Convert::ToInt32(no_of_hrs);
			String^ interval_time = "";

			if (priority != "High" && watts > 1000) {
				interval = "Morning";
			}

			if (interval == "Morning") {
				interval_time = "5AM - 12PM";
			}
			else if (interval == "Afternoon") {
				interval_time = "12PM - 4PM";
			}
			else if (interval == "Evening") {
				interval_time = "4PM - 7PM";
			}
			else if (interval == "Night") {
				interval_time = "7PM - 4AM";
			}
			else {
				interval_time = "Any time of the Day";
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Select Pricing from Tariff Where Location = @loc AND Unit_range = @unit_range";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@loc", this->user->location);
				command->Parameters->AddWithValue("@unit_range", this->user->unit_range);
				

				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					per_unit_price = reader->GetInt32(0);
				}
				//MessageBox::Show(Convert::ToString(per_unit_price));

				expenses = kw_unit * per_unit_price * hrs_int * no_of_units;
				this->user->expenses += expenses;
			}

			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Insert Into plan_data (ID , Priority , no_of_hours, section_of_day , Appliance, time, Watts, Expense) Values (@id , @priority , @hrs , @interval ,@appliance, @time, @watts , @expense)";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", this->user->id);
				command->Parameters->AddWithValue("@priority", priority);
				command->Parameters->AddWithValue("@hrs", no_of_hrs);
				command->Parameters->AddWithValue("@interval", interval);
				command->Parameters->AddWithValue("@appliance", appliance_name);
				command->Parameters->AddWithValue("@time", interval_time);
				command->Parameters->AddWithValue("@watts", watts);
				command->Parameters->AddWithValue("@expense", expenses);

				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(this->user->id);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "UPDATE Credentials SET Expenses = @expenses Where ID = @id AND Password = @pass";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@expenses" , this->user->expenses);
				command->Parameters->AddWithValue("@id", this->user->id);
				command->Parameters->AddWithValue("@pass", this->user->password);

				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

			Input^ input = gcnew Input(user);
			this->Close();
			input->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			input->ShowDialog();

		}
		
	}
	public: bool switch_to_dash = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
		/*String^ appliance_name = comboBox2->Text;
		String^ no_of_hrs = textBox3->Text;
		String^ interval = comboBox1->Text;
		String^ priority = textBox4->Text;
		int watts = Decimal::ToInt32(numericUpDown1->Value);

		if (watts == 0) {
			MessageBox::Show("Power Consumption Should be Greater than Zero");
		}
		else {
			String^ interval_time = "";

			if (priority != "High") {
				interval = "Morning";
			}

			if (interval == "Morning") {
				interval_time = "5AM - 12PM";
			}
			else if (interval == "Afternoon") {
				interval_time = "12PM - 4PM";
			}
			else if (interval == "Evening") {
				interval_time = "4PM - 7PM";
			}
			else if (interval == "Night") {
				interval_time = "7PM - 4AM";
			}
			else {
				interval_time = "Any time of the Day";
			}


			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Insert Into plan_data (ID , Priority , no_of_hours, section_of_day , Appliance, time, Watts) Values (@id , @priority , @hrs , @interval ,@appliance, @time, @watts)";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", user->id);
				command->Parameters->AddWithValue("@priority", priority);
				command->Parameters->AddWithValue("@hrs", no_of_hrs);
				command->Parameters->AddWithValue("@interval", interval);
				command->Parameters->AddWithValue("@appliance", appliance_name);
				command->Parameters->AddWithValue("@time", interval_time);
				command->Parameters->AddWithValue("@watts", watts);

				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}*/

		String^ appliance_name = comboBox2->Text;
		String^ no_of_hrs = textBox3->Text;
		String^ interval = comboBox1->Text;
		String^ priority = textBox4->Text;
		int expenses;
		int kw_unit = 0;
		int watts = Decimal::ToInt32(numericUpDown1->Value);
		kw_unit = watts / 1000;

		if (watts == 0) {
			MessageBox::Show("Power Consumption Should be Greater than Zero");
		}
		else {
			String^ interval_time = "";

			if (priority != "High" && watts > 1000) {
				interval = "Morning";
			}

			if (interval == "Morning") {
				interval_time = "5AM - 12PM";
			}
			else if (interval == "Afternoon") {
				interval_time = "12PM - 4PM";
			}
			else if (interval == "Evening") {
				interval_time = "4PM - 7PM";
			}
			else if (interval == "Night") {
				interval_time = "7PM - 4AM";
			}
			else {
				interval_time = "Any time of the Day";
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Select Pricing from Tariff Where Location = @loc AND Unit_range = @unit_range";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@loc", user->location);
				command->Parameters->AddWithValue("@unit_range", user->unit_range);

				SqlDataReader^ reader = command->ExecuteReader();
				int per_unit_price = reader->GetInt64(0);

				expenses = kw_unit * per_unit_price;
				user->expenses += expenses;
			}

			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Insert Into plan_data (ID , Priority , no_of_hours, section_of_day , Appliance, time, Watts) Values (@id , @priority , @hrs , @interval ,@appliance, @time, @watts)";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", this->user->id);
				command->Parameters->AddWithValue("@priority", priority);
				command->Parameters->AddWithValue("@hrs", no_of_hrs);
				command->Parameters->AddWithValue("@interval", interval);
				command->Parameters->AddWithValue("@appliance", appliance_name);
				command->Parameters->AddWithValue("@time", interval_time);
				command->Parameters->AddWithValue("@watts", watts);

				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "Insert Into Credentials (Expenses) Values (@expense)";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@expense", expenses);

				command->ExecuteNonQuery();
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

			switch_to_dash = true;
			this->Close();
		}
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Input_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
