
undefined8 FUN_1002d7fb0(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar1 = FUN_10018a9d0(uVar4);
  if (iVar1 == 0x30000004) {
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
    }
    lVar2 = FUN_100190790(uVar4);
    if (lVar2 != 0) {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar4 = FUN_100190790(uVar4);
      iVar1 = FUN_1007c9210(uVar4);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_100df99c0("","prl_client_app",0,"(!)Error: Debugger already running");
      return 0x80000275;
    }
    pcVar3 = "(!)Error: Debugging is not supported for this VM";
  }
  else {
    pcVar3 = "(!)Error: Can\'t start VM debugging, it available for running VMs only";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar3);
  return 0x80000009;
}

