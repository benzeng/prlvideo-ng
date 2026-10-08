
long FUN_100c649b0(int param_1)

{
  long lVar1;
  
  FUN_100bf2780(9,1,"err.c",0x1c4);
  if ((param_1 != 0) && (DAT_102317360 == 0)) {
    FUN_100bf3cd0("int_thread_get (err.c)","err.c",0x1c6);
    DAT_102317360 = FUN_100c608e0(FUN_100c64ec0,FUN_100c64ed0);
    FUN_100bf3ed0();
  }
  lVar1 = 0;
  if (DAT_102317360 != 0) {
    DAT_102317368 = DAT_102317368 + 1;
    lVar1 = DAT_102317360;
  }
  FUN_100bf2780(10,1,"err.c",0x1ce);
  return lVar1;
}

