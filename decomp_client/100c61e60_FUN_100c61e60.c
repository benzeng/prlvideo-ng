
void FUN_100c61e60(void)

{
  long lVar1;
  
  if (DAT_1023167e0 == 0) {
    lVar1 = FUN_100c57320();
    if (lVar1 != 0) {
      DAT_1023167e0 = FUN_100c57340(lVar1);
      if (DAT_1023167e0 != 0) {
        DAT_1023167d8 = lVar1;
        return;
      }
      FUN_100c557e0(lVar1);
    }
    DAT_1023167e0 = FUN_100c618e0();
  }
  return;
}

