
undefined8 FUN_1002d3270(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018a9d0(uVar2);
  if (iVar1 != 0x30000004) {
    uVar3 = 0;
    uVar2 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
    }
    iVar1 = FUN_10018a9d0(uVar2);
    if (iVar1 != 0x30000005) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: Can\'t create VM dump, it available for running or paused VMs only");
      uVar3 = 0x80000009;
    }
  }
  return uVar3;
}

