
undefined4 FUN_100980a56(undefined8 *param_1,xmlChar *param_2,xmlChar *param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined8 *local_40;
  undefined4 local_34;
  int local_30;
  uint local_2c;
  int local_24;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  if ((param_1 == (undefined8 *)0x0) || (local_40 = param_1, *(int *)(param_1 + 2) < 0)) {
    return 0xffffffff;
  }
  do {
    while( true ) {
      while( true ) {
        if (local_40 == (undefined8 *)0x0) {
          if (0 < local_30) {
            local_34 = 0xffffffff;
          }
          return local_34;
        }
        plVar1 = (long *)local_40[1];
        if ((param_2 != (xmlChar *)0x0) || (param_3 != (xmlChar *)0x0)) break;
        *(undefined4 *)(local_40 + 2) = 0;
        *(undefined4 *)(local_40 + 3) = 0;
        *(undefined4 *)((long)local_40 + 0x2c) = 0xffffffff;
        if ((*(uint *)plVar1[2] >> 2 & 1) != 0) {
          iVar2 = FUN_10098090a(local_40,0,0);
          if (iVar2 < 0) {
            local_30 = local_30 + 1;
          }
          if ((int)plVar1[1] == 0) {
            local_34 = 1;
          }
        }
        local_40 = (undefined8 *)*local_40;
      }
      if ((int)plVar1[1] == 0) break;
      if (*(int *)((long)local_40 + 0x2c) == -1) {
        local_24 = 0;
        iVar2 = *(int *)(local_40 + 2);
        for (; local_24 < iVar2; local_24 = local_24 + 1) {
          if (((*(uint *)(plVar1 + 3) >> 0x10 ^ 1) & 1) == 0) {
            local_18 = *(int *)(local_40[4] + (long)local_24 * 8);
            if (((-1 < local_18) &&
                (iVar3 = *(int *)(local_40[4] + (long)local_24 * 8 + 4),
                iVar3 <= *(int *)(local_40 + 3))) &&
               ((local_14 = *(uint *)(plVar1[2] + (long)local_18 * 0x18) & 1,
                *(int *)(local_40 + 3) <= iVar3 || (local_14 != 0)))) goto LAB_100980ce5;
          }
          else {
            local_18 = *(int *)(local_40[4] + (long)*(int *)(local_40 + 2) * 8 + -8);
            if (*(int *)(local_40[4] + (long)*(int *)(local_40 + 2) * 8 + -4) <
                *(int *)(local_40 + 3)) {
              return 0xffffffff;
            }
            local_14 = 0;
            local_24 = iVar2;
LAB_100980ce5:
            if ((param_4 != 2) ||
               (((*(uint *)(plVar1[2] + (long)local_18 * 0x18) >> 3 ^ 1) & 1) == 0)) {
              if (*plVar1 == 0) {
                if (*(long *)(plVar1[2] + (long)local_18 * 0x18 + 8) == 0) {
                  if (*(long *)(plVar1[2] + (long)local_18 * 0x18 + 0x10) == 0) {
                    local_1c = 1;
                  }
                  else {
                    local_1c = _xmlStrEqual(*(xmlChar **)(plVar1[2] + (long)local_18 * 0x18 + 0x10),
                                            param_3);
                  }
                }
                else {
                  iVar3 = _xmlStrEqual(*(xmlChar **)(plVar1[2] + (long)local_18 * 0x18 + 8),param_2)
                  ;
                  if ((iVar3 == 0) ||
                     (iVar3 = _xmlStrEqual(*(xmlChar **)(plVar1[2] + (long)local_18 * 0x18 + 0x10),
                                           param_3), iVar3 == 0)) {
                    local_60 = 0;
                  }
                  else {
                    local_60 = 1;
                  }
                  local_1c = local_60;
                }
              }
              else if (*(long *)(plVar1[2] + (long)local_18 * 0x18 + 8) == 0) {
                if (*(long *)(plVar1[2] + (long)local_18 * 0x18 + 0x10) == 0) {
                  local_1c = 1;
                }
                else {
                  local_1c = (uint)(*(xmlChar **)(plVar1[2] + (long)local_18 * 0x18 + 0x10) ==
                                   param_3);
                }
              }
              else {
                if ((*(xmlChar **)(plVar1[2] + (long)local_18 * 0x18 + 8) == param_2) &&
                   (*(xmlChar **)(plVar1[2] + (long)local_18 * 0x18 + 0x10) == param_3)) {
                  local_64 = 1;
                }
                else {
                  local_64 = 0;
                }
                local_1c = local_64;
              }
              if (local_1c != 0) {
                local_2c = *(uint *)(plVar1[2] + (long)local_18 * 0x18) & 2;
                if (local_14 == 0) {
                  if (local_2c == 0) {
                    FUN_10098090a(local_40,local_18 + 1,*(int *)(local_40 + 3) + 1);
                  }
                  else {
                    local_34 = 1;
                  }
                }
                else if (local_2c == 0) {
                  FUN_10098090a(local_40,local_18 + 1,*(int *)(local_40 + 3) + 1);
                }
                else {
                  local_34 = 1;
                }
              }
              if ((((*(uint *)(plVar1 + 3) >> 0x10 ^ 1) & 1) != 0) &&
                 ((local_1c == 0 || (local_2c != 0)))) {
                *(int *)((long)local_40 + 0x2c) = *(int *)(local_40 + 3) + 1;
              }
            }
          }
        }
        *(int *)(local_40 + 3) = *(int *)(local_40 + 3) + 1;
        if ((*(uint *)plVar1[2] >> 2 & 1) == 0) {
          if ((*(uint *)(local_40 + 5) & 7) == 0) {
LAB_10098108a:
            if ((param_4 != 2) || (((*(uint *)plVar1[2] >> 3 ^ 1) & 1) == 0)) {
              if (*(long *)(plVar1[2] + 8) == 0) {
                if (*(long *)(plVar1[2] + 0x10) == 0) {
                  local_1c = 1;
                }
                else if (*plVar1 == 0) {
                  local_1c = _xmlStrEqual(*(xmlChar **)(plVar1[2] + 0x10),param_3);
                }
                else {
                  local_1c = (uint)(*(xmlChar **)(plVar1[2] + 0x10) == param_3);
                }
              }
              else if (*plVar1 == 0) {
                iVar2 = _xmlStrEqual(*(xmlChar **)(plVar1[2] + 8),param_2);
                if ((iVar2 == 0) ||
                   (iVar2 = _xmlStrEqual(*(xmlChar **)(plVar1[2] + 0x10),param_3), iVar2 == 0)) {
                  local_58 = 0;
                }
                else {
                  local_58 = 1;
                }
                local_1c = local_58;
              }
              else {
                if ((*(xmlChar **)(plVar1[2] + 8) == param_2) &&
                   (*(xmlChar **)(plVar1[2] + 0x10) == param_3)) {
                  local_5c = 1;
                }
                else {
                  local_5c = 0;
                }
                local_1c = local_5c;
              }
              if (local_1c != 0) {
                local_2c = *(uint *)plVar1[2] & 2;
                if (local_2c == 0) {
                  FUN_10098090a(local_40,1,*(undefined4 *)(local_40 + 3));
                }
                else {
                  local_34 = 1;
                }
              }
              if ((((*(uint *)(plVar1 + 3) >> 0x10 ^ 1) & 1) != 0) &&
                 ((local_1c == 0 || (local_2c != 0)))) {
                *(undefined4 *)((long)local_40 + 0x2c) = *(undefined4 *)(local_40 + 3);
              }
            }
          }
          else if (*(int *)(local_40 + 3) == 1) {
            if ((*(uint *)(local_40 + 5) & 6) == 0) goto LAB_10098108a;
          }
          else if (((*(uint *)plVar1[2] & 1) != 0) ||
                  ((*(int *)(local_40 + 3) == 2 && ((*(uint *)(local_40 + 5) & 6) != 0))))
          goto LAB_10098108a;
        }
      }
      else {
        *(int *)(local_40 + 3) = *(int *)(local_40 + 3) + 1;
      }
LAB_10098121f:
      local_40 = (undefined8 *)*local_40;
    }
    if ((*(uint *)(local_40 + 5) & 1) == 0) {
      if ((param_4 == 1) && (((*(uint *)(local_40 + 5) & 7) == 0 || (*(int *)(local_40 + 3) == 0))))
      {
        local_34 = 1;
      }
      *(int *)(local_40 + 3) = *(int *)(local_40 + 3) + 1;
      goto LAB_10098121f;
    }
    local_40 = (undefined8 *)*local_40;
  } while( true );
}

