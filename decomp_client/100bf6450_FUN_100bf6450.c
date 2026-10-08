
bool FUN_100bf6450(void)

{
  bool bVar1;
  
  bVar1 = true;
  if (DAT_1023160c0 == 0) {
    FUN_100bf3a80(3);
    DAT_1023160c0 = FUN_100c608e0(FUN_100bf64b0,FUN_100bf6500);
    FUN_100bf3a80(2);
    bVar1 = DAT_1023160c0 != 0;
  }
  return bVar1;
}

