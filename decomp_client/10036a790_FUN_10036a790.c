
void FUN_10036a790(QWidget *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QVariant local_58;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  if (param_1 == (QWidget *)0x0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (*(long *)(lVar1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(lVar1 + 0x20) == 0) {
    return;
  }
  if (*(long *)(lVar1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(lVar1 + 0x30) == 0) {
    return;
  }
  if ((param_2 & 1) != 0) {
    plVar5 = (long *)FUN_10018c2b0();
    pcVar2 = *(code **)(*plVar5 + 0x80);
    local_48 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.Modality.Opacity",0x1f);
    (*pcVar2)(&local_40,plVar5,&local_48);
    dVar8 = (double)QVariant::toReal((bool *)&local_40);
    QVariant::~QVariant(&local_40);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10036a880;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10036a880:
    dVar9 = DAT_100e151c8;
    if (DAT_100e151c8 <= dVar8) {
      dVar9 = dVar8;
    }
    QWidget::setWindowOpacity(dVar9);
  }
  if ((param_2 & 2) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
    uVar6 = 0;
    if ((lVar1 != 0) && (uVar6 = 0, *(int *)(lVar1 + 4) != 0)) {
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
    }
    plVar5 = (long *)FUN_10018c2b0(uVar6);
    pcVar2 = *(code **)(*plVar5 + 0x80);
    local_60 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.Modality.StayOnTop",0x21);
    (*pcVar2)(&local_58,plVar5,&local_60);
    bVar3 = (bool)QVariant::toBool();
    WidgetUtils::setStaysOnTop(param_1,bVar3);
    QVariant::~QVariant(&local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10036a93f;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_10036a93f:
  if ((param_2 & 4) == 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  uVar6 = 0;
  if ((lVar1 != 0) && (uVar6 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
  }
  plVar5 = (long *)FUN_10018c2b0(uVar6);
  pcVar2 = *(code **)(*plVar5 + 0x80);
  local_78 = (QArrayData *)
             QString::fromAscii_helper("Settings.Tools.Modality.CaptureMouseClicks",0x2a);
  (*pcVar2)(&local_70,plVar5,&local_78);
  bVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10036a9de;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10036a9de:
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  uVar6 = 0;
  if ((lVar1 != 0) && (uVar6 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
  }
  uVar6 = FUN_10018c280(uVar6);
  uVar7 = FUN_100319d40(uVar6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
  uVar6 = 0;
  if ((lVar1 != 0) && (uVar6 = 0, *(int *)(lVar1 + 4) != 0)) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x30);
  }
  uVar6 = FUN_100379860(uVar6);
  if (bVar4 == 0) {
    FUN_10035b750(uVar7,uVar6);
  }
  else {
    FUN_10035b410();
  }
  FUN_10006bb60(*(undefined8 *)(param_1 + 0x40),bVar4 ^ 1);
  return;
}

