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

    public ref class Plan : public System::Windows::Forms::Form
    {
    public:
        Plan(void)
        {
            InitializeComponent();

        }

    protected:
        ~Plan()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Panel^ panelHeader;
        System::Windows::Forms::Label^ labelTitle;
        System::Windows::Forms::PictureBox^ pictureBoxIcon;
        System::Windows::Forms::DataGridView^ dataGridViewPlan;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;

        // Required designer variable.
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Plan::typeid));
            this->panelHeader = (gcnew System::Windows::Forms::Panel());
            this->labelTitle = (gcnew System::Windows::Forms::Label());
            this->pictureBoxIcon = (gcnew System::Windows::Forms::PictureBox());
            this->dataGridViewPlan = (gcnew System::Windows::Forms::DataGridView());
            this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());

            this->panelHeader->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxIcon))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPlan))->BeginInit();
            this->SuspendLayout();

            // 
            // panelHeader
            // 
            this->panelHeader->BackColor = System::Drawing::Color::White;
            this->panelHeader->Controls->Add(this->labelTitle);
            this->panelHeader->Controls->Add(this->pictureBoxIcon);
            this->panelHeader->Location = System::Drawing::Point(303, 12);
            this->panelHeader->Name = L"panelHeader";
            this->panelHeader->Size = System::Drawing::Size(243, 80);
            this->panelHeader->TabIndex = 0;

            // 
            // labelTitle
            // 
            this->labelTitle->AutoSize = true;
            this->labelTitle->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 20, System::Drawing::FontStyle::Bold));
            this->labelTitle->Location = System::Drawing::Point(80, 20);
            this->labelTitle->Name = L"labelTitle";
            this->labelTitle->Size = System::Drawing::Size(156, 34);
            this->labelTitle->TabIndex = 1;
            this->labelTitle->Text = L"Usage Plan";
            this->labelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

            // 
            // pictureBoxIcon
            // 
            this->pictureBoxIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxIcon.Image")));
            this->pictureBoxIcon->Location = System::Drawing::Point(10, 15);
            this->pictureBoxIcon->Name = L"pictureBoxIcon";
            this->pictureBoxIcon->Size = System::Drawing::Size(60, 50);
            this->pictureBoxIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
            this->pictureBoxIcon->TabIndex = 0;
            this->pictureBoxIcon->TabStop = false;

            // 
            // dataGridViewPlan
            // 
            this->dataGridViewPlan->AllowUserToAddRows = false;
            this->dataGridViewPlan->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridViewPlan->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
            this->dataGridViewPlan->BackgroundColor = System::Drawing::Color::White;
            this->dataGridViewPlan->RowHeadersVisible = false; // Disable row headers for cleaner appearance
            this->dataGridViewPlan->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
                this->dataGridViewTextBoxColumn1,
                    this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
                    this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
            });
            this->dataGridViewPlan->Location = System::Drawing::Point(50, 120);
            this->dataGridViewPlan->Name = L"dataGridViewPlan";
            this->dataGridViewPlan->Size = System::Drawing::Size(759, 300); // Increase grid height for better row visibility
            this->dataGridViewPlan->TabIndex = 2;

            // 
            // dataGridViewTextBoxColumn1
            // 
            this->dataGridViewTextBoxColumn1->HeaderText = L"Appliance Name";
            this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";

            // 
            // dataGridViewTextBoxColumn2
            // 
            this->dataGridViewTextBoxColumn2->HeaderText = L"Wattage (W)";
            this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";

            // 
            // dataGridViewTextBoxColumn3
            // 
            this->dataGridViewTextBoxColumn3->HeaderText = L"Usage Timing";
            this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";

            // 
            // dataGridViewTextBoxColumn4
            // 
            this->dataGridViewTextBoxColumn4->HeaderText = L"Priority";
            this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";

            // 
            // dataGridViewTextBoxColumn5
            // 
            this->dataGridViewTextBoxColumn5->HeaderText = L"Peak Hour Usage";
            this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";

            // 
            // dataGridViewTextBoxColumn6
            // 
            this->dataGridViewTextBoxColumn6->HeaderText = L"Status";
            this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";

            // 
            // dataGridViewTextBoxColumn7
            // 
            this->dataGridViewTextBoxColumn7->HeaderText = L"Estimated Cost (PKR)";
            this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";

            // Add rows for appliances
            this->dataGridViewPlan->Rows->Add(L"Air Conditioner", L"1200W", L"9 PM - 6 AM", L"High", L"Yes", L"ON", L"57.60");
            this->dataGridViewPlan->Rows->Add(L"Lights", L"20W", L"6 PM - 11 PM", L"High", L"Yes", L"ON", L"5.00");
            this->dataGridViewPlan->Rows->Add(L"Water Pump", L"750W", L"Non-peak hours", L"Medium", L"No", L"OFF", L"0.00");
            this->dataGridViewPlan->Rows->Add(L"TV", L"100W", L"Non-peak hours", L"Low", L"No", L"OFF", L"0.00");
            this->dataGridViewPlan->Rows->Add(L"Washing Machine", L"500W", L"10 AM - 12 PM", L"Medium", L"No", L"OFF", L"10.00");
            this->dataGridViewPlan->Rows->Add(L"Fan", L"60W", L"24 Hours", L"High", L"Yes", L"ON", L"8.64");

            // 
            // Plan
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::White;
            this->ClientSize = System::Drawing::Size(850, 500);
            this->Controls->Add(this->dataGridViewPlan);
            this->Controls->Add(this->panelHeader);
            this->Name = L"Plan";
            this->Text = L"Plan";

            this->panelHeader->ResumeLayout(false);
            this->panelHeader->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxIcon))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPlan))->EndInit();
            this->ResumeLayout(false);
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
