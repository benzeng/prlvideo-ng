
void FUN_100dac6b0(int *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *param_1;
  lVar3 = 0;
  if (0 < iVar2) {
    do {
      lVar1 = *(long *)(*(long *)(param_1 + 2) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_100dabfc0(lVar1,param_2);
        iVar2 = *param_1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  _free(*(void **)(param_1 + 2));
  _free(param_1);
  return;
}

