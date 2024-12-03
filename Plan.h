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
	/// Summary for Plan
	/// </summary>
	public ref class Plan : public System::Windows::Forms::Form
	{
	public:
		User^ user = nullptr;
		Plan(User^ user)
		{
			this->user = user;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "SELECT t1.Appliance, t1.Priority, t1.no_of_hours, t1.time, t1.Expense from plan_data as t1 Where Id = @id";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", user->id);


				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
				DataTable^ dataTable = gcnew DataTable();
				adapter->Fill(dataTable);
				dataGridView1->DataSource = dataTable;
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

			try {
				String^ conn_str = "Data Source=(localdb)\\ECPS;Initial Catalog=ECPS_db;Integrated Security=True";
				SqlConnection sqlConn(conn_str);
				sqlConn.Open();

				String^ query = "SELECT t1.Appliance, t1.Priority, t1.no_of_hours, t1.time, (t1.Expense * 30) as Monthly_expenses from plan_data as t1 Where Id = @id";
				SqlCommand^ command = gcnew SqlCommand(query, % sqlConn);
				command->Parameters->AddWithValue("@id", user->id);


				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(command);
				DataTable^ dataTable = gcnew DataTable();
				adapter->Fill(dataTable);
				dataGridView2->DataSource = dataTable;
			}
			catch (Exception^ e) {
				MessageBox::Show(e->Message);
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Plan()
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











	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Plan::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(901, 72);
			this->panel2->Margin = System::Windows::Forms::Padding(6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(516, 131);
			this->panel2->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(136, 23);
			this->label1->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(353, 81);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usage Plan";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Plan::label1_Click);
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
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(92, 464);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(996, 424);
			this->dataGridView1->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->Font = (gcnew System::Drawing::Font(L"Georgia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(109, 1235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(214, 81);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Plan::button1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(1256, 464);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 82;
			this->dataGridView2->Size = System::Drawing::Size(996, 424);
			this->dataGridView2->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(95, 323);
			this->label2->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(319, 81);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Daily Plan";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1251, 308);
			this->label3->Margin = System::Windows::Forms::Padding(12, 0, 12, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(405, 81);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Monthly Plan";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Plan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(2564, 1399);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Plan";
			this->Text = L"Plan";
			this->Load += gcnew System::EventHandler(this, &Plan::Plan_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void Plan_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switch_to_dash = false;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		switch_to_dash = true;
		closing_the_plan();
	}
		   void closing_the_plan() {
			   if (switch_to_dash) {
				   this->Close();
			   }
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}