
void FUN_100c8ad50(long *param_1,int param_2,int param_3,int param_4,byte param_5)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  pbVar2 = (byte *)*param_1;
  bVar6 = param_5 & 0xc0 | (param_2 != 0) << 5;
  if (param_4 < 0x1f) {
    pbVar9 = pbVar2 + 1;
    *pbVar2 = bVar6 | (byte)param_4 & 0x1f;
    lVar8 = 2;
    lVar7 = 1;
  }
  else {
    *pbVar2 = bVar6 | 0x1f;
    iVar5 = -1;
    iVar3 = param_4;
    do {
      iVar4 = iVar5;
      iVar3 = iVar3 >> 7;
      iVar5 = iVar4 + 1;
    } while (0 < iVar3);
    lVar8 = (long)(iVar4 + 2);
    if (-1 < iVar5) {
      lVar7 = 0;
      do {
        if ((int)lVar7 == 0) {
          bVar6 = (byte)param_4 & 0x7f;
        }
        else {
          bVar6 = (byte)param_4 | 0x80;
        }
        pbVar2[lVar7 + lVar8] = bVar6;
        param_4 = param_4 >> 7;
        lVar1 = lVar8 + lVar7;
        lVar7 = lVar7 + -1;
      } while (1 < lVar1);
    }
    pbVar9 = pbVar2 + lVar8 + 1;
    lVar7 = lVar8 + 1;
    lVar8 = lVar8 + 2;
  }
  if (param_2 == 2) {
    *pbVar9 = 0x80;
  }
  else if (param_3 < 0x80) {
    *pbVar9 = (byte)param_3;
  }
  else {
    iVar3 = -1;
    iVar5 = param_3;
    do {
      iVar4 = iVar3;
      iVar5 = iVar5 >> 8;
      iVar3 = iVar4 + 1;
    } while (0 < iVar5);
    iVar4 = iVar4 + 2;
    *pbVar9 = (byte)iVar4 | 0x80;
    if (-1 < iVar3) {
      lVar8 = (long)iVar4 + 1;
      do {
        pbVar2[lVar8 + lVar7 + -1] = (byte)param_3;
        param_3 = param_3 >> 8;
        lVar8 = lVar8 + -1;
      } while (1 < lVar8);
    }
    lVar8 = lVar7 + 1 + (long)iVar4;
  }
  *param_1 = (long)(pbVar2 + lVar8);
  return;
}

