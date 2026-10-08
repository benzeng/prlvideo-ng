
ulong FUN_1006aab40(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = FUN_1001d50a0();
  uVar1 = FUN_1001d50d0(uVar1);
  lVar2 = FUN_1001e1c90(uVar1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10007eb60(lVar2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}

