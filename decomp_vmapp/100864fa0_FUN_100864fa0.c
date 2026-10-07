
undefined8 FUN_100864fa0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if ((param_2 != 0) && (lVar1 = FUN_10084b950(param_2,param_1 + 0x68), lVar1 == 0)) {
    return 0;
  }
  if ((param_3 != 0) && (lVar1 = FUN_10084b950(param_3,param_1 + 0x98), lVar1 == 0)) {
    return 0;
  }
  if ((param_4 != 0) && (lVar1 = FUN_10084b950(param_4,param_1 + 0xb0), lVar1 == 0)) {
    return 0;
  }
  return 1;
}

