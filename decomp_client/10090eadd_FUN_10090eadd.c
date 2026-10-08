
void FUN_10090eadd(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  bool bVar6;
  int local_38;
  int local_34;
  long local_30;
  long local_18;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_10090e8dd(param_1);
    bVar6 = false;
    for (local_38 = 0; local_38 < *(int *)(param_1 + 0x4c); local_38 = local_38 + 1) {
      piVar4 = *(int **)(*(long *)(param_1 + 0x50) + (long)local_38 * 8);
      if (piVar4 != (int *)0x0) {
        if ((piVar4[5] == 0) && (*piVar4 != 2)) {
          *piVar4 = 4;
        }
        for (local_34 = 0; local_34 < piVar4[5]; local_34 = local_34 + 1) {
          if ((*(long *)(*(long *)(piVar4 + 6) + (long)local_34 * 0x18) == 0) &&
             (-1 < *(int *)(*(long *)(piVar4 + 6) + (long)local_34 * 0x18 + 8))) {
            if (*(int *)(*(long *)(piVar4 + 6) + (long)local_34 * 0x18 + 8) == local_38) {
              *(undefined4 *)(*(long *)(piVar4 + 6) + (long)local_34 * 0x18 + 8) = 0xffffffff;
            }
            else if (*(int *)(*(long *)(piVar4 + 6) + (long)local_34 * 0x18 + 0x10) < 0) {
              uVar2 = *(undefined4 *)(*(long *)(piVar4 + 6) + (long)local_34 * 0x18 + 8);
              piVar4[1] = 1;
              bVar6 = true;
              FUN_10090e501(param_1,local_38,uVar2,
                            *(undefined4 *)(*(long *)(piVar4 + 6) + (long)local_34 * 0x18 + 0xc));
              piVar4[1] = 0;
            }
          }
        }
      }
    }
    if (bVar6) {
      for (local_38 = 0; local_38 < *(int *)(param_1 + 0x4c); local_38 = local_38 + 1) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x50) + (long)local_38 * 8);
        if (lVar5 != 0) {
          for (local_34 = 0; local_34 < *(int *)(lVar5 + 0x14); local_34 = local_34 + 1) {
            plVar1 = (long *)(*(long *)(lVar5 + 0x18) + (long)local_34 * 0x18);
            if (((*plVar1 == 0) && ((int)plVar1[2] < 0)) && (-1 < (int)plVar1[1])) {
              *(undefined4 *)(plVar1 + 1) = 0xffffffff;
            }
          }
        }
      }
    }
    for (local_38 = 0; local_38 < *(int *)(param_1 + 0x4c); local_38 = local_38 + 1) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x50) + (long)local_38 * 8);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 8) = 0;
      }
    }
    local_30 = **(long **)(param_1 + 0x50);
    if (local_30 != 0) {
      *(undefined4 *)(local_30 + 8) = 1;
    }
    while (local_30 != 0) {
      local_18 = 0;
      *(undefined4 *)(local_30 + 8) = 2;
      for (local_34 = 0; local_34 < *(int *)(local_30 + 0x14); local_34 = local_34 + 1) {
        if ((((-1 < *(int *)(*(long *)(local_30 + 0x18) + (long)local_34 * 0x18 + 8)) &&
             ((*(long *)(*(long *)(local_30 + 0x18) + (long)local_34 * 0x18) != 0 ||
              (-1 < *(int *)(*(long *)(local_30 + 0x18) + (long)local_34 * 0x18 + 0x10))))) &&
            (iVar3 = *(int *)(*(long *)(local_30 + 0x18) + (long)local_34 * 0x18 + 8),
            *(long *)(*(long *)(param_1 + 0x50) + (long)iVar3 * 8) != 0)) &&
           (*(int *)(*(long *)(*(long *)(param_1 + 0x50) + (long)iVar3 * 8) + 8) == 0)) {
          *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x50) + (long)iVar3 * 8) + 8) = 1;
          local_18 = *(long *)(*(long *)(param_1 + 0x50) + (long)iVar3 * 8);
        }
      }
      lVar5 = local_18;
      if (local_18 == 0) {
        local_38 = 1;
        while ((lVar5 = local_18, local_38 < *(int *)(param_1 + 0x4c) &&
               ((lVar5 = *(long *)(*(long *)(param_1 + 0x50) + (long)local_38 * 8), lVar5 == 0 ||
                (*(int *)(lVar5 + 8) != 1))))) {
          local_38 = local_38 + 1;
        }
      }
      local_18 = lVar5;
      local_30 = local_18;
    }
    for (local_38 = 0; local_38 < *(int *)(param_1 + 0x4c); local_38 = local_38 + 1) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x50) + (long)local_38 * 8);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 0)) {
        FUN_10090c55a(lVar5);
        *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)local_38 * 8) = 0;
      }
    }
  }
  return;
}

