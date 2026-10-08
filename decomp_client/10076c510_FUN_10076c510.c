
void FUN_10076c510(long *param_1)

{
  QPixmap *pQVar1;
  QString *pQVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QPixmap local_58 [39];
  undefined1 local_31;
  
  pQVar1 = *(QPixmap **)(param_1[0xc] + 8);
  lVar7 = 0;
  if ((param_1[0xd] != 0) && (lVar7 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
    lVar7 = param_1[0xe];
  }
  uVar3 = FUN_10018f860(lVar7);
  lVar7 = 0;
  if ((param_1[0xd] != 0) && (lVar7 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
    lVar7 = param_1[0xe];
  }
  uVar4 = FUN_10018f890(lVar7);
  ResourceUtils::getOsIconPath(&local_60,uVar3,uVar4,4);
  QPixmap::QPixmap(local_58,&local_60,0,0);
  QLabel::setPixmap(pQVar1);
  QPixmap::~QPixmap(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076c5d2;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10076c5d2:
  pQVar2 = *(QString **)(param_1[0xc] + 0x30);
  lVar7 = 0;
  if ((param_1[0xd] != 0) && (lVar7 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
    lVar7 = param_1[0xe];
  }
  FUN_10018d830(&local_68,lVar7);
  QLabel::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076c638;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10076c638:
  pQVar2 = *(QString **)(param_1[0xc] + 0x20);
  lVar7 = 0;
  if ((param_1[0xd] != 0) && (lVar7 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
    lVar7 = param_1[0xe];
  }
  FUN_10018f890(lVar7);
  EnumUtils::OsVerToString((uint)&local_70);
  QLabel::setText(pQVar2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076c6a5;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10076c6a5:
  pQVar2 = *(QString **)(param_1[0xc] + 0x28);
  lVar7 = 0;
  if ((param_1[0xd] != 0) && (lVar7 = 0, *(int *)(param_1[0xd] + 4) != 0)) {
    lVar7 = param_1[0xe];
  }
  FUN_10018c2b0(lVar7);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getVmDescription();
  QLabel::setText(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10076c723;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10076c723:
  iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
  iVar6 = 0x11c;
  if (0x11b < iVar5) {
    iVar6 = iVar5;
  }
  iVar5 = 0x354;
  if (iVar6 < 0x355) {
    iVar5 = iVar6;
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  QWidget::setFixedSize((int)param_1,iVar5);
  return;
}

