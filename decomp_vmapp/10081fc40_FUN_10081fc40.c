
void FUN_10081fc40(void)

{
  long lVar1;
  
  if (DAT_1011c06c0 == 0) {
    FUN_10081d010(9,2,"ex_data.c",0x116);
    if (DAT_1011c06c0 == 0) {
      lVar1 = FUN_1008856e0(FUN_1008203c0,FUN_1008203d0);
      DAT_1011c06c0 = lVar1;
      FUN_10081d010(10,2,"ex_data.c",0x119);
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      FUN_10081d010(10,2,"ex_data.c",0x119);
    }
  }
  FUN_100885ea0(DAT_1011c06c0,FUN_100820390);
  FUN_100885960(DAT_1011c06c0);
  DAT_1011c06c0 = 0;
  DAT_1011c06b8 = 0;
  return;
}

