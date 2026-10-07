
undefined4 FUN_10057d090(long *param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 local_71;
  undefined1 local_70 [24];
  undefined4 local_58;
  code *local_50;
  long **local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 *local_30;
  code *local_28;
  
  local_38 = 0;
  if ((param_1[0x226] != param_1[0x225]) && (param_1[0x25b] != 0)) {
    local_71 = param_2;
    cVar1 = (**(code **)(*param_1 + 0x280))(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1[0x25b] + 0x68) = param_2;
      local_38 = 0;
    }
    else if (((long *)param_1[0x242] == (long *)0x0) ||
            (cVar1 = (**(code **)(*(long *)param_1[0x242] + 0x48))(), cVar1 != '\0')) {
      local_38 = FUN_10057cce0(param_1,&local_71);
    }
    else {
      local_30 = &local_71;
      local_38 = 0;
      local_28 = FUN_10057cce0;
      local_50 = FUN_1005751e0;
      local_58 = 0;
      local_48 = &local_40;
      local_40 = param_1;
      cVar1 = (**(code **)(*(long *)param_1[0x242] + 0x20))((long *)param_1[0x242],local_70);
      if (cVar1 == '\0') {
        FUN_1008e3970("","vdisk",0,"Error: Callback not added");
        local_38 = 0x80021025;
      }
    }
  }
  return local_38;
}

