
void FUN_100575ac0(long param_1)

{
  char cVar1;
  undefined1 local_60 [24];
  undefined4 local_48;
  code *local_40;
  long *local_38;
  long local_30;
  undefined4 local_28;
  undefined8 local_20;
  code *local_18;
  
  if (*(long *)(param_1 + 0x1130) != *(long *)(param_1 + 0x1128)) {
    if ((*(long **)(param_1 + 0x1210) != (long *)0x0) &&
       (cVar1 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x48))(), cVar1 == '\0')) {
      local_20 = 0;
      local_28 = 0;
      local_18 = FUN_100575b80;
      local_40 = FUN_1005751e0;
      local_48 = 0;
      local_38 = &local_30;
      local_30 = param_1;
      cVar1 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x20))
                        (*(long **)(param_1 + 0x1210),local_60);
      if (cVar1 != '\0') {
        return;
      }
      FUN_1008e3970("","vdisk",0,"Error: Callback not added");
      return;
    }
    FUN_100575b80(param_1,0);
  }
  return;
}

