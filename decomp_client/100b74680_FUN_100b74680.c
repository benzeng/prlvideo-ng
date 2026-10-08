
undefined8 * FUN_100b74680(undefined8 *param_1,long param_2)

{
  QString *this;
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  QArrayData *local_210;
  QString local_208;
  QString local_200;
  QArrayData *local_1f8;
  QString local_1f0;
  QString local_1e8;
  QArrayData *local_1e0;
  QString local_1d8;
  QString local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QString local_1b8;
  QString local_1b0;
  QArrayData *local_1a8;
  QDateTime local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QString local_188;
  QString local_180;
  QArrayData *local_178;
  QDateTime local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QString local_158;
  QString local_150;
  QArrayData *local_148;
  QString local_140;
  QString local_138;
  QArrayData *local_130;
  QString local_128;
  QString local_120;
  QArrayData *local_118;
  QString local_110;
  QString local_108;
  QArrayData *local_100;
  QString local_f8;
  QString local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QDateTime local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_38 [8];
  QString QStack_30;
  undefined1 local_21;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x8b1,"GetLicenseQueryItems");
  }
  *param_1 = PTR_shared_null_1021e15e8;
  register0x00001208 = (int)PTR_shared_null_1021e1288;
  local_38 = (undefined1  [8])PTR_shared_null_1021e1288;
  register0x0000120c = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("P",1);
  QString::operator=((QString *)local_38,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7474c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100b7474c:
  local_50 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x185,"GetProduct");
  }
  QString::arg(&local_48,&local_50,*(undefined4 *)(param_2 + 0xa0),0,10,0x20);
  this = (QString *)(local_38 + 8);
  QString::operator=(this,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_21 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7480a;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100b7480a:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7483a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b7483a:
  FUN_1001c44c0(param_1,local_38);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("V",1);
  QString::operator=((QString *)local_38,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_21 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74898;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100b74898:
  local_68 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x179,"GetVersion");
  }
  local_70 = *(QArrayData **)(param_2 + 0x38);
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_21 = *(int *)local_70 != 0;
    UNLOCK();
  }
  QString::arg(&local_60,&local_68,&local_70,0,0x20);
  QString::operator=(this,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74963;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100b74963:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_21 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74993;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100b74993:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b749c3;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100b749c3:
  FUN_1001c44c0(param_1,local_38);
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("I",1);
  QString::operator=((QString *)local_38,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_21 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74a21;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_100b74a21:
  local_88 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1d9,"GetKeyNumberValue");
  }
  QString::arg(&local_80,&local_88,*(undefined8 *)(param_2 + 200),0,10,0x20);
  QString::operator=(this,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74adc;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_100b74adc:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74b0c;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100b74b0c:
  FUN_1001c44c0(param_1,local_38);
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("S",1);
  QString::operator=((QString *)local_38,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_21 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74b76;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_100b74b76:
  local_a0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x156,"GetStartDate");
  }
  QDateTime::QDateTime(&local_b0,(QDateTime *)(param_2 + 0x58));
  QDateTime::toString(&local_a8,&local_b0,1);
  local_b8 = (QArrayData *)QString::fromAscii_helper("-",1);
  uVar2 = QString::remove(&local_a8,&local_b8,1);
  QString::arg(&local_98,&local_a0,uVar2,0,0x20);
  QString::operator=(this,&local_98);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_21 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74c91;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100b74c91:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74cc7;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100b74cc7:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74cfd;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100b74cfd:
  QDateTime::~QDateTime(&local_b0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74d3f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100b74d3f:
  FUN_1001c44c0(param_1,local_38);
  local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("C",1);
  QString::operator=((QString *)local_38,&local_c0);
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_21 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74da9;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_100b74da9:
  local_d0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x122,"GetCpuLimit");
  }
  QString::arg(&local_c8,&local_d0,*(undefined4 *)(param_2 + 0x7c),0,10,0x20);
  QString::operator=(this,&local_c8);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_21 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74e72;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_100b74e72:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74ea8;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100b74ea8:
  FUN_1001c44c0(param_1,local_38);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("O",1);
  QString::operator=((QString *)local_38,&local_d8);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_21 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74f12;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_100b74f12:
  local_e8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1a4,"GetPlatform");
  }
  uVar1 = *(int *)(param_2 + 0xa4) - 1;
  iVar3 = 0;
  if (uVar1 < 4) {
    iVar3 = *(int *)(&DAT_101cdc1d0 + (long)(int)uVar1 * 4);
  }
  QString::arg(&local_e0,&local_e8,(long)iVar3,0,10,0x20);
  QString::operator=(this,&local_e0);
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_21 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b74ff6;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_100b74ff6:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_21 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7502c;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100b7502c:
  FUN_1001c44c0(param_1,local_38);
  local_f0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("GP",2);
  QString::operator=((QString *)local_38,&local_f0);
  if (*(int *)local_f0.field0_0x0 != -1) {
    if (*(int *)local_f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f0.field0_0x0 = *(int *)local_f0.field0_0x0 + -1;
      local_21 = *(int *)local_f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75096;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field0_0x0,2,8);
  }
