
undefined8 * FUN_100624f20(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  QTextStream *pQVar4;
  char *pcVar5;
  QVariant local_1e0;
  QVariant local_1d0;
  QArrayData *local_1c0;
  QString local_1b8;
  QVariant local_1b0;
  QDateTime local_1a0;
  QString local_198;
  QVariant local_190;
  QString local_180;
  QVariant local_178;
  QVariant local_168;
  QString local_158;
  QVariant local_150;
  QVariant local_140;
  QVariant local_130;
  QVariant local_120;
  QDateTime local_110;
  QString local_108;
  QVariant local_100;
  QDateTime local_f0;
  QString local_e8;
  undefined8 local_e0;
  QVariant local_d8;
  QString local_c8;
  QVariant local_c0;
  QString local_b0;
  QVariant local_a8;
  QString local_98;
  QVariant local_90;
  QString local_80;
  QVariant local_78;
  QString local_68;
  QVariant local_60;
  QString local_50;
  QVariant local_48;
  QTextStream local_38 [23];
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_1021e1288;
  QTextStream::QTextStream(local_38,param_1,3);
  pQVar4 = (QTextStream *)QTextStream::operator<<(local_38,"Status: ");
  FUN_10061abe0(&local_48,param_2,0);
  uVar2 = QVariant::toInt((bool *)&local_48);
  pcVar5 = (char *)FUN_100dddcf0(uVar2);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,pcVar5);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Initialized: ");
  bVar1 = FUN_10061b4d0(param_2,1);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Valid: ");
  bVar1 = FUN_10061b4d0(param_2,2);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Permanent: ");
  bVar1 = FUN_10061b4d0(param_2,4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"VzFormat: ");
  bVar1 = FUN_10061b4d0(param_2,0x2000);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"PrlFormat: ");
  bVar1 = FUN_10061b4d0(param_2,0x4000);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Name: ");
  FUN_10061abe0(&local_60,param_2,1);
  QVariant::toString();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_50);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Organization: ");
  FUN_10061abe0(&local_78,param_2,2);
  QVariant::toString();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_68);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"ShortProductId: ");
  FUN_10061abe0(&local_90,param_2,0xc);
  QVariant::toString();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_80);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"ActiveKey: ");
  FUN_10061abe0(&local_a8,param_2,3);
  QVariant::toString();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_98);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"AllKeys: ");
  FUN_10061abe0(&local_c0,param_2,4);
  QVariant::toString();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_b0);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"ExpiryDate: ");
  FUN_10061abe0(&local_d8,param_2,6);
  local_e0 = QVariant::toDate();
  QDate::toString(&local_c8,&local_e0,0);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_c8);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"StartDate: ");
  FUN_10061abe0(&local_100,param_2,8);
  QVariant::toDateTime();
  QDateTime::toString(&local_e8,&local_f0,0);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_e8);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"UpdateDate: ");
  FUN_10061abe0(&local_120,param_2,9);
  QVariant::toDateTime();
  QDateTime::toString(&local_108,&local_110,0);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_108);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"File: ");
  bVar1 = FUN_10061b4d0(param_2,0x10);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"GracePeriod: ");
  FUN_10061abe0(&local_130,param_2,7);
  iVar3 = QVariant::toInt((bool *)&local_130);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,iVar3);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Trial: ");
  bVar1 = FUN_10061b4d0(param_2,0x20);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Language: ");
  FUN_10061abe0(&local_140,param_2,0xb);
  iVar3 = QVariant::toInt((bool *)&local_140);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,iVar3);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Limited: ");
  bVar1 = FUN_10061b4d0(param_2,0x40);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Protected: ");
  bVar1 = FUN_10061b4d0(param_2,0x100);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Volume: ");
  bVar1 = FUN_10061b4d0(param_2,0x80);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Developer: ");
  bVar1 = FUN_10061b4d0(param_2,0x10000);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"KALicense: ");
  bVar1 = FUN_10061b4d0(param_2,0x2010);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Temporary: ");
  bVar1 = FUN_10061b4d0(param_2,0x8000);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"DaysToOfflinePeriodExpire: ");
  FUN_10061abe0(&local_150,param_2,0xd);
  iVar3 = QVariant::toInt((bool *)&local_150);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,iVar3);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"ActivationId: ");
  FUN_10061abe0(&local_168,param_2,0xe);
  QVariant::toString();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_158);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"OnlineActivated: ");
  bVar1 = FUN_10061b4d0(param_2,0x200);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"OnlineActivationAllowed: ");
  bVar1 = FUN_10061b4d0(param_2,0x400);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"SingInRequired: ");
  FUN_10061abe0(&local_178,param_2,0xf);
  bVar1 = QVariant::toBool();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Binary: ");
  FUN_10061abe0(&local_190,param_2,0x10);
  QVariant::toString();
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_180);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"ActivationDate: ");
  FUN_10061abe0(&local_1b0,param_2,0x11);
  QVariant::toDateTime();
  QDateTime::toString(&local_198,&local_1a0,0);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_198);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Account confirmed: ");
  bVar1 = FUN_10061b4d0(param_2,0x20000);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,(uint)bVar1);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Account email: ");
  FUN_10061abe0(&local_1d0,param_2,0x12);
  QVariant::toString();
  WebUtils::maskedEMail(&local_1b8);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,&local_1b8);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Edition: ");
  FUN_10061abe0(&local_1e0,param_2,0x13);
  iVar3 = QVariant::toInt((bool *)&local_1e0);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,iVar3);
  pQVar4 = (QTextStream *)endl(pQVar4);
  pQVar4 = (QTextStream *)QTextStream::operator<<(pQVar4,"Online purchased: ");
  bVar1 = FUN_10061b4d0(param_2,0x40000);
  QTextStream::operator<<(pQVar4,(uint)bVar1);
  QVariant::~QVariant(&local_1e0);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_21 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625889;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_100625889:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_21 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006258bf;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_1006258bf:
  QVariant::~QVariant(&local_1d0);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_21 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625901;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_100625901:
  QDateTime::~QDateTime(&local_1a0);
  QVariant::~QVariant(&local_1b0);
  if (*(int *)local_180.field0_0x0 != -1) {
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      local_21 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062594f;
    }
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
  }
LAB_10062594f:
  QVariant::~QVariant(&local_190);
  QVariant::~QVariant(&local_178);
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_21 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10062599d;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_10062599d:
  QVariant::~QVariant(&local_168);
  QVariant::~QVariant(&local_150);
  QVariant::~QVariant(&local_140);
  QVariant::~QVariant(&local_130);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_21 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625a03;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_100625a03:
  QDateTime::~QDateTime(&local_110);
  QVariant::~QVariant(&local_120);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_21 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625a51;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_100625a51:
  QDateTime::~QDateTime(&local_f0);
  QVariant::~QVariant(&local_100);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_21 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625a9f;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100625a9f:
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_21 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625ae1;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100625ae1:
  QVariant::~QVariant(&local_c0);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625b23;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100625b23:
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625b5f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100625b5f:
  QVariant::~QVariant(&local_90);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625b9b;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100625b9b:
  QVariant::~QVariant(&local_78);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100625bd4;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100625bd4:
  QVariant::~QVariant(&local_60);
  QVariant::~QVariant(&local_48);
  QTextStream::~QTextStream(local_38);
  return param_1;
}

