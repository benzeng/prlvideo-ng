
undefined8 FUN_100112930(long param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 *local_24;
  undefined4 local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = -1;
  local_30 = 0x834;
  local_24 = &local_38;
  local_2c = 0;
  local_28 = 8;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c,0);
  if (iVar1 != 0 || local_18 != 0) {
    FUN_1008e3970("","vm",0,"Failed to obtain mmsh base addr");
    local_38 = 0;
  }
  return local_38;
}