LAB_100b75096:
  local_100 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1cd,"GetGracePeriod");
  }
  QString::arg(&local_f8,&local_100,*(undefined4 *)(param_2 + 0x78),0,10,0x20);
  QString::operator=(this,&local_f8);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_21 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7515f;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100b7515f:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      local_21 = *(int *)local_100 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75195;
    }
    QArrayData::deallocate(local_100,2,8);
  }
LAB_100b75195:
  FUN_1001c44c0(param_1,local_38);
  local_108.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("IF",2);
  QString::operator=((QString *)local_38,&local_108);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      local_21 = *(int *)local_108.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b751ff;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
LAB_100b751ff:
  local_118 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1bb,"IsFile");
  }
  QString::arg(&local_110,&local_118,*(undefined1 *)(param_2 + 0x125),0,10,0x20);
  QString::operator=(this,&local_110);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_21 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b752cc;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_100b752cc:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_21 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75302;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100b75302:
  FUN_1001c44c0(param_1,local_38);
  local_120.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VA",2);
  QString::operator=((QString *)local_38,&local_120);
  if (*(int *)local_120.field0_0x0 != -1) {
    if (*(int *)local_120.field0_0x0 != 0) {
      LOCK();
      *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
      local_21 = *(int *)local_120.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7536c;
    }
    QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
  }
LAB_100b7536c:
  local_130 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x131,"GetVtdAvailable");
  }
  QString::arg(&local_128,&local_130,*(undefined4 *)(param_2 + 0x88),0,10,0x20);
  QString::operator=(this,&local_128);
  if (*(int *)local_128.field0_0x0 != -1) {
    if (*(int *)local_128.field0_0x0 != 0) {
      LOCK();
      *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
      local_21 = *(int *)local_128.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75438;
    }
    QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
  }
LAB_100b75438:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_21 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7546e;
    }
    QArrayData::deallocate(local_130,2,8);
  }
LAB_100b7546e:
  FUN_1001c44c0(param_1,local_38);
  local_138.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("IUN",3);
  QString::operator=((QString *)local_38,&local_138);
  if (*(int *)local_138.field0_0x0 != -1) {
    if (*(int *)local_138.field0_0x0 != 0) {
      LOCK();
      *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
      local_21 = *(int *)local_138.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b754d8;
    }
    QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
  }
LAB_100b754d8:
  local_148 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1c1,"IsUnlimited");
  }
  QString::arg(&local_140,&local_148,*(undefined1 *)(param_2 + 0x48),0,10,0x20);
  QString::operator=(this,&local_140);
  if (*(int *)local_140.field0_0x0 != -1) {
    if (*(int *)local_140.field0_0x0 != 0) {
      LOCK();
      *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
      local_21 = *(int *)local_140.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b755a2;
    }
    QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
  }
LAB_100b755a2:
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_21 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b755d8;
    }
    QArrayData::deallocate(local_148,2,8);
  }
LAB_100b755d8:
  FUN_1001c44c0(param_1,local_38);
  local_150.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ED",2);
  QString::operator=((QString *)local_38,&local_150);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_21 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75642;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_100b75642:
  local_160 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x15c,"GetExpirationDate");
  }
  QDateTime::QDateTime(&local_170,(QDateTime *)(param_2 + 0x50));
  QDateTime::toString(&local_168,&local_170,1);
  local_178 = (QArrayData *)QString::fromAscii_helper("-",1);
  uVar2 = QString::remove(&local_168,&local_178,1);
  QString::arg(&local_158,&local_160,uVar2,0,0x20);
  QString::operator=(this,&local_158);
  if (*(int *)local_158.field0_0x0 != -1) {
    if (*(int *)local_158.field0_0x0 != 0) {
      LOCK();
      *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
      local_21 = *(int *)local_158.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7575d;
    }
    QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
  }
