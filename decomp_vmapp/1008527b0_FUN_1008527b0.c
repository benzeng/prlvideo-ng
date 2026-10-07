
undefined8
FUN_1008527b0(undefined8 param_1,int param_2,int param_3,long param_4,long param_5,int *param_6)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  ushort auStack_1038 [2048];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar3 = 2;
  if ((((((param_2 < 0x514) && (iVar3 = 3, param_2 < 0x352)) && (iVar3 = 4, param_2 < 0x28a)) &&
       ((iVar3 = 5, param_2 < 0x226 && (iVar3 = 6, param_2 < 0x1c2)))) &&
      ((iVar3 = 7, param_2 < 400 && ((iVar3 = 8, param_2 < 0x15e && (iVar3 = 9, param_2 < 300))))))
     && ((iVar3 = 0xc, param_2 < 0xfa && (iVar3 = 0xf, param_2 < 200)))) {
    iVar3 = (uint)(param_2 < 0x96) * 9 + 0x12;
  }
  lVar6 = FUN_10084c820();
  uVar9 = 0;
  if (lVar6 != 0) {
    FUN_10084ca60(lVar6);
    lVar7 = FUN_10084cc20(lVar6);
    uVar9 = 0;
    if (lVar7 != 0) {
      iVar4 = 0;
LAB_100852930:
      iVar5 = iVar4;
      if (param_4 == 0) {
        while( true ) {
          iVar4 = FUN_10084f890(param_1,param_2,1,1);
          lVar8 = 1;
          if (iVar4 == 0) break;
          do {
            uVar2 = FUN_1008505e0(param_1,*(undefined2 *)(&DAT_100b558a0 + lVar8 * 2));
            auStack_1038[lVar8] = uVar2;
            lVar8 = lVar8 + 1;
            uVar11 = 0;
          } while (lVar8 != 0x800);
          do {
            lVar8 = 1;
            while (1 < (auStack_1038[lVar8] + uVar11) %
                       (ulong)*(ushort *)(&DAT_100b558a0 + lVar8 * 2)) {
              lVar8 = lVar8 + 1;
              if (0x7ff < lVar8) {
                iVar4 = FUN_100850720(param_1);
                if (iVar4 != 0) goto LAB_100852c70;
                goto LAB_100852e59;
              }
            }
            uVar11 = uVar11 + 2;
          } while (uVar11 < 0xffffffffffffba39);
        }
        goto LAB_100852e59;
      }
      FUN_10084ca60(lVar6);
      lVar8 = FUN_10084cc20(lVar6);
      if (param_3 == 0) {
        if ((((lVar8 != 0) && (iVar4 = FUN_10084f890(param_1,param_2,0,1), iVar4 != 0)) &&
            (iVar4 = FUN_100847f70(0,lVar8,param_1,param_4,lVar6), iVar4 != 0)) &&
           (iVar4 = FUN_100847e90(param_1,param_1,lVar8), iVar4 != 0)) {
          lVar8 = param_5;
          if (param_5 == 0) {
            iVar4 = FUN_100850720(param_1,1);
            goto LAB_100852c35;
          }
          while( true ) {
            iVar4 = FUN_100847940(param_1,param_1,lVar8);
LAB_100852c35:
            iVar13 = 1;
            if (iVar4 == 0) break;
            while (uVar11 = FUN_1008505e0(param_1,*(undefined2 *)(&DAT_100b558a0 + (long)iVar13 * 2)
                                         ), lVar8 = param_4, 1 < uVar11) {
              iVar13 = iVar13 + 1;
              if (0x7ff < iVar13) {
                FUN_10084cb40(lVar6);
                goto LAB_100852c70;
              }
            }
          }
        }
        FUN_10084cb40(lVar6);
        goto LAB_100852e59;
      }
      uVar9 = FUN_10084cc20(lVar6);
      lVar10 = FUN_10084cc20(lVar6);
      if (((lVar10 != 0) && (iVar4 = FUN_10084fef0(lVar10,param_4), iVar4 != 0)) &&
         ((iVar4 = FUN_10084f890(uVar9,param_2 + -1,0,1), iVar4 != 0 &&
          ((iVar4 = FUN_100847f70(0,lVar8,uVar9,lVar10,lVar6), iVar4 != 0 &&
           (iVar4 = FUN_100847e90(uVar9,uVar9,lVar8), iVar4 != 0)))))) {
        if (param_5 == 0) {
          iVar4 = FUN_100850720(uVar9,1);
        }
        else {
          iVar4 = FUN_10084fef0(lVar8);
          if (iVar4 == 0) goto LAB_100852e3c;
          iVar4 = FUN_100847940(uVar9,uVar9,lVar8);
        }
        if ((iVar4 == 0) || (iVar4 = FUN_10084fd80(param_1,uVar9), iVar4 == 0)) goto LAB_100852e3c;
        iVar4 = FUN_100850720(param_1,1);
joined_r0x000100852ae9:
        iVar13 = 1;
        if (iVar4 == 0) goto LAB_100852e3c;
        do {
          uVar1 = *(undefined2 *)(&DAT_100b558a0 + (long)iVar13 * 2);
          lVar8 = FUN_1008505e0(param_1,uVar1);
          if ((lVar8 == 0) || (lVar8 = FUN_1008505e0(uVar9,uVar1), lVar8 == 0)) goto LAB_100852b30;
          iVar13 = iVar13 + 1;
        } while (iVar13 < 0x800);
        FUN_10084cb40(lVar6);
LAB_100852c70:
        if (param_6 != (int *)0x0) {
          if (*param_6 == 2) {
            iVar4 = (**(code **)(param_6 + 4))(0,iVar5);
            if (iVar4 != 0) goto LAB_100852ce0;
          }
          else if (*param_6 == 1) {
            if (*(code **)(param_6 + 4) != (code *)0x0) {
              (**(code **)(param_6 + 4))(0,iVar5,*(undefined8 *)(param_6 + 2));
            }
            goto LAB_100852ce0;
          }
          goto LAB_100852e59;
        }
LAB_100852ce0:
        iVar4 = iVar5 + 1;
        if (param_3 == 0) {
          iVar5 = FUN_100852eb0(param_1,iVar3,lVar6,0,param_6);
          if (iVar5 != 0) {
            uVar9 = 1;
            if (iVar5 != -1) goto LAB_100852e5c;
            goto LAB_100852e59;
          }
        }
        else {
          iVar13 = FUN_10084fef0(lVar7,param_1);
          iVar12 = 0;
          if (iVar13 == 0) goto LAB_100852e59;
          while( true ) {
            iVar13 = FUN_100852eb0(param_1,1,lVar6,0,param_6);
            if (iVar13 == -1) goto LAB_100852e59;
            if (iVar13 == 0) break;
            iVar13 = FUN_100852eb0(lVar7,1,lVar6,0,param_6);
            uVar9 = 0;
            if (iVar13 == -1) goto LAB_100852e5c;
            if (iVar13 == 0) break;
            if (param_6 != (int *)0x0) {
              uVar9 = 0;
              if (*param_6 == 2) {
                iVar13 = (**(code **)(param_6 + 4))(2,iVar5);
                if (iVar13 != 0) goto LAB_100852dd8;
              }
              else if (*param_6 == 1) {
                if (*(code **)(param_6 + 4) != (code *)0x0) {
                  (**(code **)(param_6 + 4))(2,iVar5,*(undefined8 *)(param_6 + 2));
                }
                goto LAB_100852dd8;
              }
              goto LAB_100852e5c;
            }
LAB_100852dd8:
            iVar12 = iVar12 + 1;
            uVar9 = 1;
            if (iVar3 <= iVar12) goto LAB_100852e5c;
          }
        }
        goto LAB_100852930;
      }
LAB_100852e3c:
      FUN_10084cb40(lVar6);
LAB_100852e59:
      uVar9 = 0;
    }
LAB_100852e5c:
    FUN_10084cb40(lVar6);
    FUN_10084c8b0(lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100852b30:
  iVar4 = FUN_100847940(param_1,param_1,param_4);
  if (iVar4 == 0) goto LAB_100852e3c;
  iVar4 = FUN_100847940(uVar9,uVar9,lVar10);
  goto joined_r0x000100852ae9;
}

