
ulong FUN_100575200(long param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  undefined1 local_70 [24];
  undefined4 local_58;
  code *local_50;
  long *local_48;
  long local_40;
  uint local_38;
  undefined8 local_30;
  code *local_28;
  
  if (*(long **)(param_1 + 0x1210) != (long *)0x0) {
    cVar1 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x48))();
    if (cVar1 == '\0') {
      local_38 = 0;
      local_50 = FUN_1005751e0;
      local_58 = 0;
      local_48 = &local_40;
      local_40 = param_1;
      local_30 = param_3;
      local_28 = UNRECOVERED_JUMPTABLE;
      cVar1 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x20))
                        (*(long **)(param_1 + 0x1210),local_70);
      if (cVar1 == '\0') {
        FUN_1008e3970("","vdisk",0,"Error: Callback not added");
        uVar2 = 0x80021025;
      }
      else {
        uVar2 = (ulong)local_38;
      }
      return uVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100575242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return uVar2;
}

