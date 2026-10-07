
undefined4 FUN_1002082b7(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 local_3c;
  int local_c;
  
  lVar4 = *(long *)(param_1 + 0x30);
  if ((*(long *)(lVar4 + 0x20) == 0) || (*(int *)(*(long *)(lVar4 + 0x20) + 8) == 0)) {
    local_3c = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    lVar5 = **(long **)(lVar4 + 0x20);
    iVar1 = *(int *)(*(long *)(lVar4 + 0x20) + 8);
    for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
      puVar6 = *(undefined4 **)((long)local_c * 8 + lVar5);
      switch(*puVar6) {
      case 4:
      case 5:
        FUN_100201e4b(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        goto joined_r0x000100208401;
      default:
        goto switchD_10020838b_caseD_6;
      case 0xe:
        FUN_1001fe81b(puVar6,param_1);
        iVar3 = *(int *)(param_1 + 0x20);
joined_r0x000100208401:
        if (iVar3 != 0xbfd) goto switchD_10020838b_caseD_6;
        goto LAB_1002088f8;
      case 0xf:
        FUN_100207e8f(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        break;
      case 0x10:
        FUN_10020718a(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        break;
      case 0x16:
      case 0x17:
      case 0x18:
        FUN_100208139(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        break;
      case 0x19:
        FUN_100207c09(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      if (iVar3 == 0xbfd) goto LAB_1002088f8;
switchD_10020838b_caseD_6:
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
        puVar7 = *(uint **)((long)local_c * 8 + lVar5);
        uVar2 = *puVar7;
        if (uVar2 == 0x10) {
          FUN_1002070ee(puVar7,param_1);
          if (*(int *)(param_1 + 0x20) == 0xbfd) goto LAB_1002088f8;
          iVar3 = *(int *)(param_1 + 0x24);
joined_r0x0001002085c2:
          if (iVar3 != 0) goto LAB_1002088dd;
        }
        else if (uVar2 < 0x11) {
          if (uVar2 - 4 < 2) {
            FUN_100201c45(puVar7,param_1);
            if (*(int *)(param_1 + 0x20) != 0xbfd) {
              iVar3 = *(int *)(param_1 + 0x24);
              goto joined_r0x0001002085c2;
            }
            goto LAB_1002088f8;
          }
        }
        else if (uVar2 == 0x11) {
          FUN_100206e29(puVar7,param_1);
          if (*(int *)(param_1 + 0x20) != 0xbfd) {
            iVar3 = *(int *)(param_1 + 0x24);
            goto joined_r0x0001002085c2;
          }
          goto LAB_1002088f8;
        }
      }
      for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
        piVar8 = *(int **)((long)local_c * 8 + lVar5);
        if ((((*piVar8 == 0x19) && (*(long *)(piVar8 + 6) != 0)) && (**(int **)(piVar8 + 6) == 0x11)
            ) && (FUN_100206f10(piVar8,param_1,0), *(int *)(param_1 + 0x20) == 0xbfd))
        goto LAB_1002088f8;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
          piVar8 = *(int **)((long)local_c * 8 + lVar5);
          if (((*piVar8 == 4) && (*piVar8 != 1)) &&
             (((((uint)piVar8[0x16] >> 0x1d ^ 1) & 1) != 0 &&
              (FUN_100205a36(param_1,piVar8), *(int *)(param_1 + 0x20) == 0xbfd))))
          goto LAB_1002088f8;
        }
        for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
          piVar8 = *(int **)((long)local_c * 8 + lVar5);
          if (((*piVar8 == 4) && (*(long *)(piVar8 + 0x2a) != 0)) &&
             (FUN_100201e01(param_1,piVar8), *(int *)(param_1 + 0x20) == 0xbfd)) goto LAB_1002088f8;
        }
        if (*(int *)(param_1 + 0x24) == 0) {
          for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
            piVar8 = *(int **)((long)local_c * 8 + lVar5);
            if ((*piVar8 - 4U < 2) &&
               (FUN_100206680(piVar8,param_1), *(int *)(param_1 + 0x20) == 0xbfd))
            goto LAB_1002088f8;
          }
          if (*(int *)(param_1 + 0x24) == 0) {
            for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
              piVar8 = *(int **)((long)local_c * 8 + lVar5);
              if (*piVar8 == 0xe) {
                if ((((uint)piVar8[0x16] >> 0x12 ^ 1) & 1) != 0) {
                  FUN_100207bab(piVar8,param_1);
                  iVar3 = *(int *)(param_1 + 0x20);
                  goto joined_r0x000100208844;
                }
              }
              else if ((*piVar8 == 0xf) && (*(long *)(piVar8 + 0x16) != 0)) {
                FUN_10020727a(piVar8,param_1);
                iVar3 = *(int *)(param_1 + 0x20);
joined_r0x000100208844:
                if (iVar3 == 0xbfd) goto LAB_1002088f8;
              }
            }
            if (*(int *)(param_1 + 0x24) == 0) {
              for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
                piVar8 = *(int **)((long)local_c * 8 + lVar5);
                if ((*piVar8 == 5) &&
                   (FUN_1001fe652(piVar8,param_1), *(int *)(param_1 + 0x20) == 0xbfd)) {
LAB_1002088f8:
                  *(undefined4 *)(*(long *)(lVar4 + 0x20) + 8) = 0;
                  return 0xffffffff;
                }
              }
              if (*(int *)(param_1 + 0x24) == 0) {
                *(undefined4 *)(*(long *)(lVar4 + 0x20) + 8) = 0;
                return 0;
              }
            }
          }
        }
      }
    }
LAB_1002088dd:
    *(undefined4 *)(*(long *)(lVar4 + 0x20) + 8) = 0;
    local_3c = *(undefined4 *)(param_1 + 0x20);
  }
  return local_3c;
}

