
void FUN_10013d0e0(long param_1,code *param_2,undefined8 param_3)

{
  bool bVar1;
  char local_88 [96];
  char *local_28;
  char *local_20;
  uint local_18;
  uint local_14;
  char *local_10;
  
  if (param_1 != 0) {
    local_20 = *(char **)(param_1 + 0x18);
    for (local_28 = *(char **)(param_1 + 0x20);
        (local_20 < local_28 && ((*local_28 == '\n' || (*local_28 == '\r'))));
        local_28 = local_28 + -1) {
    }
    local_18 = 0;
    for (; (((bVar1 = local_18 < 0x50, local_18 = local_18 + 1, bVar1 && (local_20 < local_28)) &&
            (*local_28 != '\n')) && (*local_28 != '\r')); local_28 = local_28 + -1) {
    }
    if ((*local_28 == '\n') || (*local_28 == '\r')) {
      local_28 = local_28 + 1;
    }
    local_14 = (int)*(undefined8 *)(param_1 + 0x20) - (int)local_28;
    local_10 = local_88;
    for (local_18 = 0;
        ((*local_28 != '\0' && (*local_28 != '\n')) && ((*local_28 != '\r' && (local_18 < 0x50))));
        local_18 = local_18 + 1) {
      *local_10 = *local_28;
      local_28 = local_28 + 1;
      local_10 = local_10 + 1;
    }
    *local_10 = '\0';
    (*param_2)(param_3,"%s\n",local_88);
    local_18 = 0;
    for (local_10 = local_88;
        ((local_18 < local_14 && (bVar1 = local_18 < 0x4f, local_18 = local_18 + 1, bVar1)) &&
        (*local_10 != '\0')); local_10 = local_10 + 1) {
      if (*local_10 != '\t') {
        *local_10 = ' ';
      }
    }
    *local_10 = '^';
    local_10 = local_10 + 1;
    *local_10 = '\0';
    (*param_2)(param_3,"%s\n",local_88);
  }
  return;
}

