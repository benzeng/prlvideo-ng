
undefined8 FUN_100c01280(uint *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*param_1;
  if (uVar2 != 0) {
    if (uVar2 + param_3 < 8) {
      _memcpy((void *)((long)param_1 + uVar2 + 4),param_2,param_3);
      *param_1 = *param_1 + (int)param_3;
      return 1;
    }
    sVar1 = 8 - uVar2;
    _memcpy((void *)((long)param_1 + uVar2 + 4),param_2,sVar1);
    param_3 = param_3 - sVar1;
    param_2 = (void *)((long)param_2 + sVar1);
    *param_1 = 0;
    FUN_100c01340(param_1,param_1 + 1,8);
  }
  uVar2 = param_3 & 0xfffffffffffffff8;
  if (uVar2 != 0) {
    FUN_100c01340(param_1,param_2,uVar2);
  }
  param_3 = param_3 - uVar2;
  if (param_3 != 0) {
    _memcpy(param_1 + 1,(void *)((long)param_2 + uVar2),param_3);
    *param_1 = (uint)param_3;
  }
  return 1;
}

