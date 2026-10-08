
void FUN_100ae5730(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  uVar2 = FUN_100ae5060();
  pbVar1 = (byte *)((ulong)uVar2 + 0xc + lVar3);
  *pbVar1 = *pbVar1 | 1;
  return;
}

