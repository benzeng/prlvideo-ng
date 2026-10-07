
uint FUN_100111070(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  uint local_18;
  
  local_1c = 0;
  local_18 = 0xffffffff;
  local_30 = param_2;
  local_2c = param_4;
  local_28 = param_5;
  local_24 = param_3;
  iVar1 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_30,0x1c,0);
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_1c;
  }
  return ~-(uint)(iVar1 == 0) | local_18;
}

