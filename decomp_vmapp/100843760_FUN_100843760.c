
void FUN_100843760(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
                  uint *param_6,int param_7,code *param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  bool bVar12;
  
  uVar10 = *param_6;
  if (param_7 == 0) {
    uVar11 = param_3;
    if (param_3 != 0 && uVar10 != 0) {
      do {
        bVar5 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = *(byte *)(param_5 + (ulong)uVar10) ^ bVar5;
        param_2 = param_2 + 1;
        *(byte *)(param_5 + (ulong)uVar10) = bVar5;
        uVar11 = param_3 - 1;
        uVar10 = uVar10 + 1 & 0xf;
        if (uVar10 == 0) break;
        bVar12 = param_3 != 1;
        param_3 = uVar11;
      } while (bVar12);
    }
    pbVar9 = param_2;
    if (0xf < uVar11) {
      uVar4 = uVar11 - 0x10;
      uVar1 = uVar4 & 0xfffffffffffffff0;
      pbVar9 = param_2 + uVar1 + 0x10;
      pbVar8 = param_1;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar10 < 0x10) {
          uVar2 = (ulong)uVar10;
          uVar6 = 0xf - uVar10;
          if (((uVar6 >> 3) + 1 & 1) != 0) {
            uVar7 = *(ulong *)(pbVar8 + uVar2);
            *(ulong *)(param_2 + uVar2) = *(ulong *)(param_5 + uVar2) ^ uVar7;
            *(ulong *)(param_5 + uVar2) = uVar7;
            uVar10 = uVar10 + 8;
            uVar2 = uVar2 + 8;
          }
          if (uVar6 >> 3 != 0) {
            lVar3 = uVar2 + 8;
            do {
              uVar2 = *(ulong *)(pbVar8 + lVar3 + -8);
              *(ulong *)(param_2 + lVar3 + -8) = *(ulong *)(param_5 + -8 + lVar3) ^ uVar2;
              *(ulong *)(param_5 + -8 + lVar3) = uVar2;
              uVar2 = *(ulong *)(pbVar8 + lVar3);
              *(ulong *)(param_2 + lVar3) = *(ulong *)(param_5 + lVar3) ^ uVar2;
              *(ulong *)(param_5 + lVar3) = uVar2;
              uVar10 = uVar10 + 0x10;
              lVar3 = lVar3 + 0x10;
            } while (uVar10 < 0x10);
          }
        }
        uVar11 = uVar11 - 0x10;
        param_2 = param_2 + 0x10;
        pbVar8 = pbVar8 + 0x10;
        uVar10 = 0;
      } while (0xf < uVar11);
      param_1 = param_1 + uVar1 + 0x10;
      uVar11 = uVar4 - uVar1;
      uVar10 = 0;
    }
    uVar6 = uVar10;
    if (uVar11 != 0) {
      (*param_8)(param_5,param_5,param_4);
      uVar6 = (int)uVar11 + uVar10;
      do {
        uVar4 = (ulong)uVar10;
        bVar5 = param_1[uVar4];
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
        pbVar9[uVar4] = *(byte *)(param_5 + uVar4) ^ bVar5;
        *(byte *)(param_5 + uVar4) = bVar5;
      } while (uVar11 != 0);
    }
  }
  else {
    uVar11 = param_3;
    if (param_3 != 0 && uVar10 != 0) {
      do {
        bVar5 = *(byte *)(param_5 + (ulong)uVar10) ^ *param_1;
        param_1 = param_1 + 1;
        *(byte *)(param_5 + (ulong)uVar10) = bVar5;
        *param_2 = bVar5;
        param_2 = param_2 + 1;
        uVar11 = param_3 - 1;
        uVar10 = uVar10 + 1 & 0xf;
        if (uVar10 == 0) break;
        bVar12 = param_3 != 1;
        param_3 = uVar11;
      } while (bVar12);
    }
    pbVar9 = param_2;
    if (0xf < uVar11) {
      uVar4 = uVar11 - 0x10;
      uVar1 = uVar4 & 0xfffffffffffffff0;
      pbVar9 = param_2 + uVar1 + 0x10;
      pbVar8 = param_1;
      do {
        (*param_8)(param_5,param_5,param_4);
        if (uVar10 < 0x10) {
          uVar2 = (ulong)uVar10;
          uVar6 = 0xf - uVar10;
          if (((uVar6 >> 3) + 1 & 1) != 0) {
            uVar7 = *(ulong *)(param_5 + uVar2) ^ *(ulong *)(pbVar8 + uVar2);
            *(ulong *)(param_5 + uVar2) = uVar7;
            *(ulong *)(param_2 + uVar2) = uVar7;
            uVar10 = uVar10 + 8;
            uVar2 = uVar2 + 8;
          }
          if (uVar6 >> 3 != 0) {
            lVar3 = uVar2 + 8;
            do {
              uVar2 = *(ulong *)(param_5 + -8 + lVar3) ^ *(ulong *)(pbVar8 + lVar3 + -8);
              *(ulong *)(param_5 + -8 + lVar3) = uVar2;
              *(ulong *)(param_2 + lVar3 + -8) = uVar2;
              uVar2 = *(ulong *)(param_5 + lVar3) ^ *(ulong *)(pbVar8 + lVar3);
              *(ulong *)(param_5 + lVar3) = uVar2;
              *(ulong *)(param_2 + lVar3) = uVar2;
              uVar10 = uVar10 + 0x10;
              lVar3 = lVar3 + 0x10;
            } while (uVar10 < 0x10);
          }
        }
        uVar11 = uVar11 - 0x10;
        param_2 = param_2 + 0x10;
        pbVar8 = pbVar8 + 0x10;
        uVar10 = 0;
      } while (0xf < uVar11);
      param_1 = param_1 + uVar1 + 0x10;
      uVar11 = uVar4 - uVar1;
      uVar10 = 0;
    }
    uVar6 = uVar10;
    if (uVar11 != 0) {
      (*param_8)(param_5,param_5,param_4);
      uVar6 = (int)uVar11 + uVar10;
      do {
        uVar4 = (ulong)uVar10;
        bVar5 = *(byte *)(param_5 + uVar4) ^ param_1[uVar4];
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
        *(byte *)(param_5 + uVar4) = bVar5;
        pbVar9[uVar4] = bVar5;
      } while (uVar11 != 0);
    }
  }
  *param_6 = uVar6;
  return;
}

