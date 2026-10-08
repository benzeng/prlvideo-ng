
undefined1 FUN_10033aab0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar5 = "Failed to open guest menu. VM desktop object does not exist!";
  }
  else {
    lVar3 = FUN_100319390();
    if (lVar3 != 0) {
      iVar2 = FUN_10018a9d0(lVar3);
      if (iVar2 != 0x30000005) {
        return 1;
      }
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      uVar4 = FUN_100319c50(uVar4);
      cVar1 = FUN_100330a50(uVar4);
      if (cVar1 == '\0') {
        return 0;
      }
      FUN_100192d10(lVar3,0,0,0);
      return 0;
    }
    pcVar5 = "Failed to open guest menu. VM object does not exist!";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar5);
  return 0;
}

