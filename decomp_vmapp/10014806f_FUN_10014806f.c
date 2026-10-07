
undefined4 FUN_10014806f(long *param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  xmlNodePtr node;
  undefined4 local_34;
  int local_18;
  
  if (*(long *)(*param_1 + 0x90) == *(long *)(*param_1 + 0x88)) {
    local_34 = 0;
  }
  else if (*(int *)param_1[0x2e] == 1) {
    local_34 = 0;
  }
  else {
    if (param_4 == 0) {
      for (local_18 = 0; local_18 < param_3; local_18 = local_18 + 1) {
        if ((*(char *)(local_18 + param_2) != ' ') &&
           (((*(byte *)(local_18 + param_2) < 9 || (10 < *(byte *)(local_18 + param_2))) &&
            (*(char *)(local_18 + param_2) != '\r')))) {
          return 0;
        }
      }
    }
    if (param_1[10] == 0) {
      local_34 = 0;
    }
    else {
      if (param_1[2] != 0) {
        iVar1 = _xmlIsMixedElement((xmlDocPtr)param_1[2],*(xmlChar **)(param_1[10] + 0x10));
        if (iVar1 == 0) {
          return 1;
        }
        if (iVar1 == 1) {
          return 0;
        }
      }
      if ((**(char **)(param_1[7] + 0x20) == '<') || (**(char **)(param_1[7] + 0x20) == '\r')) {
        if ((*(long *)(param_1[10] + 0x18) == 0) &&
           ((**(char **)(param_1[7] + 0x20) == '<' &&
            (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '/')))) {
          local_34 = 0;
        }
        else {
          node = _xmlGetLastChild((xmlNodePtr)param_1[10]);
          if (node == (xmlNodePtr)0x0) {
            if ((*(int *)(param_1[10] + 8) != 1) && (*(long *)(param_1[10] + 0x50) != 0)) {
              return 0;
            }
          }
          else {
            iVar1 = _xmlNodeIsText(node);
            if (iVar1 != 0) {
              return 0;
            }
            if ((*(long *)(param_1[10] + 0x18) != 0) &&
               (iVar1 = _xmlNodeIsText(*(xmlNodePtr *)(param_1[10] + 0x18)), iVar1 != 0)) {
              return 0;
            }
          }
          local_34 = 1;
        }
      }
      else {
        local_34 = 0;
      }
    }
  }
  return local_34;
}

