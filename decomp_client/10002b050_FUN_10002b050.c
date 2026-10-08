
void FUN_10002b050(long param_1)

{
  QDateTime *this;
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  QVariant local_178;
  QArrayData *local_168;
  QVariant local_160;
  QDateTime local_150;
  QVariant local_148;
  QArrayData *local_138;
  QVariant local_130;
  QDateTime local_120;
  QVariant local_118;
  QArrayData *local_108;
  QVariant local_100;
  QVariant local_f0;
  QArrayData *local_e0;
  QVariant local_d8;
  QVariant local_c8;
  QArrayData *local_b8;
  QVariant local_b0;
  QVariant local_a0;
  Data_conflict local_90;
  QDateTime local_88;
  QDateTime local_80;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QDateTime local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  puVar1 = PTR_s_PDLFeedback_102275060;
  iVar6 = -1;
  if (PTR_s_PDLFeedback_102275060 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_PDLFeedback_102275060);
    iVar6 = (int)sVar5;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QSettings::beginGroup((QString *)&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002b0d8;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10002b0d8:
  puVar1 = PTR_s_FirstLaunch_102275068;
  iVar6 = -1;
  if (PTR_s_FirstLaunch_102275068 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_FirstLaunch_102275068);
    iVar6 = (int)sVar5;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QDateTime::QDateTime(&local_80);
  QVariant::QVariant(&local_78,&local_80);
  QSettings::value((QString *)&local_60,&local_40);
  QVariant::toDateTime();
  this = (QDateTime *)(param_1 + 0x28);
  QDateTime::operator=(this,&local_50);
  QDateTime::~QDateTime(&local_50);
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant(&local_78);
  QDateTime::~QDateTime(&local_80);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002b1a0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10002b1a0:
  cVar2 = QDateTime::isValid();
  if (cVar2 == '\0') {
    QDateTime::currentDateTime();
    QDateTime::operator=(this,&local_88);
    QDateTime::~QDateTime(&local_88);
    puVar1 = PTR_s_FirstLaunch_102275068;
    iVar6 = -1;
    if (PTR_s_FirstLaunch_102275068 != (undefined *)0x0) {
      sVar5 = _strlen(PTR_s_FirstLaunch_102275068);
      iVar6 = (int)sVar5;
    }
    local_90.field7 = QString::fromAscii_helper(puVar1,iVar6);
    QVariant::QVariant(&local_a0,this);
    QSettings::setValue((QString *)&local_40,(QVariant *)&local_90);
    QVariant::~QVariant(&local_a0);
    if (*(int *)local_90.field15 != -1) {
      if (*(int *)local_90.field15 != 0) {
        LOCK();
        *(int *)local_90.field15 = *(int *)local_90.field15 + -1;
        local_29 = *(int *)local_90.field15 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10002b25e;
      }
      QArrayData::deallocate((QArrayData *)local_90.field15,2,8);
    }
LAB_10002b25e:
    QSettings::sync();
  }
  puVar1 = PTR_s_ShowFeedbackControlsInterval_102275090;
  iVar6 = -1;
  if (PTR_s_ShowFeedbackControlsInterval_102275090 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_ShowFeedbackControlsInterval_102275090);
    iVar6 = (int)sVar5;
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QVariant::QVariant(&local_c8,DAT_100e2a55c);
  QSettings::value((QString *)&local_b0,&local_40);
  uVar4 = QVariant::toInt((bool *)&local_b0);
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  QVariant::~QVariant(&local_b0);
  QVariant::~QVariant(&local_c8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002b328;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10002b328:
  puVar1 = PTR_s_StartForceShowFeedbackInterval_102275098;
  iVar6 = -1;
  if (PTR_s_StartForceShowFeedbackInterval_102275098 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_StartForceShowFeedbackInterval_102275098);
    iVar6 = (int)sVar5;
  }
  local_e0 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QVariant::QVariant(&local_f0,DAT_100e2a560);
  QSettings::value((QString *)&local_d8,&local_40);
  uVar4 = QVariant::toInt((bool *)&local_d8);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  QVariant::~QVariant(&local_d8);
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_29 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002b3e9;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_10002b3e9:
  puVar1 = PTR_s_ForceShowFeedbackInterval_1022750a0;
  iVar6 = -1;
  if (PTR_s_ForceShowFeedbackInterval_1022750a0 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_ForceShowFeedbackInterval_1022750a0);
    iVar6 = (int)sVar5;
  }
  local_108 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QVariant::QVariant(&local_118,DAT_100e2a564);
  QSettings::value((QString *)&local_100,&local_40);
  uVar4 = QVariant::toInt((bool *)&local_100);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  QVariant::~QVariant(&local_100);
  QVariant::~QVariant(&local_118);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_29 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002b4aa;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10002b4aa:
  puVar1 = PTR_s_LastShown_102275070;
  iVar6 = -1;
  if (PTR_s_LastShown_102275070 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_LastShown_102275070);
    iVar6 = (int)sVar5;
  }
  local_138 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QDateTime::QDateTime(&local_150);
  QVariant::QVariant(&local_148,&local_150);
  QSettings::value((QString *)&local_130,&local_40);
  QVariant::toDateTime();
  QDateTime::operator=((QDateTime *)(param_1 + 0x30),&local_120);
  QDateTime::~QDateTime(&local_120);
  QVariant::~QVariant(&local_130);
  QVariant::~QVariant(&local_148);
  QDateTime::~QDateTime(&local_150);
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002b59e;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_10002b59e:
  puVar1 = PTR_s_FeedbackWasSent_102275078;
  iVar6 = -1;
  if (PTR_s_FeedbackWasSent_102275078 != (undefined *)0x0) {
    sVar5 = _strlen(PTR_s_FeedbackWasSent_102275078);
    iVar6 = (int)sVar5;
  }
  local_168 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  QVariant::QVariant(&local_178,false);
  QSettings::value((QString *)&local_160,&local_40);
  uVar3 = QVariant::toBool();
  *(undefined1 *)(param_1 + 0x44) = uVar3;
  QVariant::~QVariant(&local_160);
  QVariant::~QVariant(&local_178);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10002b656;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_10002b656:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)&local_40);
  return;
}

