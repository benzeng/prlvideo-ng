
undefined4 FUN_100575340(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 local_70 [24];
  undefined4 local_58;
  code *local_50;
  long *local_48;
  long local_40;
  undefined4 local_38;
  long *local_30;
  code *local_28;
  
  local_38 = 0x80000003;
  if (param_2 != (long *)0x0) {
    plVar1 = param_2 + 1;
    if ((long *)param_2[1] == plVar1) {
      if ((*(long **)(param_1 + 0x1210) == (long *)0x0) ||
         (cVar3 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x48))(), cVar3 != '\0')) {
        plVar2 = *(long **)(param_1 + 0x1208);
        *(long **)(param_1 + 0x1208) = plVar1;
        param_2[1] = param_1 + 0x1200;
        param_2[2] = (long)plVar2;
        *plVar2 = (long)plVar1;
        uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 0x12c8) = *(int *)(param_1 + 0x12c8) + 1;
        }
        uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
        if ((uVar5 & 2) != 0) {
          *(int *)(param_1 + 0x12cc) = *(int *)(param_1 + 0x12cc) + 1;
        }
        uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
        local_38 = 0;
        if ((uVar4 & 4) != 0) {
          *(int *)(param_1 + 0x12d0) = *(int *)(param_1 + 0x12d0) + 1;
        }
      }
      else {
        local_38 = 0;
        local_28 = FUN_1005752c0;
        local_50 = FUN_1005751e0;
        local_58 = 0;
        local_48 = &local_40;
        local_40 = param_1;
        local_30 = param_2;
        cVar3 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x20))
                          (*(long **)(param_1 + 0x1210),local_70);
        if (cVar3 == '\0') {
          FUN_1008e3970("","vdisk",0,"Error: Callback not added");
          local_38 = 0x80021025;
        }
      }
    }
    else {
      FUN_1008e3970("","vdisk",0,"tracker %p double init",param_2);
      local_38 = 0x80000011;
    }
  }
  return local_38;
}

