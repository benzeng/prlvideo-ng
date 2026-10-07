
byte * FUN_100148a1f(long param_1,byte *param_2)

{
  byte *local_40;
  byte *local_38;
  byte *local_30;
  
  if ((*(int *)(param_1 + 0x1c4) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
      0xfa)) {
    FUN_100146394(param_1);
  }
  local_30 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
  local_38 = param_2;
  while ((*local_30 != 0 && (*local_30 == *local_38))) {
    local_30 = local_30 + 1;
    local_38 = local_38 + 1;
    *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
  }
  if ((*local_38 == 0) &&
     ((((*local_30 == 0x3e || (*local_30 == 0x20)) || ((8 < *local_30 && (*local_30 < 0xb)))) ||
      (*local_30 == 0xd)))) {
    *(byte **)(*(long *)(param_1 + 0x38) + 0x20) = local_30;
    local_40 = (byte *)0x1;
  }
  else {
    local_40 = (byte *)_xmlParseName(param_1);
    if (local_40 == param_2) {
      local_40 = (byte *)0x1;
    }
  }
  return local_40;
}

