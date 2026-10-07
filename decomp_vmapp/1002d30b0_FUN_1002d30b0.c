
void FUN_1002d30b0(undefined8 param_1,long param_2,ulong param_3,long *param_4,uint param_5,
                  uint param_6)

{
  size_t sVar1;
  
  if ((*(byte *)((long)param_4 + 0xc) & 0x40) != 0) {
    sVar1 = 8;
    if (param_6 < 8) {
      sVar1 = (ulong)param_6;
    }
    _memcpy(param_4 + param_5,(void *)(param_2 + 0x4d8 + (param_3 & 0xffffffff)),sVar1);
    return;
  }
  if ((param_6 != 0) && ((ulong)param_5 + *param_4 != 0)) {
    FUN_10008c9b0(DAT_1011c3688,(ulong)param_5 + *param_4,param_2 + 0x4d8 + (param_3 & 0xffffffff),
                  param_6);
    return;
  }
  return;
}

