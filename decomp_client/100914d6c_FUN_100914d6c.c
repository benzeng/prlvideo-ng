
undefined4 FUN_100914d6c(long param_1)

{
  int iVar1;
  undefined8 local_18;
  int local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0x28);
  local_c = FUN_100914cfc(param_1);
  if (local_c != 0) {
    iVar1 = FUN_10090e079(param_1,local_18,0,*(undefined8 *)(param_1 + 0x30));
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    local_18 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  while ((local_c != 0 && (*(int *)(param_1 + 0x10) == 0))) {
    local_c = FUN_100914cfc(param_1);
    if (local_c != 0) {
      iVar1 = FUN_10090e079(param_1,local_18,0,*(undefined8 *)(param_1 + 0x30));
      if (iVar1 < 0) {
        return 0xffffffff;
      }
      local_18 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  return 0;
}

