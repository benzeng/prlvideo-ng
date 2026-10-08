
void FUN_100bf53b0(void)

{
  long lVar1;
  
  if (DAT_1023160b0 == 0) {
    FUN_100bf2780(9,2,"ex_data.c",0x116);
    if (DAT_1023160b0 == 0) {
      lVar1 = FUN_100c608e0(FUN_100bf5b30,FUN_100bf5b40);
      DAT_1023160b0 = lVar1;
      FUN_100bf2780(10,2,"ex_data.c",0x119);
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      FUN_100bf2780(10,2,"ex_data.c",0x119);
    }
  }
  FUN_100c610a0(DAT_1023160b0,FUN_100bf5b00);
  FUN_100c60b60(DAT_1023160b0);
  DAT_1023160b0 = 0;
  DAT_1023160a8 = 0;
  return;
}

