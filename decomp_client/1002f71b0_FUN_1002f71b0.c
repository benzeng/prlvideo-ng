
undefined8 FUN_1002f71b0(undefined8 param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [2];
  
  CAbstractTask::getDefaultSubTaskList();
  if (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0) {
    if (DAT_102310930 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_1001e5440(pvVar2);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar2;
    }
    iVar1 = FUN_1001e5550(DAT_102310930,4);
    if (iVar1 < 0) goto LAB_1002f7215;
  }
  else {
LAB_1002f7215:
    local_30[0] = 0;
    FUN_1001298a0(param_1,local_30);
  }
  if (*(int *)(*(long *)(param_2 + 0x18) + 4) == 0) {
    if (*(int *)(*(long *)(param_2 + 0x20) + 4) == 0) {
      local_34 = 5;
      FUN_1001298a0(param_1,&local_34);
      if (*(int *)(*(long *)(param_2 + 0x18) + 4) != 0) goto LAB_1002f7298;
    }
    if (DAT_102310930 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_1001e5440(pvVar2);
      DAT_102273630 = 1;
      DAT_102310930 = pvVar2;
    }
    iVar1 = FUN_1001e5550(DAT_102310930,4);
    if (iVar1 < 0) {
      return param_1;
    }
  }
LAB_1002f7298:
  local_38 = 8;
  FUN_1001298a0(param_1,&local_38);
  return param_1;
}

