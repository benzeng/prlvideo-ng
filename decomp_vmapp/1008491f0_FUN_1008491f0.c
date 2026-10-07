
undefined4
FUN_1008491f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,
             undefined8 param_5)

{
  bool bVar1;
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
  int iVar12;
  uint local_1a0;
  undefined1 local_178 [56];
  long alStack_140 [33];
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar7;
  if ((*(byte *)(param_3 + 0x14) & 4) != 0) {
    FUN_100887ce0(3,0x7d,0x42,"bn_exp.c",0x10e);
    uVar4 = 0xffffffff;
    goto LAB_1008494b3;
  }
  iVar2 = FUN_10084b410(param_3);
  if (iVar2 == 0) {
    if (((*(int *)(param_4 + 1) == 1) && (*(long *)*param_4 == 1)) && (*(int *)(param_4 + 2) == 0))
    {
      FUN_10084bbb0(param_1,0);
      uVar4 = 1;
    }
    else {
      uVar4 = FUN_10084bbb0(param_1,1);
    }
    goto LAB_1008494b3;
  }
  FUN_10084ca60(param_5);
  lVar7 = FUN_10084cc20(param_5);
  lVar8 = FUN_10084cc20(param_5);
  alStack_140[1] = lVar8;
  if ((lVar7 == 0) || (lVar8 == 0)) {
LAB_10084948f:
    uVar4 = 0;
  }
  else {
    FUN_100857370(local_178);
    if (*(int *)(param_4 + 2) != 0) {
      lVar9 = FUN_10084b950(lVar7,param_4);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar7 + 0x10) = 0;
        iVar3 = FUN_100857440(local_178,lVar7,param_5);
        if (0 < iVar3) goto LAB_10084936d;
      }
      goto LAB_10084948f;
    }
    iVar3 = FUN_100857440(local_178,param_4,param_5);
    if (iVar3 < 1) goto LAB_10084948f;
LAB_10084936d:
    iVar3 = FUN_10084e8b0(lVar8,param_2,param_4,param_5);
    if (iVar3 == 0) goto LAB_10084948f;
    if (*(int *)(lVar8 + 8) == 0) {
      FUN_10084bbb0(param_1,0);
      uVar4 = 1;
    }
    else {
      uVar11 = 6;
      if (((iVar2 < 0x2a0) && (uVar11 = 5, iVar2 < 0xf0)) && (uVar11 = 4, iVar2 < 0x50)) {
        local_1a0 = 1;
        uVar11 = 3;
        if (0x17 < iVar2) goto LAB_1008493e8;
      }
      else {
LAB_1008493e8:
        iVar3 = FUN_100857490(lVar7,lVar8,lVar8,local_178,param_5);
        if (iVar3 == 0) {
          uVar4 = 0;
          goto LAB_100849495;
        }
        iVar3 = 1 << ((char)uVar11 - 1U & 0x1f);
        local_1a0 = uVar11;
        if (1 < iVar3) {
          lVar8 = 1;
          do {
            lVar9 = FUN_10084cc20(param_5);
            alStack_140[lVar8 + 1] = lVar9;
            if (lVar9 == 0) {
              uVar4 = 0;
              goto LAB_100849495;
            }
            iVar5 = FUN_100857490(lVar9,alStack_140[lVar8],lVar7,local_178,param_5);
            if (iVar5 == 0) {
              uVar4 = 0;
              goto LAB_100849495;
            }
            lVar8 = lVar8 + 1;
          } while (lVar8 < iVar3);
        }
      }
      iVar3 = FUN_10084bbb0(param_1,1);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        iVar2 = iVar2 + -1;
        bVar1 = true;
        do {
          iVar3 = FUN_10084c160(param_3,iVar2);
          if (iVar3 == 0) {
            if (bVar1) {
              do {
                uVar4 = 1;
                if (iVar2 == 0) goto LAB_100849495;
                iVar2 = iVar2 + -1;
                iVar3 = FUN_10084c160(param_3,iVar2);
              } while (iVar3 == 0);
            }
            else {
              do {
                iVar3 = FUN_100857490(param_1,param_1,param_1,local_178,param_5);
                if (iVar3 == 0) {
                  uVar4 = 0;
                  goto LAB_100849495;
                }
                uVar4 = 1;
                if (iVar2 == 0) goto LAB_100849495;
                iVar2 = iVar2 + -1;
                iVar3 = FUN_10084c160(param_3,iVar2);
              } while (iVar3 == 0);
            }
          }
          iVar5 = 0;
          uVar11 = 1;
          iVar3 = 0;
          if (1 < local_1a0) {
            iVar3 = 0;
            uVar11 = 1;
            iVar12 = 1;
            iVar10 = iVar2;
            do {
              iVar10 = iVar10 + -1;
              if (iVar10 < 0) break;
              iVar6 = FUN_10084c160(param_3,iVar10);
              if (iVar6 != 0) {
                uVar11 = uVar11 << ((char)iVar12 - (char)iVar3 & 0x1fU) | 1;
                iVar3 = iVar12;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)local_1a0);
          }
          if ((!bVar1) && (-1 < iVar3)) {
            do {
              iVar10 = FUN_100857490(param_1,param_1,param_1,local_178);
              uVar4 = 0;
              if (iVar10 == 0) goto LAB_100849495;
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar3 + 1);
          }
          iVar5 = FUN_100857490(param_1,param_1,alStack_140[(long)((int)uVar11 >> 1) + 1],local_178)
          ;
          uVar4 = 0;
          if (iVar5 == 0) break;
          bVar1 = false;
          iVar2 = iVar2 - (iVar3 + 1);
          uVar4 = 1;
        } while (-1 < iVar2);
      }
    }
  }
LAB_100849495:
  FUN_10084cb40(param_5);
  FUN_100857400(local_178);
  lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1008494b3:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

