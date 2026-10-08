
void FUN_100346a00(long param_1,undefined8 *param_2,byte param_3)

{
  uint in_EAX;
  undefined8 uStack_18;
  
  if ((param_3 & 0x20) != 0) {
    uStack_18 = (ulong)in_EAX;
    _PrlTisRecord_GetState(*param_2,(long)&uStack_18 + 4);
    *(bool *)(param_1 + 0x30) = uStack_18._4_4_ == 1;
    FUN_100346950(param_1);
  }
  return;
}

