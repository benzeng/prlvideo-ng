
int FUN_100cd12d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  bVar3 = (uVar1 & 0xc) != 0;
  uVar2 = bVar3 + 1;
  if ((uVar1 & 0x30) == 0) {
    uVar2 = (uint)bVar3;
  }
  return ((((uVar1 & 3) != 0) + 1) - (uint)((uVar1 & 0xc0) == 0)) + uVar2;
}

