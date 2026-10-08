
undefined4 FUN_10093bbdf(long param_1)

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
        FUN_100935773(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        goto joined_r0x00010093bd29;
      default:
        goto switchD_10093bcb3_caseD_6;
      case 0xe:
        FUN_100932143(puVar6,param_1);
        iVar3 = *(int *)(param_1 + 0x20);
joined_r0x00010093bd29:
        if (iVar3 != 0xbfd) goto switchD_10093bcb3_caseD_6;
        goto LAB_10093c220;
      case 0xf:
        FUN_10093b7b7(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        break;
      case 0x10:
        FUN_10093aab2(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        break;
      case 0x16:
      case 0x17:
      case 0x18:
        FUN_10093ba61(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
        break;
      case 0x19:
        FUN_10093b531(puVar6,param_1,0);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      if (iVar3 == 0xbfd) goto LAB_10093c220;
switchD_10093bcb3_caseD_6:
    }
    if (*(int *)(param_1 + 0x24) == 0) {
      for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
        puVar7 = *(uint **)((long)local_c * 8 + lVar5);
        uVar2 = *puVar7;
        if (uVar2 == 0x10) {
          FUN_10093aa16(puVar7,param_1);
          if (*(int *)(param_1 + 0x20) == 0xbfd) goto LAB_10093c220;
          iVar3 = *(int *)(param_1 + 0x24);
joined_r0x00010093beea:
          if (iVar3 != 0) goto LAB_10093c205;
        }
        else if (uVar2 < 0x11) {
          if (uVar2 - 4 < 2) {
            FUN_10093556d(puVar7,param_1);
            if (*(int *)(param_1 + 0x20) != 0xbfd) {
              iVar3 = *(int *)(param_1 + 0x24);
              goto joined_r0x00010093beea;
            }
            goto LAB_10093c220;
          }
        }
        else if (uVar2 == 0x11) {
          FUN_10093a751(puVar7,param_1);
          if (*(int *)(param_1 + 0x20) != 0xbfd) {
            iVar3 = *(int *)(param_1 + 0x24);
            goto joined_r0x00010093beea;
          }
          goto LAB_10093c220;
        }
      }
      for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
        piVar8 = *(int **)((long)local_c * 8 + lVar5);
        if ((((*piVar8 == 0x19) && (*(long *)(piVar8 + 6) != 0)) && (**(int **)(piVar8 + 6) == 0x11)
            ) && (FUN_10093a838(piVar8,param_1,0), *(int *)(param_1 + 0x20) == 0xbfd))
        goto LAB_10093c220;
      }
      if (*(int *)(param_1 + 0x24) == 0) {
        for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
          piVar8 = *(int **)((long)local_c * 8 + lVar5);
          if (((*piVar8 == 4) && (*piVar8 != 1)) &&
             (((((uint)piVar8[0x16] >> 0x1d ^ 1) & 1) != 0 &&
              (FUN_10093935e(param_1,piVar8), *(int *)(param_1 + 0x20) == 0xbfd))))
          goto LAB_10093c220;
        }
        for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
          piVar8 = *(int **)((long)local_c * 8 + lVar5);
          if (((*piVar8 == 4) && (*(long *)(piVar8 + 0x2a) != 0)) &&
             (FUN_100935729(param_1,piVar8), *(int *)(param_1 + 0x20) == 0xbfd)) goto LAB_10093c220;
        }
        if (*(int *)(param_1 + 0x24) == 0) {
          for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
            piVar8 = *(int **)((long)local_c * 8 + lVar5);
            if ((*piVar8 - 4U < 2) &&
               (FUN_100939fa8(piVar8,param_1), *(int *)(param_1 + 0x20) == 0xbfd))
            goto LAB_10093c220;
          }
          if (*(int *)(param_1 + 0x24) == 0) {
            for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
              piVar8 = *(int **)((long)local_c * 8 + lVar5);
              if (*piVar8 == 0xe) {
                if ((((uint)piVar8[0x16] >> 0x12 ^ 1) & 1) != 0) {
                  FUN_10093b4d3(piVar8,param_1);
                  iVar3 = *(int *)(param_1 + 0x20);
                  goto joined_r0x00010093c16c;
                }
              }
              else if ((*piVar8 == 0xf) && (*(long *)(piVar8 + 0x16) != 0)) {
                FUN_10093aba2(piVar8,param_1);
                iVar3 = *(int *)(param_1 + 0x20);
joined_r0x00010093c16c:
                if (iVar3 == 0xbfd) goto LAB_10093c220;
              }
            }
            if (*(int *)(param_1 + 0x24) == 0) {
              for (local_c = 0; local_c < iVar1; local_c = local_c + 1) {
                piVar8 = *(int **)((long)local_c * 8 + lVar5);
                if ((*piVar8 == 5) &&
                   (FUN_100931f7a(piVar8,param_1), *(int *)(param_1 + 0x20) == 0xbfd)) {
LAB_10093c220:
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
LAB_10093c205:
    *(undefined4 *)(*(long *)(lVar4 + 0x20) + 8) = 0;
    local_3c = *(undefined4 *)(param_1 + 0x20);
  }
  return local_3c;
}

