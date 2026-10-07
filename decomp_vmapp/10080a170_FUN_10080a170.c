
uint FUN_10080a170(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  
  uVar6 = (uint)param_1[7] - (uint)param_2[7];
  iVar8 = ((uint)param_1[6] - (uint)param_2[6]) + ((int)uVar6 >> 8);
  iVar2 = ((uint)param_1[5] - (uint)param_2[5]) + (iVar8 >> 8);
  iVar4 = iVar2 >> 8;
  bVar7 = (byte)iVar8;
  bVar1 = (byte)iVar2;
  if ((uVar6 & 0x80) == 0) {
    iVar4 = ((uint)param_1[4] - (uint)param_2[4]) + iVar4;
    iVar2 = ((uint)param_1[3] - (uint)param_2[3]) + (iVar4 >> 8);
    iVar8 = ((uint)param_1[2] - (uint)param_2[2]) + (iVar2 >> 8);
    iVar5 = ((uint)param_1[1] - (uint)param_2[1]) + (iVar8 >> 8);
    uVar3 = ((uint)*param_1 - (uint)*param_2) + (iVar5 >> 8);
    bVar7 = bVar7 | bVar1 | (byte)iVar4 | (byte)iVar2 | (byte)iVar8 | (byte)iVar5 | (byte)uVar3;
  }
  else {
    iVar4 = ((uint)param_1[4] - (uint)param_2[4]) + iVar4;
    iVar2 = ((uint)param_1[3] - (uint)param_2[3]) + (iVar4 >> 8);
    iVar8 = ((uint)param_1[2] - (uint)param_2[2]) + (iVar2 >> 8);
    iVar5 = ((uint)param_1[1] - (uint)param_2[1]) + (iVar8 >> 8);
    uVar3 = ((uint)*param_1 - (uint)*param_2) + (iVar5 >> 8);
    bVar7 = ~(bVar7 & bVar1 & (byte)iVar4 & (byte)iVar2 & (byte)iVar8 & (byte)iVar5 & (byte)uVar3);
  }
  if (bVar7 != 0) {
    return uVar3 & 0xffffff00 | 0x80;
  }
  return uVar3 & 0xffffff00 | uVar6 & 0xff;
}

