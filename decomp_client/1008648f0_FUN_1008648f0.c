
void FUN_1008648f0(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int *local_38;
  undefined8 uStack_30;
  int *local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  
  if (param_2 == 0xc) {
    if ((param_3 == 6) && (*(int *)param_4[1] == 0)) {
      uVar1 = FUN_100805b10();
      *(undefined4 *)*param_4 = uVar1;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1007d11c0(param_1,*(undefined8 *)param_4[1]);
      return;
    case 1:
      FUN_1007d32b0();
      return;
    case 2:
      FUN_1007d1480();
      break;
    case 3:
      FUN_1007d68f0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 4:
      FUN_1007d09e0(param_1,param_4[1]);
      return;
    case 5:
      local_28 = *(int **)param_4[1];
      uStack_20 = ((undefined8 *)param_4[1])[1];
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + 1;
        local_11 = *local_28 != 0;
        UNLOCK();
      }
      FUN_1007d86b0(param_1,&local_28);
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + -1;
        local_11 = *local_28 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_28 != (int *)0x0)) {
          operator_delete(local_28);
        }
      }
      break;
    case 6:
      local_38 = *(int **)param_4[1];
      uStack_30 = ((undefined8 *)param_4[1])[1];
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + 1;
        local_11 = *local_38 != 0;
        UNLOCK();
      }
      FUN_1007d2e70(param_1,&local_38);
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + -1;
        local_11 = *local_38 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_38 != (int *)0x0)) {
          operator_delete(local_38);
        }
      }
    }
  }
  return;
}

