
uint FUN_100aeebb0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = FUN_100dc8a00(0x80000000,0);
  if (0x80000000 < uVar1) {
    uVar1 = FUN_100dc8a20(0x80000001,0);
    uVar2 = (uVar1 & 0x20000000) >> 0x1d;
  }
  return uVar2;
}

