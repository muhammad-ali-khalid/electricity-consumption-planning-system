#include "Login.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ECPS::Login form;
	form.WindowState = System::Windows::Forms::FormWindowState::Maximized;
	Application::Run(% form);
}