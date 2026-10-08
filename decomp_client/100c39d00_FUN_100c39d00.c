
undefined8 FUN_100c39d00(long *param_1,ulong param_2,long *param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if (param_2 == 0) {
    return 1;
  }
  puVar5 = (undefined8 *)0x0;
  lVar8 = 0;
  if ((param_4 == 0) && (param_4 = FUN_100c27a20(), lVar8 = param_4, param_4 == 0)) {
    return 0;
  }
  FUN_100c27c60(param_4);
  lVar3 = FUN_100c27e20(param_4);
  lVar4 = FUN_100c27e20(param_4);
  if (lVar3 == 0) {
LAB_100c3a0ee:
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)FUN_100bf3540(param_2 * 8,"ecp_smpl.c",0x4f9);
      uVar9 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar7 = 0;
        do {
          lVar6 = FUN_100c26720();
          puVar5[uVar7] = lVar6;
          if (lVar6 == 0) goto LAB_100c3a0f4;
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_2);
        if (*(int *)(*param_3 + 0x40) == 0) {
          if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
            iVar2 = FUN_100c26db0(*puVar5,1);
          }
          else {
            iVar2 = (**(code **)(*param_1 + 0x128))(param_1,*puVar5,param_4);
          }
          if (iVar2 == 0) goto LAB_100c3a0f4;
        }
        else {
          lVar6 = FUN_100c26b50(*puVar5,*param_3 + 0x38);
          if (lVar6 == 0) goto LAB_100c3a0f4;
        }
        if (1 < param_2) {
          uVar7 = 1;
          do {
            if (*(int *)(param_3[uVar7] + 0x40) == 0) {
              lVar6 = FUN_100c26b50(puVar5[uVar7],puVar5[uVar7 - 1]);
              if (lVar6 == 0) goto LAB_100c3a0f4;
            }
            else {
              iVar2 = (**(code **)(*param_1 + 0x100))
                                (param_1,puVar5[uVar7],puVar5[uVar7 - 1],param_3[uVar7] + 0x38,
                                 param_4);
              if (iVar2 == 0) goto LAB_100c3a0f4;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < param_2);
        }
        lVar6 = FUN_100c2cf20(lVar3,puVar5[param_2 - 1],param_1 + 0xd,param_4);
        if (lVar6 == 0) {
          FUN_100c62ee0(0x10,0x89,3,"ecp_smpl.c",0x525);
        }
        else {
          uVar7 = param_2;
          if ((*(code **)(*param_1 + 0x118) == (code *)0x0) ||
             ((iVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar3,lVar3,param_4), iVar2 != 0 &&
              (iVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar3,lVar3,param_4), iVar2 != 0))))
          {
            do {
              uVar1 = uVar7;
              uVar7 = uVar1 - 1;
              if (uVar7 == 0) {
                uVar7 = 0;
                if (*(int *)(*param_3 + 0x40) == 0) goto LAB_100c39ff5;
                lVar4 = FUN_100c26b50(*param_3 + 0x38);
                uVar7 = 0;
                if (lVar4 == 0) goto LAB_100c3a0ee;
                goto LAB_100c39ff5;
              }
            } while ((*(int *)(param_3[uVar7] + 0x40) == 0) ||
                    (((iVar2 = (**(code **)(*param_1 + 0x100))
                                         (param_1,lVar4,puVar5[uVar1 - 2],lVar3,param_4), iVar2 != 0
                      && (iVar2 = (**(code **)(*param_1 + 0x100))
                                            (param_1,lVar3,lVar3,param_3[uVar7] + 0x38,param_4),
                         iVar2 != 0)) &&
                     (lVar6 = FUN_100c26b50(param_3[uVar7] + 0x38,lVar4), lVar6 != 0))));
          }
        }
      }
    }
  }
  goto LAB_100c3a0f4;
LAB_100c39ff5:
  do {
    lVar4 = param_3[uVar7];
    if (*(int *)(lVar4 + 0x40) != 0) {
      lVar6 = lVar4 + 0x38;
      iVar2 = (**(code **)(*param_1 + 0x108))(param_1,lVar3,lVar6,param_4);
      if ((((iVar2 == 0) ||
           (iVar2 = (**(code **)(*param_1 + 0x100))(param_1,lVar4 + 8,lVar4 + 8,lVar3,param_4),
           iVar2 == 0)) ||
          (iVar2 = (**(code **)(*param_1 + 0x100))(param_1,lVar3,lVar3,lVar6,param_4), iVar2 == 0))
         || (iVar2 = (**(code **)(*param_1 + 0x100))
                               (param_1,lVar4 + 0x20,lVar4 + 0x20,lVar3,param_4), iVar2 == 0))
      goto LAB_100c3a0ee;
      if (*(code **)(*param_1 + 0x128) == (code *)0x0) {
        iVar2 = FUN_100c26db0(lVar6,1);
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x128))(param_1,lVar6,param_4);
      }
      if (iVar2 == 0) goto LAB_100c3a0ee;
      *(undefined4 *)(lVar4 + 0x50) = 1;
    }
    uVar7 = uVar7 + 1;
    uVar9 = 1;
  } while (uVar7 < param_2);
LAB_100c3a0f4:
  FUN_100c27d40(param_4);
  if (lVar8 != 0) {
    FUN_100c27ab0(lVar8);
  }
  uVar7 = 0;
  if (puVar5 != (undefined8 *)0x0) {
    do {
      if (puVar5[uVar7] == 0) break;
      FUN_100c26640();
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
    FUN_100bf3910(puVar5);
  }
  return uVar9;
}

