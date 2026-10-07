
long FUN_1008897b0(int param_1)

{
  long lVar1;
  
  FUN_10081d010(9,1,"err.c",0x1c4);
  if ((param_1 != 0) && (DAT_1011c1920 == 0)) {
    FUN_10081e560("int_thread_get (err.c)","err.c",0x1c6);
    DAT_1011c1920 = FUN_1008856e0(FUN_100889cc0,FUN_100889cd0);
    FUN_10081e760();
  }
  lVar1 = 0;
  if (DAT_1011c1920 != 0) {
    DAT_1011c1928 = DAT_1011c1928 + 1;
    lVar1 = DAT_1011c1920;
  }
  FUN_10081d010(10,1,"err.c",0x1ce);
  return lVar1;
}

