
undefined8 FUN_1009cf450(undefined8 *param_1,ulong param_2,void *param_3,size_t param_4)

{
  int *piVar1;
  ulong uVar2;
  size_t sVar3;
  
  piVar1 = (int *)*param_1;
  param_2 = param_2 & 0xffffffff;
  if (((param_2 + param_4 <= *(ulong *)(piVar1 + 4)) &&
      (uVar2 = _lseek(*piVar1,param_2,0), uVar2 == param_2)) &&
     (sVar3 = _write(*piVar1,param_3,param_4), sVar3 == param_4)) {
    return 1;
  }
  return 0;
}

