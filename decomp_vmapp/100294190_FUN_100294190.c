
void FUN_100294190(long param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = (ulong)*(ushort *)(param_1 + 0xfee) * 0x300 + *(long *)(param_1 + 0x1000);
  lVar2 = (ulong)*(ushort *)(param_1 + 0xff0) * 0x80;
  uVar1 = *(uint *)(lVar2 + 0x46f4 + lVar3);
  uVar4 = uVar1 | 1;
  if (param_2 == '\0') {
    uVar4 = uVar1 & 0xfffffffe;
  }
  *(uint *)(lVar2 + 0x46f4 + lVar3) = uVar4;
  return;
}

