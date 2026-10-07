
undefined4 FUN_10024a870(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 local_50;
  long local_48;
  int local_38;
  undefined4 local_34;
  long local_30;
  int local_1c;
  int *local_18;
  long local_10;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_50 = 0xffffffff;
  }
  else {
    local_1c = 0;
    local_48 = param_2;
LAB_10024af1b:
    while (local_1c < *(int *)(param_1 + 0x24)) {
      local_18 = (int *)(*(long *)(param_1 + 0x30) + (long)local_1c * 0x18);
      switch(*local_18) {
      case 0:
        goto switchD_10024a915_caseD_0;
      case 1:
        if ((*(int *)(local_48 + 8) != 0x12) &&
           (((local_48 = *(long *)(local_48 + 0x28), *(int *)(local_48 + 8) == 9 ||
             (*(int *)(local_48 + 8) == 0x15)) || (*(int *)(local_48 + 8) == 0xd))))
        goto switchD_10024a915_default;
        break;
      case 2:
        if (*(int *)(local_48 + 8) == 1) {
          if (*(long *)(local_18 + 2) == 0) goto switchD_10024a915_default;
          if ((**(char **)(local_18 + 2) == **(char **)(local_48 + 0x10)) &&
             (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 2),*(xmlChar **)(local_48 + 0x10)),
             iVar2 != 0)) {
            if (*(long *)(local_48 + 0x48) == 0) {
              if (*(long *)(local_18 + 4) == 0) goto switchD_10024a915_default;
            }
            else if ((*(long *)(*(long *)(local_48 + 0x48) + 0x10) == 0) ||
                    ((*(long *)(local_18 + 4) != 0 &&
                     (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 4),
                                           *(xmlChar **)(*(long *)(local_48 + 0x48) + 0x10)),
                     iVar2 != 0)))) goto switchD_10024a915_default;
          }
        }
        break;
      case 3:
        if (((((*(int *)(local_48 + 8) == 1) || (*(int *)(local_48 + 8) == 9)) ||
             (*(int *)(local_48 + 8) == 0x15)) || (*(int *)(local_48 + 8) == 0xd)) &&
           (local_10 = *(long *)(local_48 + 0x18), *(long *)(local_18 + 2) != 0)) {
          while ((local_10 != 0 &&
                 (((*(int *)(local_10 + 8) != 1 ||
                   (**(char **)(local_18 + 2) != **(char **)(local_10 + 0x10))) ||
                  (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 2),*(xmlChar **)(local_10 + 0x10)),
                  iVar2 == 0))))) {
            local_10 = *(long *)(local_10 + 0x30);
          }
          if (local_10 != 0) goto switchD_10024a915_default;
        }
        break;
      case 4:
        if ((*(int *)(local_48 + 8) == 2) &&
           ((*(long *)(local_18 + 2) == 0 ||
            ((**(char **)(local_18 + 2) == **(char **)(local_48 + 0x10) &&
             (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 2),*(xmlChar **)(local_48 + 0x10)),
             iVar2 != 0)))))) {
          if (*(long *)(local_48 + 0x48) == 0) {
            lVar1 = *(long *)(local_18 + 4);
joined_r0x00010024ab75:
            if (lVar1 != 0) break;
          }
          else if (*(long *)(local_18 + 4) != 0) {
            iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 4),
                                 *(xmlChar **)(*(long *)(local_48 + 0x48) + 0x10));
