
uint FUN_100848c40(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long local_140 [33];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if ((*(byte *)(param_3 + 0x14) & 4) != 0) {
    uVar13 = FUN_100849710(param_1,param_2,param_3,param_4,param_5,param_6);
    goto LAB_100848cc3;
  }
  if ((*(int *)(param_4 + 1) < 1) || ((*(byte *)*param_4 & 1) == 0)) {
    FUN_100887ce0(3,0x6d,0x66,"bn_exp.c",0x19b);
    uVar13 = 0;
    goto LAB_100848cc3;
  }
  iVar3 = FUN_10084b410(param_3);
  if (iVar3 == 0) {
    if (((*(int *)(param_4 + 1) == 1) && (*(long *)*param_4 == 1)) && (*(int *)(param_4 + 2) == 0))
    {
      FUN_10084bbb0(param_1,0);
      uVar13 = 1;
    }
    else {
      uVar13 = FUN_10084bbb0(param_1,1);
    }
    goto LAB_100848cc3;
  }
  FUN_10084ca60(param_5);
  lVar7 = FUN_10084cc20(param_5);
  lVar8 = FUN_10084cc20(param_5);
  local_140[0] = param_5;
  lVar9 = FUN_10084cc20(param_5);
  uVar13 = 0;
  local_140[1] = lVar9;
  if (((lVar7 != 0) && (lVar8 != 0)) && (lVar9 != 0)) {
    lVar10 = param_6;
    if (param_6 == 0) {
      lVar10 = FUN_100857ed0();
      uVar13 = 0;
      if (lVar10 != 0) {
        iVar4 = FUN_100857fe0(lVar10,param_4,local_140[0]);
        uVar13 = 0;
        if (iVar4 != 0) goto LAB_100848dc0;
        goto LAB_1008491b4;
      }
    }
    else {
LAB_100848dc0:
      if ((*(int *)(param_2 + 0x10) != 0) || (iVar4 = FUN_10084bf00(param_2,param_4), -1 < iVar4)) {
        iVar4 = FUN_10084e8b0(lVar9,param_2,param_4,local_140[0]);
        param_2 = lVar9;
        uVar13 = 0;
        if (iVar4 == 0) goto LAB_1008491b4;
      }
      if (*(int *)(param_2 + 8) == 0) {
        FUN_10084bbb0(param_1,0);
        uVar13 = 1;
      }
      else {
        iVar4 = FUN_1008578b0(lVar9,param_2,lVar10 + 8,lVar10,local_140[0]);
        uVar13 = 0;
        if (iVar4 != 0) {
          uVar13 = 6;
          if (((iVar3 < 0x2a0) && (uVar13 = 5, iVar3 < 0xf0)) && (uVar13 = 4, iVar3 < 0x50)) {
            uVar13 = 3;
            uVar1 = 1;
            if (0x17 < iVar3) goto LAB_100848e96;
LAB_100848fbd:
            uVar12 = FUN_10084b310();
            iVar4 = FUN_1008578b0(lVar8,uVar12,lVar10 + 8,lVar10,local_140[0]);
            if (iVar4 != 0) {
              iVar3 = iVar3 + -1;
              bVar2 = true;
              do {
                iVar4 = FUN_10084c160(param_3,iVar3);
                if (iVar4 == 0) {
                  if (bVar2) {
                    do {
                      if (iVar3 == 0) goto LAB_10084917f;
                      iVar3 = iVar3 + -1;
                      iVar4 = FUN_10084c160(param_3,iVar3);
                    } while (iVar4 == 0);
                  }
                  else {
                    do {
                      iVar4 = FUN_1008578b0(lVar8,lVar8,lVar8,lVar10,local_140[0]);
                      if (iVar4 == 0) goto LAB_1008491ad;
                      if (iVar3 == 0) goto LAB_10084917f;
                      iVar3 = iVar3 + -1;
                      iVar4 = FUN_10084c160(param_3,iVar3);
                    } while (iVar4 == 0);
                  }
                }
                iVar4 = 0;
                uVar13 = 1;
                iVar5 = 0;
                if (1 < uVar1) {
                  iVar5 = 0;
                  iVar15 = 1;
                  uVar13 = 1;
                  iVar14 = iVar3;
                  do {
                    iVar14 = iVar14 + -1;
                    if (iVar14 < 0) break;
                    iVar6 = FUN_10084c160(param_3,iVar14);
                    if (iVar6 != 0) {
                      uVar13 = uVar13 << ((char)iVar15 - (char)iVar5 & 0x1fU) | 1;
                      iVar5 = iVar15;
                    }
                    iVar15 = iVar15 + 1;
                  } while (iVar15 < (int)uVar1);
                }
                if ((!bVar2) && (-1 < iVar5)) {
                  do {
                    iVar14 = FUN_1008578b0(lVar8,lVar8,lVar8,lVar10,local_140[0]);
                    if (iVar14 == 0) goto LAB_1008491ad;
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < iVar5 + 1);
                }
                iVar4 = FUN_1008578b0(lVar8,lVar8,local_140[(long)((int)uVar13 >> 1) + 1],lVar10,
                                      local_140[0]);
                if (iVar4 == 0) goto LAB_1008491ad;
                bVar2 = false;
                iVar3 = iVar3 - (iVar5 + 1);
              } while (-1 < iVar3);
LAB_10084917f:
              iVar3 = FUN_100857e50(param_1,lVar8,lVar10,local_140[0]);
              uVar13 = (uint)(iVar3 != 0);
              goto LAB_1008491b4;
            }
          }
          else {
LAB_100848e96:
            iVar4 = FUN_1008578b0(lVar7,lVar9,lVar9,lVar10,local_140[0]);
            lVar9 = local_140[0];
            if (iVar4 != 0) {
              iVar4 = 1 << ((char)uVar13 - 1U & 0x1f);
              uVar1 = uVar13;
              if (1 < iVar4) {
                lVar16 = 1;
                do {
                  lVar11 = FUN_10084cc20(lVar9);
                  local_140[lVar16 + 1] = lVar11;
                  uVar13 = 0;
                  if ((lVar11 == 0) ||
                     (iVar5 = FUN_1008578b0(lVar11,local_140[lVar16],lVar7,lVar10,lVar9), iVar5 == 0
                     )) goto LAB_1008491b4;
                  lVar16 = lVar16 + 1;
                } while (lVar16 < iVar4);
              }
              goto LAB_100848fbd;
            }
          }
LAB_1008491ad:
          uVar13 = 0;
        }
      }
LAB_1008491b4:
      if ((param_6 == 0) && (lVar10 != 0)) {
        FUN_100857f90(lVar10);
      }
    }
  }
  FUN_10084cb40(local_140[0]);
LAB_100848cc3:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar13;
}

