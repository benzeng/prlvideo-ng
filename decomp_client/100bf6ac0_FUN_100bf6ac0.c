
void FUN_100bf6ac0(int param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = DAT_1023160c0;
  if (DAT_1023160c0 != 0) {
    uVar1 = *(undefined8 *)(DAT_1023160c0 + 0x30);
    DAT_1023160d0 = param_1;
    *(undefined8 *)(DAT_1023160c0 + 0x30) = 0;
    FUN_100c610a0(lVar2,FUN_100bf6b40);
    if (param_1 < 0) {
      FUN_100c60b60();
      FUN_100c60790(DAT_1023160c8,FUN_100bf6be0);
      DAT_1023160c0 = 0;
      DAT_1023160c8 = 0;
    }
    else {
      *(undefined8 *)(DAT_1023160c0 + 0x30) = uVar1;
    }
  }
  return;
}

