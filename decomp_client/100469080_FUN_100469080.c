
void FUN_100469080(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  byte bVar15;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  QArrayData *local_60;
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar11 = FUN_10044e460();
  if (lVar11 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    FUN_100459290(param_1);
    return;
  }
  uVar12 = FUN_10044e560(param_1);
  FUN_100459010(&local_60,param_1);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_31 = *(int *)local_60 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1df1f84);
  QString::append(&local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100469127;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100469127:
  FUN_1003e1800(&local_50,uVar12,&local_58,0);
  iVar8 = QVariant::toUInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100469180;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100469180:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004691b0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004691b0:
  lVar11 = FUN_10044e5c0(param_1);
  if (lVar11 == 0) {
    cVar4 = '\0';
  }
  else {
    FUN_10044e5c0(param_1);
    QObject::property((char *)&local_70);
    cVar4 = QVariant::toBool();
    QVariant::~QVariant(&local_70);
  }
  lVar11 = FUN_10044e5c0(param_1);
  if ((lVar11 != 0) && (cVar4 == '\x01')) {
    FUN_10044e680(param_1);
    iVar9 = CMappingModel::getSubmitPolicy();
    if (iVar9 == 0) {
      FUN_10044e680(param_1);
      cVar5 = CMappingModel::hasDataToSubmit();
      if (cVar5 == '\0') {
        pcVar13 = (char *)FUN_10044e5c0(param_1);
        puVar3 = PTR_s_newlyAddedDevice_1021f1df8;
        QVariant::QVariant(&local_80,false);
        QObject::setProperty(pcVar13,(QVariant *)puVar3);
        QVariant::~QVariant(&local_80);
        cVar4 = '\0';
      }
    }
  }
  uVar12 = FUN_10044e680(param_1);
  bVar6 = FUN_1003e5e80(uVar12);
  uVar12 = FUN_10044e460(param_1);
  iVar9 = FUN_10018a9d0(uVar12);
  uVar12 = FUN_10044e460(param_1);
  iVar10 = FUN_10018a9d0(uVar12);
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x60);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar12 = FUN_10044e660(param_1);
  lVar11 = FUN_100458c00(param_1);
  uVar7 = FUN_1003bf720(uVar12,*(undefined4 *)(lVar11 + 0x68));
  (*pcVar2)(plVar1,uVar7);
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x68);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar12 = FUN_10044e660(param_1);
  lVar11 = FUN_100458c00(param_1);
  uVar7 = FUN_1003bf720(uVar12,*(undefined4 *)(lVar11 + 0x68));
  (*pcVar2)(plVar1,uVar7);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68);
  uVar14 = FUN_10044b340(param_1);
  uVar14 = FUN_1003b0b00(uVar14);
  FUN_100459010(&local_88,param_1);
  FUN_1003adb60(uVar14,&local_88);
  CProgressIndicator::toggleAnimation(SUB81(uVar12,0));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004693e6;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1004693e6:
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x68);
  uVar14 = FUN_10044b340(param_1);
  uVar14 = FUN_1003b0b00(uVar14);
  FUN_100459010(&local_90,param_1);
  FUN_1003adb60(uVar14,&local_90);
  CProgressIndicator::showAnimationWidget(SUB81(uVar12,0));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046945f;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10046945f:
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x80);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar12 = FUN_10044e660(param_1);
  lVar11 = FUN_100458c00(param_1);
  uVar7 = FUN_1003bf970(uVar12,*(undefined4 *)(lVar11 + 0x68));
  (*pcVar2)(plVar1,uVar7);
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90);
  FUN_10044e680(param_1);
  CMappingModel::isSubmiting();
  bVar15 = iVar9 != 0x30000009 & (bVar6 ^ 1);
  QWidget::setEnabled(SUB81(uVar12,0));
  uVar12 = FUN_10044b340(param_1);
  uVar12 = FUN_1003b0b00(uVar12);
  FUN_100459010(&local_98,param_1);
  cVar5 = FUN_1003adb60(uVar12,&local_98);
  bVar6 = 1;
  if (cVar5 == '\0') {
    uVar12 = FUN_10044b340(param_1);
    uVar12 = FUN_1003b0b00(uVar12);
    FUN_100459010(&local_a0,param_1);
    cVar5 = FUN_1003adb50(uVar12,&local_a0);
    bVar6 = 1;
    if (cVar5 == '\0') {
      FUN_10044e680(param_1);
      bVar6 = CMappingModel::isSubmiting();
    }
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100469594;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_100469594:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004695d0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004695d0:
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x58);
  if ((cVar4 == '\0') && ((iVar10 == 0x30000001 & (bVar6 ^ 1) & bVar15) == 1)) {
    uVar14 = FUN_10044e460(param_1);
    cVar5 = FUN_10018da50(uVar14);
    if (cVar5 != '\0') {
      uVar14 = FUN_10044e460(param_1);
      FUN_10018ed10(uVar14);
    }
  }
  QWidget::setEnabled(SUB81(uVar12,0));
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60);
  if ((cVar4 == '\0' && bVar6 == 0) &&
     (((iVar10 == 0x30000001 || (iVar10 == 0x30000004)) && (bVar15 != 0)))) {
    uVar14 = FUN_10044e460(param_1);
    cVar4 = FUN_10018da50(uVar14);
    if (cVar4 != '\0') {
      uVar14 = FUN_10044e460(param_1);
      FUN_10018ed10(uVar14);
    }
  }
  QWidget::setEnabled(SUB81(uVar12,0));
  FUN_100469990(param_1);
  plVar1 = *(long **)(*(long *)(param_1 + 0x68) + 0x48);
  pcVar2 = *(code **)(*plVar1 + 0x68);
  uVar12 = FUN_10044e660(param_1);
  lVar11 = FUN_100458c00(param_1);
  uVar7 = FUN_1003bfa40(uVar12,*(undefined4 *)(lVar11 + 0x68));
  (*pcVar2)(plVar1,uVar7);
  if (iVar8 != 1) {
    FUN_10046b3f0(param_1,0);
  }
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0);
  uVar14 = FUN_10044e460(param_1);
  uVar14 = FUN_10018c2b0(uVar14);
  FUN_100112cc0(uVar14);
  QWidget::setEnabled(SUB81(uVar12,0));
  FUN_100459290(param_1);
  return;
}

