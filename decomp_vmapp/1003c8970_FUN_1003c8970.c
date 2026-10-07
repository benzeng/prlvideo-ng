
undefined8
FUN_1003c8970(long param_1,int param_2,int *param_3,long param_4,int param_5,int *param_6,
             int param_7,uint param_8,uint param_9)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar9 = *param_3;
  uVar4 = param_3[1];
  uVar15 = iVar9 * param_7 + uVar4 * param_2;
  iVar3 = *param_6;
  uVar14 = iVar3 * param_7 + param_6[1] * param_5;
  uVar5 = (param_3[2] - iVar9) * param_7;
  uVar13 = (param_6[2] - iVar3) * param_7;
  if (uVar5 < uVar13) {
    uVar13 = uVar5;
  }
  switch(param_7) {
  case 1:
    uVar5 = param_3[3];
    if (uVar4 < uVar5) {
      param_8 = param_8 & 0xff;
      uVar11 = (iVar3 + -1) - param_6[2];
      uVar6 = (iVar9 + -1) - param_3[2];
      if (uVar6 < uVar11) {
        uVar6 = uVar11;
      }
      do {
        if (uVar13 != 0) {
          lVar7 = 0;
          if ((~uVar6 & 1) != 0) {
            bVar1 = *(byte *)((ulong)uVar15 + param_1);
            if ((bVar1 & param_9) != param_8) {
              *(byte *)((ulong)uVar14 + param_4) = bVar1;
            }
            lVar7 = 1;
          }
          if (uVar6 != 0xfffffffe) {
            pbVar10 = (byte *)(lVar7 + (ulong)uVar15 + param_1 + 1);
            pbVar12 = (byte *)(lVar7 + (ulong)uVar14 + param_4 + 1);
            iVar9 = -((int)lVar7 + 1) - uVar6;
            do {
              if ((pbVar10[-1] & param_9) != param_8) {
                pbVar12[-1] = pbVar10[-1];
              }
              if ((*pbVar10 & param_9) != param_8) {
                *pbVar12 = *pbVar10;
              }
              pbVar10 = pbVar10 + 2;
              pbVar12 = pbVar12 + 2;
              iVar9 = iVar9 + -2;
            } while (iVar9 != 0);
          }
          uVar5 = param_3[3];
        }
        uVar14 = uVar14 + param_5;
        uVar15 = uVar15 + param_2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    break;
  case 2:
    uVar5 = param_3[3];
    if (uVar4 < uVar5) {
      do {
        if (uVar13 != 0) {
          uVar6 = 0;
          do {
            uVar2 = *(ushort *)(param_1 + (ulong)uVar6 + (ulong)uVar15);
            if ((uVar2 & param_9) != (param_8 & 0xffff)) {
              *(ushort *)(param_4 + (ulong)uVar6 + (ulong)uVar14) = uVar2;
            }
            uVar6 = uVar6 + 2;
          } while (uVar6 < uVar13);
        }
        uVar14 = uVar14 + param_5;
        uVar15 = uVar15 + param_2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    break;
  case 3:
    uVar5 = param_3[3];
    if (uVar4 < uVar5) {
      do {
        if (uVar13 != 0) {
          uVar5 = 0;
          do {
            uVar6 = *(uint *)(param_1 + (ulong)uVar5 + (ulong)uVar15) & 0xffffff;
            if ((uVar6 & param_9) != param_8) {
              lVar7 = (ulong)uVar5 + (ulong)uVar14;
              *(uint *)(param_4 + lVar7) = *(uint *)(param_4 + lVar7) & 0xff000000 | uVar6;
            }
            uVar5 = uVar5 + 3;
          } while (uVar5 < uVar13);
          uVar5 = param_3[3];
        }
        uVar14 = uVar14 + param_5;
        uVar15 = uVar15 + param_2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    break;
  case 4:
    uVar5 = param_3[3];
    if (uVar4 < uVar5) {
      do {
        if (uVar13 != 0) {
          uVar8 = 0;
          do {
            uVar5 = *(uint *)(param_1 + uVar8 + uVar15);
            if ((uVar5 & param_9) != param_8) {
              *(uint *)(param_4 + uVar8 + uVar14) = uVar5;
            }
            uVar5 = (int)uVar8 + 4;
            uVar8 = (ulong)uVar5;
          } while (uVar5 < uVar13);
          uVar5 = param_3[3];
        }
        uVar14 = uVar14 + param_5;
        uVar15 = uVar15 + param_2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    break;
  default:
    if (uVar4 < (uint)param_3[3]) {
      do {
        _memcpy((void *)((ulong)uVar14 + param_4),(void *)((ulong)uVar15 + param_1),(ulong)uVar13);
        uVar14 = uVar14 + param_5;
        uVar15 = uVar15 + param_2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_3[3]);
    }
  }
  return 1;
}

