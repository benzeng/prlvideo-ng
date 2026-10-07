
undefined8 FUN_100045a60(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_2[4] + 0x14;
  if (param_4 < uVar1) {
    if ((((param_3[3] & 8) == 0) || (param_4 < 0x18)) || ((param_2[3] & 8) != 0)) {
      if (DAT_1011b55f8 < 1) {
        return 0xf0000009;
      }
      FUN_1008e3970("SGAH","vm",1,
                    "Pending command %i has %u bytes of data, but supplied buffer from guest is only %u bytes (flags=0x%x)"
                    ,*param_2,(ulong)(uint)param_2[4],param_4,param_3[3]);
      return 0xf0000009;
    }
    param_3[1] = 2;
    *param_3 = 0x7e;
    param_3[2] = 0;
    param_3[3] = 8;
    param_3[4] = 4;
    param_3[5] = param_2[4] + 0x14;
  }
  else {
    _memcpy(param_3,param_2,uVar1);
  }
  return 0;
}

