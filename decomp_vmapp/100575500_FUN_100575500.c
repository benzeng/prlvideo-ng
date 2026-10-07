
void FUN_100575500(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 local_70 [24];
  undefined4 local_58;
  code *local_50;
  long *local_48;
  long local_40;
  undefined4 local_38;
  long *local_30;
  code *local_28;
  
  if (param_2 != (long *)0x0) {
    plVar1 = param_2 + 1;
    plVar4 = (long *)param_2[1];
    if (plVar4 != plVar1) {
      if (*(long **)(param_1 + 0x1210) != (long *)0x0) {
        cVar3 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x48))();
        if (cVar3 == '\0') {
          local_38 = 0;
          local_28 = FUN_100575490;
          local_50 = FUN_1005751e0;
          local_58 = 0;
          local_48 = &local_40;
          local_40 = param_1;
          local_30 = param_2;
          cVar3 = (**(code **)(**(long **)(param_1 + 0x1210) + 0x20))
                            (*(long **)(param_1 + 0x1210),local_70);
          if (cVar3 != '\0') {
            return;
          }
          FUN_1008e3970("","vdisk",0,"Error: Callback not added");
          return;
        }
        plVar4 = (long *)*plVar1;
      }
      puVar2 = (undefined8 *)param_2[2];
      plVar4[1] = (long)puVar2;
      *puVar2 = plVar4;
      param_2[1] = (long)plVar1;
      param_2[2] = (long)plVar1;
      uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((uVar5 & 1) != 0) {
        *(int *)(param_1 + 0x12c8) = *(int *)(param_1 + 0x12c8) + -1;
      }
      uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((uVar5 & 2) != 0) {
        *(int *)(param_1 + 0x12cc) = *(int *)(param_1 + 0x12cc) + -1;
      }
      uVar5 = (**(code **)(*param_2 + 0x18))(param_2);
      if ((uVar5 & 4) != 0) {
        *(int *)(param_1 + 0x12d0) = *(int *)(param_1 + 0x12d0) + -1;
      }
    }
  }
  return;
}

