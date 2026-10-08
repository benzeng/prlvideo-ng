
byte * FUN_10088af70(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *local_48;
  byte *local_28;
  byte *local_20;
  byte *local_18;
  
  local_20 = param_2;
  if (param_3 == (byte *)0x0) {
    local_48 = (byte *)FUN_10087c347(param_1,param_2);
  }
  else {
    if ((*(int *)(param_1 + 0x1c4) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20) <
        0xfa)) {
      FUN_100879cbc(param_1);
    }
    local_20 = param_3;
    for (local_18 = *(byte **)(*(long *)(param_1 + 0x38) + 0x20);
        (*local_18 != 0 && (*local_18 == *local_20)); local_18 = local_18 + 1) {
      local_20 = local_20 + 1;
    }
    if ((*local_20 == 0) && (pbVar1 = param_2, *local_18 == 0x3a)) {
      while ((local_20 = pbVar1, local_18 = local_18 + 1, *local_18 != 0 && (*local_18 == *local_20)
             )) {
        pbVar1 = local_20 + 1;
      }
      if ((*local_20 == 0) &&
         ((((*local_18 == 0x3e || (*local_18 == 0x20)) || ((8 < *local_18 && (*local_18 < 0xb)))) ||
          (*local_18 == 0xd)))) {
        *(byte **)(*(long *)(param_1 + 0x38) + 0x20) = local_18;
        return (byte *)0x1;
      }
    }
    local_48 = (byte *)FUN_10088ac7b(param_1,&local_28);
    if ((local_48 == param_2) && (param_3 == local_28)) {
      local_48 = (byte *)0x1;
    }
  }
  return local_48;
}

