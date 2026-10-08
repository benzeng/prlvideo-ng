
long FUN_100bce2e0(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  long local_58;
  
  lVar13 = *(long *)(param_1 + 0x40);
  uVar14 = *(ulong *)(param_1 + 0x6a);
  uVar19 = param_3;
  if ((uVar14 & 0x400000) == 0) {
    uVar19 = param_2;
  }
  iVar10 = FUN_100c60800(uVar19);
  iVar18 = 0;
  local_58 = 0;
  if (0 < iVar10) {
    if ((uVar14 & 0x400000) == 0) {
      param_2 = param_3;
    }
    local_58 = 0;
    cVar8 = '\0';
    cVar7 = '\0';
    cVar9 = '\0';
    do {
      lVar11 = FUN_100c60820(uVar19,iVar18);
      if (((*(byte *)(lVar11 + 0x38) & 4) == 0) ||
         ((0x302 < (int)*param_1 && ((*param_1 & 0xffffff00) == 0x300)))) {
        FUN_100be5a90(lVar13,lVar11);
        uVar14 = *(ulong *)(lVar13 + 0x10);
        uVar12 = *(ulong *)(lVar13 + 0x18);
        uVar17 = *(ulong *)(lVar13 + 0x20);
        uVar15 = *(ulong *)(lVar13 + 0x28);
        if ((*(byte *)((long)param_1 + 0x321) & 4) != 0) {
          uVar14 = uVar14 | 0x400;
          uVar17 = uVar17 | 0x400;
          uVar12 = uVar12 | 0x400;
          uVar15 = uVar15 | 0x400;
        }
        uVar1 = *(ulong *)(lVar11 + 0x18);
        uVar2 = *(ulong *)(lVar11 + 0x20);
        if (((uVar1 & 0x100) == 0) || (*(long *)(param_1 + 0x5a) != 0)) {
          if ((*(byte *)(lVar11 + 0x40) & 2) == 0) {
            if ((uVar14 & uVar1) == 0) {
              bVar21 = false;
            }
            else {
LAB_100bce49f:
              bVar21 = (uVar12 & uVar2) != 0;
            }
          }
          else {
            uVar12 = uVar15;
            if ((uVar17 & uVar1) != 0) goto LAB_100bce49f;
            bVar21 = false;
          }
          bVar20 = bVar21;
          if ((uVar2 & 0x50) != 0) {
            plVar3 = *(long **)(*(long *)(param_1 + 0x40) + 0xd8);
            if ((((((plVar3 != (long *)0x0) && (*(long *)(*(long *)(param_1 + 0x4c) + 0x120) != 0))
                  && (*(long *)(*(long *)(param_1 + 0x4c) + 0x128) != 0)) &&
                 ((lVar4 = *plVar3, lVar4 != 0 && (lVar4 = *(long *)(lVar4 + 0x30), lVar4 != 0))))
                && (lVar4 = *(long *)(lVar4 + 8), lVar4 != 0)) &&
               ((pbVar5 = *(byte **)(lVar4 + 8), pbVar5 != (byte *)0x0 && ((*pbVar5 & 0xfe) == 2))))
            {
              plVar3 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0xe0) + 0x20) + 8)
              ;
              if ((plVar3 == (long *)0x0) ||
                 ((*plVar3 == 0 || (iVar10 = FUN_100c36a80(), iVar10 != 0x196)))) {
                iVar10 = FUN_100c36a80();
                bVar20 = false;
                if (iVar10 != 0x197) goto LAB_100bce670;
                uVar14 = *(ulong *)(*(long *)(param_1 + 0x4c) + 0x120);
                if (uVar14 == 0) {
                  bVar6 = 0;
                }
                else {
                  uVar16 = 1;
                  uVar12 = 0;
                  do {
                    bVar6 = 1;
                    if (*(char *)(*(long *)(*(long *)(param_1 + 0x4c) + 0x128) + uVar12) == '\x02')
                    goto LAB_100bce662;
                    uVar12 = (ulong)uVar16;
                    uVar16 = uVar16 + 1;
                  } while (uVar12 < uVar14);
                  bVar6 = 0;
                }
              }
              else {
                uVar14 = *(ulong *)(*(long *)(param_1 + 0x4c) + 0x120);
                if (uVar14 == 0) {
                  bVar6 = 0;
                }
                else {
                  uVar12 = 0;
                  uVar17 = 1;
                  do {
                    bVar6 = 1;
                    if (*(char *)(*(long *)(*(long *)(param_1 + 0x4c) + 0x128) + uVar12) == '\x01')
                    goto LAB_100bce662;
                    bVar20 = uVar17 < uVar14;
                    uVar12 = uVar17;
                    uVar17 = (ulong)((int)uVar17 + 1);
                  } while (bVar20);
                  bVar6 = 0;
                }
              }
LAB_100bce662:
              bVar20 = (bool)(bVar21 & bVar6);
            }
LAB_100bce670:
            if (((*(long *)(*(long *)(param_1 + 0x40) + 0xd8) != 0) &&
                (*(long *)(*(long *)(param_1 + 0x4c) + 0x130) != 0)) &&
               (*(long *)(*(long *)(param_1 + 0x4c) + 0x138) != 0)) {
              lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0xe0) + 0x20);
              if (lVar4 == 0) {
                bVar6 = 0;
              }
              else {
                lVar4 = *(long *)(lVar4 + 8);
                if (lVar4 == 0) {
                  bVar6 = 0;
                }
                else {
                  iVar10 = FUN_100c36c50(lVar4,lVar11);
                  if ((iVar10 == 0) &&
                     (**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0xe0) + 0x20) + 8)
                      != 0)) {
                    iVar10 = FUN_100c36a80();
                    if (iVar10 != 0x196) {
                      iVar10 = FUN_100c36a80(**(undefined8 **)
                                               (*(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0xe0
                                                                   ) + 0x20) + 8));
                      cVar9 = -1;
                      if (iVar10 != 0x197) {
                        cVar9 = cVar7;
                      }
                      cVar7 = '\x02';
                      if (iVar10 != 0x197) {
                        cVar7 = cVar8;
                      }
                      goto LAB_100bce749;
                    }
                    cVar9 = -1;
                    cVar8 = '\x01';
                  }
                  else {
                    cVar7 = FUN_100bd7290(iVar10);
                    cVar9 = '\0';
LAB_100bce749:
                    cVar8 = cVar7;
                    if (cVar8 == '\0' && cVar9 == '\0') {
                      bVar6 = 0;
                      cVar7 = cVar9;
                      goto LAB_100bce7ce;
                    }
                  }
                  uVar14 = *(ulong *)(*(long *)(param_1 + 0x4c) + 0x130);
                  cVar7 = cVar9;
                  if (1 < uVar14) {
                    lVar4 = *(long *)(*(long *)(param_1 + 0x4c) + 0x138);
                    uVar16 = 1;
                    uVar12 = 1;
                    do {
                      if ((*(char *)(lVar4 + (ulong)(uVar16 - 1)) == cVar9) &&
                         (bVar6 = 1, *(char *)(lVar4 + (ulong)uVar16) == cVar8)) goto LAB_100bce7ce;
                      uVar16 = uVar16 + 2;
                      bVar21 = uVar12 < uVar14 >> 1;
                      uVar12 = (ulong)((int)uVar12 + 1);
                    } while (bVar21);
                  }
                  bVar6 = 0;
                }
              }
