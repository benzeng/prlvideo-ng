
void FUN_100576550(long param_1)

{
  long lVar1;
  char cVar2;
  undefined1 local_60 [24];
  undefined4 local_48;
  code *local_40;
  long *local_38;
  long local_30;
  undefined4 local_28;
  undefined8 local_20;
  code *local_18;
  
  if (*(long *)(param_1 + 0x1130) != *(long *)(param_1 + 0x1128)) {
    cVar2 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x48))();
    if (cVar2 == '\0') {
      local_20 = 0;
      local_28 = 0;
      local_18 = FUN_100576660;
      local_40 = FUN_1005751e0;
      local_48 = 0;
      local_38 = &local_30;
      local_30 = param_1;
      cVar2 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x20))
                        (*(long **)(param_1 + 0x1210),local_60);
      if (cVar2 == '\0') {
        FUN_1008e3970("","vdisk",0,"Error: Callback not added");
      }
    }
    else {
      cVar2 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x50))();
      if (cVar2 == '\0') {
        FUN_1008e3970("Compact","vdisk",0,"[%p] Compact terminated by AsyncDev state changing",
                      param_1);
      }
      else {
        lVar1 = *(long *)(param_1 + 0x12d8);
        if ((lVar1 != 0) &&
           ((9 < *(uint *)(lVar1 + 0x30) || ((0x301U >> (*(uint *)(lVar1 + 0x30) & 0x1f) & 1) == 0))
           )) {
          *(undefined4 *)(lVar1 + 0x60) = 1;
        }
      }
    }
  }
  return;
}

