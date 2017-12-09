#pragma once

namespace ToSF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ToSForm 的摘要
	/// </summary>
	public ref class ToSForm : public System::Windows::Forms::Form
	{
	public:
		ToSForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}
	private: System::Windows::Forms::Label^  comboLab;
	private: System::Windows::Forms::Button^  LoadScreen;
	private: System::Windows::Forms::Button^  outpath;
	private: System::Windows::Forms::PictureBox^  scbox;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  curposShow;
	private: System::Windows::Forms::Button^  autorunBtn;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::NumericUpDown^  fixedCount;
	private: System::Windows::Forms::CheckBox^  fixedCombo;
	private: System::Windows::Forms::ComboBox^  selectStoneType;


	private: System::Windows::Forms::CheckBox^  priorityStone;
	private: System::Windows::Forms::CheckBox^  attackAll;
	private: System::Windows::Forms::CheckBox^  enlargeCalcTime;
	private: System::Windows::Forms::NumericUpDown^  enlargeSc;

	public:

	protected:
		array<System::Windows::Forms::PictureBox^>^ board;
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~ToSForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->comboLab = (gcnew System::Windows::Forms::Label());
			this->LoadScreen = (gcnew System::Windows::Forms::Button());
			this->outpath = (gcnew System::Windows::Forms::Button());
			this->scbox = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->curposShow = (gcnew System::Windows::Forms::Label());
			this->autorunBtn = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->enlargeSc = (gcnew System::Windows::Forms::NumericUpDown());
			this->enlargeCalcTime = (gcnew System::Windows::Forms::CheckBox());
			this->attackAll = (gcnew System::Windows::Forms::CheckBox());
			this->selectStoneType = (gcnew System::Windows::Forms::ComboBox());
			this->priorityStone = (gcnew System::Windows::Forms::CheckBox());
			this->fixedCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->fixedCombo = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scbox))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enlargeSc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fixedCount))->BeginInit();
			this->SuspendLayout();
			// 
			// comboLab
			// 
			this->comboLab->AutoSize = true;
			this->comboLab->Location = System::Drawing::Point(13, 238);
			this->comboLab->Name = L"comboLab";
			this->comboLab->Size = System::Drawing::Size(0, 12);
			this->comboLab->TabIndex = 0;
			// 
			// LoadScreen
			// 
			this->LoadScreen->Location = System::Drawing::Point(153, 278);
			this->LoadScreen->Name = L"LoadScreen";
			this->LoadScreen->Size = System::Drawing::Size(115, 23);
			this->LoadScreen->TabIndex = 1;
			this->LoadScreen->Text = L"Load Screenshot";
			this->LoadScreen->UseVisualStyleBackColor = true;
			this->LoadScreen->Click += gcnew System::EventHandler(this, &ToSForm::LoadScreen_Click);
			// 
			// outpath
			// 
			this->outpath->Location = System::Drawing::Point(729, 368);
			this->outpath->Name = L"outpath";
			this->outpath->Size = System::Drawing::Size(75, 23);
			this->outpath->TabIndex = 2;
			this->outpath->Text = L"Output Path";
			this->outpath->UseVisualStyleBackColor = true;
			this->outpath->Click += gcnew System::EventHandler(this, &ToSForm::outpath_Click);
			// 
			// scbox
			// 
			this->scbox->Location = System::Drawing::Point(293, 1);
			this->scbox->Name = L"scbox";
			this->scbox->Size = System::Drawing::Size(300, 300);
			this->scbox->TabIndex = 3;
			this->scbox->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &ToSForm::timer1_Tick);
			// 
			// curposShow
			// 
			this->curposShow->AutoSize = true;
			this->curposShow->Location = System::Drawing::Point(93, 283);
			this->curposShow->Name = L"curposShow";
			this->curposShow->Size = System::Drawing::Size(0, 12);
			this->curposShow->TabIndex = 4;
			// 
			// autorunBtn
			// 
			this->autorunBtn->Location = System::Drawing::Point(12, 278);
			this->autorunBtn->Name = L"autorunBtn";
			this->autorunBtn->Size = System::Drawing::Size(75, 23);
			this->autorunBtn->TabIndex = 5;
			this->autorunBtn->Text = L"auto run";
			this->autorunBtn->UseVisualStyleBackColor = true;
			this->autorunBtn->Click += gcnew System::EventHandler(this, &ToSForm::autorunBtn_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->enlargeSc);
			this->groupBox1->Controls->Add(this->enlargeCalcTime);
			this->groupBox1->Controls->Add(this->attackAll);
			this->groupBox1->Controls->Add(this->selectStoneType);
			this->groupBox1->Controls->Add(this->priorityStone);
			this->groupBox1->Controls->Add(this->fixedCount);
			this->groupBox1->Controls->Add(this->fixedCombo);
			this->groupBox1->Location = System::Drawing::Point(12, 307);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(581, 101);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"設定";
			// 
			// enlargeSc
			// 
			this->enlargeSc->Enabled = false;
			this->enlargeSc->Location = System::Drawing::Point(296, 21);
			this->enlargeSc->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->enlargeSc->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->enlargeSc->Name = L"enlargeSc";
			this->enlargeSc->Size = System::Drawing::Size(36, 22);
			this->enlargeSc->TabIndex = 6;
			this->enlargeSc->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->enlargeSc->ValueChanged += gcnew System::EventHandler(this, &ToSForm::enlargeSc_ValueChanged);
			// 
			// enlargeCalcTime
			// 
			this->enlargeCalcTime->AutoSize = true;
			this->enlargeCalcTime->Location = System::Drawing::Point(194, 22);
			this->enlargeCalcTime->Name = L"enlargeCalcTime";
			this->enlargeCalcTime->Size = System::Drawing::Size(96, 16);
			this->enlargeCalcTime->TabIndex = 5;
			this->enlargeCalcTime->Text = L"加大計算時間";
			this->enlargeCalcTime->UseVisualStyleBackColor = true;
			this->enlargeCalcTime->CheckedChanged += gcnew System::EventHandler(this, &ToSForm::enlargeCalcTime_CheckedChanged);
			// 
			// attackAll
			// 
			this->attackAll->AutoSize = true;
			this->attackAll->Location = System::Drawing::Point(7, 76);
			this->attackAll->Name = L"attackAll";
			this->attackAll->Size = System::Drawing::Size(144, 16);
			this->attackAll->TabIndex = 4;
			this->attackAll->Text = L"優先屬性全體攻擊優先";
			this->attackAll->UseVisualStyleBackColor = true;
			this->attackAll->CheckedChanged += gcnew System::EventHandler(this, &ToSForm::attackAll_CheckedChanged);
			// 
			// selectStoneType
			// 
			this->selectStoneType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->selectStoneType->Enabled = false;
			this->selectStoneType->FormattingEnabled = true;
			this->selectStoneType->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->selectStoneType->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"火", L"水", L"木", L"光", L"暗", L"心" });
			this->selectStoneType->Location = System::Drawing::Point(85, 51);
			this->selectStoneType->Name = L"selectStoneType";
			this->selectStoneType->Size = System::Drawing::Size(71, 20);
			this->selectStoneType->TabIndex = 3;
			this->selectStoneType->SelectedIndexChanged += gcnew System::EventHandler(this, &ToSForm::selectStoneType_SelectedIndexChanged);
			// 
			// priorityStone
			// 
			this->priorityStone->AutoSize = true;
			this->priorityStone->Location = System::Drawing::Point(7, 53);
			this->priorityStone->Name = L"priorityStone";
			this->priorityStone->Size = System::Drawing::Size(72, 16);
			this->priorityStone->TabIndex = 2;
			this->priorityStone->Text = L"優先屬性";
			this->priorityStone->UseVisualStyleBackColor = true;
			this->priorityStone->CheckedChanged += gcnew System::EventHandler(this, &ToSForm::priorityStone_CheckedChanged);
			// 
			// fixedCount
			// 
			this->fixedCount->Enabled = false;
			this->fixedCount->Location = System::Drawing::Point(120, 21);
			this->fixedCount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->fixedCount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->fixedCount->Name = L"fixedCount";
			this->fixedCount->Size = System::Drawing::Size(36, 22);
			this->fixedCount->TabIndex = 1;
			this->fixedCount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->fixedCount->ValueChanged += gcnew System::EventHandler(this, &ToSForm::fixedCount_ValueChanged);
			// 
			// fixedCombo
			// 
			this->fixedCombo->AutoSize = true;
			this->fixedCombo->Location = System::Drawing::Point(7, 22);
			this->fixedCombo->Name = L"fixedCombo";
			this->fixedCombo->Size = System::Drawing::Size(107, 16);
			this->fixedCombo->TabIndex = 0;
			this->fixedCombo->Text = L"指定首消Combo";
			this->fixedCombo->UseVisualStyleBackColor = true;
			this->fixedCombo->CheckedChanged += gcnew System::EventHandler(this, &ToSForm::fixedCombo_CheckedChanged);
			// 
			// ToSForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 420);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->autorunBtn);
			this->Controls->Add(this->curposShow);
			this->Controls->Add(this->scbox);
			this->Controls->Add(this->outpath);
			this->Controls->Add(this->LoadScreen);
			this->Controls->Add(this->comboLab);
			this->Name = L"ToSForm";
			this->Text = L"ToSForm";
			this->Load += gcnew System::EventHandler(this, &ToSForm::ToSForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->scbox))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enlargeSc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fixedCount))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ToSForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Stone_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void updateBoard();
	private: System::Void LoadScreen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void outpath_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void dealPic(Bitmap^ bm) {
		// Quant_Uniform
		for (int i = 0; i<bm->Height; i++)
		{
			for (int j = 0; j<bm->Width; j++)
			{
				Color thisColor = bm->GetPixel(j, i);
				bm->SetPixel(j, i, Color::FromArgb((thisColor.R >> 2) << 2, (thisColor.G >> 2) << 2, (thisColor.B >> 2) << 2));
			}
		}
		/*// blur
		double filter[5][5] = {
			{ 0.04,0.04,0.04,0.04,0.04 },
			{ 0.04,0.04,0.04,0.04,0.04 },
			{ 0.04,0.04,0.04,0.04,0.04 },
			{ 0.04,0.04,0.04,0.04,0.04 },
			{ 0.04,0.04,0.04,0.04,0.04 }
		};
		for (int i = 0; i<bm->Height; i++)
		{
			for (int j = 0; j<bm->Width; j++)
			{
				double rgb[3] = { 0.0 };
				for (int ni = i - 2; ni <= i + 2; ++ni) {
					if (ni >= bm->Height || ni < 0)continue;
					for (int nj = j - 2; nj <= j + 2; ++nj) {
						if (nj >= bm->Width || nj < 0)continue;
						Color tmpColor = bm->GetPixel(nj, ni);
						rgb[0] += tmpColor.R * filter[ni - i + 2][nj - j + 2];
						rgb[1] += tmpColor.G * filter[ni - i + 2][nj - j + 2];
						rgb[2] += tmpColor.B * filter[ni - i + 2][nj - j + 2];
					}
				}
				for (int k = 0; k < 3; ++k) {
					if (rgb[k] > 255)rgb[k] = 255;
					if (rgb[k] < 0) rgb[k] = 0;
				}
				bm->SetPixel(j, i, Color::FromArgb(rgb[0], rgb[1], rgb[2]));
			}
		}*/
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
private: System::Void autorunBtn_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void fixedCombo_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void fixedCount_ValueChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void priorityStone_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void selectStoneType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void attackAll_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void enlargeCalcTime_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void enlargeSc_ValueChanged(System::Object^  sender, System::EventArgs^  e);
};
	
}
