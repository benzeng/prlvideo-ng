
undefined8 FUN_100dac600(int *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  iVar1 = *param_2;
  if ((((-1 < (long)iVar1) && (iVar1 < *param_1)) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 2) + (long)iVar1 * 8), lVar2 != 0)) &&
     (*(long *)(param_2 + 2) != 0)) {
    FUN_100dac140(lVar2,param_2 + 2);
    param_1[6] = param_1[6] + -1;
    return 0;
  }
  piVar3 = ___error();
  *piVar3 = 0x16;
  return 0xffffffff;
}

