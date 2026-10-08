
void FUN_10033dfe0(long param_1)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar3 = " Failed to switch VM desktop view mode. VM desktop object does not exist!";
  }
  else {
    lVar2 = FUN_100319390();
    if (lVar2 != 0) {
      iVar1 = FUN_10018d460(lVar2);
      if (iVar1 != 0x30000010) {
        iVar1 = FUN_10018d460(lVar2);
        if (iVar1 != 0x30000009) {
          iVar1 = FUN_10018d460(lVar2);
          if (iVar1 != 0x30000001) {
            return;
          }
        }
      }
      FUN_10033ea40(param_1);
      return;
    }
    pcVar3 = " Failed to switch VM desktop view mode. VM object does not exist!";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar3);
  return;
}

