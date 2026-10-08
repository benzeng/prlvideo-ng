
undefined8 * FUN_100988340(undefined8 *param_1,long param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  *param_1 = &PTR_FUN_10227dad8;
  param_1[1] = &PTR_FUN_10227db30;
  param_1[2] = PTR_shared_null_1021e15e8;
  FUN_10098a850(&local_58,param_2 + 8);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] != local_58[3]) {
    do {
      if ((local_40 == 0) || (**(char **)local_50 != param_3)) {
        local_50 = local_50 + 2;
        local_40 = 1;
      }
      else {
        FUN_100989970(param_1 + 2,*(char **)local_50 + 0x18);
        local_50 = local_50 + 2;
        uVar1 = local_40 ^ 1;
        bVar2 = local_40 == 1;
        local_40 = uVar1;
        if (bVar2) break;
      }
    } while (local_50 != local_48);
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    FUN_10098a430(&local_58,local_58);
  }
  return param_1;
}

