
void FUN_100072d60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  QMenu *pQVar4;
  
  lVar1 = FUN_10075afb0(*(undefined8 *)(param_1 + 0x10));
  if (lVar1 == 0) {
    FUN_100df99c0("[APP_TRAY_ICON]","prl_client_app",0,"Failed to close Start menu. VM is invalid");
  }
  else {
    uVar2 = FUN_10018c280(lVar1);
    FUN_100319c80(uVar2);
    FUN_10033ac40();
  }
  uVar3 = false;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (uVar3 = false, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  CSystemStatusBarItem::setSelected((bool)uVar3);
  pQVar4 = (QMenu *)0x0;
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (pQVar4 = (QMenu *)0x0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
    pQVar4 = *(QMenu **)(param_1 + 0x20);
  }
  CSystemStatusBarItem::popupMenu(pQVar4);
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (*(long *)(param_1 + 0x20) != 0)) {
    CSystemStatusBarItem::setSelected(SUB81(*(long *)(param_1 + 0x20),0));
    return;
  }
  return;
}

