
void FUN_10033e090(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    pcVar5 = " Failed to switch VM desktop view mode. VM desktop object does not exist!";
  }
  else {
    lVar3 = FUN_100319390();
    if (lVar3 != 0) {
      uVar4 = 0;
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
      }
      iVar2 = FUN_100319ae0(uVar4);
      if (iVar2 == 3) {
        iVar2 = FUN_10018d460(lVar3);
        if (iVar2 != 0x3000000a) {
          bVar1 = FUN_10018c850(lVar3);
          uVar4 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar4 = *(undefined8 *)(param_1 + 0x18);
          }
          uVar4 = FUN_100319c50(uVar4);
          FUN_100330e80(uVar4,bVar1 ^ 1);
          uVar4 = 0;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
            uVar4 = *(undefined8 *)(param_1 + 0x18);
          }
          uVar4 = FUN_100319c50(uVar4);
          FUN_100330c70(uVar4,1,0);
          return;
        }
      }
      return;
    }
    pcVar5 = " Failed to switch VM desktop view mode. VM object does not exist!";
  }
  FUN_100df99c0("","prl_client_app",0,pcVar5);
  return;
}

