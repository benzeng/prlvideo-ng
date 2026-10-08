
void FUN_1002424e0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018a9d0(uVar5);
  if (iVar1 == 0x30000004) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = FUN_10018f120(uVar5,0xc,0);
    if (lVar2 == 0) {
      pcVar4 = "(!)Warning: Failed to get sound device.";
    }
    else {
      lVar3 = FUN_100146b20(lVar2);
      if (lVar3 == 0) {
        pcVar4 = "(!)Warning: Failed to get sound device configuration.";
      }
      else {
        iVar1 = CVmDevice::getEnabled();
        if ((iVar1 != 1) || (iVar1 = CVmDevice::getConnected(), iVar1 == 1)) {
          return;
        }
        FUN_100147630(lVar2);
        pcVar4 = "Task Upgrade: subtask EnableSound: sound enabled.";
      }
    }
    FUN_100df99c0("","prl_client_app",0,pcVar4);
    return;
  }
  return;
}

