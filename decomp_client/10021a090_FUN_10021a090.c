
void FUN_10021a090(QObject *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  QArrayData *local_28;
  undefined1 local_1a;
  
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10018c280(uVar2);
  uVar2 = FUN_100319bf0(uVar2);
  local_28 = (QArrayData *)QString::fromAscii_helper("parallels.CopyPasteTool.guest.win",0x21);
  lVar3 = FUN_10032d8b0(uVar2,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10021a119;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10021a119:
  if (lVar3 == 0) {
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0x80000009);
  }
  else {
    iVar1 = FUN_10032c830(lVar3);
    if (iVar1 == 1) {
      QTimer::singleShot(1000,param_1,"1setVmReadyToUse()");
    }
  }
  if (2 < DAT_10230ffd0) {
    if (lVar3 == 0) {
      pcVar4 = "undefined";
    }
    else {
      iVar1 = FUN_10032c830(lVar3);
      pcVar4 = "not active";
      if (iVar1 == 1) {
        pcVar4 = "active";
      }
    }
    FUN_100df99c0("","prl_client_app",3,"Copy past tool stage changed to [%s]",pcVar4);
  }
  return;
}

