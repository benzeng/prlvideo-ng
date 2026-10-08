
void FUN_1007be6d0(QObject *param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  int local_28;
  undefined1 local_19;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    QTimer::singleShot(1,param_1,"1onRecreateActions()");
    return;
  }
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x30);
  if (lVar2 == 0) {
    pcVar3 = "(!)Error: can\'t get VM instance to update device menu.";
LAB_1007be7b8:
    FUN_100df99c0("","prl_client_app",0,pcVar3);
  }
  else {
    lVar2 = FUN_10018f120(lVar2,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (lVar2 == 0) {
      pcVar3 = "(!)Error: can\'t get VM device to update device menu.";
      goto LAB_1007be7b8;
    }
    lVar2 = FUN_100146b20(lVar2);
    if (lVar2 == 0) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: can\'t get device configuration to update menu.");
      return;
    }
    if ((*(int *)(param_1 + 0x40) == 0xf) && (3 < DAT_10230ffd0)) {
      FUN_100df99c0("","prl_client_app",4,"recreating actions for usb device");
    }
    FUN_1007baa80(param_1,lVar2);
    FUN_1007bb7c0(param_1,lVar2);
    param_1[0x68] = (QObject)0x0;
  }
  if (param_1[0x68] == (QObject)0x0) {
    return;
  }
  FUN_100df99c0("","prl_client_app",0,"recreation actions failed so enable it back");
  QWidget::actions();
  local_40 = local_48;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_40);
      lVar2 = (long)*(int *)(local_40 + 8);
      if ((local_48 + (long)*(int *)(local_48 + 8) * 8 != local_40 + lVar2 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar2, lVar4 != 0 && lVar2 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar2 * 8 + 0x10,local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + 1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
    }
  }
  local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
  local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
  local_28 = 1;
  if (*(int *)local_48 == -1) {
LAB_1007be8ef:
    for (; local_38 != local_30; local_38 = local_38 + 8) {
      if (*(long *)local_38 != 0) {
        QAction::setEnabled(SUB81(*(long *)local_38,0));
      }
      local_28 = 1;
    }
  }
  else {
    if (*(int *)local_48 == 0) {
LAB_1007be8c3:
      QListData::dispose(local_48);
    }
    else {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if (!(bool)local_19) goto LAB_1007be8c3;
    }
    if (local_28 != 0) goto LAB_1007be8ef;
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1007be933;
      local_19 = 0;
    }
    QListData::dispose(local_40);
  }
LAB_1007be933:
  param_1[0x68] = (QObject)0x0;
  return;
}

