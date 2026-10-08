
void FUN_100712fd0(QString *param_1)

{
  undefined *puVar1;
  QKeySequence local_1d0 [8];
  QKeySequence local_1c8 [8];
  QKeySequence local_1c0 [8];
  QKeySequence local_1b8 [16];
  QKeySequence local_1a8 [8];
  QKeySequence local_1a0 [8];
  QKeySequence local_198 [8];
  QKeySequence local_190 [16];
  QKeySequence local_180 [8];
  QKeySequence local_178 [8];
  QKeySequence local_170 [8];
  QKeySequence local_168 [16];
  QKeySequence local_158 [8];
  QKeySequence local_150 [8];
  QKeySequence local_148 [8];
  QKeySequence local_140 [16];
  QKeySequence local_130 [8];
  QKeySequence local_128 [8];
  QKeySequence local_120 [8];
  QKeySequence local_118 [16];
  QKeySequence local_108 [8];
  QKeySequence local_100 [8];
  QKeySequence local_f8 [8];
  QKeySequence local_f0 [16];
  QKeySequence local_e0 [8];
  QKeySequence local_d8 [8];
  QKeySequence local_d0 [8];
  QKeySequence local_c8 [16];
  QKeySequence local_b8 [8];
  QKeySequence local_b0 [8];
  QKeySequence local_a8 [8];
  QKeySequence local_a0 [16];
  QKeySequence local_90 [8];
  QKeySequence local_88 [8];
  QKeySequence local_80 [8];
  QKeySequence local_78 [16];
  QKeySequence local_68 [8];
  QKeySequence local_60 [8];
  QKeySequence local_58 [8];
  QKeySequence local_50 [16];
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  FUN_100714cc0();
  puVar1 = PTR_s_Mac_OS_X_102274b50;
  if (PTR_s_Mac_OS_X_102274b50 != (undefined *)0x0) {
    _strlen(PTR_s_Mac_OS_X_102274b50);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar1);
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100713054;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100713054:
  puVar1 = PTR_s_Mac_OS_X_102274b50;
  if (PTR_s_Mac_OS_X_102274b50 != (undefined *)0x0) {
    _strlen(PTR_s_Mac_OS_X_102274b50);
  }
  QString::fromUtf8_helper((char *)&local_38,(int)puVar1);
  QString::operator=(param_1 + 1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007130bb;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007130bb:
  QKeySequence::QKeySequence(local_60,0x41);
  QKeySequence::QKeySequence(local_68,0x41);
  FUN_100714b00(local_58,local_60,local_68,2);
  param_1 = param_1 + 2;
  FUN_100559c70(param_1,local_58);
  QKeySequence::~QKeySequence(local_50);
  QKeySequence::~QKeySequence(local_58);
  QKeySequence::~QKeySequence(local_68);
  QKeySequence::~QKeySequence(local_60);
  QKeySequence::QKeySequence(local_88,4);
  QKeySequence::QKeySequence(local_90,4);
  FUN_100714b00(local_80,local_88,local_90);
  FUN_100559c70(param_1,local_80);
  QKeySequence::~QKeySequence(local_78);
  QKeySequence::~QKeySequence(local_80);
  QKeySequence::~QKeySequence(local_90);
  QKeySequence::~QKeySequence(local_88);
  QKeySequence::QKeySequence(local_b0,0x40000a7,0,0,0);
  QKeySequence::QKeySequence(local_b8,0x40000a7,0,0,0);
  FUN_100714b00(local_a8,local_b0,local_b8);
  FUN_100559c70(param_1,local_a8);
  QKeySequence::~QKeySequence(local_a0);
  QKeySequence::~QKeySequence(local_a8);
  QKeySequence::~QKeySequence(local_b8);
  QKeySequence::~QKeySequence(local_b0);
  QKeySequence::QKeySequence(local_d8,0x4000027,0,0,0);
  QKeySequence::QKeySequence(local_e0,0x4000027,0,0,0);
  FUN_100714b00(local_d0,local_d8,local_e0);
  FUN_100559c70(param_1,local_d0);
  QKeySequence::~QKeySequence(local_c8);
  QKeySequence::~QKeySequence(local_d0);
  QKeySequence::~QKeySequence(local_e0);
  QKeySequence::~QKeySequence(local_d8);
  QKeySequence::QKeySequence(local_100,0x4000048,0,0,0);
  QKeySequence::QKeySequence(local_108,0x4000048,0,0,0);
  FUN_100714b00(local_f8,local_100,local_108);
  FUN_100559c70(param_1,local_f8);
  QKeySequence::~QKeySequence(local_f0);
  QKeySequence::~QKeySequence(local_f8);
  QKeySequence::~QKeySequence(local_108);
  QKeySequence::~QKeySequence(local_100);
  QKeySequence::QKeySequence(local_128,0xc000048,0,0,0);
  QKeySequence::QKeySequence(local_130,0xc000048,0,0,0);
  FUN_100714b00(local_120,local_128,local_130);
  FUN_100559c70(param_1,local_120);
  QKeySequence::~QKeySequence(local_118);
  QKeySequence::~QKeySequence(local_120);
  QKeySequence::~QKeySequence(local_130);
  QKeySequence::~QKeySequence(local_128);
  QKeySequence::QKeySequence(local_150,0x400004d,0,0,0);
  QKeySequence::QKeySequence(local_158,0x400004d,0,0,0);
  FUN_100714b00(local_148,local_150,local_158);
  FUN_100559c70(param_1,local_148);
  QKeySequence::~QKeySequence(local_140);
  QKeySequence::~QKeySequence(local_148);
  QKeySequence::~QKeySequence(local_158);
  QKeySequence::~QKeySequence(local_150);
  QKeySequence::QKeySequence(local_178,0x400002c,0,0,0);
  QKeySequence::QKeySequence(local_180,0x400002c,0,0,0);
  FUN_100714b00(local_170,local_178,local_180,2);
  FUN_100559c70(param_1,local_170);
  QKeySequence::~QKeySequence(local_168);
  QKeySequence::~QKeySequence(local_170);
  QKeySequence::~QKeySequence(local_180);
  QKeySequence::~QKeySequence(local_178);
  QKeySequence::QKeySequence(local_1a0,6);
  QKeySequence::QKeySequence(local_1a8,6);
  FUN_100714b00(local_198,local_1a0,local_1a8,2);
  FUN_100559c70(param_1,local_198);
  QKeySequence::~QKeySequence(local_190);
  QKeySequence::~QKeySequence(local_198);
  QKeySequence::~QKeySequence(local_1a8);
  QKeySequence::~QKeySequence(local_1a0);
  QKeySequence::QKeySequence(local_1c8,3);
  QKeySequence::QKeySequence(local_1d0,3);
  FUN_100714b00(local_1c0,local_1c8,local_1d0,2);
  FUN_100559c70(param_1,local_1c0);
  QKeySequence::~QKeySequence(local_1b8);
  QKeySequence::~QKeySequence(local_1c0);
  QKeySequence::~QKeySequence(local_1d0);
  QKeySequence::~QKeySequence(local_1c8);
  return;
}

