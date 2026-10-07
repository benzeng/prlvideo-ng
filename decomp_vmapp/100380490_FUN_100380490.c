
uint FUN_100380490(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = 0x100;
  if ((((uVar1 & 1) == 0) && (uVar2 = 0x10, (uVar1 & 2) == 0)) && (uVar2 = 4, (uVar1 & 0x400) == 0))
  {
    uVar2 = uVar1 >> 10 & 2;
  }
  return uVar2;
}

