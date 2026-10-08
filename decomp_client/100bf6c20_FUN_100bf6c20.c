
void FUN_100bf6c20(void)

{
  long lVar1;
  
  lVar1 = DAT_1023160d8;
  if (DAT_1023118f8 != 0) {
    DAT_1023118f8 = 2;
    return;
  }
  if (DAT_1023160d8 != 0) {
    *(undefined8 *)(DAT_1023160d8 + 0x30) = 0;
    FUN_100c610a0(lVar1,FUN_100bf6ca0);
    FUN_100c610a0(DAT_1023160d8,FUN_100bf6cc0);
    FUN_100c610a0(DAT_1023160d8,FUN_100bf6cd0);
    FUN_100c60b60(DAT_1023160d8);
    DAT_1023160d8 = 0;
  }
  return;
}

