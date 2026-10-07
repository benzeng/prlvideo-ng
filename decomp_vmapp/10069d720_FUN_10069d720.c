
undefined8 FUN_10069d720(long param_1,void *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 0x1001) {
    uVar1 = FUN_100699e40(param_1 + 0x18098,0);
    if ((int)uVar1 == 0) {
      _memcpy(param_2,*(void **)(param_1 + 0x180a0),(ulong)param_3);
      uVar1 = 0;
    }
  }
  else {
    FUN_1008e3970("","dimg",0,"Too big chunk in ReadHeader %u",param_3);
    uVar1 = 0x80000001;
  }
  return uVar1;
}