joined_r0x00010024aefd:
            if (iVar2 == 0) break;
          }
          goto switchD_10024a915_default;
        }
        break;
      case 5:
        if (((*(int *)(local_48 + 8) != 9) && (*(int *)(local_48 + 8) != 0xd)) &&
           ((*(int *)(local_48 + 8) != 0x15 &&
            ((*(int *)(local_48 + 8) != 0x12 &&
             (local_48 = *(long *)(local_48 + 0x28), local_48 != 0)))))) {
          if (*(long *)(local_18 + 2) == 0) goto switchD_10024a915_default;
          if ((**(char **)(local_18 + 2) == **(char **)(local_48 + 0x10)) &&
             (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 2),*(xmlChar **)(local_48 + 0x10)),
             iVar2 != 0)) {
            if (*(long *)(local_48 + 0x48) == 0) {
              lVar1 = *(long *)(local_18 + 4);
              goto joined_r0x00010024ab75;
            }
            if (*(long *)(*(long *)(local_48 + 0x48) + 0x10) == 0) goto switchD_10024a915_default;
            if (*(long *)(local_18 + 4) != 0) {
              iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 4),
                                   *(xmlChar **)(*(long *)(local_48 + 0x48) + 0x10));
              goto joined_r0x00010024aefd;
            }
          }
        }
        break;
      case 6:
        if (*(long *)(local_18 + 2) == 0) {
          local_1c = local_1c + 1;
          local_18 = (int *)(*(long *)(param_1 + 0x30) + (long)local_1c * 0x18);
          if (*local_18 == 1) goto switchD_10024a915_caseD_0;
          if (*local_18 != 2) break;
          if (*(long *)(local_18 + 2) == 0) {
            return 0xffffffff;
          }
        }
        if ((((local_48 != 0) && (*(int *)(local_48 + 8) != 9)) && (*(int *)(local_48 + 8) != 0xd))
           && ((*(int *)(local_48 + 8) != 0x15 && (*(int *)(local_48 + 8) != 0x12)))) {
          for (local_48 = *(long *)(local_48 + 0x28); local_48 != 0;
              local_48 = *(long *)(local_48 + 0x28)) {
            if (local_48 == 0) goto LAB_10024a984;
            if (((*(int *)(local_48 + 8) == 1) &&
                (**(char **)(local_18 + 2) == **(char **)(local_48 + 0x10))) &&
               (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 2),*(xmlChar **)(local_48 + 0x10)),
               iVar2 != 0)) {
              if (*(long *)(local_48 + 0x48) == 0) {
                if (*(long *)(local_18 + 4) == 0) break;
              }
              else if (((*(long *)(*(long *)(local_48 + 0x48) + 0x10) != 0) &&
                       (*(long *)(local_18 + 4) != 0)) &&
                      (iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 4),
                                            *(xmlChar **)(*(long *)(local_48 + 0x48) + 0x10)),
                      iVar2 != 0)) break;
            }
          }
          if (local_48 != 0) {
            if (*local_18 == 6) {
              FUN_10024a75b(&local_38,local_1c,local_48);
            }
            else {
              FUN_10024a75b(&local_38,local_1c + -1,local_48);
            }
            goto switchD_10024a915_default;
          }
        }
        break;
      case 7:
        if (*(int *)(local_48 + 8) == 1) {
          if (*(long *)(local_48 + 0x48) == 0) {
            lVar1 = *(long *)(local_18 + 2);
            goto joined_r0x00010024ab75;
          }
          if (*(long *)(*(long *)(local_48 + 0x48) + 0x10) == 0) goto switchD_10024a915_default;
          if (*(long *)(local_18 + 2) != 0) {
            iVar2 = _xmlStrEqual(*(xmlChar **)(local_18 + 2),
                                 *(xmlChar **)(*(long *)(local_48 + 0x48) + 0x10));
            goto joined_r0x00010024aefd;
          }
        }
        break;
      case 8:
        if (*(int *)(local_48 + 8) == 1) goto switchD_10024a915_default;
        break;
      default:
        goto switchD_10024a915_default;
      }
LAB_10024a984:
      if (local_30 == 0) {
        return 0;
      }
      if (local_38 < 1) {
        (*(code *)_xmlFree)(local_30);
        return 0;
      }
      local_38 = local_38 + -1;
      local_48 = *(long *)(local_30 + (long)local_38 * 0x10 + 8);
      local_1c = *(int *)(local_30 + (long)local_38 * 0x10);
    }
switchD_10024a915_caseD_0:
    if (local_30 != 0) {
      (*(code *)_xmlFree)(local_30);
    }
    local_50 = 1;
  }
  return local_50;
switchD_10024a915_default:
  local_1c = local_1c + 1;
  goto LAB_10024af1b;
}

