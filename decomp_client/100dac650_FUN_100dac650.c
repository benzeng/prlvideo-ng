
void FUN_100dac650(int *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *param_1;
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 2) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_100dabf60(lVar1,param_2);
        iVar2 = *param_1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  param_1[6] = 0;
  return;
}

