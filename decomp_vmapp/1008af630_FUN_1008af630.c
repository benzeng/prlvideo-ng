
uint FUN_1008af630(undefined8 *param_1,ulong *param_2,undefined4 *param_3,uint *param_4,long param_5
                  )

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  
  if (param_5 != 0) {
    pbVar3 = (byte *)*param_1;
    bVar1 = *pbVar3;
    uVar7 = bVar1 & 0x1f;
    uVar8 = (ulong)uVar7;
    pbVar10 = pbVar3 + 1;
    lVar12 = param_5 + -1;
    if (uVar7 == 0x1f) {
      uVar8 = 0;
      if (lVar12 != 0) {
        do {
          bVar2 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          uVar8 = (ulong)bVar2 & 0x7f | uVar8 << 7;
          if (-1 < (char)bVar2) {
            lVar12 = lVar12 + -1;
            goto joined_r0x0001008af6ab;
          }
        } while ((lVar12 != 1) && (lVar12 = lVar12 + -1, (long)uVar8 < 0x1000000));
      }
    }
    else {
joined_r0x0001008af6ab:
      if (lVar12 != 0) {
        *param_3 = (int)uVar8;
        *param_4 = bVar1 & 0xc0;
        iVar6 = (int)lVar12;
        if (0 < iVar6) {
          uVar7 = bVar1 & 0x20;
          bVar2 = *pbVar10;
          if (bVar2 == 0x80) {
            *param_2 = 0;
            uVar8 = 0;
            if ((bVar1 & 0x20) != 0) {
              pbVar11 = pbVar10 + 1;
              uVar4 = 1;
LAB_1008af714:
              if ((long)(pbVar3 + (param_5 - (long)pbVar11)) < (long)uVar8) {
                FUN_100887ce0(0xd,0x72,0x9b,"asn1_lib.c",0x93);
                uVar7 = uVar7 | 0x80;
              }
              *param_1 = pbVar11;
              return uVar7 | uVar4;
            }
          }
          else {
            uVar4 = bVar2 & 0x7f;
            pbVar11 = pbVar10 + 1;
            if ((bVar2 & 0x80) == 0) {
              uVar8 = (ulong)uVar4;
LAB_1008af70f:
              *param_2 = uVar8;
              uVar4 = 0;
              goto LAB_1008af714;
            }
            if ((iVar6 != 1) && (uVar4 < 9)) {
              iVar6 = 1 - iVar6;
              iVar5 = -uVar4;
              uVar8 = 0;
              do {
                if (iVar5 == 0) {
                  if (-1 < (long)uVar8) goto LAB_1008af70f;
                  break;
                }
                pbVar9 = pbVar10 + 2;
                uVar8 = uVar8 << 8 | (ulong)*pbVar11;
                iVar5 = iVar5 + 1;
                iVar6 = iVar6 + 1;
                pbVar10 = pbVar11;
                pbVar11 = pbVar9;
              } while (iVar6 != 0);
            }
          }
        }
      }
    }
  }
  FUN_100887ce0(0xd,0x72,0x7b,"asn1_lib.c",0x9d);
  return 0x80;
}

