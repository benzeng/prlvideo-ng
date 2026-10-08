
void FUN_100c61f40(void)

{
  long lVar1;
  
  lVar1 = DAT_1023167d8;
  if (DAT_1023167e0 == 0) {
    lVar1 = FUN_100c57320();
    if (lVar1 != 0) {
      DAT_1023167e0 = FUN_100c57340(lVar1);
      if (DAT_1023167e0 != 0) goto LAB_100c61f95;
      FUN_100c557e0(lVar1);
    }
    DAT_1023167e0 = FUN_100c618e0();
    lVar1 = DAT_1023167d8;
    if (DAT_1023167e0 == 0) goto LAB_100c61fa0;
  }
LAB_100c61f95:
  DAT_1023167d8 = lVar1;
  if (*(code **)(DAT_1023167e0 + 0x10) != (code *)0x0) {
    (**(code **)(DAT_1023167e0 + 0x10))();
  }
LAB_100c61fa0:
  if (DAT_1023167d8 != 0) {
    FUN_100c557e0();
    DAT_1023167d8 = 0;
  }
  DAT_1023167e0 = 0;
  return;
}

