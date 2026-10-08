
undefined8 * FUN_100249d00(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  if (*(int *)(param_2 + 0x2c) != 0) {
    local_20[0] = 0;
    FUN_100129840(param_1,local_20);
  }
  uVar1 = *(uint *)(param_2 + 0x34);
  if ((uVar1 & 0x40) != 0) {
    local_24 = 1;
    FUN_100129840(param_1,&local_24);
    uVar1 = *(uint *)(param_2 + 0x34);
  }
  if ((uVar1 & 1) != 0) {
    local_28 = 2;
    FUN_100129840(param_1,&local_28);
    uVar1 = *(uint *)(param_2 + 0x34);
  }
  if ((uVar1 & 8) != 0) {
    local_2c = 3;
    FUN_100129840(param_1,&local_2c);
    uVar1 = *(uint *)(param_2 + 0x34);
  }
  if ((uVar1 & 0x100) != 0) {
    local_30 = 4;
    FUN_100129840(param_1,&local_30);
    uVar1 = *(uint *)(param_2 + 0x34);
  }
  if ((uVar1 & 0x80) != 0) {
    local_34 = 5;
    FUN_100129840(param_1,&local_34);
  }
  local_38 = 6;
  FUN_100129840(param_1,&local_38);
  return param_1;
}

