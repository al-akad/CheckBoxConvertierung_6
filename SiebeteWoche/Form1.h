#pragma once

namespace CheckboxRadioButton {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		int const MIN_FONTSIZE = 5;
		int const MAX_FONTZSIZE = 20;
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBeenden;
	private: System::Windows::Forms::RadioButton^ rbHGGreen;
	private: System::Windows::Forms::RadioButton^ rbBlue;
	private: System::Windows::Forms::RadioButton^ rbHgRot;
	private: System::Windows::Forms::GroupBox^ gbox;
	private: System::Windows::Forms::RadioButton^ rbGrau;
	private: System::Windows::Forms::RadioButton^ rbGelb;
	private: System::Windows::Forms::RadioButton^ rbVGRot;
	private: System::Windows::Forms::RadioButton^ rbVGGelb;
	private: System::Windows::Forms::RadioButton^ rbVGBlau;
	private: System::Windows::Forms::RadioButton^ rbVGRoas;
	private: System::Windows::Forms::RadioButton^ rbVGweis;
	private: System::Windows::Forms::GroupBox^ Vordergrund;
	private: System::Windows::Forms::GroupBox^ SchriftBox;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ grosse;
	private: System::Windows::Forms::CheckBox^ checkKursiv;
	private: System::Windows::Forms::CheckBox^ check;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnBeenden = (gcnew System::Windows::Forms::Button());
			this->rbHGGreen = (gcnew System::Windows::Forms::RadioButton());
			this->rbBlue = (gcnew System::Windows::Forms::RadioButton());
			this->rbHgRot = (gcnew System::Windows::Forms::RadioButton());
			this->gbox = (gcnew System::Windows::Forms::GroupBox());
			this->rbGrau = (gcnew System::Windows::Forms::RadioButton());
			this->rbGelb = (gcnew System::Windows::Forms::RadioButton());
			this->rbVGRot = (gcnew System::Windows::Forms::RadioButton());
			this->rbVGGelb = (gcnew System::Windows::Forms::RadioButton());
			this->rbVGBlau = (gcnew System::Windows::Forms::RadioButton());
			this->rbVGRoas = (gcnew System::Windows::Forms::RadioButton());
			this->rbVGweis = (gcnew System::Windows::Forms::RadioButton());
			this->Vordergrund = (gcnew System::Windows::Forms::GroupBox());
			this->SchriftBox = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->grosse = (gcnew System::Windows::Forms::Label());
			this->checkKursiv = (gcnew System::Windows::Forms::CheckBox());
			this->check = (gcnew System::Windows::Forms::CheckBox());
			this->gbox->SuspendLayout();
			this->Vordergrund->SuspendLayout();
			this->SchriftBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnBeenden
			// 
			this->btnBeenden->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnBeenden->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnBeenden->Location = System::Drawing::Point(220, 264);
			this->btnBeenden->Name = L"btnBeenden";
			this->btnBeenden->Size = System::Drawing::Size(199, 50);
			this->btnBeenden->TabIndex = 4;
			this->btnBeenden->Text = L"Beenden";
			this->btnBeenden->UseVisualStyleBackColor = true;
			this->btnBeenden->Click += gcnew System::EventHandler(this, &Form1::BtnBeenden_Click);
			// 
			// rbHGGreen
			// 
			this->rbHGGreen->AutoSize = true;
			this->rbHGGreen->Location = System::Drawing::Point(27, 54);
			this->rbHGGreen->Name = L"rbHGGreen";
			this->rbHGGreen->Size = System::Drawing::Size(54, 17);
			this->rbHGGreen->TabIndex = 1;
			this->rbHGGreen->TabStop = true;
			this->rbHGGreen->Text = L"Green";
			this->rbHGGreen->UseVisualStyleBackColor = true;
			this->rbHGGreen->CheckedChanged += gcnew System::EventHandler(this, &Form1::setBackcolor);
			// 
			// rbBlue
			// 
			this->rbBlue->AutoSize = true;
			this->rbBlue->Location = System::Drawing::Point(27, 84);
			this->rbBlue->Name = L"rbBlue";
			this->rbBlue->Size = System::Drawing::Size(46, 17);
			this->rbBlue->TabIndex = 2;
			this->rbBlue->TabStop = true;
			this->rbBlue->Text = L"Blau";
			this->rbBlue->UseVisualStyleBackColor = true;
			this->rbBlue->CheckedChanged += gcnew System::EventHandler(this, &Form1::setBackcolor);
			// 
			// rbHgRot
			// 
			this->rbHgRot->AutoSize = true;
			this->rbHgRot->Location = System::Drawing::Point(27, 114);
			this->rbHgRot->Name = L"rbHgRot";
			this->rbHgRot->Size = System::Drawing::Size(42, 17);
			this->rbHgRot->TabIndex = 3;
			this->rbHgRot->TabStop = true;
			this->rbHgRot->Text = L"Rot";
			this->rbHgRot->UseVisualStyleBackColor = true;
			this->rbHgRot->CheckedChanged += gcnew System::EventHandler(this, &Form1::setBackcolor);
			// 
			// gbox
			// 
			this->gbox->Controls->Add(this->rbGrau);
			this->gbox->Controls->Add(this->rbGelb);
			this->gbox->Controls->Add(this->rbHGGreen);
			this->gbox->Controls->Add(this->rbHgRot);
			this->gbox->Controls->Add(this->rbBlue);
			this->gbox->Location = System::Drawing::Point(14, 10);
			this->gbox->Name = L"gbox";
			this->gbox->Size = System::Drawing::Size(200, 226);
			this->gbox->TabIndex = 0;
			this->gbox->TabStop = false;
			this->gbox->Text = L"HinterGrund";
			// 
			// rbGrau
			// 
			this->rbGrau->AutoSize = true;
			this->rbGrau->Location = System::Drawing::Point(28, 174);
			this->rbGrau->Name = L"rbGrau";
			this->rbGrau->Size = System::Drawing::Size(48, 17);
			this->rbGrau->TabIndex = 5;
			this->rbGrau->TabStop = true;
			this->rbGrau->Text = L"Grau";
			this->rbGrau->UseVisualStyleBackColor = true;
			this->rbGrau->CheckedChanged += gcnew System::EventHandler(this, &Form1::setBackcolor);
			// 
			// rbGelb
			// 
			this->rbGelb->AutoSize = true;
			this->rbGelb->Location = System::Drawing::Point(28, 144);
			this->rbGelb->Name = L"rbGelb";
			this->rbGelb->Size = System::Drawing::Size(47, 17);
			this->rbGelb->TabIndex = 4;
			this->rbGelb->TabStop = true;
			this->rbGelb->Text = L"Gelb";
			this->rbGelb->UseVisualStyleBackColor = true;
			this->rbGelb->CheckedChanged += gcnew System::EventHandler(this, &Form1::setBackcolor);
			// 
			// rbVGRot
			// 
			this->rbVGRot->AutoSize = true;
			this->rbVGRot->Location = System::Drawing::Point(27, 84);
			this->rbVGRot->Name = L"rbVGRot";
			this->rbVGRot->Size = System::Drawing::Size(42, 17);
			this->rbVGRot->TabIndex = 2;
			this->rbVGRot->TabStop = true;
			this->rbVGRot->Text = L"Rot";
			this->rbVGRot->UseVisualStyleBackColor = true;
			this->rbVGRot->CheckedChanged += gcnew System::EventHandler(this, &Form1::SetForeColor);
			// 
			// rbVGGelb
			// 
			this->rbVGGelb->AutoSize = true;
			this->rbVGGelb->Location = System::Drawing::Point(27, 114);
			this->rbVGGelb->Name = L"rbVGGelb";
			this->rbVGGelb->Size = System::Drawing::Size(47, 17);
			this->rbVGGelb->TabIndex = 3;
			this->rbVGGelb->TabStop = true;
			this->rbVGGelb->Text = L"Gelb";
			this->rbVGGelb->UseVisualStyleBackColor = true;
			this->rbVGGelb->CheckedChanged += gcnew System::EventHandler(this, &Form1::SetForeColor);
			// 
			// rbVGBlau
			// 
			this->rbVGBlau->AutoSize = true;
			this->rbVGBlau->Location = System::Drawing::Point(27, 54);
			this->rbVGBlau->Name = L"rbVGBlau";
			this->rbVGBlau->Size = System::Drawing::Size(52, 17);
			this->rbVGBlau->TabIndex = 1;
			this->rbVGBlau->TabStop = true;
			this->rbVGBlau->Text = L"Balue";
			this->rbVGBlau->UseVisualStyleBackColor = true;
			this->rbVGBlau->CheckedChanged += gcnew System::EventHandler(this, &Form1::SetForeColor);
			// 
			// rbVGRoas
			// 
			this->rbVGRoas->AutoSize = true;
			this->rbVGRoas->Location = System::Drawing::Point(28, 144);
			this->rbVGRoas->Name = L"rbVGRoas";
			this->rbVGRoas->Size = System::Drawing::Size(50, 17);
			this->rbVGRoas->TabIndex = 4;
			this->rbVGRoas->TabStop = true;
			this->rbVGRoas->Text = L"Rosa";
			this->rbVGRoas->UseVisualStyleBackColor = true;
			this->rbVGRoas->CheckedChanged += gcnew System::EventHandler(this, &Form1::SetForeColor);
			// 
			// rbVGweis
			// 
			this->rbVGweis->AutoSize = true;
			this->rbVGweis->Location = System::Drawing::Point(28, 174);
			this->rbVGweis->Name = L"rbVGweis";
			this->rbVGweis->Size = System::Drawing::Size(49, 17);
			this->rbVGweis->TabIndex = 5;
			this->rbVGweis->TabStop = true;
			this->rbVGweis->Text = L"Weis";
			this->rbVGweis->UseVisualStyleBackColor = true;
			this->rbVGweis->CheckedChanged += gcnew System::EventHandler(this, &Form1::SetForeColor);
			// 
			// Vordergrund
			// 
			this->Vordergrund->Controls->Add(this->rbVGweis);
			this->Vordergrund->Controls->Add(this->rbVGRoas);
			this->Vordergrund->Controls->Add(this->rbVGBlau);
			this->Vordergrund->Controls->Add(this->rbVGGelb);
			this->Vordergrund->Controls->Add(this->rbVGRot);
			this->Vordergrund->Location = System::Drawing::Point(229, 10);
			this->Vordergrund->Name = L"Vordergrund";
			this->Vordergrund->Size = System::Drawing::Size(200, 226);
			this->Vordergrund->TabIndex = 2;
			this->Vordergrund->TabStop = false;
			this->Vordergrund->Text = L"Vordergrung";
			// 
			// SchriftBox
			// 
			this->SchriftBox->Controls->Add(this->textBox1);
			this->SchriftBox->Controls->Add(this->grosse);
			this->SchriftBox->Controls->Add(this->checkKursiv);
			this->SchriftBox->Controls->Add(this->check);
			this->SchriftBox->Location = System::Drawing::Point(444, 12);
			this->SchriftBox->Name = L"SchriftBox";
			this->SchriftBox->Size = System::Drawing::Size(200, 224);
			this->SchriftBox->TabIndex = 3;
			this->SchriftBox->TabStop = false;
			this->SchriftBox->Text = L"Schriftart";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::TextBox1_KeyDown);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::TextBox1_KeyPress);
			// 
			// grosse
			// 
			this->grosse->AutoSize = true;
			this->grosse->Location = System::Drawing::Point(35, 112);
			this->grosse->Name = L"grosse";
			this->grosse->Size = System::Drawing::Size(40, 13);
			this->grosse->TabIndex = 2;
			this->grosse->Text = L"Grosse";
			// 
			// checkKursiv
			// 
			this->checkKursiv->AutoSize = true;
			this->checkKursiv->Location = System::Drawing::Point(27, 54);
			this->checkKursiv->Name = L"checkKursiv";
			this->checkKursiv->Size = System::Drawing::Size(55, 17);
			this->checkKursiv->TabIndex = 1;
			this->checkKursiv->Text = L"Kursiv";
			this->checkKursiv->UseVisualStyleBackColor = true;
			this->checkKursiv->CheckedChanged += gcnew System::EventHandler(this, &Form1::SetFontStyle);
			// 
			// check
			// 
			this->check->AutoSize = true;
			this->check->Location = System::Drawing::Point(27, 31);
			this->check->Name = L"check";
			this->check->Size = System::Drawing::Size(44, 17);
			this->check->TabIndex = 0;
			this->check->Text = L"Fett";
			this->check->UseVisualStyleBackColor = true;
			this->check->CheckedChanged += gcnew System::EventHandler(this, &Form1::SetFontStyle);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnBeenden;
			this->ClientSize = System::Drawing::Size(679, 341);
			this->Controls->Add(this->SchriftBox);
			this->Controls->Add(this->Vordergrund);
			this->Controls->Add(this->gbox);
			this->Controls->Add(this->btnBeenden);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
			this->gbox->ResumeLayout(false);
			this->gbox->PerformLayout();
			this->Vordergrund->ResumeLayout(false);
			this->Vordergrund->PerformLayout();
			this->SchriftBox->ResumeLayout(false);
			this->SchriftBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void BtnBeenden_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void setBackcolor(System::Object^ sender, System::EventArgs^ e) {   //
		//if (sender == RadioButton::typeid)			// überprüfen ob die objekt von RadioButton
		//((RadioButton^)sender)->					// von objetk zu radiobutton konvertieren

		// Alle Komponenten der Vordergrund GroupBox aktiviert

		for each (Control ^ ctl in Vordergrund->Controls) {

			ctl->Enabled = true;
		}
		if (rbHGGreen->Checked)
			this->BackColor = Color::Green;
		else if (rbBlue->Checked)
		{
			this->BackColor = Color::Blue;
			rbVGBlau->Enabled = false;
		}
		else if (rbGelb->Checked) {
			this->BackColor = Color::Yellow;
			rbVGGelb->Enabled = false;
		}
		else if (rbGrau->Checked) {
			this->BackColor = Color::Gray;
			rbVGRoas->Enabled = false;
		}
		else if(rbHgRot->Checked)
			this->BackColor = Color::Red;
	
	}

