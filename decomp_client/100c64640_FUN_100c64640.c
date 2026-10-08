
long FUN_100c64640(int param_1)

{
  long lVar1;
  
  FUN_100bf2780(9,1,"err.c",0x168);
  if ((param_1 != 0) && (DAT_102317358 == 0)) {
    FUN_100bf3cd0("int_err_get (err.c)","err.c",0x16a);
    DAT_102317358 = FUN_100c608e0(FUN_100c64e60,FUN_100c64eb0);
    FUN_100bf3ed0();
  }
  lVar1 = DAT_102317358;
  FUN_100bf2780(10,1,"err.c",0x170);
  return lVar1;
}

