
int FUN_10086f992(byte *param_1,int *param_2,byte *param_3,int *param_4,long param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_54;
  byte *local_40;
  byte *local_30;
  int iVar5;
  
  if ((((param_1 == (byte *)0x0) || (param_2 == (int *)0x0)) || (param_4 == (int *)0x0)) ||
     (param_5 == 0)) {
    local_54 = -1;
  }
  else if (param_3 == (byte *)0x0) {
    *param_2 = 0;
    *param_4 = 0;
    local_54 = 0;
  }
  else {
    pbVar6 = param_3 + *param_4;
    local_40 = param_3;
    local_30 = param_1;
    while( true ) {
      iVar4 = (int)param_1;
      iVar8 = (int)local_30;
      iVar5 = (int)param_3;
      if (pbVar6 <= local_40) break;
      bVar2 = *local_40;
      pbVar1 = local_40 + 1;
      if ((char)bVar2 < '\0') {
        iVar7 = (int)pbVar1;
        if (bVar2 < 0xc0) {
          *param_2 = iVar8 - iVar4;
          *param_4 = (iVar7 - iVar5) + -1;
          return -2;
        }
        if (bVar2 < 0xe0) {
          if (pbVar6 <= pbVar1) {
            *param_2 = iVar8 - iVar4;
            *param_4 = (iVar7 - iVar5) + -1;
            return -2;
          }
          local_40 = local_40 + 2;
          if ((*pbVar1 & 0xc0) != 0x80) {
            *param_2 = iVar8 - iVar4;
            *param_4 = ((int)local_40 - iVar5) + -2;
            return -2;
          }
          bVar2 = *(byte *)((int)((uint)(*pbVar1 & 0x3f) +
                                 (uint)*(byte *)((ulong)(bVar2 & 0x1f) + param_5) * 0x40) + param_5
                           + 0x30);
          if (bVar2 == 0) {
            *param_2 = iVar8 - iVar4;
            *param_4 = ((int)local_40 - iVar5) + -2;
            return -2;
          }
          *local_30 = bVar2;
          local_30 = local_30 + 1;
        }
        else {
          if (0xef < bVar2) {
            *param_2 = iVar8 - iVar4;
            *param_4 = (iVar7 - iVar5) + -1;
            return -2;
          }
          if (pbVar6 + -1 <= pbVar1) {
            *param_2 = iVar8 - iVar4;
            *param_4 = (iVar7 - iVar5) + -1;
            return -2;
          }
          if ((*pbVar1 & 0xc0) != 0x80) {
            *param_2 = iVar8 - iVar4;
            *param_4 = ((int)(local_40 + 2) - iVar5) + -2;
            return -2;
          }
          bVar3 = local_40[2];
          local_40 = local_40 + 3;
          if ((bVar3 & 0xc0) != 0x80) {
            *param_2 = iVar8 - iVar4;
            *param_4 = ((int)local_40 - iVar5) + -2;
            return -2;
          }
          bVar2 = *(byte *)((int)((uint)(bVar3 & 0x3f) +
                                 (uint)*(byte *)((int)((uint)(*pbVar1 & 0x3f) +
                                                      (uint)*(byte *)((ulong)(bVar2 & 0xf) + param_5
                                                                     + 0x20) * 0x40) + param_5 +
                                                0x30) * 0x40) + param_5 + 0x30);
          if (bVar2 == 0) {
            *param_2 = iVar8 - iVar4;
            *param_4 = ((int)local_40 - iVar5) + -3;
            return -2;
          }
          *local_30 = bVar2;
          local_30 = local_30 + 1;
        }
      }
      else {
        *local_30 = bVar2;
        local_30 = local_30 + 1;
        local_40 = pbVar1;
      }
    }
    *param_2 = iVar8 - iVar4;
    *param_4 = (int)local_40 - iVar5;
    local_54 = *param_2;
  }
  return local_54;
}