LAB_100b7575d:
  if (*(int *)local_178 != -1) {
    if (*(int *)local_178 != 0) {
      LOCK();
      *(int *)local_178 = *(int *)local_178 + -1;
      local_21 = *(int *)local_178 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75793;
    }
    QArrayData::deallocate(local_178,2,8);
  }
LAB_100b75793:
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_21 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b757c9;
    }
    QArrayData::deallocate(local_168,2,8);
  }
LAB_100b757c9:
  QDateTime::~QDateTime(&local_170);
  if (*(int *)local_160 != -1) {
    if (*(int *)local_160 != 0) {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      local_21 = *(int *)local_160 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7580b;
    }
    QArrayData::deallocate(local_160,2,8);
  }
LAB_100b7580b:
  FUN_1001c44c0(param_1,local_38);
  local_180.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("UD",2);
  QString::operator=((QString *)local_38,&local_180);
  if (*(int *)local_180.field0_0x0 != -1) {
    if (*(int *)local_180.field0_0x0 != 0) {
      LOCK();
      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
      local_21 = *(int *)local_180.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75875;
    }
    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
  }
LAB_100b75875:
  local_190 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x162,"GetUpdateDate");
  }
  QDateTime::QDateTime(&local_1a0,(QDateTime *)(param_2 + 0xe0));
  QDateTime::toString(&local_198,&local_1a0,1);
  local_1a8 = (QArrayData *)QString::fromAscii_helper("-",1);
  uVar2 = QString::remove(&local_198,&local_1a8,1);
  QString::arg(&local_188,&local_190,uVar2,0,0x20);
  QString::operator=(this,&local_188);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      local_21 = *(int *)local_188.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75993;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_100b75993:
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_21 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b759c9;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_100b759c9:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_21 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b759ff;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_100b759ff:
  QDateTime::~QDateTime(&local_1a0);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_21 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75a41;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100b75a41:
  FUN_1001c44c0(param_1,local_38);
  local_1b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("KN",2);
  QString::operator=((QString *)local_38,&local_1b0);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_21 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75aab;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_100b75aab:
  local_1c0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x1d3,"GetKeyNumber");
  }
  local_1c8 = *(QArrayData **)(param_2 + 0xc0);
  if (1 < *(int *)local_1c8 + 1U) {
    LOCK();
    *(int *)local_1c8 = *(int *)local_1c8 + 1;
    local_21 = *(int *)local_1c8 != 0;
    UNLOCK();
  }
  QString::arg(&local_1b8,&local_1c0,&local_1c8,0,0x20);
  QString::operator=(this,&local_1b8);
  if (*(int *)local_1b8.field0_0x0 != -1) {
    if (*(int *)local_1b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b8.field0_0x0 = *(int *)local_1b8.field0_0x0 + -1;
      local_21 = *(int *)local_1b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75b91;
    }
    QArrayData::deallocate((QArrayData *)local_1b8.field0_0x0,2,8);
  }
LAB_100b75b91:
  if (*(int *)local_1c8 != -1) {
    if (*(int *)local_1c8 != 0) {
      LOCK();
      *(int *)local_1c8 = *(int *)local_1c8 + -1;
      local_21 = *(int *)local_1c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75bc7;
    }
    QArrayData::deallocate(local_1c8,2,8);
  }
LAB_100b75bc7:
  if (*(int *)local_1c0 != -1) {
    if (*(int *)local_1c0 != 0) {
      LOCK();
      *(int *)local_1c0 = *(int *)local_1c0 + -1;
      local_21 = *(int *)local_1c0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75bfd;
    }
    QArrayData::deallocate(local_1c0,2,8);
  }
LAB_100b75bfd:
  FUN_1001c44c0(param_1,local_38);
  local_1d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("VML",3);
  QString::operator=((QString *)local_38,&local_1d0);
  if (*(int *)local_1d0.field0_0x0 != -1) {
    if (*(int *)local_1d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d0.field0_0x0 = *(int *)local_1d0.field0_0x0 + -1;
      local_21 = *(int *)local_1d0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75c67;
    }
    QArrayData::deallocate((QArrayData *)local_1d0.field0_0x0,2,8);
  }
