
undefined8
FUN_100c2d9b0(undefined8 param_1,int param_2,int param_3,long param_4,long param_5,int *param_6)

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
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar3 = 2;
  if ((((((param_2 < 0x514) && (iVar3 = 3, param_2 < 0x352)) && (iVar3 = 4, param_2 < 0x28a)) &&
       ((iVar3 = 5, param_2 < 0x226 && (iVar3 = 6, param_2 < 0x1c2)))) &&
      ((iVar3 = 7, param_2 < 400 && ((iVar3 = 8, param_2 < 0x15e && (iVar3 = 9, param_2 < 300))))))
     && ((iVar3 = 0xc, param_2 < 0xfa && (iVar3 = 0xf, param_2 < 200)))) {
    iVar3 = (uint)(param_2 < 0x96) * 9 + 0x12;
  }
  lVar6 = FUN_100c27a20();
  uVar9 = 0;
  if (lVar6 != 0) {
    FUN_100c27c60(lVar6);
    lVar7 = FUN_100c27e20(lVar6);
    uVar9 = 0;
    if (lVar7 != 0) {
      iVar4 = 0;
LAB_100c2db30:
      iVar5 = iVar4;
      if (param_4 == 0) {
        while( true ) {
          iVar4 = FUN_100c2aa90(param_1,param_2,1,1);
          lVar8 = 1;
          if (iVar4 == 0) break;
          do {
            uVar2 = FUN_100c2b7e0(param_1,*(undefined2 *)(&DAT_101daa540 + lVar8 * 2));
            auStack_1038[lVar8] = uVar2;
            lVar8 = lVar8 + 1;
            uVar11 = 0;
          } while (lVar8 != 0x800);
          do {
            lVar8 = 1;
            while (1 < (auStack_1038[lVar8] + uVar11) %
                       (ulong)*(ushort *)(&DAT_101daa540 + lVar8 * 2)) {
              lVar8 = lVar8 + 1;
              if (0x7ff < lVar8) {
                iVar4 = FUN_100c2b920(param_1);
                if (iVar4 != 0) goto LAB_100c2de70;
                goto LAB_100c2e059;
              }
            }
            uVar11 = uVar11 + 2;
          } while (uVar11 < 0xffffffffffffba39);
        }
        goto LAB_100c2e059;
      }
      FUN_100c27c60(lVar6);
      lVar8 = FUN_100c27e20(lVar6);
      if (param_3 == 0) {
        if ((((lVar8 != 0) && (iVar4 = FUN_100c2aa90(param_1,param_2,0,1), iVar4 != 0)) &&
            (iVar4 = FUN_100c23170(0,lVar8,param_1,param_4,lVar6), iVar4 != 0)) &&
           (iVar4 = FUN_100c23090(param_1,param_1,lVar8), iVar4 != 0)) {
          lVar8 = param_5;
          if (param_5 == 0) {
            iVar4 = FUN_100c2b920(param_1,1);
            goto LAB_100c2de35;
          }
          while( true ) {
            iVar4 = FUN_100c22b40(param_1,param_1,lVar8);
LAB_100c2de35:
            iVar13 = 1;
            if (iVar4 == 0) break;
            while (uVar11 = FUN_100c2b7e0(param_1,*(undefined2 *)(&DAT_101daa540 + (long)iVar13 * 2)
                                         ), lVar8 = param_4, 1 < uVar11) {
              iVar13 = iVar13 + 1;
              if (0x7ff < iVar13) {
                FUN_100c27d40(lVar6);
                goto LAB_100c2de70;
              }
            }
          }
        }
        FUN_100c27d40(lVar6);
        goto LAB_100c2e059;
      }
      uVar9 = FUN_100c27e20(lVar6);
      lVar10 = FUN_100c27e20(lVar6);
      if (((lVar10 != 0) && (iVar4 = FUN_100c2b0f0(lVar10,param_4), iVar4 != 0)) &&
         ((iVar4 = FUN_100c2aa90(uVar9,param_2 + -1,0,1), iVar4 != 0 &&
          ((iVar4 = FUN_100c23170(0,lVar8,uVar9,lVar10,lVar6), iVar4 != 0 &&
           (iVar4 = FUN_100c23090(uVar9,uVar9,lVar8), iVar4 != 0)))))) {
        if (param_5 == 0) {
          iVar4 = FUN_100c2b920(uVar9,1);
        }
        else {
          iVar4 = FUN_100c2b0f0(lVar8);
          if (iVar4 == 0) goto LAB_100c2e03c;
          iVar4 = FUN_100c22b40(uVar9,uVar9,lVar8);
        }
        if ((iVar4 == 0) || (iVar4 = FUN_100c2af80(param_1,uVar9), iVar4 == 0)) goto LAB_100c2e03c;
        iVar4 = FUN_100c2b920(param_1,1);
joined_r0x000100c2dce9:
        iVar13 = 1;
        if (iVar4 == 0) goto LAB_100c2e03c;
        do {
          uVar1 = *(undefined2 *)(&DAT_101daa540 + (long)iVar13 * 2);
          lVar8 = FUN_100c2b7e0(param_1,uVar1);
          if ((lVar8 == 0) || (lVar8 = FUN_100c2b7e0(uVar9,uVar1), lVar8 == 0)) goto LAB_100c2dd30;
          iVar13 = iVar13 + 1;
        } while (iVar13 < 0x800);
        FUN_100c27d40(lVar6);
LAB_100c2de70:
        if (param_6 != (int *)0x0) {
          if (*param_6 == 2) {
            iVar4 = (**(code **)(param_6 + 4))(0,iVar5);
            if (iVar4 != 0) goto LAB_100c2dee0;
          }
          else if (*param_6 == 1) {
            if (*(code **)(param_6 + 4) != (code *)0x0) {
              (**(code **)(param_6 + 4))(0,iVar5,*(undefined8 *)(param_6 + 2));
            }
            goto LAB_100c2dee0;
          }
          goto LAB_100c2e059;
        }
LAB_100c2dee0:
        iVar4 = iVar5 + 1;
        if (param_3 == 0) {
          iVar5 = FUN_100c2e0b0(param_1,iVar3,lVar6,0,param_6);
          if (iVar5 != 0) {
            uVar9 = 1;
            if (iVar5 != -1) goto LAB_100c2e05c;
            goto LAB_100c2e059;
          }
        }
        else {
          iVar13 = FUN_100c2b0f0(lVar7,param_1);
          iVar12 = 0;
          if (iVar13 == 0) goto LAB_100c2e059;
          while( true ) {
            iVar13 = FUN_100c2e0b0(param_1,1,lVar6,0,param_6);
            if (iVar13 == -1) goto LAB_100c2e059;
            if (iVar13 == 0) break;
            iVar13 = FUN_100c2e0b0(lVar7,1,lVar6,0,param_6);
            uVar9 = 0;
            if (iVar13 == -1) goto LAB_100c2e05c;
            if (iVar13 == 0) break;
            if (param_6 != (int *)0x0) {
              uVar9 = 0;
              if (*param_6 == 2) {
                iVar13 = (**(code **)(param_6 + 4))(2,iVar5);
                if (iVar13 != 0) goto LAB_100c2dfd8;
              }
              else if (*param_6 == 1) {
                if (*(code **)(param_6 + 4) != (code *)0x0) {
                  (**(code **)(param_6 + 4))(2,iVar5,*(undefined8 *)(param_6 + 2));
                }
                goto LAB_100c2dfd8;
              }
              goto LAB_100c2e05c;
            }
LAB_100c2dfd8:
            iVar12 = iVar12 + 1;
            uVar9 = 1;
            if (iVar3 <= iVar12) goto LAB_100c2e05c;
          }
        }
        goto LAB_100c2db30;
      }
LAB_100c2e03c:
      FUN_100c27d40(lVar6);
LAB_100c2e059:
      uVar9 = 0;
    }
LAB_100c2e05c:
    FUN_100c27d40(lVar6);
    FUN_100c27ab0(lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100c2dd30:
  iVar4 = FUN_100c22b40(param_1,param_1,param_4);
  if (iVar4 == 0) goto LAB_100c2e03c;
  iVar4 = FUN_100c22b40(uVar9,uVar9,lVar10);
  goto joined_r0x000100c2dce9;
}

