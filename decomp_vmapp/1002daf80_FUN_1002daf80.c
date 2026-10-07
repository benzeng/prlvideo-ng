
void FUN_1002daf80(long param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  *(undefined4 *)(param_1 + 0x3a + uVar4 * 4) = 0x10100;
  if (param_3 != 0) {
    *(undefined2 *)(param_1 + 0x3a + uVar4 * 4) = 0x101;
    if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x28) + 0x60 + (ulong)(param_2 + 2) * 8) != 0)
    {
      iVar3 = FUN_1002d6ce0();
      if (iVar3 == 0) {
        pbVar1 = (byte *)(param_1 + 0x3b + uVar4 * 4);
        *pbVar1 = *pbVar1 | 2;
      }
    }
  }
  puVar2 = (uint *)(param_1 + 0xb8 + (ulong)(param_2 + 1 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)(param_2 + 1) & 0x1f);
  FUN_1002db030(param_1);
  return;
}

