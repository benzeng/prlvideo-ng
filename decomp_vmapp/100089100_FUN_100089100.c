
void FUN_100089100(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    iVar5 = (param_2 >> 0xc) + *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar5;
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x18);
    if (uVar4 < uVar2) {
      uVar3 = (uVar2 - *(int *)(param_1 + 0x1c)) * iVar5;
      if (uVar4 < uVar3 / uVar1) {
        *(uint *)(param_1 + 0x14) = uVar4 + 5;
        uVar4 = *(int *)(param_1 + 0x1c) + 5 + uVar4;
        if (uVar4 < uVar2) {
          uVar2 = uVar4;
        }
        FUN_1000bea50(*(undefined8 *)(param_1 + 8),uVar2,(ulong)uVar3 % (ulong)uVar1);
        return;
      }
    }
  }
  return;
}

