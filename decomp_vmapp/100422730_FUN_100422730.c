
undefined8 FUN_100422730(int *param_1,ulong param_2,void *param_3,size_t param_4)

{
  ulong uVar1;
  size_t sVar2;
  
  param_2 = param_2 & 0xffffffff;
  if (((param_2 + param_4 <= *(ulong *)(param_1 + 4)) &&
      (uVar1 = _lseek(*param_1,param_2,0), uVar1 == param_2)) &&
     (sVar2 = _write(*param_1,param_3,param_4), sVar2 == param_4)) {
    return 1;
  }
  return 0;
}

