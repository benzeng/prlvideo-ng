
uint FUN_1000ef0c0(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = param_1 * 0x100000 + 0x4fffffff;
  if ((ulong)(param_1 * 0x100000) < 0xb0000001) {
    uVar3 = 0xffffffff;
  }
  iVar1 = -1;
  do {
    iVar4 = iVar1;
    uVar3 = uVar3 >> 1;
    iVar1 = iVar4 + 1;
  } while (uVar3 != 0);
  uVar5 = iVar4 + 5U & 0xfffffffc;
  uVar2 = 0x28;
  if (uVar5 < 0x28) {
    uVar2 = uVar5;
  }
  return uVar2;
}

