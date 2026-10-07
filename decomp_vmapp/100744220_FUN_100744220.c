
undefined8 FUN_100744220(int *param_1,uint param_2,byte *param_3,uint *param_4,long param_5)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  
  uVar7 = (ulong)param_2;
  pbVar5 = param_3 + *param_4;
  pbVar9 = param_3;
  if (param_2 < 0x11) {
    bVar4 = 0;
    piVar15 = param_1;
  }
  else {
    piVar8 = (int *)((uVar7 - 4) + (long)param_1);
    bVar4 = 0;
    piVar13 = param_1;
    do {
      iVar2 = *piVar13;
      uVar6 = (ulong)((uint)(iVar2 * 0x5de097d7) >> 0x14);
      piVar12 = *(int **)(param_5 + uVar6 * 8);
      *(int **)(param_5 + uVar6 * 8) = piVar13;
      if ((((piVar12 < piVar13) && (uVar6 = (ulong)bVar4, bVar4 != 1)) && (param_1 <= piVar12)) &&
         ((lVar11 = (long)piVar13 + (0xffffffff - (long)piVar12), (uint)lVar11 < 0x1000 &&
          (iVar2 == *piVar12)))) {
        pbVar10 = pbVar9;
        if (bVar4 != 0) {
          if (pbVar5 < pbVar9 + uVar6 + 0x10) {
            return 0xfffffffe;
          }
          *pbVar9 = bVar4 - 1;
          if (bVar4 < 0x11) {
            *(undefined8 *)(pbVar9 + 1) = *(undefined8 *)((long)piVar13 - uVar6);
            *(undefined8 *)(pbVar9 + 9) = *(undefined8 *)((long)piVar13 + (8 - uVar6));
          }
          else {
            _memcpy(pbVar9 + 1,(undefined8 *)((long)piVar13 - uVar6),uVar6);
          }
          pbVar10 = pbVar9 + uVar6 + 1;
        }
        pbVar9 = pbVar10 + 2;
        if (pbVar5 < pbVar9) {
          return 0xfffffffe;
        }
        bVar4 = (byte)((ulong)lVar11 >> 8);
        if ((char)piVar13[1] == (char)piVar12[1]) {
          if (*(char *)((long)piVar13 + 5) == *(char *)((long)piVar12 + 5)) {
            if (*(char *)((long)piVar13 + 6) == *(char *)((long)piVar12 + 6)) {
              if (*(char *)((long)piVar13 + 7) == *(char *)((long)piVar12 + 7)) {
                if ((char)piVar13[2] == (char)piVar12[2]) {
                  if (*(char *)((long)piVar13 + 9) == *(char *)((long)piVar12 + 9)) {
                    if (*(short *)((long)piVar13 + 10) == *(short *)((long)piVar12 + 10)) {
                      pbVar9 = pbVar10 + 3;
                      if (pbVar5 < pbVar9) {
                        return 0xfffffffe;
                      }
                      piVar1 = piVar13 + 3;
                      piVar14 = piVar13 + 0x101;
                      if (piVar8 < piVar13 + 0x101) {
                        piVar14 = piVar8;
                      }
                      piVar15 = piVar1;
                      if (piVar1 <= piVar14) {
                        piVar12 = piVar12 + 3;
                        do {
                          if (*piVar15 != *piVar12) break;
                          piVar15 = piVar15 + 1;
                          piVar12 = piVar12 + 1;
                        } while (piVar15 <= piVar14);
                      }
                      *pbVar10 = bVar4 | 0xf0;
                      pbVar10[1] = (byte)lVar11;
                      pbVar10[2] = (byte)((uint)((int)piVar15 - (int)piVar1) >> 2);
                      bVar3 = 0;
                      goto LAB_100744540;
                    }
                    piVar15 = (int *)((long)piVar13 + 10);
                    bVar4 = bVar4 | 0xe0;
                  }
                  else {
                    piVar15 = (int *)((long)piVar13 + 9);
                    bVar4 = bVar4 | 0xd0;
                  }
                }
                else {
                  piVar15 = piVar13 + 2;
                  bVar4 = bVar4 | 0xc0;
                }
              }
              else {
                piVar15 = (int *)((long)piVar13 + 7);
                bVar4 = bVar4 | 0xb0;
              }
            }
            else {
              piVar15 = (int *)((long)piVar13 + 6);
              bVar4 = bVar4 | 0xa0;
            }
          }
          else {
            piVar15 = (int *)((long)piVar13 + 5);
            bVar4 = bVar4 | 0x90;
          }
        }
        else {
          piVar15 = piVar13 + 1;
          bVar4 = bVar4 | 0x80;
        }
        *pbVar10 = bVar4;
        pbVar10[1] = (byte)lVar11;
        bVar3 = 0;
      }
      else {
        piVar15 = (int *)((long)piVar13 + 1);
        bVar3 = bVar4 + 1;
        if ((char)bVar3 < '\0') {
          uVar6 = (ulong)bVar3;
          if (pbVar5 < pbVar9 + uVar6 + 0x10) {
            return 0xfffffffe;
          }
          *pbVar9 = bVar4;
          _memcpy(pbVar9 + 1,(void *)((long)piVar13 + (1 - uVar6)),uVar6);
          pbVar9 = pbVar9 + uVar6 + 1;
          bVar3 = 0;
        }
      }
LAB_100744540:
      bVar4 = bVar3;
      piVar13 = piVar15;
    } while (piVar15 < (int *)((uVar7 - 0x10) + (long)param_1));
  }
  while (bVar3 = bVar4, piVar8 = piVar15, piVar8 < (int *)((long)param_1 + uVar7)) {
    bVar4 = bVar3 + 1;
    piVar15 = (int *)((long)piVar8 + 1);
    if ((char)bVar4 < '\0') {
      uVar6 = (ulong)bVar4;
      if (pbVar5 < pbVar9 + uVar6 + 1) {
        return 0xfffffffe;
      }
      *pbVar9 = bVar3;
      _memcpy(pbVar9 + 1,(void *)((long)piVar8 + (1 - uVar6)),uVar6);
      pbVar9 = pbVar9 + uVar6 + 1;
      bVar4 = 0;
    }
  }
  if (bVar3 != 0) {
    uVar7 = (ulong)bVar3;
    if (pbVar5 < pbVar9 + uVar7 + 1) {
      return 0xfffffffe;
    }
    *pbVar9 = bVar3 - 1;
    _memcpy(pbVar9 + 1,(void *)((long)piVar8 - uVar7),uVar7);
    pbVar9 = pbVar9 + uVar7 + 1;
  }
  *param_4 = (int)pbVar9 - (int)param_3;
  return 0;
}

