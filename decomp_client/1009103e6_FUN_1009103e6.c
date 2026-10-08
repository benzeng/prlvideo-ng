
int FUN_1009103e6(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  undefined1 *puVar4;
  int local_110;
  int local_10c;
  int local_ec [3];
  long local_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 local_80;
  int *local_58;
  int local_50;
  undefined4 local_4c;
  long *local_48;
  long local_40;
  int local_34;
  int *local_30;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  int local_c;
  
  local_58 = local_ec + 1;
  local_4c = 0;
  local_88 = param_2;
  local_98 = 0;
  local_ec[2] = 1;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ec[1] = 0;
  local_e0 = param_1;
  local_c8 = **(undefined8 **)(param_1 + 0x10);
  local_c0 = 0;
  local_bc = 0;
  local_80 = 0;
  local_a0 = 0;
  if (*(int *)(param_1 + 0x28) < 1) {
    local_a8 = 0;
  }
  else {
    uVar1 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x28) * 4);
    *(undefined8 *)(local_58 + 0x10) = uVar1;
    if (*(long *)(local_58 + 0x10) == 0) {
      FUN_10090b61c(0,"running regexp");
      return -1;
    }
    puVar4 = *(undefined1 **)(local_58 + 0x10);
    for (lVar2 = (long)*(int *)(param_1 + 0x28) * 4; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
LAB_100910aef:
  if ((*local_58 != 0) ||
     ((*(char *)(*(long *)(local_58 + 0x18) + (long)local_58[0x14]) == '\0' &&
      (**(int **)(local_58 + 8) == 2)))) {
    if (*(long *)(local_58 + 0xe) != 0) {
      if (*(long *)(local_58 + 0x10) != 0) {
        for (local_c = 0; local_c < local_58[0xc]; local_c = local_c + 1) {
          if (*(long *)(*(long *)(local_58 + 0xe) + (long)local_c * 0x18 + 0x10) != 0) {
            (*(code *)_xmlFree)(*(undefined8 *)
                                 (*(long *)(local_58 + 0xe) + (long)local_c * 0x18 + 0x10));
          }
        }
      }
      (*(code *)_xmlFree)(*(undefined8 *)(local_58 + 0xe));
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      (*(code *)_xmlFree)(*(undefined8 *)(local_58 + 0x10));
    }
    if (*local_58 == 0) {
      local_110 = 1;
    }
    else if (*local_58 == -1) {
      local_110 = 0;
    }
    else {
      local_110 = *local_58;
    }
    return local_110;
  }
  if (((*(char *)(*(long *)(local_58 + 0x18) + (long)local_58[0x14]) != '\0') ||
      (*(long *)(local_58 + 0x10) != 0)) ||
     ((local_58[10] < *(int *)(*(long *)(local_58 + 8) + 0x14) &&
      ((local_48 = (long *)(*(long *)(*(long *)(local_58 + 8) + 0x18) + (long)local_58[10] * 0x18),
       (int)local_48[1] < 0 ||
       ((local_40 = *local_48, *(int *)(local_40 + 0xc) == 0 && (0 < *(int *)(local_40 + 0x10)))))))
     )) goto LAB_100910604;
  goto LAB_100910ad9;
LAB_100910604:
  local_58[0xb] = 0;
  while (local_58[10] < *(int *)(*(long *)(local_58 + 8) + 0x14)) {
    local_48 = (long *)(*(long *)(*(long *)(local_58 + 8) + 0x18) + (long)local_58[10] * 0x18);
    if (-1 < (int)local_48[1]) {
      local_40 = *local_48;
      local_50 = 0;
      if ((int)local_48[2] < 0) {
        if (local_40 == 0) {
          _fwrite("epsilon transition left at runtime\n",1,0x23,*(FILE **)PTR____stderrp_1021e1848);
          *local_58 = -2;
          break;
        }
        if (*(char *)(*(long *)(local_58 + 0x18) + (long)local_58[0x14]) == '\0') {
          if ((*(int *)(local_40 + 0xc) == 0) && (0 < *(int *)(local_40 + 0x10))) {
            local_58[0xb] = 1;
            local_ec[0] = 0;
            local_50 = 1;
          }
        }
        else {
          local_4c = _xmlStringCurrentChar
                               (0,*(long *)(local_58 + 0x18) + (long)local_58[0x14],local_ec);
          local_50 = FUN_10090fb5b(local_40,local_4c);
          if (((local_50 == 1) && (-1 < *(int *)(local_40 + 0xc))) &&
             (0 < *(int *)(local_40 + 0x10))) {
            local_28 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)local_48[1] * 8);
            if (local_58[10] + 1 < *(int *)(*(long *)(local_58 + 8) + 0x14)) {
              FUN_10090fef5(local_58);
            }
            local_58[0xb] = 1;
            do {
              if (local_58[0xb] == *(int *)(local_40 + 0x10)) break;
              local_58[0x14] = local_58[0x14] + local_ec[0];
              if (*(char *)(*(long *)(local_58 + 0x18) + (long)local_58[0x14]) == '\0') {
                local_58[0x14] = local_58[0x14] - local_ec[0];
                break;
              }
              if (*(int *)(local_40 + 0xc) <= local_58[0xb]) {
                local_1c = local_58[10];
                local_18 = *(undefined8 *)(local_58 + 8);
                local_58[10] = -1;
                *(undefined8 *)(local_58 + 8) = local_28;
                FUN_10090fef5(local_58);
                local_58[10] = local_1c;
                *(undefined8 *)(local_58 + 8) = local_18;
              }
              local_4c = _xmlStringCurrentChar
                                   (0,*(long *)(local_58 + 0x18) + (long)local_58[0x14],local_ec);
              local_50 = FUN_10090fb5b(local_40,local_4c);
              local_58[0xb] = local_58[0xb] + 1;
            } while (local_50 == 1);
            if (local_58[0xb] < *(int *)(local_40 + 0xc)) {
              local_50 = 0;
            }
            if (local_50 < 0) {
              local_50 = 0;
            }
            if (local_50 == 0) goto LAB_100910ad9;
          }
          else if (((local_50 == 0) && (*(int *)(local_40 + 0xc) == 0)) &&
                  (0 < *(int *)(local_40 + 0x10))) {
            local_58[0xb] = 1;
            local_ec[0] = 0;
            local_50 = 1;
          }
        }
      }
      else {
        local_34 = *(int *)(*(long *)(local_58 + 0x10) + (long)(int)local_48[2] * 4);
        local_30 = (int *)(*(long *)(*(long *)(local_58 + 2) + 0x30) + (long)(int)local_48[2] * 8);
        if ((local_34 < *local_30) || (local_30[1] < local_34)) {
          local_10c = 0;
        }
        else {
          local_10c = 1;
        }
        local_50 = local_10c;
      }
      if (local_50 == 1) {
        if (local_58[10] + 1 < *(int *)(*(long *)(local_58 + 8) + 0x14)) {
          FUN_10090fef5(local_58);
        }
        if (-1 < *(int *)((long)local_48 + 0xc)) {
          piVar3 = (int *)(*(long *)(local_58 + 0x10) + (long)*(int *)((long)local_48 + 0xc) * 4);
          *piVar3 = *piVar3 + 1;
        }
        if ((-1 < (int)local_48[2]) && ((int)local_48[2] < 0x123456)) {
          *(undefined4 *)(*(long *)(local_58 + 0x10) + (long)(int)local_48[2] * 4) = 0;
        }
        *(undefined8 *)(local_58 + 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)local_48[1] * 8);
        local_58[10] = 0;
        if (*local_48 != 0) {
          local_58[0x14] = local_58[0x14] + local_ec[0];
        }
        goto LAB_100910aef;
      }
      if (local_50 < 0) {
        *local_58 = -4;
        break;
      }
    }
    local_58[10] = local_58[10] + 1;
  }
  if ((local_58[10] != 0) || (*(int *)(*(long *)(local_58 + 8) + 0x14) == 0)) {
LAB_100910ad9:
    local_58[1] = 0;
    FUN_10091026a(local_58);
  }
  goto LAB_100910aef;
}