LAB_100b75c67:
  local_1e0 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x142,"GetVmsLimit");
  }
  QString::arg(&local_1d8,&local_1e0,*(undefined4 *)(param_2 + 0xe8),0,10,0x20);
  QString::operator=(this,&local_1d8);
  if (*(int *)local_1d8.field0_0x0 != -1) {
    if (*(int *)local_1d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1d8.field0_0x0 = *(int *)local_1d8.field0_0x0 + -1;
      local_21 = *(int *)local_1d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75d33;
    }
    QArrayData::deallocate((QArrayData *)local_1d8.field0_0x0,2,8);
  }
LAB_100b75d33:
  if (*(int *)local_1e0 != -1) {
    if (*(int *)local_1e0 != 0) {
      LOCK();
      *(int *)local_1e0 = *(int *)local_1e0 + -1;
      local_21 = *(int *)local_1e0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75d69;
    }
    QArrayData::deallocate(local_1e0,2,8);
  }
LAB_100b75d69:
  FUN_1001c44c0(param_1,local_38);
  local_1e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ML",2);
  QString::operator=((QString *)local_38,&local_1e8);
  if (*(int *)local_1e8.field0_0x0 != -1) {
    if (*(int *)local_1e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1e8.field0_0x0 = *(int *)local_1e8.field0_0x0 + -1;
      local_21 = *(int *)local_1e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75dd3;
    }
    QArrayData::deallocate((QArrayData *)local_1e8.field0_0x0,2,8);
  }
LAB_100b75dd3:
  local_1f8 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  300,"GetMemoryLimit");
  }
  QString::arg(&local_1f0,&local_1f8,*(undefined4 *)(param_2 + 0x84),0,10,0x20);
  QString::operator=(this,&local_1f0);
  if (*(int *)local_1f0.field0_0x0 != -1) {
    if (*(int *)local_1f0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1f0.field0_0x0 = *(int *)local_1f0.field0_0x0 + -1;
      local_21 = *(int *)local_1f0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75e9f;
    }
    QArrayData::deallocate((QArrayData *)local_1f0.field0_0x0,2,8);
  }
LAB_100b75e9f:
  if (*(int *)local_1f8 != -1) {
    if (*(int *)local_1f8 != 0) {
      LOCK();
      *(int *)local_1f8 = *(int *)local_1f8 + -1;
      local_21 = *(int *)local_1f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75ed5;
    }
    QArrayData::deallocate(local_1f8,2,8);
  }
LAB_100b75ed5:
  FUN_1001c44c0(param_1,local_38);
  local_200.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("MVZU",4);
  QString::operator=((QString *)local_38,&local_200);
  if (*(int *)local_200.field0_0x0 != -1) {
    if (*(int *)local_200.field0_0x0 != 0) {
      LOCK();
      *(int *)local_200.field0_0x0 = *(int *)local_200.field0_0x0 + -1;
      local_21 = *(int *)local_200.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b75f3f;
    }
    QArrayData::deallocate((QArrayData *)local_200.field0_0x0,2,8);
  }
LAB_100b75f3f:
  local_210 = (QArrayData *)QString::fromAscii_helper("%1",2);
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x136,"GetMaxVzmcUsers");
  }
  QString::arg(&local_208,&local_210,*(undefined8 *)(param_2 + 0x90),0,10,0x20);
  QString::operator=(this,&local_208);
  if (*(int *)local_208.field0_0x0 != -1) {
    if (*(int *)local_208.field0_0x0 != 0) {
      LOCK();
      *(int *)local_208.field0_0x0 = *(int *)local_208.field0_0x0 + -1;
      local_21 = *(int *)local_208.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7600c;
    }
    QArrayData::deallocate((QArrayData *)local_208.field0_0x0,2,8);
  }
LAB_100b7600c:
  if (*(int *)local_210 != -1) {
    if (*(int *)local_210 != 0) {
      LOCK();
      *(int *)local_210 = *(int *)local_210 + -1;
      local_21 = *(int *)local_210 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b76042;
    }
    QArrayData::deallocate(local_210,2,8);
  }
LAB_100b76042:
  FUN_1001c44c0(param_1,local_38);
  if (*(int *)QStack_30.field0_0x0 != -1) {
    if (*(int *)QStack_30.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_30.field0_0x0 = *(int *)QStack_30.field0_0x0 + -1;
      local_21 = *(int *)QStack_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b7607e;
    }
    QArrayData::deallocate((QArrayData *)QStack_30.field0_0x0,2,8);
  }
LAB_100b7607e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38,2,8);
  }
  return param_1;
}

