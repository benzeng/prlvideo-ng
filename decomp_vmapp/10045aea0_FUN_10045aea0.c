
void FUN_10045aea0(long param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar5 = (ulong)(int)uVar4;
  uVar2 = 1 << ((&DAT_100b42ec0)[uVar5 * 4] & 0x1f);
  iVar6 = 0;
  if (uVar2 <= param_2) {
    do {
      param_2 = param_2 - uVar2;
      uVar4 = (int)uVar5 + (uint)((int)uVar5 < 0x1f);
      uVar5 = (ulong)uVar4;
      iVar6 = iVar6 + 1;
      uVar2 = 1 << ((&DAT_100b42ec0)[(long)(int)uVar4 * 4] & 0x1f);
    } while (uVar2 <= param_2);
  }
  *(uint *)(param_1 + 0x48) = uVar4;
  uVar4 = ~(-1 << ((byte)iVar6 & 0x1f));
  iVar6 = *(int *)(param_1 + 0x30) - iVar6;
  *(int *)(param_1 + 0x30) = iVar6;
  if (iVar6 < 0) {
    uVar2 = (int)uVar4 >> (-(byte)iVar6 & 0x1f) | *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x44) = uVar2;
    puVar1 = *(uint **)(param_1 + 0x28);
    *(uint **)(param_1 + 0x28) = puVar1 + 1;
    *puVar1 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    iVar6 = *(int *)(param_1 + 0x30) + 0x20;
    *(int *)(param_1 + 0x30) = iVar6;
    uVar4 = uVar4 << ((byte)iVar6 & 0x1f);
  }
  else {
    uVar4 = uVar4 << ((byte)iVar6 & 0x1f) | *(uint *)(param_1 + 0x44);
  }
  *(uint *)(param_1 + 0x44) = uVar4;
  if (param_3 == 0) {
    iVar6 = iVar6 + ~*(uint *)(&DAT_100b42ec0 + (long)*(int *)(param_1 + 0x48) * 4);
    *(int *)(param_1 + 0x30) = iVar6;
    if (iVar6 < 0) {
      uVar4 = uVar4 | (int)param_2 >> (-(byte)iVar6 & 0x1f);
      *(uint *)(param_1 + 0x44) = uVar4;
      puVar1 = *(uint **)(param_1 + 0x28);
      *(uint **)(param_1 + 0x28) = puVar1 + 1;
      *puVar1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      iVar6 = *(int *)(param_1 + 0x30) + 0x20;
      *(int *)(param_1 + 0x30) = iVar6;
      *(uint *)(param_1 + 0x44) = param_2 << ((byte)iVar6 & 0x1f);
      return;
    }
    *(uint *)(param_1 + 0x44) = uVar4 | param_2 << ((byte)iVar6 & 0x1f);
    return;
  }
  if (param_2 != 0) {
    iVar3 = iVar6 + -1;
    *(int *)(param_1 + 0x30) = iVar3;
    if (-1 < iVar3) {
      *(uint *)(param_1 + 0x44) = uVar4 | 1 << ((byte)iVar3 & 0x1f);
      return;
    }
    uVar4 = uVar4 | 1U >> (1U - (char)iVar6 & 0x1f);
    *(uint *)(param_1 + 0x44) = uVar4;
    puVar1 = *(uint **)(param_1 + 0x28);
    *(uint **)(param_1 + 0x28) = puVar1 + 1;
    *puVar1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    iVar6 = *(int *)(param_1 + 0x30) + 0x20;
    *(int *)(param_1 + 0x30) = iVar6;
    *(int *)(param_1 + 0x44) = 1 << ((byte)iVar6 & 0x1f);
  }
  return;
}

