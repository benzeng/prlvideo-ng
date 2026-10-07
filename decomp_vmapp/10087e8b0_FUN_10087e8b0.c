
undefined8 FUN_10087e8b0(long param_1,undefined1 *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  piVar3 = *(int **)(param_1 + 0x30);
  FUN_10087d610(param_1,0xf);
  iVar2 = *piVar3;
  iVar5 = param_3 + -1;
  if (iVar2 < param_3) {
    iVar5 = iVar2;
  }
  if (iVar5 < 1) {
    *param_2 = 0;
    uVar4 = 0;
  }
  else {
    lVar6 = 0;
    do {
      if (iVar5 <= lVar6) break;
      pcVar1 = (char *)(*(long *)(piVar3 + 2) + lVar6);
      lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\n');
    uVar4 = FUN_10087e7b0(param_1,param_2);
    if (0 < (int)uVar4) {
      param_2[(int)uVar4] = 0;
    }
  }
  return uVar4;
}

