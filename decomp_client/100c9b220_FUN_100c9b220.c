
void FUN_100c9b220(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_10230af60 + lVar1 != (undefined *)0x0) &&
       ((*(uint *)((long)&DAT_10230af64 + lVar1) & 1) != 0)) {
      if ((*(uint *)((long)&DAT_10230af64 + lVar1) & 2) != 0) {
        FUN_100bf3910(*(undefined8 *)((long)&PTR_s_compatible_10230af70 + lVar1));
      }
      FUN_100bf3910(&DAT_10230af60 + lVar1);
    }
    lVar1 = lVar1 + 0x28;
  } while (lVar1 != 0x140);
  FUN_100c60790(DAT_102318438,FUN_100c9b2a0);
  DAT_102318438 = 0;
  return;
}

