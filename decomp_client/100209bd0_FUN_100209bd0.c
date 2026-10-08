
undefined8 * FUN_100209bd0(undefined8 *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  *param_1 = PTR_shared_null_1021e15e8;
  local_20[0] = 0;
  FUN_100129840(param_1,local_20);
  uVar2 = *(uint *)(param_2 + 0x150);
  if ((uVar2 & 1) != 0) {
    local_24 = 1;
    FUN_100129840(param_1,&local_24);
    uVar2 = *(uint *)(param_2 + 0x150);
  }
  if ((uVar2 & 0x10) != 0) {
    local_28 = 2;
    FUN_100129840(param_1,&local_28);
  }
  cVar1 = FUN_100d80630(1);
  if ((cVar1 == '\0') && ((*(byte *)(param_2 + 0x150) & 8) != 0)) {
    local_2c = 3;
    FUN_100129840(param_1,&local_2c);
  }
  return param_1;
}

