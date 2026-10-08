
void FUN_100890ef7(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  xmlGenericErrorFunc pxVar1;
  char *pcVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  char *local_20;
  
  if (((param_1 == 0) || (param_2 == (undefined8 *)0x0)) || (param_3 == (undefined8 *)0x0)) {
    ppxVar3 = ___xmlGenericError();
    pxVar1 = *ppxVar3;
    ppvVar4 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar4,"Internal error: xmlParseGetLasts\n");
  }
  else if ((*(int *)(param_1 + 0x1c4) == 0) || (*(int *)(param_1 + 0x40) != 1)) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    local_20 = *(char **)(*(long *)(param_1 + 0x38) + 0x28);
    do {
      pcVar2 = local_20;
      local_20 = pcVar2 + -1;
      if (local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x18)) break;
    } while (*local_20 != '<');
    if (local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x18)) {
      *param_2 = 0;
      *param_3 = 0;
    }
    else {
      *param_2 = local_20;
      local_20 = pcVar2;
      while ((local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x28) && (*local_20 != '>'))) {
        if (*local_20 == '\'') {
          do {
            pcVar2 = local_20;
            local_20 = pcVar2 + 1;
            if (*(char **)(*(long *)(param_1 + 0x38) + 0x28) <= local_20) break;
          } while (*local_20 != '\'');
          if (local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x28)) {
            local_20 = pcVar2 + 2;
          }
        }
        else if (*local_20 == '\"') {
          do {
            pcVar2 = local_20;
            local_20 = pcVar2 + 1;
            if (*(char **)(*(long *)(param_1 + 0x38) + 0x28) <= local_20) break;
          } while (*local_20 != '\"');
          if (local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x28)) {
            local_20 = pcVar2 + 2;
          }
        }
        else {
          local_20 = local_20 + 1;
        }
      }
      if (local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x28)) {
        *param_3 = local_20;
      }
      else {
        local_20 = (char *)*param_2;
        do {
          local_20 = local_20 + -1;
          if (local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x18)) break;
        } while (*local_20 != '>');
        if (local_20 < *(char **)(*(long *)(param_1 + 0x38) + 0x18)) {
          *param_3 = 0;
        }
        else {
          *param_3 = local_20;
        }
      }
    }
  }
  return;
}

