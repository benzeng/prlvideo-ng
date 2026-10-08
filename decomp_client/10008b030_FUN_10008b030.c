
void FUN_10008b030(long param_1,uint param_2,int param_3)

{
  FUN_100087ea0();
  if ((((param_2 & 0xfffffff7) != 0x30000001) && (param_3 != 0x3000000a)) && (param_3 != 0x3000000f)
     ) {
    FUN_100867880(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  FUN_1000878e0(param_1);
  return;
}

