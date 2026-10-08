
uint FUN_100ca5ce0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x48);
  if ((uVar2 & 0x100) == 0) {
    FUN_100bf2780(9,3,"v3_purp.c",0x23c);
    FUN_100ca5210(param_1);
    FUN_100bf2780(10,3,"v3_purp.c",0x23e);
    uVar2 = *(ulong *)(param_1 + 0x48);
  }
  if (((uVar2 & 2) == 0) || (uVar1 = 0, (*(byte *)(param_1 + 0x50) & 4) != 0)) {
    if ((uVar2 & 1) == 0) {
      uVar1 = ((uVar2 & 0x60) != 0x60) + 3;
      if ((((uVar2 & 0x60) != 0x60) && ((uVar2 & 2) == 0)) &&
         (((uVar2 & 8) == 0 || (uVar1 = 5, (*(byte *)(param_1 + 0x60) & 7) == 0)))) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = (uint)(uVar2 >> 4) & 1;
    }
  }
  return uVar1;
}

