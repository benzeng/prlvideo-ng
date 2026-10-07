
int FUN_10060a510(long param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x34);
    pbVar3 = *(byte **)(param_1 + 0x118);
    if (iVar1 == iVar2 + -1) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(int *)(param_1 + 0x38) = iVar1 + -1;
      *(undefined2 *)(param_1 + 0x1e) = 1;
      *pbVar3 = *pbVar3 | 0x40;
      return 0;
    }
    iVar4 = iVar2 - iVar1;
    *(int *)(param_1 + 0x38) = iVar1 + -1;
    uVar5 = iVar2 - (iVar1 + -1);
    uVar6 = uVar5 >> 3;
    pbVar3[uVar6] = pbVar3[uVar6] | (byte)(0x80 >> ((byte)uVar5 & 7));
  }
  return iVar4;
}

