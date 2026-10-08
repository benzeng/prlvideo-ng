
void FUN_10080aea0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int *local_38;
  undefined8 uStack_30;
  int *local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  
  if (param_2 == 0xc) {
    if ((param_3 == 1) && (*(uint *)param_4[1] < 2)) {
      uVar1 = FUN_100809850();
      *(undefined4 *)*param_4 = uVar1;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 1) {
      local_28 = *(int **)param_4[1];
      uStack_20 = ((undefined8 *)param_4[1])[1];
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + 1;
        local_11 = *local_28 != 0;
        UNLOCK();
      }
      local_38 = *(int **)param_4[2];
      uStack_30 = ((undefined8 *)param_4[2])[1];
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + 1;
        local_11 = *local_38 != 0;
        UNLOCK();
      }
      FUN_1001e9a50(param_1,&local_28,&local_38);
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + -1;
        local_11 = *local_38 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_38 != (int *)0x0)) {
          operator_delete(local_38);
        }
      }
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + -1;
        local_11 = *local_28 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_28 != (int *)0x0)) {
          operator_delete(local_28);
        }
      }
    }
    else if (param_3 == 0) {
      FUN_1001e9970(param_1,*(undefined1 *)param_4[1]);
      return;
    }
  }
  return;
}

