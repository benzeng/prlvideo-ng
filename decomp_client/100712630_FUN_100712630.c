
void FUN_100712630(QString *param_1)

{
  undefined *puVar1;
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
  puVar1 = PTR_s_Linux_102274b48;
  if (PTR_s_Linux_102274b48 != (undefined *)0x0) {
    _strlen(PTR_s_Linux_102274b48);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar1);
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007126b4;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007126b4:
  puVar1 = PTR_s_Linux_102274b48;
  if (PTR_s_Linux_102274b48 != (undefined *)0x0) {
    _strlen(PTR_s_Linux_102274b48);
  }
  QString::fromUtf8_helper((char *)&local_38,(int)puVar1);
  QString::operator=(param_1 + 1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10071271b;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10071271b:
  QKeySequence::QKeySequence(local_60,0x4000058,0,0,0);
  QKeySequence::QKeySequence(local_68,0x10000058,0,0,0);
  FUN_100714b00(local_58,local_60,local_68);
  param_1 = param_1 + 2;
  FUN_100559c70(param_1,local_58);
  QKeySequence::~QKeySequence(local_50);
  QKeySequence::~QKeySequence(local_58);
  QKeySequence::~QKeySequence(local_68);
  QKeySequence::~QKeySequence(local_60);
  QKeySequence::QKeySequence(local_88,0x4000043,0,0,0);
  QKeySequence::QKeySequence(local_90,0x10000043,0,0,0);
  FUN_100714b00(local_80,local_88,local_90);
  FUN_100559c70(param_1,local_80);
  QKeySequence::~QKeySequence(local_78);
  QKeySequence::~QKeySequence(local_80);
  QKeySequence::~QKeySequence(local_90);
  QKeySequence::~QKeySequence(local_88);
  QKeySequence::QKeySequence(local_b0,0x4000056,0,0,0);
  QKeySequence::QKeySequence(local_b8,0x10000056,0,0,0);
  FUN_100714b00(local_a8,local_b0,local_b8);
  FUN_100559c70(param_1,local_a8);
  QKeySequence::~QKeySequence(local_a0);
  QKeySequence::~QKeySequence(local_a8);
  QKeySequence::~QKeySequence(local_b8);
  QKeySequence::~QKeySequence(local_b0);
  QKeySequence::QKeySequence(local_d8,0x4000041,0,0,0);
  QKeySequence::QKeySequence(local_e0,0x10000041,0,0,0);
  FUN_100714b00(local_d0,local_d8,local_e0);
  FUN_100559c70(param_1,local_d0);
  QKeySequence::~QKeySequence(local_c8);
  QKeySequence::~QKeySequence(local_d0);
  QKeySequence::~QKeySequence(local_e0);
  QKeySequence::~QKeySequence(local_d8);
  QKeySequence::QKeySequence(local_100,0x400005a,0,0,0);
  QKeySequence::QKeySequence(local_108,0x1000005a,0,0,0);
  FUN_100714b00(local_f8,local_100,local_108);
  FUN_100559c70(param_1,local_f8);
  QKeySequence::~QKeySequence(local_f0);
  QKeySequence::~QKeySequence(local_f8);
  QKeySequence::~QKeySequence(local_108);
  QKeySequence::~QKeySequence(local_100);
  QKeySequence::QKeySequence(local_128,0x4000053,0,0,0);
  QKeySequence::QKeySequence(local_130,0x10000053,0,0,0);
  FUN_100714b00(local_120,local_128,local_130);
  FUN_100559c70(param_1,local_120);
  QKeySequence::~QKeySequence(local_118);
  QKeySequence::~QKeySequence(local_120);
  QKeySequence::~QKeySequence(local_130);
  QKeySequence::~QKeySequence(local_128);
  QKeySequence::QKeySequence(local_150,0x4000051,0,0,0);
  QKeySequence::QKeySequence(local_158,0x10000051,0,0,0);
  FUN_100714b00(local_148,local_150,local_158);
  FUN_100559c70(param_1,local_148);
  QKeySequence::~QKeySequence(local_140);
  QKeySequence::~QKeySequence(local_148);
  QKeySequence::~QKeySequence(local_158);
  QKeySequence::~QKeySequence(local_150);
  QKeySequence::QKeySequence(local_178,0x400004e,0,0,0);
  QKeySequence::QKeySequence(local_180,0x1000004e,0,0,0);
  FUN_100714b00(local_170,local_178,local_180,2);
  FUN_100559c70(param_1,local_170);
  QKeySequence::~QKeySequence(local_168);
  QKeySequence::~QKeySequence(local_170);
  QKeySequence::~QKeySequence(local_180);
  QKeySequence::~QKeySequence(local_178);
  return;
}

