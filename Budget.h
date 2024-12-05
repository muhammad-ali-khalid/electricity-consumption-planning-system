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
	/// Summary for Budget
	/// </summary>
	public ref class Budget : public System::Windows::Forms::Form
	{
	public: User^ user = nullptr;
		Budget(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->user = user;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Budget()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Budget::typeid));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(59, 226);
			this->panel3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(590, 127);
			this->panel3->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(24, 17);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(423, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Estimated Units Consumption";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(32, 63);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(422, 44);
			this->textBox1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(547, 549);
			this->button1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(252, 73);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Budget::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(295, 30);
			this->panel2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(608, 133);
			this->panel2->TabIndex = 13;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Budget::panel2_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(136, 23);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Budget Details";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 23);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(112, 88);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(59, 393);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(590, 127);
			this->panel1->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(24, 17);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(395, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Montly Budget in PKR";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(32, 63);
			this->textBox2->Margin = System::Windows::Forms::Padding(6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(422, 44);
			this->textBox2->TabIndex = 5;
			// 
			// Budget
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1241, 664);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Name = L"Budget";
			this->Text = L"Budget";
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ units = textBox1->Text;
	String^ budget = textBox2->Text;
	int per_unit_price = 0;
	String^ unit_range = "";
	int budget_int = 0, units_int = 0;
	if (budget != "" && units != "") {
		budget_int = Convert::ToInt32(budget);
		units_int = Convert::ToInt32(units);
		if (1 <= units_int && units_int <= 100) {
			per_unit_price = 12;
			unit_range = "0-100";
		}
		else if (101 <= units_int && units_int <= 200) {
			per_unit_price = 14;
			unit_range = "101-200";
		}
		else if (201 <= units_int && units_int <= 300) {
			per_unit_price = 31;
			unit_range = "201-300";
		}
		else if (301 <= units_int <= 400) {
			per_unit_price = 38;
			unit_range = "301-400";
		}
		else if (401 <= units_int && units_int <= 500) {
			per_unit_price = 41;
			unit_range = "401-500";
		}
		else if (units_int >= 501) {
			per_unit_price = 49;
			unit_range = "Above 500";
		}
	}

	if (per_unit_price * units_int <= budget_int) {
		try {

			String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
			SqlConnection sqlConn(conn_str);

			sqlConn.Open();

			String^ sqlQuery = "UPDATE Credentials SET Budget = @budget, Units_range = @unit_range WHERE Id = @username AND Password = @password";

			SqlCommand^ command = gcnew SqlCommand(sqlQuery, % sqlConn);
			command->Parameters->AddWithValue("@budget", budget_int);
			command->Parameters->AddWithValue("@unit_range", unit_range);
			command->Parameters->AddWithValue("@username", user->id);
			command->Parameters->AddWithValue("@password", user->password);

			MessageBox::Show(Convert::ToString(per_unit_price), "Budget Creation Failed", MessageBoxButtons::OK);

			command->ExecuteNonQuery();

			this->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Add Budget", "Budget Creation Failed", MessageBoxButtons::OK);
		}
	}
	else {
		MessageBox::Show("This Amount of Consumption is Impossible in the above budget.");
	}
}
	};
}
