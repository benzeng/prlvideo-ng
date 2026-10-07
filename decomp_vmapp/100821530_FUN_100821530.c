
void FUN_100821530(long param_1)

{
  byte *pbVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  pbVar1 = (byte *)(lVar2 + 0x20);
  *pbVar1 = *pbVar1 | 0xd;
  return;
}

