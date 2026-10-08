
undefined1 (*) [16]
FUN_100372500(undefined1 (*param_1) [16],undefined8 param_2,undefined8 *param_3,QRect *param_4)

{
  QArrayData *pQVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  QArrayData *local_168;
  QVariant local_160;
  QArrayData *local_150;
  QVariant local_148;
  QVariant local_138;
  QArrayData *local_128;
  QVariant local_120;
  QString local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  QVariant local_b8;
  QArrayData *local_a8;
  QVariant local_a0;
  QVariant local_90;
  QArrayData *local_80;
  QVariant local_78;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  *(undefined4 *)*param_1 = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(undefined4 *)(*param_1 + 8) = 0xffffffff;
  *(undefined4 *)(*param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[1] = 0;
  *(undefined4 *)(param_1[1] + 4) = 0;
  *(undefined4 *)(param_1[1] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[1] + 0xc) = 0xffffffff;
  *(undefined4 *)param_1[2] = 0;
  *(undefined4 *)(param_1[2] + 4) = 0;
  *(undefined **)param_1[3] = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1[3] + 8) = 0xffffffff;
  *(undefined4 *)(param_1[3] + 0xc) = 0xffffffff;
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  QSettings::beginGroup((QString *)&local_40);
  local_58 = (QArrayData *)QString::fromAscii_helper("Window Frame Geometry",0x15);
  QVariant::QVariant(&local_68,param_4);
  QSettings::value((QString *)&local_50,&local_40);
  auVar8 = QVariant::toRect();
  *param_1 = auVar8;
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100372633;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100372633:
  local_80 = (QArrayData *)QString::fromAscii_helper("Window Normal Geometry",0x16);
  QVariant::QVariant(&local_90,param_4 + 0x10);
  QSettings::value((QString *)&local_78,&local_40);
  auVar8 = QVariant::toRect();
  param_1[1] = auVar8;
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003726c8;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003726c8:
  local_a8 = (QArrayData *)QString::fromAscii_helper("Window States",0xd);
  QVariant::QVariant(&local_b8,*(int *)(param_4 + 0x20));
  QSettings::value((QString *)&local_a0,&local_40);
  uVar2 = QVariant::toInt((bool *)&local_a0);
  *(undefined4 *)param_1[2] = uVar2;
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037276f;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_10037276f:
  local_d0 = (QArrayData *)QString::fromAscii_helper("Window Screen Number",0x14);
  QVariant::QVariant(&local_e0,*(int *)(param_4 + 0x24));
  QSettings::value((QString *)&local_c8,&local_40);
  uVar2 = QVariant::toInt((bool *)&local_c8);
  *(undefined4 *)(param_1[2] + 4) = uVar2;
  QVariant::~QVariant(&local_c8);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100372816;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100372816:
  local_f8 = (QArrayData *)QString::fromAscii_helper("Window Space Number",0x13);
  QVariant::QVariant(&local_108,*(int *)(param_4 + 0x28));
  QSettings::value((QString *)&local_f0,&local_40);
  uVar2 = QVariant::toInt((bool *)&local_f0);
  *(undefined4 *)(param_1[2] + 8) = uVar2;
  QVariant::~QVariant(&local_f0);
  QVariant::~QVariant(&local_108);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_29 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003728bd;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1003728bd:
  local_128 = (QArrayData *)QString::fromAscii_helper("Window Space UUID",0x11);
  QVariant::QVariant(&local_138,(QString *)(param_4 + 0x30));
  QSettings::value((QString *)&local_120,&local_40);
  QVariant::toString();
  QString::operator=((QString *)(param_1 + 3),&local_110);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_29 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10037295d;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_10037295d:
  QVariant::~QVariant(&local_120);
  QVariant::~QVariant(&local_138);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003729ab;
    }
    QArrayData::deallocate(local_128,2,8);
  }
LAB_1003729ab:
  local_150 = (QArrayData *)QString::fromAscii_helper("Window Guest Screen Resolution",0x1e);
  QVariant::QVariant(&local_160,(QSize *)(param_4 + 0x38));
  QSettings::value((QString *)&local_148,&local_40);
  uVar3 = QVariant::toSize();
  *(undefined8 *)(param_1[3] + 8) = uVar3;
  QVariant::~QVariant(&local_148);
  QVariant::~QVariant(&local_160);
  if (*(int *)local_150 != -1) {
    if (*(int *)local_150 != 0) {
      LOCK();
      *(int *)local_150 = *(int *)local_150 + -1;
      local_29 = *(int *)local_150 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100372a53;
    }
    QArrayData::deallocate(local_150,2,8);
  }
LAB_100372a53:
  if (DAT_10230ffd0 < 3) goto LAB_100372b9a;
  pQVar1 = (QArrayData *)*param_3;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  iVar6 = (int)*(undefined8 *)*param_1;
  iVar4 = (int)((ulong)*(undefined8 *)*param_1 >> 0x20);
  iVar7 = (int)*(undefined8 *)param_1[1];
  iVar5 = (int)((ulong)*(undefined8 *)param_1[1] >> 0x20);
  FUN_100df99c0("[CONSOLE_MNG]","prl_client_app",3,
                " Read window geometry from %s: frame geometry %dx%d (%d,%d), normal geometry %dx%d (%d, %d), states %d, screen number %d"
                ,local_168 + *(long *)(local_168 + 0x10),
                ((int)*(undefined8 *)(*param_1 + 8) + 1) - iVar6,
                ((int)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20) + 1) - iVar4,iVar6,iVar4,
                ((int)*(undefined8 *)(param_1[1] + 8) + 1) - iVar7,
                ((int)((ulong)*(undefined8 *)(param_1[1] + 8) >> 0x20) + 1) - iVar5,iVar7,iVar5,
                (int)*(undefined8 *)param_1[2],(int)((ulong)*(undefined8 *)param_1[2] >> 0x20));
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_29 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100372b64;
    }
    QArrayData::deallocate(local_168,1,8);
  }
LAB_100372b64:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100372b9a;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100372b9a:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)&local_40);
  return param_1;
}