LAB_100bce7ce:
              bVar20 = (bool)(bVar20 & bVar6);
            }
          }
          if (((((uVar1 & 0x80) != 0) && (*(long *)(*(long *)(param_1 + 0x40) + 0x50) != 0)) &&
              (*(long *)(*(long *)(param_1 + 0x4c) + 0x130) != 0)) &&
             (*(long *)(*(long *)(param_1 + 0x4c) + 0x138) != 0)) {
            lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 0x50) + 8);
            if (lVar4 == 0) {
              bVar6 = 0;
            }
            else {
              iVar10 = FUN_100c36c50(lVar4,lVar11);
              if ((iVar10 == 0) &&
                 (**(long **)(*(long *)(*(long *)(param_1 + 0x40) + 0x50) + 8) != 0)) {
                iVar10 = FUN_100c36a80();
                if (iVar10 != 0x196) {
                  iVar10 = FUN_100c36a80(**(undefined8 **)
                                           (*(long *)(*(long *)(param_1 + 0x40) + 0x50) + 8));
                  cVar7 = -1;
                  if (iVar10 != 0x197) {
                    cVar7 = cVar9;
                  }
                  cVar9 = '\x02';
                  if (iVar10 != 0x197) {
                    cVar9 = cVar8;
                  }
                  goto LAB_100bce895;
                }
                cVar7 = -1;
                cVar8 = '\x01';
              }
              else {
                cVar9 = FUN_100bd7290(iVar10);
                cVar7 = '\0';
LAB_100bce895:
                cVar8 = cVar9;
                if (cVar8 == '\0' && cVar7 == '\0') {
                  bVar6 = 0;
                  cVar9 = cVar7;
                  goto LAB_100bce91c;
                }
              }
              uVar14 = *(ulong *)(*(long *)(param_1 + 0x4c) + 0x130);
              cVar9 = cVar7;
              if (1 < uVar14) {
                lVar4 = *(long *)(*(long *)(param_1 + 0x4c) + 0x138);
                uVar16 = 1;
                uVar12 = 1;
                do {
                  if ((*(char *)(lVar4 + (ulong)(uVar16 - 1)) == cVar7) &&
                     (bVar6 = 1, *(char *)(lVar4 + (ulong)uVar16) == cVar8)) goto LAB_100bce91c;
                  uVar16 = uVar16 + 2;
                  bVar21 = uVar12 < uVar14 >> 1;
                  uVar12 = (ulong)((int)uVar12 + 1);
                } while (bVar21);
              }
              bVar6 = 0;
            }
LAB_100bce91c:
            bVar20 = (bool)(bVar20 & bVar6);
          }
          if ((bVar20) && (iVar10 = FUN_100c60360(param_2,lVar11), -1 < iVar10)) {
            if (((uVar2 & 0x40) == 0) ||
               (((uVar1 & 0x80) == 0 || (*(char *)(*(long *)(param_1 + 0x20) + 0x4ac) == '\0')))) {
              lVar13 = FUN_100c60820(param_2,iVar10);
              return lVar13;
            }
            if (local_58 == 0) {
              local_58 = FUN_100c60820(param_2,iVar10);
            }
          }
        }
      }
      iVar18 = iVar18 + 1;
      iVar10 = FUN_100c60800(uVar19);
    } while (iVar18 < iVar10);
  }
  return local_58;
}

