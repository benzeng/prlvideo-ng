
void FUN_100054440(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 local_20 [8];
  uint *local_18;
  
  local_18 = *(uint **)(param_1 + 0x50);
  uVar1 = local_18[3];
  if (uVar1 != local_18[2]) {
    puVar2 = (undefined8 *)(param_1 + 0x50);
    if (1 < *local_18) {
      FUN_10005a180(puVar2,local_18[1]);
      local_18 = (uint *)*puVar2;
      uVar1 = local_18[3];
    }
    local_18 = local_18 + (long)(int)uVar1 * 2 + 2;
    FUN_10005a0c0(local_20,puVar2,&local_18);
  }
  return;
}

