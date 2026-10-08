
undefined8 FUN_100263d50(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar1 = FUN_100117fa0(uVar3,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),
                        local_24);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  lVar2 = FUN_100117fa0(uVar3,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x34),
                        local_28);
  if ((lVar1 == 0) || (lVar2 == 0)) {
    pcVar4 = "Src";
    if (lVar1 != 0) {
      pcVar4 = "Dst";
    }
    FUN_100df99c0("","prl_client_app",0,"Cannot swap slots. %s device is 0!",pcVar4);
    uVar3 = 0x80000009;
  }
  else {
    CVmClusteredDevice::setStackIndex((uint)lVar1);
    CVmClusteredDevice::setInterfaceType((uint)lVar1);
    CVmClusteredDevice::setStackIndex((uint)lVar2);
    CVmClusteredDevice::setInterfaceType((uint)lVar2);
    uVar3 = 0;
  }
  return uVar3;
}

