
void FUN_1004ca6d0(long param_1)

{
  QString *pQVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  QArrayData *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  Data *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  lVar4 = FUN_10044e460();
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Vm instance is null.");
    return;
  }
  cVar2 = FUN_1003b1e10();
  if (cVar2 == '\0') {
    uVar7 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
  }
  else {
    uVar5 = FUN_10044b340(param_1);
    uVar5 = FUN_1003b0ad0(uVar5);
    FUN_1003e5ea0(uVar5);
    CProgressIndicator::toggleAnimation(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),0));
    CProgressIndicator::showAnimationWidget
              (SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60),0));
    uVar7 = (undefined1)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
  }
  QWidget::setEnabled((bool)uVar7);
  uVar5 = FUN_10044e460(param_1);
  uVar5 = FUN_10018c2b0(uVar5);
  cVar2 = FUN_100112cc0(uVar5);
  uVar5 = FUN_10044e560(param_1);
  local_48 = (QArrayData *)QString::fromAscii_helper("Settings.Autoprotect.Enabled",0x1c);
  FUN_1003e1800(&local_40,uVar5,&local_48,0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004ca819;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004ca819:
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  if (cVar2 == '\0') {
    if (cVar3 == '\0') {
      local_88 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
      FUN_100359270(&local_50,&local_88);
      local_90 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
      FUN_100359270(&local_50,&local_90);
    }
  }
  else {
    local_58 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x58);
    FUN_100359270(&local_50,&local_58);
    local_60 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x60);
    FUN_100359270(&local_50,&local_60);
    local_68 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x80);
    FUN_100359270(&local_50,&local_68);
    local_70 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30);
    FUN_100359270(&local_50,&local_70);
    local_78 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x38);
    FUN_100359270(&local_50,&local_78);
    local_80 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
    FUN_100359270(&local_50,&local_80);
  }
  uVar5 = FUN_10044e460(param_1);
  uVar5 = FUN_10018d490(uVar5);
  cVar2 = FUN_10076d810(uVar5);
  if ((cVar2 == '\0') && (cVar2 = FUN_10076d9d0(), cVar2 == '\0')) {
    local_98 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x68);
    FUN_100359270(&local_50,&local_98);
  }
  local_b8 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_b8);
      lVar4 = (long)*(int *)(local_b8 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_b8 + lVar4 * 8) &&
         (lVar6 = *(int *)(local_b8 + 0xc) - lVar4, lVar6 != 0 && lVar4 <= *(int *)(local_b8 + 0xc))
         ) {
        _memcpy(local_b8 + lVar4 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar6 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
  local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
    do {
      local_a0 = 1;
      QWidget::setEnabled(SUB81(*(undefined8 *)local_b0,0));
      local_b0 = local_b0 + 8;
    } while (local_b0 != local_a8);
  }
  local_a0 = 1;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004caa5b;
    }
    QListData::dispose(local_b8);
  }
LAB_1004caa5b:
  FUN_1004cac30(param_1);
  pQVar1 = *(QString **)(*(long *)(param_1 + 0x38) + 0x68);
  cVar2 = FUN_10076d460();
  if (cVar2 == '\0') {
    QMetaObject::tr((char *)&local_c0,(char *)&PTR_PTR_102217740,0x1df9eec);
  }
  else {
    QMetaObject::tr((char *)&local_c0,(char *)&PTR_PTR_102217740,0x1df9ed3);
  }
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_29 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004cab00;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_1004cab00:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return;
      }
      local_29 = 0;
    }
    QListData::dispose(local_50);
  }
  return;
}

