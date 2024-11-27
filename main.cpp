#include "Login.h"
#include "Input.h"
#include "Plan.h"
#include "Dashboard.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ECPS::Login form;
	form.WindowState = System::Windows::Forms::FormWindowState::Maximized;
	//Application::Run(% form);
	form.ShowDialog();
	User^ user = nullptr;
	if (form.logged_in) {
		user = form.user;
	}


	ECPS::Dashboard dash(user);
	dash.WindowState = System::Windows::Forms::FormWindowState::Maximized;
	dash.ShowDialog();
}