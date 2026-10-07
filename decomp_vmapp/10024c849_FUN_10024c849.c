
undefined4 FUN_10024c849(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 local_38;
  int local_18;
  int local_14;
  uint local_c;
  
  local_14 = 0;
  bVar1 = false;
  local_c = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x30) == 0)) {
    local_38 = 0xffffffff;
  }
  else if ((((*(int *)(param_1 + 0x24) == 1) && (**(int **)(param_1 + 0x30) == 2)) &&
           (*(long *)(*(long *)(param_1 + 0x30) + 8) == 0)) &&
          (*(long *)(*(long *)(param_1 + 0x30) + 0x10) == 0)) {
    lVar2 = FUN_10024c635(0);
    if (lVar2 == 0) {
      local_38 = 0xffffffff;
    }
    else {
      *(long *)(param_1 + 0x38) = lVar2;
      local_38 = 0;
    }
  }
  else {
    puVar3 = (undefined8 *)FUN_10024c635(*(int *)(param_1 + 0x24) / 2 + 1);
    if (puVar3 == (undefined8 *)0x0) {
      local_38 = 0xffffffff;
    }
    else {
      if (*(long *)(param_1 + 8) != 0) {
        *puVar3 = *(undefined8 *)(param_1 + 8);
        _xmlDictReference((xmlDictPtr)*puVar3);
      }
      local_18 = 0;
      while ((((((byte)(*(uint *)(param_1 + 0x20) >> 9) & 1) == 1 &&
               (local_18 + 2 < *(int *)(param_1 + 0x24))) &&
              ((*(int *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18) == 2 &&
               ((*(long *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8) == 0 &&
                (*(long *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x10) == 0)))))) &&
             (*(int *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x18) == 5))) {
        local_18 = local_18 + 2;
      }
      for (; local_18 < *(int *)(param_1 + 0x24); local_18 = local_18 + 1) {
        switch(*(undefined4 *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18)) {
        case 1:
          if (local_18 != 0) goto LAB_10024cea1;
          bVar1 = true;
          break;
        case 2:
          if (((*(long *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8) != 0) ||
              (*(long *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x10) != 0)) ||
             ((*(int *)(param_1 + 0x24) <= local_18 + 2 ||
              (*(int *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x18) != 5))))
          goto switchD_10024ca9a_caseD_3;
          local_18 = local_18 + 1;
          break;
        case 3:
switchD_10024ca9a_caseD_3:
          local_14 = FUN_10024c75e(puVar3,*(undefined8 *)
                                           (*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8),
                                   *(undefined8 *)
                                    (*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x10),
                                   local_c);
          goto joined_r0x00010024ccc0;
        case 4:
          local_14 = FUN_10024c75e(puVar3,*(undefined8 *)
                                           (*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8),
                                   *(undefined8 *)
                                    (*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x10),
                                   local_c | 8);
          goto joined_r0x00010024ccc0;
        case 5:
          if ((((local_18 + 1 < *(int *)(param_1 + 0x24)) &&
               (*(int *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x18) == 2)) &&
              (*(long *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x20) == 0)) &&
             (*(long *)(*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 0x28) == 0)) {
            local_18 = local_18 + 1;
          }
          break;
        case 6:
          local_c = 1;
          if (((*(uint *)(puVar3 + 3) >> 0x10 ^ 1) & 1) != 0) {
            *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) | 0x10000;
          }
          break;
        case 7:
          local_14 = FUN_10024c75e(puVar3,0,*(undefined8 *)
                                             (*(long *)(param_1 + 0x30) + (long)local_18 * 0x18 + 8)
                                   ,local_c);
          goto joined_r0x00010024ccc0;
        case 8:
          local_14 = FUN_10024c75e(puVar3,0,0,local_c);
joined_r0x00010024ccc0:
          local_c = 0;
          if (local_14 < 0) {
LAB_10024cea1:
            FUN_10024c700(puVar3);
            return 0;
          }
        }
      }
      if ((!bVar1) && ((*(uint *)(param_1 + 0x20) & 7) == 0)) {
        if (((*(uint *)(puVar3 + 3) >> 0x10 ^ 1) & 1) != 0) {
          *(uint *)(puVar3 + 3) = *(uint *)(puVar3 + 3) | 0x10000;
        }
        if ((0 < *(int *)(puVar3 + 1)) && (((*(uint *)puVar3[2] ^ 1) & 1) != 0)) {
          *(uint *)puVar3[2] = *(uint *)puVar3[2] | 1;
        }
      }
      *(uint *)(puVar3[2] + (long)local_14 * 0x18) =
           *(uint *)(puVar3[2] + (long)local_14 * 0x18) | 2;
      if (bVar1) {
        *(uint *)puVar3[2] = *(uint *)puVar3[2] | 4;
      }
      *(undefined8 **)(param_1 + 0x38) = puVar3;
      local_38 = 0;
    }
  }
  return local_38;
}

