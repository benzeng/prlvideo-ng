
undefined8 FUN_100dac550(int *param_1,int *param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  if ((-1 < (long)iVar3) && (*(long *)(param_2 + 2) != 0)) {
    iVar3 = FUN_100dac190(*(undefined8 *)(*(long *)(param_1 + 2) + (long)iVar3 * 8),param_2 + 2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = *param_2;
  }
  iVar3 = iVar3 + 1;
  *param_2 = iVar3;
  iVar4 = *param_1;
  if (iVar3 < iVar4) {
    piVar1 = param_2 + 2;
    do {
      piVar1[0] = 0;
      piVar1[1] = 0;
      lVar2 = *(long *)(*(long *)(param_1 + 2) + (long)iVar3 * 8);
      if (lVar2 != 0) {
        iVar3 = FUN_100dac190(lVar2,piVar1);
        if (iVar3 != 0) {
          return 1;
        }
        iVar3 = *param_2;
        iVar4 = *param_1;
      }
      iVar3 = iVar3 + 1;
      *param_2 = iVar3;
    } while (iVar3 < iVar4);
  }
  if (iVar3 == iVar4) {
    *param_2 = -1;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return 0;
}

