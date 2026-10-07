
uint FUN_1002d9440(long param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(byte *)(param_1 + 0xce) - 1;
  uVar3 = 0xf;
  if (uVar2 < 0x10) {
    uVar3 = uVar2;
  }
  if (1 < *(int *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x28) + 0x1490)) {
    if (uVar3 < 3) {
      bVar1 = 3 - (char)uVar3;
      return (uint)(param_2 + -1 + (1 << (bVar1 & 0x1f))) >> (bVar1 & 0x1f);
    }
    uVar3 = uVar3 - 3;
  }
  return param_2 << ((byte)uVar3 & 0x1f);
}