private: System::Void SetForeColor(System::Object^ sender, System::EventArgs^ e)
{

	// Alle Komponenten der Vordergrund GroupBox aktiviert

	for each (Control ^ ctl in gbox->Controls) {   // für jede Komponente 

		ctl->Enabled = true;
	}

	if (rbVGBlau->Checked)
		this->ForeColor = Color::Blue;
	else if (rbVGGelb)
		this->ForeColor = Color::Yellow;
	else if (rbVGRot->Checked)
		this->ForeColor = Color::Red;
	else if (rbVGRoas->Checked)
		this->ForeColor = Color::Pink;

	if (this->ForeColor == Color::Yellow || this->ForeColor == Color::White)
		rbGelb->Enabled = false;

}
private: System::Void Form1_Shown(System::Object^ sender, System::EventArgs^ e) {
	InitForm();
}

	private: void InitForm() 
	{
		//HintergrundFarbe und Vordergrundfarbe setzen
		rbHGGreen->Checked = true;
		rbVGweis->Checked = true;
		textBox1->Text = this->Font->Size.ToString();
	}

private: System::Void SetFontStyle(System::Object^ sender, System::EventArgs^ e) 
{
	FontFamily^ fontFamily = this->Font->FontFamily;
	float fontSize = this->Font->Size;
	FontStyle fontStyle = FontStyle::Regular;


	// Definition der Standard Schriftstile
	// 00000000 Regular 0
	// 00000001 bold 1
	// 00000010 iatlic
	// 00000011  Bold/Italic
	


	//if (check->Checked && !checkKursiv->Checked)
	//{
	//	fontStyle = FontStyle::Regular;
	//}
	//else if (checkKursiv->Checked && !check->Checked)
	//	fontStyle = FontStyle::Italic;
	//else if (check->Checked && checkKursiv->Checked)
	//	fontStyle = FontStyle::Bold |FontStyle::Italic;  // logische Operator 

	//oder alternative

	/*if (check->Checked)
		fontStyle = fontStyle | FontStyle::Bold;
	if(checkKursiv->Checked)
		fontStyle = fontStyle | FontStyle::Italic;*/

	if (check->Checked)
		fontStyle = fontStyle + FontStyle::Bold;
	if (checkKursiv->Checked)
		fontStyle = fontStyle +  FontStyle::Italic;

	this->Font = gcnew System::Drawing::Font(fontFamily, fontSize, fontStyle);
}
// Key Down 
private: System::Void TextBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) 
{
	// auf Das nächste Steuerelement positioniereug in Fokus.Reihenfole positionieren
	if (e->KeyCode == Keys::Enter)
		this->GetNextControl((Control^)sender, true)->Focus();
		setFontSize();
}
		 private: void setFontSize() 
		 {
			 float fontSize = this->Font->Size;
			 float newSize = fontSize;
			 
			 if (!float::TryParse(textBox1->Text, newSize))
			 {
				 MessageBox::Show("Die Eingabe hat ein ungültiges Format", "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 return;
			 }

			 if (newSize < MIN_FONTSIZE)
			 {
				 MessageBox::Show("Der Mindestgröße der Schrifft ist" + MIN_FONTSIZE, "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
				 //grosse->Text = fontSize.ToString;
				// newSize = fontSize;

			 }
			 else if (newSize > MAX_FONTZSIZE)
			 {
				 MessageBox::Show("Der MAXGrosse der Schrifft ist"+ MAX_FONTZSIZE, "Fehler", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 if (newSize == fontSize)
				 return;
			 this->Font = gcnew System::Drawing::Font(this->Font->FontFamily, newSize, this->Font->Style);
		 }

				  // KeyPress für Gross buchstaben
private: System::Void TextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	e = DezimalZahlEingabe((TextBox^)sender, e);
}
		private: KeyPressEventArgs^ DezimalZahlEingabe( TextBox ^ tb,KeyPressEventArgs^ e) {

			//Nur Zahlen von 0_9
			
			if(e->KeyChar == ',')
				if (tb->Text->Contains(",")) {

					e->Handled = true;
				}
			else if (!Char::IsDigit(e->KeyChar) && Char::IsControl(e->KeyChar))
				e->Handled = true;

			if (e->Handled)
			{
				Console::Beep();
			}
				
			return e;

		}
};
}
