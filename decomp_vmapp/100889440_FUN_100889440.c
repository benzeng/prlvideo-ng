
long FUN_100889440(int param_1)

{
  long lVar1;
  
  FUN_10081d010(9,1,"err.c",0x168);
  if ((param_1 != 0) && (DAT_1011c1918 == 0)) {
    FUN_10081e560("int_err_get (err.c)","err.c",0x16a);
    DAT_1011c1918 = FUN_1008856e0(FUN_100889c60,FUN_100889cb0);
    FUN_10081e760();
  }
  lVar1 = DAT_1011c1918;
  FUN_10081d010(10,1,"err.c",0x170);
  return lVar1;
}

