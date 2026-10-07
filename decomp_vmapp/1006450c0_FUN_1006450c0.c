
undefined8 FUN_1006450c0(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = FUN_100778290(0x80000000,0);
  uVar2 = 0x2000;
  if (0x80000000 < uVar1) {
    uVar3 = FUN_1007782b0(0x80000001,0);
    uVar2 = 0x2000;
    if ((uVar3 & 0x20000000) != 0) {
      uVar2 = 0x20000;
    }
  }
  return uVar2;
}

