
undefined8
FUN_100744980(void *param_1,uint param_2,byte *param_3,uint *param_4,long param_5,int *param_6)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  bool bVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  byte bVar15;
  void *pvVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  int *piVar23;
  
  uVar17 = *param_4;
  uVar9 = 0xfffffffd;
  if ((param_2 & 0xfff) == 0) {
    pvVar16 = (void *)((ulong)param_2 + (long)param_1);
    pbVar5 = *(byte **)param_6;
    piVar14 = param_6;
    pvVar21 = param_1;
    if (param_2 != 0) {
      if ((pbVar5 == (byte *)0x0) || ((*pbVar5 & 1) == 0)) {
        _memcpy(param_6,param_1,0x1000);
      }
      else {
        ___bzero(param_6);
      }
      piVar14 = param_6 + 0x400;
      pvVar21 = (void *)((long)param_1 + 0x1000);
    }
    if (pvVar21 < pvVar16) {
      if ((pbVar5 == (byte *)0x0) ||
         (uVar10 = ((ulong)((long)pvVar21 - (long)param_1 >> 0x3f) >> 0x34) +
                   ((long)pvVar21 - (long)param_1),
         (*(uint *)(pbVar5 + ((long)uVar10 >> 0x11) * 4) >> ((uint)(uVar10 >> 0xc) & 0x1f) & 1) == 0
         )) {
        _memcpy(piVar14,pvVar21,0x1000);
      }
      else {
        ___bzero(piVar14);
      }
      piVar14 = piVar14 + 0x400;
      pvVar21 = (void *)((long)pvVar21 + 0x1000);
    }
    if (pvVar21 < pvVar16) {
      if ((pbVar5 == (byte *)0x0) ||
         (uVar10 = ((ulong)((long)pvVar21 - (long)param_1 >> 0x3f) >> 0x34) +
                   ((long)pvVar21 - (long)param_1),
         (*(uint *)(pbVar5 + ((long)uVar10 >> 0x11) * 4) >> ((uint)(uVar10 >> 0xc) & 0x1f) & 1) == 0
         )) {
        _memcpy(piVar14,pvVar21,0x1000);
        bVar7 = true;
      }
      else {
        ___bzero(piVar14);
        bVar7 = false;
      }
      piVar14 = piVar14 + 0x400;
      pvVar21 = (void *)((long)pvVar21 + 0x1000);
    }
    else {
      bVar7 = false;
    }
    pbVar3 = param_3 + uVar17;
    piVar19 = piVar14 + -4;
    if (pvVar21 < pvVar16) {
      piVar19 = piVar14;
    }
    uVar17 = 0;
    pbVar12 = param_3;
    piVar14 = param_6;
    if (param_6 < piVar19) {
      piVar23 = param_6 + 0x800;
      piVar1 = param_6 + 0x400;
      piVar11 = piVar19;
      bVar15 = 0;
      do {
        piVar19 = piVar11;
        if ((pvVar21 < pvVar16) && (piVar23 <= piVar14)) {
          if (pbVar5 == (byte *)0x0) {
            _memcpy(param_6,piVar1,0x1000);
            _memcpy(piVar1,piVar23,0x1000);
LAB_100744d18:
            _memcpy(piVar11 + -0x400,pvVar21,0x1000);
            bVar7 = true;
          }
          else {
            uVar13 = uVar17 >> 0xc;
            uVar10 = (ulong)(uVar13 + 1 >> 5);
            bVar8 = (byte)(uVar13 + 1);
            if ((*(uint *)(pbVar5 + uVar10 * 4) >> (bVar8 & 0x1f) & 1) == 0) {
              _memcpy(param_6,piVar1,0x1000);
            }
            else if ((*(uint *)(pbVar5 + (ulong)(uVar17 >> 0x11) * 4) >> (uVar13 & 0x1f) & 1) == 0)
            {
              ___bzero(param_6,0x1000);
            }
            if ((*(uint *)(pbVar5 + (ulong)(uVar13 + 2 >> 5) * 4) >> (uVar13 + 2 & 0x1f) & 1) == 0)
            {
              _memcpy(piVar1,piVar23,0x1000);
            }
            else if ((*(uint *)(pbVar5 + uVar10 * 4) & 1 << (bVar8 & 0x1f)) == 0) {
              ___bzero(piVar1,0x1000);
            }
            uVar10 = ((ulong)((long)pvVar21 - (long)param_1 >> 0x3f) >> 0x34) +
                     ((long)pvVar21 - (long)param_1);
            if ((*(uint *)(pbVar5 + ((long)uVar10 >> 0x11) * 4) >> ((uint)(uVar10 >> 0xc) & 0x1f) &
                1) == 0) goto LAB_100744d18;
            if (bVar7) {
              ___bzero(piVar11 + -0x400,0x1000);
            }
            bVar7 = false;
          }
          piVar14 = piVar14 + -0x400;
          pvVar21 = (void *)((long)pvVar21 + 0x1000);
          uVar17 = uVar17 + 0x1000;
          piVar19 = piVar11 + -4;
          if (pvVar21 < pvVar16) {
            piVar19 = piVar11;
          }
        }
        iVar4 = *piVar14;
        uVar10 = (ulong)((uint)(iVar4 * 0x5de097d7) >> 0x14);
        lVar6 = *(long *)(param_5 + uVar10 * 8);
        uVar20 = (ulong)uVar17;
        piVar11 = (int *)(lVar6 - uVar20);
        *(ulong *)(param_5 + uVar10 * 8) = (long)piVar14 + uVar20;
        if ((((piVar11 < piVar14) && (uVar10 = (ulong)bVar15, bVar15 != 1)) && (param_6 <= piVar11))
           && ((lVar22 = (long)piVar14 + (0xffffffff - (long)piVar11), (uint)lVar22 < 0x1000 &&
               (iVar4 == *piVar11)))) {
          if (bVar15 != 0) {
            if (pbVar3 < pbVar12 + uVar10 + 0x10) {
              return 0xfffffffe;
            }
            *pbVar12 = bVar15 - 1;
            if (bVar15 < 0x11) {
              *(undefined8 *)(pbVar12 + 1) = *(undefined8 *)((long)piVar14 - uVar10);
              *(undefined8 *)(pbVar12 + 9) = *(undefined8 *)((long)piVar14 + (8 - uVar10));
            }
            else {
              _memcpy(pbVar12 + 1,(undefined8 *)((long)piVar14 - uVar10),uVar10);
            }
            pbVar12 = pbVar12 + uVar10 + 1;
          }
          if (pbVar3 < pbVar12 + 2) {
            return 0xfffffffe;
          }
          bVar8 = (byte)((ulong)lVar22 >> 8);
          if ((char)piVar14[1] == *(char *)(lVar6 + (4 - uVar20))) {
            if (*(char *)((long)piVar14 + 5) == *(char *)(lVar6 + (5 - uVar20))) {
              if (*(char *)((long)piVar14 + 6) == *(char *)(lVar6 + (6 - uVar20))) {
                if (*(char *)((long)piVar14 + 7) == *(char *)(lVar6 + (7 - uVar20))) {
                  if ((char)piVar14[2] == *(char *)(lVar6 + (8 - uVar20))) {
                    if (*(char *)((long)piVar14 + 9) == *(char *)(lVar6 + (9 - uVar20))) {
                      if (*(short *)((long)piVar14 + 10) == *(short *)(lVar6 + (10 - uVar20))) {
                        if (pbVar3 < pbVar12 + 3) {
                          return 0xfffffffe;
                        }
                        piVar2 = piVar14 + 3;
                        piVar18 = piVar14 + 0x101;
                        if (piVar19 + 3 < piVar14 + 0x101) {
                          piVar18 = piVar19 + 3;
                        }
                        piVar11 = piVar2;
                        if (piVar2 <= piVar18) {
                          piVar14 = (int *)(lVar6 + (0xc - uVar20));
                          do {
                            if (*piVar11 != *piVar14) break;
                            piVar11 = piVar11 + 1;
                            piVar14 = piVar14 + 1;
                          } while (piVar11 <= piVar18);
                        }
                        *pbVar12 = bVar8 | 0xf0;
                        pbVar12[1] = (byte)lVar22;
                        pbVar12[2] = (byte)((uint)((int)piVar11 - (int)piVar2) >> 2);
                        bVar8 = 0;
                        pbVar12 = pbVar12 + 3;
                        goto LAB_1007450e0;
                      }
                      piVar11 = (int *)((long)piVar14 + 10);
                      bVar8 = bVar8 | 0xe0;
                    }
                    else {
                      piVar11 = (int *)((long)piVar14 + 9);
                      bVar8 = bVar8 | 0xd0;
                    }
                  }
                  else {
                    piVar11 = piVar14 + 2;
                    bVar8 = bVar8 | 0xc0;
                  }
                }
                else {
                  piVar11 = (int *)((long)piVar14 + 7);
                  bVar8 = bVar8 | 0xb0;
                }
              }
              else {
                piVar11 = (int *)((long)piVar14 + 6);
                bVar8 = bVar8 | 0xa0;
              }
            }
            else {
              piVar11 = (int *)((long)piVar14 + 5);
              bVar8 = bVar8 | 0x90;
            }
          }
          else {
            piVar11 = piVar14 + 1;
            bVar8 = bVar8 | 0x80;
          }
          *pbVar12 = bVar8;
          pbVar12[1] = (byte)lVar22;
          bVar8 = 0;
          pbVar12 = pbVar12 + 2;
        }
        else {
          bVar8 = bVar15 + 1;
          piVar11 = (int *)((long)piVar14 + 1);
          if ((char)bVar8 < '\0') {
            uVar10 = (ulong)bVar8;
            if (pbVar3 < pbVar12 + uVar10 + 0x10) {
              return 0xfffffffe;
            }
            *pbVar12 = bVar15;
            _memcpy(pbVar12 + 1,(void *)((long)piVar14 + (1 - uVar10)),uVar10);
            pbVar12 = pbVar12 + uVar10 + 1;
            bVar8 = 0;
          }
        }
LAB_1007450e0:
        piVar14 = piVar11;
        piVar11 = piVar19;
        bVar15 = bVar8;
      } while (piVar14 < piVar19);
    }
    else {
      bVar8 = 0;
    }
    while (bVar15 = bVar8, piVar23 = piVar14, piVar23 < piVar19 + 4) {
      bVar8 = bVar15 + 1;
      piVar14 = (int *)((long)piVar23 + 1);
      if ((char)bVar8 < '\0') {
        uVar10 = (ulong)bVar8;
        if (pbVar3 < pbVar12 + uVar10 + 1) {
          return 0xfffffffe;
        }
        *pbVar12 = bVar15;
        _memcpy(pbVar12 + 1,(void *)((long)piVar23 + (1 - uVar10)),uVar10);
        pbVar12 = pbVar12 + uVar10 + 1;
        bVar8 = 0;
      }
    }
    if (bVar15 != 0) {
      uVar10 = (ulong)bVar15;
      if (pbVar3 < pbVar12 + uVar10 + 1) {
        return 0xfffffffe;
      }
      *pbVar12 = bVar15 - 1;
      _memcpy(pbVar12 + 1,(void *)((long)piVar23 - uVar10),uVar10);
      pbVar12 = pbVar12 + uVar10 + 1;
    }
    *param_4 = (int)pbVar12 - (int)param_3;
    uVar9 = 0;
  }
  return uVar9;
}

