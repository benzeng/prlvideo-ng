
size_t FUN_100766fe0(long *param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  
  sVar2 = 0xffffffffffffffff;
  if (param_2 != (void *)0x0) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar3 = (uint)param_3;
    sVar2 = param_3;
    if ((long)(ulong)uVar1 <= (long)param_3) {
      uVar3 = uVar1;
      sVar2 = (ulong)uVar1;
    }
    _memcpy((void *)*param_1,param_2,sVar2);
    *param_1 = *param_1 + sVar2;
    *(uint *)(param_1 + 1) = (int)param_1[1] - uVar3;
  }
  return sVar2;
}

