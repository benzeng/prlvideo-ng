
uint FUN_10039be90(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_2 - 2;
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  if (uVar4 < 9) {
    uVar2 = (uint)(byte)(&DAT_100b3f2f4)[(int)uVar4] << 0x10;
    uVar3 = (uint)(byte)(&DAT_100b3f2fd)[(int)uVar4] << 8;
    uVar1 = 0x2000000;
  }
  return uVar1 | uVar2 | uVar3 | (uint)(uVar4 < 9);
}

