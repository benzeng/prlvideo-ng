
undefined8 FUN_100a4a120(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  code *local_18;
  long local_10;
  
  uVar1 = 0x80000009;
  if (*(long *)(param_1 + 8) == 0) {
    local_20 = 0x18;
    local_18 = FUN_100a4a2b0;
    local_1c = param_3;
    local_10 = param_1;
    uVar1 = _PrlVm_RegisterTool(param_2,&local_20,param_1 + 8);
  }
  return uVar1;
}

