
void FUN_100551700(long param_1)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  puVar2 = *(ushort **)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x18);
  if (*puVar2 == 0) {
    uVar3 = iVar1 * *(int *)(puVar2 + 2);
  }
  else {
    uVar3 = -iVar1 & *puVar2 + 3 + iVar1;
  }
  *(ulong *)(param_1 + 8) = (long)puVar2 + (ulong)uVar3;
  return;
}

