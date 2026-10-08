
void FUN_10084dd20(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int *local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  
  if (param_2 == 0xc) {
    if ((param_3 == 2) && (*(int *)param_4[1] == 0)) {
      uVar1 = FUN_100809850();
      *(undefined4 *)*param_4 = uVar1;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      local_28 = *(int **)param_4[1];
      uStack_20 = ((undefined8 *)param_4[1])[1];
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + 1;
        local_11 = *local_28 != 0;
        UNLOCK();
      }
      FUN_1006a4ef0(param_1,&local_28);
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
    else {
      if (param_3 == 1) {
        FUN_1006a1b10(param_1,param_4[1]);
        return;
      }
      if (param_3 == 0) {
        FUN_1006a1290(param_1,param_4[1]);
        return;
      }
    }
  }
  return;
}

