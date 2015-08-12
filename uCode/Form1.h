#pragma once


namespace uCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace Microsoft::Win32;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			RestoreSettings();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxPdbFile;
	private: System::Windows::Forms::CheckedListBox^  checkedListBoxUCode;
	private: System::Windows::Forms::Button^  buttonPdbFile;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxFileExtension;

	private: System::Windows::Forms::Button^  buttonExtract;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^  textBoxDestination;
	private: System::Windows::Forms::Button^  buttonDestination;
	private: System::Windows::Forms::Button^  buttonAll;
	private: System::Windows::Forms::Button^  buttonNone;
	private: System::Windows::Forms::Button^  buttonUpgrade;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
			 List <uCodeHeaderPlus^>^ ListuCodeHeaderPlus;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPdbFile = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBoxUCode = (gcnew System::Windows::Forms::CheckedListBox());
			this->buttonPdbFile = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxFileExtension = (gcnew System::Windows::Forms::TextBox());
			this->buttonExtract = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textBoxDestination = (gcnew System::Windows::Forms::TextBox());
			this->buttonDestination = (gcnew System::Windows::Forms::Button());
			this->buttonAll = (gcnew System::Windows::Forms::Button());
			this->buttonNone = (gcnew System::Windows::Forms::Button());
			this->buttonUpgrade = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"*.pdb";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->label1->Location = System::Drawing::Point(16, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PDB file";
			// 
			// textBoxPdbFile
			// 
			this->textBoxPdbFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxPdbFile->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxPdbFile->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->textBoxPdbFile->Location = System::Drawing::Point(97, 6);
			this->textBoxPdbFile->Name = L"textBoxPdbFile";
			this->textBoxPdbFile->Size = System::Drawing::Size(336, 22);
			this->textBoxPdbFile->TabIndex = 1;
			this->textBoxPdbFile->Leave += gcnew System::EventHandler(this, &Form1::textBoxPdbFile_Leave);
			// 
			// checkedListBoxUCode
			// 
			this->checkedListBoxUCode->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedListBoxUCode->FormattingEnabled = true;
			this->checkedListBoxUCode->Location = System::Drawing::Point(19, 101);
			this->checkedListBoxUCode->Name = L"checkedListBoxUCode";
			this->checkedListBoxUCode->Size = System::Drawing::Size(500, 225);
			this->checkedListBoxUCode->TabIndex = 8;
			// 
			// buttonPdbFile
			// 
			this->buttonPdbFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonPdbFile->Location = System::Drawing::Point(444, 6);
			this->buttonPdbFile->Name = L"buttonPdbFile";
			this->buttonPdbFile->Size = System::Drawing::Size(75, 23);
			this->buttonPdbFile->TabIndex = 2;
			this->buttonPdbFile->Text = L"Browse";
			this->buttonPdbFile->UseVisualStyleBackColor = true;
			this->buttonPdbFile->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Extracted file extension";
			// 
			// textBoxFileExtension
			// 
			this->textBoxFileExtension->Location = System::Drawing::Point(176, 63);
			this->textBoxFileExtension->Name = L"textBoxFileExtension";
			this->textBoxFileExtension->Size = System::Drawing::Size(80, 22);
			this->textBoxFileExtension->TabIndex = 7;
			this->textBoxFileExtension->Text = L"mcb";
			// 
			// buttonExtract
			// 
			this->buttonExtract->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonExtract->Location = System::Drawing::Point(444, 332);
			this->buttonExtract->Name = L"buttonExtract";
			this->buttonExtract->Size = System::Drawing::Size(75, 23);
			this->buttonExtract->TabIndex = 12;
			this->buttonExtract->Text = L"Extract";
			this->buttonExtract->UseVisualStyleBackColor = true;
			this->buttonExtract->Click += gcnew System::EventHandler(this, &Form1::buttonExtract_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Destination";
			// 
			// textBoxDestination
			// 
			this->textBoxDestination->AllowDrop = true;
			this->textBoxDestination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxDestination->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBoxDestination->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::FileSystem;
			this->textBoxDestination->Location = System::Drawing::Point(97, 35);
			this->textBoxDestination->Name = L"textBoxDestination";
			this->textBoxDestination->Size = System::Drawing::Size(336, 22);
			this->textBoxDestination->TabIndex = 4;
			this->textBoxDestination->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::textBoxDestination_DragDrop);
			this->textBoxDestination->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::textBoxDestination_DragEnter);
			// 
			// buttonDestination
			// 
			this->buttonDestination->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonDestination->Location = System::Drawing::Point(444, 35);
			this->buttonDestination->Name = L"buttonDestination";
			this->buttonDestination->Size = System::Drawing::Size(75, 23);
			this->buttonDestination->TabIndex = 5;
			this->buttonDestination->Text = L"Browse";
			this->buttonDestination->UseVisualStyleBackColor = true;
			this->buttonDestination->Click += gcnew System::EventHandler(this, &Form1::buttonDestination_Click);
			// 
			// buttonAll
			// 
			this->buttonAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonAll->Location = System::Drawing::Point(19, 332);
			this->buttonAll->Name = L"buttonAll";
			this->buttonAll->Size = System::Drawing::Size(75, 23);
			this->buttonAll->TabIndex = 9;
			this->buttonAll->Text = L"All";
			this->buttonAll->UseVisualStyleBackColor = true;
			this->buttonAll->Click += gcnew System::EventHandler(this, &Form1::buttonAll_Click);
			// 
			// buttonNone
			// 
			this->buttonNone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonNone->Location = System::Drawing::Point(100, 332);
			this->buttonNone->Name = L"buttonNone";
			this->buttonNone->Size = System::Drawing::Size(75, 23);
			this->buttonNone->TabIndex = 10;
			this->buttonNone->Text = L"None";
			this->buttonNone->UseVisualStyleBackColor = true;
			this->buttonNone->Click += gcnew System::EventHandler(this, &Form1::buttonNone_Click);
			// 
			// buttonUpgrade
			// 
			this->buttonUpgrade->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->buttonUpgrade->Location = System::Drawing::Point(181, 332);
			this->buttonUpgrade->Name = L"buttonUpgrade";
			this->buttonUpgrade->Size = System::Drawing::Size(75, 23);
			this->buttonUpgrade->TabIndex = 11;
			this->buttonUpgrade->Text = L"Upgrade";
			this->buttonUpgrade->UseVisualStyleBackColor = true;
			this->buttonUpgrade->Click += gcnew System::EventHandler(this, &Form1::buttonUpgrade_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(426, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(93, 24);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// Form1
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(540, 364);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonUpgrade);
			this->Controls->Add(this->buttonNone);
			this->Controls->Add(this->buttonAll);
			this->Controls->Add(this->buttonDestination);
			this->Controls->Add(this->textBoxDestination);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->buttonExtract);
			this->Controls->Add(this->textBoxFileExtension);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonPdbFile);
			this->Controls->Add(this->checkedListBoxUCode);
			this->Controls->Add(this->textBoxPdbFile);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MinimumSize = System::Drawing::Size(556, 402);
			this->Name = L"Form1";
			this->Text = L"uCode Extractor PX 0.4";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::Form1_DragDrop);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
			this->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &Form1::Form1_DragEnter);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (!String::IsNullOrEmpty(textBoxPdbFile->Text)) {
					 openFileDialog1->InitialDirectory = Path::GetDirectoryName(textBoxPdbFile->Text);
				 }
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxPdbFile->Text = openFileDialog1->FileName;
				 }
			 }
	private: System::Void buttonDestination_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (Directory::Exists(textBoxDestination->Text)){
					 this->folderBrowserDialog1->SelectedPath = textBoxDestination->Text;
				 }
				 if(folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 textBoxDestination->Text = folderBrowserDialog1->SelectedPath;
				 }
			 }
	private: System::Void RestoreSettings(Void) {
				//
				// Retrieve Registry keys
				//
				RegistryKey ^appKey = Registry::CurrentUser->OpenSubKey("Software\\Insyde\\" + APP_KEY);
				if (appKey == nullptr) {
					Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, APP_VERSION_VALUE, APP_REGISTRY_VERSION);
					return;
				}
				String ^Str = (String ^)appKey->GetValue(APP_VERSION_VALUE, "0.0");
				if (String::Compare(APP_REGISTRY_VERSION, Str) != 0) {
					RegistryKey ^appFamilyKey = Registry::CurrentUser->OpenSubKey("Software\\Insyde", true);
					appFamilyKey->DeleteSubKeyTree (APP_KEY);
					Registry::SetValue("HKEY_CURRENT_USER\\Software\\Insyde\\" + APP_KEY, APP_VERSION_VALUE, APP_REGISTRY_VERSION);
					return;
				}
				//
				// Restore overridden settings
				//
				textBoxPdbFile->Text		=(String ^) appKey->GetValue(PDB_FILE_VALUE, "");
				textBoxDestination->Text	=(String ^) appKey->GetValue(DESTINATION_PATH_VALUE, "");
				textBoxFileExtension->Text	=(String ^) appKey->GetValue(FILE_EXTENSION_VALUE, "");
			 }

	private: System::Void SaveSettings(Void) {
				RegistryKey ^appKey = Registry::CurrentUser->CreateSubKey("Software\\Insyde\\" + APP_KEY);

				appKey->SetValue(PDB_FILE_VALUE, textBoxPdbFile->Text);
				appKey->SetValue(DESTINATION_PATH_VALUE, textBoxDestination->Text);
				appKey->SetValue(FILE_EXTENSION_VALUE, textBoxFileExtension->Text);
			 }
	private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				SaveSettings();
			 }
	private: System::Void Form1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
				 array <String^>^filePath = array <String^>(e->Data->GetData(DataFormats::FileDrop));
				 if (String::Compare(Path::GetExtension(filePath[0]), ".PDB", true) == 0) {
					 textBoxPdbFile->Text = filePath[0];
				 }
				 ParsePdb();
				 buttonUpgrade_Click(sender, e);
			 }
	private: System::Void Form1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
				 if (e->Data->GetDataPresent(DataFormats::FileDrop)) {
					 e->Effect = DragDropEffects::Copy;
				 } else {
					 e->Effect = DragDropEffects::None;
				 }
			 }
	private: System::Void textBoxDestination_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
				 array <String^>^filePath = array <String^>(e->Data->GetData(DataFormats::FileDrop));
				 if (Directory::Exists(filePath[0])) {
					 textBoxDestination->Text = filePath[0];
				 }
			 }
	private: System::Void textBoxDestination_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
				 if (e->Data->GetDataPresent(DataFormats::FileDrop)) {
					 e->Effect = DragDropEffects::Copy;
				 } else {
					 e->Effect = DragDropEffects::None;
				 }
			 }
	private: System::Void buttonAll_Click(System::Object^  sender, System::EventArgs^  e) {
				 for(int i = 0; i < checkedListBoxUCode->Items->Count; i++) {
					 checkedListBoxUCode->SetItemChecked (i, true);
				 }
			 }
	private: System::Void buttonNone_Click(System::Object^  sender, System::EventArgs^  e) {
				 for(int i = 0; i < checkedListBoxUCode->Items->Count; i++) {
					 checkedListBoxUCode->SetItemChecked (i, false);
				 }
			 }

	private: bool IsUpgradedUCode(String^ uCodeNaming) {
				 array<String^>^ file = Directory::GetFiles(textBoxDestination->Text, "*." + textBoxFileExtension->Text);
				 bool result = false;
				 for(int i = 0; i < file->Length; i++) {
					 String ^fileName = Path::GetFileNameWithoutExtension(file[i]);
					 if (String::Compare(uCodeNaming, 0, fileName, 0, 8)== 0) {
						 if (String::Compare(uCodeNaming, 9, fileName, 9, 8) > 0) {
							 result = true;
						 } else {
							 result = false;
						 }
					 }
				 }
				 return result;
			 }

	private: System::Void buttonUpgrade_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (!Directory::Exists(textBoxDestination->Text)) return;
				 for(int i = 0; i < checkedListBoxUCode->Items->Count; i++) {
					 checkedListBoxUCode->SelectedIndex = i;
					 if (IsUpgradedUCode(checkedListBoxUCode->Text)) {
						 checkedListBoxUCode->SetItemChecked (i, true);
					 } else {
						 checkedListBoxUCode->SetItemChecked (i, false);
					 }
					 checkedListBoxUCode->SelectedIndex = -1;
				 }
			 }
	private: System::Void textBoxPdbFile_Leave(System::Object^  sender, System::EventArgs^  e) {
				 if (File::Exists(textBoxPdbFile->Text)) {
					 ParsePdb();
					 buttonUpgrade_Click(sender, e);
				 } else {
					 checkedListBoxUCode->Items->Clear();
				 }
			 }
	private: System::Void ParsePdb(System::Void) {
				 BinaryReader ^PdbFile = gcnew BinaryReader(File::Open(textBoxPdbFile->Text, System::IO::FileMode::Open));
				 UInt32 CurrentOffset = 0;
				 uCodeHeaderPlus ^uCodeHeaderBuffer;
				 ListuCodeHeaderPlus = gcnew List <uCodeHeaderPlus^>();

				 while (PdbFile->PeekChar() != -1) {
					 uCodeHeaderBuffer = (gcnew uCodeHeaderPlus());
					 uCodeHeaderBuffer->Offset = CurrentOffset;
					 uCodeHeaderBuffer->HeaderVersion = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->PatchId = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->Date = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->CpuId = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->Checksum = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->LoaderVersion = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->PlatformId = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->DataSize = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->TotalSize = PdbFile->ReadUInt32();
					 if (uCodeHeaderBuffer->DataSize == 0) {
						 uCodeHeaderBuffer->DataSize = MICROCODE_DEFAULT_TOTAL_SIZE - sizeof(MICROCODE_IMAGE_HEADER);
						 uCodeHeaderBuffer->TotalSize = MICROCODE_DEFAULT_TOTAL_SIZE;
					 }
					 uCodeHeaderBuffer->Reserved0 = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->Reserved1 = PdbFile->ReadUInt32();
					 uCodeHeaderBuffer->Reserved2 = PdbFile->ReadUInt32();
					 
					 uCodeHeaderBuffer->FileNaming = "M";
					 uCodeHeaderBuffer->FileNaming += uCodeHeaderBuffer->PlatformId.ToString("X2");
					 uCodeHeaderBuffer->FileNaming += uCodeHeaderBuffer->CpuId.ToString("X5");
					 uCodeHeaderBuffer->FileNaming += "_";
					 uCodeHeaderBuffer->FileNaming += uCodeHeaderBuffer->PatchId.ToString("X8");

					 ListuCodeHeaderPlus->Add(uCodeHeaderBuffer);
					 CurrentOffset += uCodeHeaderBuffer->TotalSize;
					 PdbFile->BaseStream->Seek(uCodeHeaderBuffer->DataSize, System::IO::SeekOrigin::Current);
				 }

				 PdbFile->Close();

				 checkedListBoxUCode->Items->Clear();

				 for each (uCodeHeaderPlus ^uCodeHeaderBuffer in ListuCodeHeaderPlus) {
					 checkedListBoxUCode->Items->Add(uCodeHeaderBuffer->FileNaming);
				 }
			 }
	private: System::Void buttonExtract_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (!File::Exists(textBoxPdbFile->Text)) return;
				 if (!Directory::Exists(textBoxDestination->Text)) return;
				 BinaryReader ^PdbFile = gcnew BinaryReader(File::Open(textBoxPdbFile->Text, System::IO::FileMode::Open));
				 System::IO::BinaryWriter ^uCodeFile;
				 cli::array <unsigned char> ^buffer = gcnew cli::array <unsigned char>(0x800);

				 for(int i = 0; i < checkedListBoxUCode->Items->Count; i++) {
					 if (checkedListBoxUCode->GetItemChecked (i)) {
						 checkedListBoxUCode->SelectedIndex = i;
						 for each (uCodeHeaderPlus ^uCodeHeaderBuffer in ListuCodeHeaderPlus) {
							 if (String::Compare(checkedListBoxUCode->Text, uCodeHeaderBuffer->FileNaming) == 0) {
								 PdbFile->BaseStream->Seek(uCodeHeaderBuffer->Offset, System::IO::SeekOrigin::Begin);
								 Array::Resize(buffer, uCodeHeaderBuffer->TotalSize);
								 PdbFile->Read(buffer, 0, uCodeHeaderBuffer->TotalSize);
								 String ^FilePath = Path::Combine(textBoxDestination->Text, uCodeHeaderBuffer->FileNaming);
								 FilePath = Path::ChangeExtension(FilePath, textBoxFileExtension->Text);
								 uCodeFile = gcnew BinaryWriter(File::Open(FilePath, System::IO::FileMode::OpenOrCreate));
								 uCodeFile->BaseStream->Write(buffer, 0, uCodeHeaderBuffer->TotalSize);
								 uCodeFile->Close();
								 break;
							 }
						 }
					 }
				 }

				 PdbFile->Close();
				 buttonNone_Click(sender, e);
				 checkedListBoxUCode->SelectedIndex = -1;
			 }
	};
}

