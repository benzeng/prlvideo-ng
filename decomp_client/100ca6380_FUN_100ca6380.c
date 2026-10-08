
uint FUN_100ca6380(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_2 + 0x48);
    if (((uVar1 & 2) == 0) || (uVar2 = 0, (*(byte *)(param_2 + 0x50) & 4) != 0)) {
      if ((uVar1 & 1) != 0) {
        return (uint)(uVar1 >> 4) & 1;
      }
      uVar2 = ((uVar1 & 0x60) != 0x60) + 3;
      if ((((uVar1 & 0x60) != 0x60) && ((uVar1 & 2) == 0)) &&
         (((uVar1 & 8) == 0 || (uVar2 = 5, (*(byte *)(param_2 + 0x60) & 7) == 0)))) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

