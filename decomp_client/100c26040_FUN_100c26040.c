
undefined4
FUN_100c26040(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_164;
  long local_138 [32];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar7;
  if ((*(byte *)(param_3 + 0x14) & 4) != 0) {
    FUN_100c62ee0(3,0x7e,0x42,"bn_exp.c",0x436);
    uVar4 = 0xffffffff;
    goto LAB_100c2643b;
  }
  iVar1 = FUN_100c26610(param_3);
  if (iVar1 == 0) {
    if (((*(int *)(param_4 + 1) == 1) && (*(long *)*param_4 == 1)) && (*(int *)(param_4 + 2) == 0))
    {
      FUN_100c26db0(param_1,0);
      uVar4 = 1;
    }
    else {
      uVar4 = FUN_100c26db0(param_1,1);
    }
    goto LAB_100c2643b;
  }
  FUN_100c27c60(param_5);
  lVar7 = FUN_100c27e20(param_5);
  lVar8 = FUN_100c27e20(param_5);
  local_138[0] = lVar8;
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else if (lVar8 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_100c29ab0(lVar8,param_2,param_4,param_5);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else if (*(int *)(lVar8 + 8) == 0) {
      FUN_100c26db0(param_1,0);
      uVar4 = 1;
    }
    else {
      uVar11 = 6;
      if (((iVar1 < 0x2a0) && (uVar11 = 5, iVar1 < 0xf0)) && (uVar11 = 4, iVar1 < 0x50)) {
        local_164 = 1;
        uVar11 = 3;
        if (0x17 < iVar1) goto LAB_100c26154;
      }
      else {
LAB_100c26154:
        iVar2 = FUN_100c29cc0(lVar7,lVar8,lVar8,param_4,param_5);
        if (iVar2 == 0) {
          uVar4 = 0;
          goto LAB_100c26425;
        }
        iVar2 = 1 << ((char)uVar11 - 1U & 0x1f);
        local_164 = uVar11;
        if (1 < iVar2) {
          lVar8 = 1;
          do {
            lVar9 = FUN_100c27e20(param_5);
            local_138[lVar8] = lVar9;
            if (lVar9 == 0) {
              uVar4 = 0;
              goto LAB_100c26425;
            }
            iVar3 = FUN_100c29cc0(lVar9,local_138[lVar8 + -1],lVar7,param_4,param_5);
            if (iVar3 == 0) {
              uVar4 = 0;
              goto LAB_100c26425;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < iVar2);
        }
      }
      iVar2 = FUN_100c26db0(param_1,1);
      if (iVar2 != 0) {
        iVar1 = iVar1 + -1;
        bVar12 = true;
        do {
          while (iVar2 = FUN_100c27360(param_3,iVar1), iVar2 != 0) {
            iVar3 = 0;
            uVar11 = 1;
            iVar2 = 0;
            if (1 < local_164) {
              iVar2 = 0;
              uVar11 = 1;
              iVar10 = 1;
              iVar6 = iVar1;
              do {
                iVar6 = iVar6 + -1;
                if (iVar6 < 0) break;
                iVar5 = FUN_100c27360(param_3,iVar6);
                if (iVar5 != 0) {
                  uVar11 = uVar11 << ((char)iVar10 - (char)iVar2 & 0x1fU) | 1;
                  iVar2 = iVar10;
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < (int)local_164);
            }
            if ((!bVar12) && (-1 < iVar2)) {
              do {
                iVar6 = FUN_100c29cc0(param_1,param_1,param_1,param_4,param_5);
                uVar4 = 0;
                if (iVar6 == 0) goto LAB_100c26425;
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar2 + 1);
            }
            iVar3 = FUN_100c29cc0(param_1,param_1,local_138[(int)uVar11 >> 1],param_4,param_5);
            uVar4 = 0;
            if (iVar3 == 0) goto LAB_100c26425;
            bVar12 = false;
            iVar1 = iVar1 - (iVar2 + 1);
            uVar4 = 1;
            if (iVar1 < 0) goto LAB_100c26425;
          }
          if ((!bVar12) &&
             (iVar2 = FUN_100c29cc0(param_1,param_1,param_1,param_4,param_5), iVar2 == 0)) {
            uVar4 = 0;
            goto LAB_100c26425;
          }
          uVar4 = 1;
          if (iVar1 == 0) goto LAB_100c26425;
          iVar1 = iVar1 + -1;
        } while( true );
      }
      uVar4 = 0;
    }
  }
LAB_100c26425:
  FUN_100c27d40(param_5);
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100c2643b:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

