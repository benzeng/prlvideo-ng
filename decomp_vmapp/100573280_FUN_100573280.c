
undefined4 FUN_100573280(long *param_1)

{
  char cVar1;
  undefined1 local_68 [24];
  undefined4 local_50;
  code *local_48;
  long **local_40;
  long *local_38;
  undefined4 local_30;
  undefined8 local_28;
  code *local_20;
  
  local_30 = 0;
  if (((param_1[0x226] != param_1[0x225]) && (local_30 = 0, param_1[0x25b] != 0)) &&
     (cVar1 = (**(code **)(*param_1 + 0x280))(param_1), cVar1 != '\0')) {
    if (((long *)param_1[0x242] == (long *)0x0) ||
       (cVar1 = (**(code **)(*(long *)param_1[0x242] + 0x48))(), cVar1 != '\0')) {
      *(undefined4 *)(param_1[0x25b] + 0x60) = 3;
      local_30 = 0;
    }
    else {
      local_28 = 0;
      local_30 = 0;
      local_20 = FUN_10057ccc0;
      local_48 = FUN_1005751e0;
      local_50 = 0;
      local_40 = &local_38;
      local_38 = param_1;
      cVar1 = (**(code **)(*(long *)param_1[0x242] + 0x20))((long *)param_1[0x242],local_68);
      if (cVar1 == '\0') {
        FUN_1008e3970("","vdisk",0,"Error: Callback not added");
        local_30 = 0x80021025;
      }
    }
  }
  return local_30;
}

