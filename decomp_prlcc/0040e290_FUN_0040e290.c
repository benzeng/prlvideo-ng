
uint FUN_0040e290(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar2 = FUN_0040e220();
  uVar1 = param_1[2];
  uVar3 = 0xfffffff9;
  if (uVar2 != uVar1) {
    if (uVar2 < uVar1) {
      uVar3 = 0xfffffff8;
    }
    else {
      uVar3 = 0xfffffffb;
      puVar4 = (uint *)((ulong)uVar1 + *(long *)(param_1 + 4));
      if (*param_1 == puVar4[2]) {
        uVar3 = -(uint)((ulong)uVar2 < (ulong)uVar1 + 0xc + (ulong)*puVar4) & 0xfffffffc;
      }
    }
  }
  return uVar3;
}

