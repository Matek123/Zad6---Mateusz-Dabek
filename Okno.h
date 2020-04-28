#pragma once
#include <string>
#include<msclr\marshal_cppstd.h>
#include<vector>

namespace Zad6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Okno
	/// </summary>
	public ref class Okno : public System::Windows::Forms::Form
	{
	public:
		Okno(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Tabela;
	protected:

	protected:
	private: System::Windows::Forms::Button^ otw_btn;




	private: System::ComponentModel::IContainer^ components;
	private: int zazn_wiersz, zazn_kol;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajKolumnêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przedToolStripMenuItemKol;
	private: System::Windows::Forms::ToolStripMenuItem^ poToolStripMenuItemKol;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajWierszToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przedToolStripMenuItemWiersz;
	private: System::Windows::Forms::ToolStripMenuItem^ poToolStripMenuItemWiersz;
	private: System::Windows::Forms::ToolStripMenuItem^ usuñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wierszToolStripMenuItem;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialogOtw;
	private: System::Windows::Forms::TextBox^ nr_box;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ header_textbox;

	private: System::Windows::Forms::Button^ btn_zmien;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialogZap;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ kolumnêToolStripMenuItem;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->Tabela = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->dodajKolumnêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przedToolStripMenuItemKol = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poToolStripMenuItemKol = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajWierszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przedToolStripMenuItemWiersz = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->poToolStripMenuItemWiersz = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wierszToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kolumnêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->otw_btn = (gcnew System::Windows::Forms::Button());
			this->openFileDialogOtw = (gcnew System::Windows::Forms::OpenFileDialog());
			this->nr_box = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->header_textbox = (gcnew System::Windows::Forms::TextBox());
			this->btn_zmien = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->saveFileDialogZap = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabela))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Tabela
			// 
			this->Tabela->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tabela->ContextMenuStrip = this->contextMenuStrip1;
			this->Tabela->Location = System::Drawing::Point(33, 68);
			this->Tabela->Name = L"Tabela";
			this->Tabela->Size = System::Drawing::Size(825, 564);
			this->Tabela->TabIndex = 0;
			this->Tabela->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Okno::dataGridView1_MouseDown);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dodajKolumnêToolStripMenuItem,
					this->dodajWierszToolStripMenuItem, this->usuñToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(157, 70);
			// 
			// dodajKolumnêToolStripMenuItem
			// 
			this->dodajKolumnêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->przedToolStripMenuItemKol,
					this->poToolStripMenuItemKol
			});
			this->dodajKolumnêToolStripMenuItem->Name = L"dodajKolumnêToolStripMenuItem";
			this->dodajKolumnêToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->dodajKolumnêToolStripMenuItem->Text = L"Dodaj Kolumnê";
			// 
			// przedToolStripMenuItemKol
			// 
			this->przedToolStripMenuItemKol->Name = L"przedToolStripMenuItemKol";
			this->przedToolStripMenuItemKol->Size = System::Drawing::Size(103, 22);
			this->przedToolStripMenuItemKol->Text = L"Przed";
			this->przedToolStripMenuItemKol->Enabled = false;
			this->przedToolStripMenuItemKol->Click += gcnew System::EventHandler(this, &Okno::przedToolStripMenuItemKol_Click);
			// 
			// poToolStripMenuItemKol
			// 
			this->poToolStripMenuItemKol->Name = L"poToolStripMenuItemKol";
			this->poToolStripMenuItemKol->Size = System::Drawing::Size(103, 22);
			this->poToolStripMenuItemKol->Text = L"Po";
			this->poToolStripMenuItemKol->Click += gcnew System::EventHandler(this, &Okno::poToolStripMenuItemKol_Click);
			// 
			// dodajWierszToolStripMenuItem
			// 
			this->dodajWierszToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->przedToolStripMenuItemWiersz,
					this->poToolStripMenuItemWiersz
			});
			this->dodajWierszToolStripMenuItem->Name = L"dodajWierszToolStripMenuItem";
			this->dodajWierszToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->dodajWierszToolStripMenuItem->Text = L"Dodaj Wiersz";
			// 
			// przedToolStripMenuItemWiersz
			// 
			this->przedToolStripMenuItemWiersz->Name = L"przedToolStripMenuItemWiersz";
			this->przedToolStripMenuItemWiersz->Size = System::Drawing::Size(103, 22);
			this->przedToolStripMenuItemWiersz->Text = L"Przed";
			this->przedToolStripMenuItemWiersz->Enabled = false;
			this->przedToolStripMenuItemWiersz->Click += gcnew System::EventHandler(this, &Okno::przedToolStripMenuItemWiersz_Click);
			// 
			// poToolStripMenuItemWiersz
			// 
			this->poToolStripMenuItemWiersz->Name = L"poToolStripMenuItemWiersz";
			this->poToolStripMenuItemWiersz->Size = System::Drawing::Size(103, 22);
			this->poToolStripMenuItemWiersz->Text = L"Po";
			this->poToolStripMenuItemWiersz->Enabled = false;
			this->poToolStripMenuItemWiersz->Click += gcnew System::EventHandler(this, &Okno::poToolStripMenuItemWiersz_Click);
			// 
			// usuñToolStripMenuItem
			// 
			this->usuñToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->wierszToolStripMenuItem,
					this->kolumnêToolStripMenuItem
			});
			this->usuñToolStripMenuItem->Name = L"usuñToolStripMenuItem";
			this->usuñToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->usuñToolStripMenuItem->Text = L"Usuñ";
			// 
			// wierszToolStripMenuItem
			// 
			this->wierszToolStripMenuItem->Name = L"wierszToolStripMenuItem";
			this->wierszToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->wierszToolStripMenuItem->Text = L"Wiersz";
			this->wierszToolStripMenuItem->Enabled = false;
			this->wierszToolStripMenuItem->Click += gcnew System::EventHandler(this, &Okno::wierszToolStripMenuItem_Click);
			// 
			// kolumnêToolStripMenuItem
			// 
			this->kolumnêToolStripMenuItem->Name = L"kolumnêToolStripMenuItem";
			this->kolumnêToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->kolumnêToolStripMenuItem->Text = L"Kolumnê";
			this->kolumnêToolStripMenuItem->Enabled = false;
			this->kolumnêToolStripMenuItem->Click += gcnew System::EventHandler(this, &Okno::kolumnêToolStripMenuItem_Click);
			// 
			// otw_btn
			// 
			this->otw_btn->Location = System::Drawing::Point(33, 12);
			this->otw_btn->Name = L"otw_btn";
			this->otw_btn->Size = System::Drawing::Size(123, 39);
			this->otw_btn->TabIndex = 1;
			this->otw_btn->Text = L"Otwórz";
			this->otw_btn->UseVisualStyleBackColor = true;
			this->otw_btn->Click += gcnew System::EventHandler(this, &Okno::otw_btn_Click);
			// 
			// openFileDialogOtw
			// 
			this->openFileDialogOtw->FileName = L"openFileDialog1";
			// 
			// nr_box
			// 
			this->nr_box->Location = System::Drawing::Point(464, 23);
			this->nr_box->Name = L"nr_box";
			this->nr_box->Size = System::Drawing::Size(31, 20);
			this->nr_box->TabIndex = 2;
			this->nr_box->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Okno::nr_box_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(331, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Zmieñ nazwê kolumny nr:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(501, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"na :";
			// 
			// header_textbox
			// 
			this->header_textbox->Location = System::Drawing::Point(532, 23);
			this->header_textbox->Name = L"header_textbox";
			this->header_textbox->Size = System::Drawing::Size(131, 20);
			this->header_textbox->TabIndex = 5;
			// 
			// btn_zmien
			// 
			this->btn_zmien->Location = System::Drawing::Point(669, 22);
			this->btn_zmien->Name = L"btn_zmien";
			this->btn_zmien->Size = System::Drawing::Size(47, 23);
			this->btn_zmien->TabIndex = 6;
			this->btn_zmien->Text = L"Ok";
			this->btn_zmien->UseVisualStyleBackColor = true;
			this->btn_zmien->Click += gcnew System::EventHandler(this, &Okno::btn_zmien_Click);
			// 
			// save_btn
			// 
			this->save_btn->Location = System::Drawing::Point(202, 12);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(108, 39);
			this->save_btn->TabIndex = 7;
			this->save_btn->Text = L"Zapisz";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &Okno::save_btn_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F));
			this->label3->Location = System::Drawing::Point(743, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Po wiêcej opcji, \r\nnaciœnij PPM na Tabeli.";
			// 
			// Okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(913, 644);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->btn_zmien);
			this->Controls->Add(this->header_textbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nr_box);
			this->Controls->Add(this->otw_btn);
			this->Controls->Add(this->Tabela);
			this->Name = L"Okno";
			this->Text = L"Okno";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabela))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		System::Windows::Forms::DataGridView::HitTestInfo^ hit_test;
		hit_test = Tabela->HitTest(e->X, e->Y);
		switch (hit_test->Type) {
			case System::Windows::Forms::DataGridViewHitTestType::RowHeader :
				zazn_wiersz = hit_test->RowIndex;
				przedToolStripMenuItemKol->Enabled = false;
				poToolStripMenuItemKol->Enabled = false;
				przedToolStripMenuItemWiersz->Enabled = true;
				poToolStripMenuItemWiersz->Enabled = true;
				kolumnêToolStripMenuItem->Enabled = false;
				wierszToolStripMenuItem->Enabled = true;
				break;
			case System::Windows::Forms::DataGridViewHitTestType::ColumnHeader :
				zazn_kol = hit_test->ColumnIndex;
				przedToolStripMenuItemWiersz->Enabled = false;
				poToolStripMenuItemWiersz->Enabled = false;
				przedToolStripMenuItemKol->Enabled = true;
				poToolStripMenuItemKol->Enabled = true;
				kolumnêToolStripMenuItem->Enabled = true;
				wierszToolStripMenuItem->Enabled = false;
				break;
			case System::Windows::Forms::DataGridViewHitTestType::Cell :
				zazn_wiersz = hit_test->RowIndex;
				zazn_kol = hit_test->ColumnIndex;
				przedToolStripMenuItemWiersz->Enabled = true;
				poToolStripMenuItemWiersz->Enabled = true;
				przedToolStripMenuItemKol->Enabled = true;
				poToolStripMenuItemKol->Enabled = true;
				kolumnêToolStripMenuItem->Enabled = true;
				wierszToolStripMenuItem->Enabled = true;
				break;
		}
	}
	private: System::Void przedToolStripMenuItemKol_Click(System::Object^ sender, System::EventArgs^ e) {
		Tabela->Columns->Add("Nowa", "");
		for (int i = Tabela->Columns->Count - 1; i > zazn_kol; i--) {
			Tabela->Columns[i]->HeaderText = Tabela->Columns[i - 1]->HeaderText;
			for (int j = 0; j < Tabela->Rows->Count; j++)
			{
				Tabela->Rows[j]->Cells[i]->Value = Tabela->Rows[j]->Cells[i - 1]->Value;
			}
		}
		for (int j = 0; j < Tabela->Rows->Count; j++) {
			Tabela->Rows[j]->Cells[zazn_kol]->Value = "";
		}
		Tabela->Columns[zazn_kol]->HeaderText = "";
	}
	private: System::Void przedToolStripMenuItemWiersz_Click(System::Object^ sender, System::EventArgs^ e) {
		Tabela->Rows->Add();
		for (int j = Tabela->Rows->Count - 1; j > zazn_wiersz; j--) {
			for (int i = 0; i < Tabela->Columns->Count; i++)
			{
				Tabela->Rows[j]->Cells[i]->Value = Tabela->Rows[j - 1]->Cells[i]->Value;
			}
		}
		for (int i = 0; i < Tabela->Columns->Count; i++) {
			Tabela->Rows[zazn_wiersz]->Cells[i]->Value = "";
		}
	}
	private: System::Void poToolStripMenuItemKol_Click(System::Object^ sender, System::EventArgs^ e) {
		Tabela->Columns->Add("Nowa", "");
		for (int i = Tabela->Columns->Count - 1; i > zazn_kol; i--) {
			Tabela->Columns[i]->HeaderText = Tabela->Columns[i - 1]->HeaderText;
			for (int j = 0; j < Tabela->Rows->Count; j++)
			{
				Tabela->Rows[j]->Cells[i]->Value = Tabela->Rows[j]->Cells[i - 1]->Value;
				if (i == zazn_kol + 1)
				{
					Tabela->Rows[j]->Cells[i]->Value = "";
					Tabela->Columns[i]->HeaderText = "";
				}
			}
		}
	}
	private: System::Void poToolStripMenuItemWiersz_Click(System::Object^ sender, System::EventArgs^ e) {
		Tabela->Rows->Add();
		for (int j = Tabela->Rows->Count - 1; j > zazn_wiersz; j--) {
			for (int i = 0; i < Tabela->Columns->Count; i++)
			{
				Tabela->Rows[j]->Cells[i]->Value = Tabela->Rows[j - 1]->Cells[i]->Value;
				if (j == zazn_wiersz + 1)
				{
					Tabela->Rows[j]->Cells[i]->Value = "";
				}
			}
		}
	}
	private: System::Void otw_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ plik = gcnew OpenFileDialog();

		plik->Title = "Wybierz";
		plik->Filter =
			"Wszystkie pliki (*.*)|*.*|" +
			"Pliki tekstowe(*.txt)|*.txt";
			

		if (plik->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(plik->FileName);
			String^ line;
			array<wchar_t>^ sep = gcnew array<wchar_t>(1);
			sep[0] = '\t';
			line = sr->ReadLine();
			line = line->Replace(" ", "\t");
			line = line->Replace("\t\t\t", "\t");
			line = line->Replace("\t\t", "\t");
			int kol = line->Split(sep)->Length;
			array<System::String^>^ headers = gcnew array<System::String^>(kol);
			headers = line->Split(sep);
			line = sr->ReadToEnd();
			line = line->Replace(" ", "\t");
			line = line->Replace("\n", "\t");
			line = line->Replace("\t\t\t", "\t");
			line = line->Replace("\t\t", "\t");
			int wiersz = line->Split(sep)->Length/5;
			array<System::String^>^ dane = gcnew array<System::String^>(kol*wiersz);
			dane = line->Split(sep);
			for (int i = 0; i < kol; i++)
			{
				Tabela->Columns->Add(headers[i], headers[i]);
			}
			for (int i = 0; i < wiersz; i++)
			{
				Tabela->Rows->Add();
			}
			for (int i = 0; i < wiersz; i++)
			{
				for (int j = 0; j < kol; j++)
				{
					Tabela->Rows[i]->Cells[j]->Value = dane[j + i * kol];
				}
			}
			sr->Close();
		}
	}
	private: System::Void btn_zmien_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = Int32::Parse(nr_box->Text);
		String^ nazwa = header_textbox->Text;
		Tabela->Columns[index - 1]->HeaderText = nazwa;
	}
	private: System::Void nr_box_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back)
		{
			e->Handled = true;
		}
	}
	private: System::Void wierszToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Tabela->Rows->RemoveAt(zazn_wiersz);
	}
	private: System::Void kolumnêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Tabela->Columns->RemoveAt(zazn_kol);
	}
	private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ plik = gcnew SaveFileDialog();
		plik->Title = "Wybierz";
		plik->Filter =
			"Wszystkie pliki (*.*)|*.*|" +
			"Pliki tekstowe (*.txt)|*.txt";

		if (plik->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(plik->FileName);

			for (int j = 0; j < Tabela->ColumnCount; j++)
			{
				sw->Write("{0,-20}", Tabela->Columns[j]->HeaderText);
			}
			sw->WriteLine("");
			for (int i = 0; i < Tabela->RowCount; i++)
			{
				for (int j = 0; j < Tabela->ColumnCount; j++)
				{
					sw->Write("{0,-20}", Tabela->Rows[i]->Cells[j]->Value);
				}
				sw->WriteLine("");
			}
			sw->Close();
		}
	}
};
}
