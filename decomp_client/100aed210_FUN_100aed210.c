
undefined8 FUN_100aed210(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = FUN_100dc8a00(0x80000000,0);
  uVar2 = 0x2000;
  if (0x80000000 < uVar1) {
    uVar3 = FUN_100dc8a20(0x80000001,0);
    uVar2 = 0x2000;
    if ((uVar3 & 0x20000000) != 0) {
      uVar2 = 0x20000;
    }
  }
  return uVar2;
}

