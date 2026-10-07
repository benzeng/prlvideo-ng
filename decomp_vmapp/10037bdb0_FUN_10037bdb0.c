
long FUN_10037bdb0(long param_1,int param_2,char param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  puVar4 = puVar3;
  if (puVar3 == (ushort *)0x0) {
    puVar4 = *(ushort **)(param_1 + 8);
  }
  uVar1 = *puVar4;
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < (uint)uVar1 + param_2) {
    uVar5 = (uVar2 >> 1) + 3 + param_2 + uVar2 & 0xfffffffc;
    puVar4 = operator_new__((ulong)uVar5);
    if (puVar3 == (ushort *)0x0) {
      _memcpy(puVar4,*(void **)(param_1 + 8),(ulong)uVar2);
      *(uint *)(param_1 + 0x18) = uVar5;
    }
    else {
      _memcpy(puVar4,puVar3,(ulong)uVar2);
      *(uint *)(param_1 + 0x18) = uVar5;
      operator_delete__(puVar3);
    }
    *(ushort **)(param_1 + 0x10) = puVar4;
    uVar1 = *puVar4;
  }
  *puVar4 = uVar1 + (short)param_2;
  if (param_3 != '\0') {
    puVar4[1] = puVar4[1] + (short)param_2;
  }
  return (ulong)uVar1 + (long)puVar4;
}

