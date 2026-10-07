
undefined4 FUN_10020b950(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *local_70;
  long *local_60;
  long *local_58;
  long local_48;
  long *local_30;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  local_48 = 0;
  local_18 = 0;
  local_70 = *(undefined8 **)(*(long *)(param_1 + 0xb8) + 0x60);
  if (local_70 != (undefined8 *)0x0) {
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0xa8) + (long)*(int *)(param_1 + 0xa4) * 8 + -8)
                     + 0x60);
LAB_10020c047:
    if (local_70 != (undefined8 *)0x0) {
      if (*(int *)local_70[1] != 0x18) {
        local_30 = *(long **)(param_1 + 0xc0);
        do {
          if (local_30[1] == local_70[1]) {
            if (((int)local_30[2] == -1) || (*(int *)(param_1 + 0xa4) <= (int)local_30[2])) {
              local_70 = (undefined8 *)*local_70;
              goto LAB_10020c047;
            }
            break;
          }
          local_30 = (long *)*local_30;
        } while (local_30 != (long *)0x0);
        if (plVar1 != (long *)0x0) {
          local_60 = (long *)*plVar1;
        }
        for (; local_60 != (long *)0x0; local_60 = (long *)*local_60) {
          if (local_60[1] == local_70[1]) {
            local_14 = (int)local_60[3];
            local_c = (int)local_60[4] + local_14;
            local_10 = 0;
            local_24 = 0;
            goto LAB_10020bee3;
          }
          if (*local_60 == 0) {
            local_58 = local_60;
          }
        }
        goto LAB_10020bf34;
      }
      local_70 = (undefined8 *)*local_70;
      goto LAB_10020c047;
    }
  }
  return 0;
LAB_10020bee3:
  if (*(int *)(local_70 + 3) <= local_24) goto code_r0x00010020bef3;
  lVar3 = *(long *)(local_70[2] + (long)local_24 * 8);
  if (lVar3 != 0) {
    if ((int)local_60[4] != 0) {
      for (local_20 = *(int *)(local_70 + 3) + local_10; local_20 < local_c; local_20 = local_20 + 1
          ) {
        local_48 = *(long *)(local_60[2] + (long)local_20 * 8);
        for (local_1c = 0; local_1c < *(int *)(local_70[1] + 0x40); local_1c = local_1c + 1) {
          local_18 = FUN_100207d23(*(undefined8 *)
                                    (*(long *)(*(long *)(lVar3 + 8) + (long)local_1c * 8) + 8),
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(local_48 + 8) + (long)local_1c * 8) + 8));
          if (local_18 == -1) {
            return 0xffffffff;
          }
          if (local_18 == 0) break;
        }
        if (local_18 == 1) break;
      }
      if (local_20 != local_c) goto LAB_10020bedd;
    }
    for (local_20 = 0; local_20 < local_14; local_20 = local_20 + 1) {
      local_48 = *(long *)(local_60[2] + (long)local_20 * 8);
      local_1c = 0;
      while ((local_1c < *(int *)(local_60[1] + 0x40) &&
             ((local_18 = FUN_100207d23(*(undefined8 *)
                                         (*(long *)(*(long *)(lVar3 + 8) + (long)local_1c * 8) + 8),
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(local_48 + 8) + (long)local_1c * 8) +
                                         8)), local_18 == -1 || (local_18 != 0))))) {
        local_1c = local_1c + 1;
      }
      if (local_18 == 1) break;
    }
    if (local_20 == local_14) {
      if (local_60[2] == 0) {
        lVar2 = (*(code *)_xmlMalloc)(0x50);
        local_60[2] = lVar2;
        if (local_60[2] == 0) {
          FUN_1001e835c(0,"allocating IDC list of node-table items",0);
          return 0xffffffff;
        }
        *(undefined4 *)((long)local_60 + 0x1c) = 1;
      }
      else if (*(int *)((long)local_60 + 0x1c) <= local_c) {
        *(int *)((long)local_60 + 0x1c) = *(int *)((long)local_60 + 0x1c) * 2;
        lVar2 = (*(code *)_xmlRealloc)(local_60[2],(long)*(int *)((long)local_60 + 0x1c) * 8);
        local_60[2] = lVar2;
        if (local_60[2] == 0) {
          FUN_1001e835c(0,"re-allocating IDC list of node-table items",0);
          return 0xffffffff;
        }
      }
      if ((int)local_60[4] != 0) {
        *(undefined8 *)(local_60[2] + (long)local_c * 8) =
             *(undefined8 *)(local_60[2] + (long)((int)local_60[3] + local_10) * 8);
      }
      if (local_10 != 0) {
        *(undefined8 *)(local_60[2] + (long)((int)local_60[3] + local_10) * 8) =
             *(undefined8 *)(local_60[2] + (long)(int)local_60[3] * 8);
      }
      *(long *)(local_60[2] + (long)(int)local_60[3] * 8) = lVar3;
      *(int *)(local_60 + 3) = (int)local_60[3] + 1;
      local_c = local_c + 1;
    }
    else {
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
      *(int *)(local_60 + 3) = (int)local_60[3] + -1;
      *(undefined8 *)(local_60[2] + (long)local_20 * 8) =
           *(undefined8 *)(local_60[2] + (long)local_14 * 8);
      if ((int)local_60[3] != local_14) {
        *(undefined8 *)(local_60[2] + (long)local_14 * 8) =
             *(undefined8 *)(local_60[2] + (long)(int)local_60[3] * 8);
      }
      *(long *)(local_60[2] + (long)(int)local_60[3] * 8) = local_48;
    }
  }
LAB_10020bedd:
  local_24 = local_24 + 1;
  goto LAB_10020bee3;
code_r0x00010020bef3:
  *(int *)(local_60 + 4) = (int)local_60[4] + local_10;
LAB_10020bf34:
  if ((local_60 == (long *)0x0) && (*(int *)(local_70 + 3) != 0)) {
    local_60 = (long *)FUN_100209af1(local_70[1]);
    if (local_60 == (long *)0x0) {
      return 0xffffffff;
    }
    lVar3 = (*(code *)_xmlMalloc)((long)*(int *)(local_70 + 3) * 8);
    local_60[2] = lVar3;
    if (local_60[2] == 0) {
      FUN_1001e835c(0,"allocating an array of IDC node-table items",0);
      FUN_10020a0ca(local_60);
      return 0xffffffff;
    }
    *(undefined4 *)((long)local_60 + 0x1c) = *(undefined4 *)(local_70 + 3);
    *(undefined4 *)(local_60 + 3) = *(undefined4 *)(local_70 + 3);
    puVar4 = (undefined1 *)local_70[2];
    puVar5 = (undefined1 *)local_60[2];
    for (lVar3 = (long)*(int *)(local_70 + 3) * 8; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if (*plVar1 == 0) {
      *plVar1 = (long)local_60;
    }
    else {
      *local_58 = (long)local_60;
    }
  }
  local_70 = (undefined8 *)*local_70;
  goto LAB_10020c047;
}

