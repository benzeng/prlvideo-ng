
uint FUN_100858400(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int local_274;
  long local_238 [31];
  long alStack_140 [33];
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar12;
  if ((*(byte *)*param_6 & 1) == 0) {
    FUN_100887ce0(3,0x76,0x66,"bn_exp2.c",0x8a);
    uVar9 = 0;
    goto LAB_100858bb7;
  }
  iVar4 = FUN_10084b410(param_3);
  iVar5 = FUN_10084b410(param_5);
  if (iVar5 == 0 && iVar4 == 0) {
    uVar9 = FUN_10084bbb0(param_1,1);
  }
  else {
    local_274 = iVar5;
    if (iVar5 <= iVar4) {
      local_274 = iVar4;
    }
    FUN_10084ca60(param_7);
    lVar12 = FUN_10084cc20(param_7);
    lVar13 = FUN_10084cc20(param_7);
    lVar14 = FUN_10084cc20(param_7);
    alStack_140[1] = lVar14;
    lVar15 = FUN_10084cc20(param_7);
    uVar9 = 0;
    local_238[0] = lVar15;
    if ((((lVar15 != 0) && (lVar12 != 0)) && (lVar13 != 0)) && (uVar9 = 0, lVar14 != 0)) {
      lVar16 = param_8;
      if (param_8 == 0) {
        lVar16 = FUN_100857ed0();
        if (lVar16 != 0) {
          iVar6 = FUN_100857fe0(lVar16,param_6,param_7);
          uVar9 = 0;
          if (iVar6 != 0) goto LAB_100858572;
          goto LAB_100858b90;
        }
      }
      else {
LAB_100858572:
        uVar19 = 6;
        uVar7 = 6;
        if (((iVar4 < 0x2a0) && (uVar7 = 5, iVar4 < 0xf0)) && (uVar7 = 4, iVar4 < 0x50)) {
          uVar7 = (0x17 < iVar4) + 1 + (uint)(0x17 < iVar4);
        }
        if (((iVar5 < 0x2a0) && (uVar19 = 5, iVar5 < 0xf0)) && (uVar19 = 4, iVar5 < 0x50)) {
          uVar19 = (0x17 < iVar5) + 1 + (uint)(0x17 < iVar5);
        }
        if ((*(int *)(param_2 + 0x10) != 0) || (iVar6 = FUN_10084bf00(param_2,param_6), -1 < iVar6))
        {
          iVar6 = FUN_100847f70(0,lVar14,param_2,param_6,param_7);
          param_2 = lVar14;
          uVar9 = 0;
          if (iVar6 == 0) goto LAB_100858b90;
        }
        if (*(int *)(param_2 + 8) == 0) {
LAB_100858b7c:
          FUN_10084bbb0(param_1,0);
          uVar9 = 1;
        }
        else {
          lVar1 = lVar16 + 8;
          iVar6 = FUN_1008578b0(lVar14,param_2,lVar1,lVar16,param_7);
          uVar20 = 0;
          uVar9 = 0;
          if (iVar6 != 0) {
            uVar9 = uVar20;
            if (1 < uVar7) {
              iVar6 = FUN_1008578b0(lVar12,lVar14,lVar14,lVar16,param_7);
              if (iVar6 == 0) goto LAB_100858b90;
              iVar6 = 1 << ((char)uVar7 - 1U & 0x1f);
              if (1 < iVar6) {
                lVar14 = 1;
                do {
                  lVar17 = FUN_10084cc20(param_7);
                  alStack_140[lVar14 + 1] = lVar17;
                  if ((lVar17 == 0) ||
                     (iVar8 = FUN_1008578b0(lVar17,alStack_140[lVar14],lVar12,lVar16,param_7),
                     iVar8 == 0)) goto LAB_100858b90;
                  lVar14 = lVar14 + 1;
                } while (lVar14 < iVar6);
              }
            }
            if (((*(int *)(param_4 + 0x10) == 0) &&
                (iVar6 = FUN_10084bf00(param_4,param_6), iVar6 < 0)) ||
               (iVar6 = FUN_100847f70(0,lVar15,param_4,param_6,param_7), param_4 = lVar15,
               iVar6 != 0)) {
              if (*(int *)(param_4 + 8) == 0) goto LAB_100858b7c;
              iVar6 = FUN_1008578b0(lVar15,param_4,lVar1,lVar16,param_7);
              if (iVar6 != 0) {
                if (1 < uVar19) {
                  iVar6 = FUN_1008578b0(lVar12,lVar15,lVar15,lVar16,param_7);
                  if (iVar6 == 0) goto LAB_100858b90;
                  iVar6 = 1 << ((char)uVar19 - 1U & 0x1f);
                  if (1 < iVar6) {
                    lVar14 = 1;
                    do {
                      lVar15 = FUN_10084cc20(param_7);
                      local_238[lVar14] = lVar15;
                      if ((lVar15 == 0) ||
                         (iVar8 = FUN_1008578b0(lVar15,local_238[lVar14 + -1],lVar12,lVar16,param_7)
                         , iVar8 == 0)) goto LAB_100858b90;
                      lVar14 = lVar14 + 1;
                    } while (lVar14 < iVar6);
                  }
                }
                uVar18 = FUN_10084b310();
                iVar6 = FUN_1008578b0(lVar13,uVar18,lVar1,lVar16,param_7);
                if (iVar6 != 0) {
                  if (0 < local_274) {
                    if (iVar4 <= iVar5) {
                      iVar4 = iVar5;
                    }
                    uVar20 = 0;
                    bVar3 = true;
                    uVar21 = 0;
                    iVar5 = 0;
                    iVar6 = 0;
                    do {
                      iVar4 = iVar4 + -1;
                      if (!bVar3) {
                        iVar8 = FUN_1008578b0(lVar13,lVar13,lVar13,lVar16,param_7);
                        uVar9 = 0;
                        if (iVar8 == 0) goto LAB_100858b90;
                      }
                      iVar8 = local_274 + -1;
                      if (uVar21 == 0) {
                        iVar10 = FUN_10084c160(param_3);
                        uVar21 = 0;
                        if (iVar10 != 0) {
                          iVar6 = iVar8 - uVar7;
                          do {
                            iVar6 = iVar6 + 1;
                            iVar10 = FUN_10084c160(param_3,iVar6);
                          } while (iVar10 == 0);
                          uVar21 = 1;
                          iVar10 = iVar4;
                          if (iVar6 <= local_274 + -2) {
                            do {
                              iVar10 = iVar10 + -1;
                              iVar11 = FUN_10084c160(param_3,iVar10);
                              uVar21 = (uint)(iVar11 != 0) | uVar21 * 2;
                            } while (iVar6 < iVar10);
                          }
                        }
                      }
                      if (uVar20 == 0) {
                        iVar10 = FUN_10084c160(param_5,iVar8);
                        uVar20 = 0;
                        if (iVar10 != 0) {
                          iVar5 = iVar8 - uVar19;
                          do {
                            iVar5 = iVar5 + 1;
                            iVar10 = FUN_10084c160(param_5,iVar5);
                          } while (iVar10 == 0);
                          uVar20 = 1;
                          iVar10 = iVar4;
                          if (iVar5 <= local_274 + -2) {
                            do {
                              iVar10 = iVar10 + -1;
                              iVar11 = FUN_10084c160(param_5,iVar10);
                              uVar20 = (uint)(iVar11 != 0) | uVar20 * 2;
                            } while (iVar5 < iVar10);
                          }
                        }
                      }
                      if ((iVar8 == iVar6) && (uVar21 != 0)) {
                        iVar10 = FUN_1008578b0(lVar13,lVar13,
                                               alStack_140[(long)((int)uVar21 >> 1) + 1],lVar16,
                                               param_7);
                        uVar21 = 0;
                        bVar3 = false;
                        if (iVar10 != 0) goto LAB_100858ada;
LAB_100858bd2:
                        uVar9 = 0;
                        goto LAB_100858b90;
                      }
LAB_100858ada:
                      if ((iVar8 == iVar5) && (uVar20 != 0)) {
                        iVar10 = FUN_1008578b0(lVar13,lVar13,local_238[(int)uVar20 >> 1],lVar16,
                                               param_7);
                        uVar20 = 0;
                        bVar3 = false;
                        if (iVar10 == 0) goto LAB_100858bd2;
                      }
                      bVar2 = 1 < local_274;
                      local_274 = iVar8;
                    } while (bVar2);
                  }
                  iVar4 = FUN_100857e50(param_1,lVar13,lVar16,param_7);
                  uVar9 = (uint)(iVar4 != 0);
                }
              }
            }
            else {
              uVar9 = 0;
            }
          }
        }
LAB_100858b90:
        if ((param_8 == 0) && (lVar16 != 0)) {
          FUN_100857f90(lVar16);
        }
      }
    }
    FUN_10084cb40(param_7);
  }
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_100858bb7:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

