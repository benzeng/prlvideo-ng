
void FUN_10080a410(undefined8 param_1,int param_2,undefined4 param_3,long param_4)

{
  int *local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1001d6b70(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 1:
      local_28 = (int *)**(undefined8 **)(param_4 + 8);
      uStack_20 = (*(undefined8 **)(param_4 + 8))[1];
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + 1;
        local_11 = *local_28 != 0;
        UNLOCK();
      }
      FUN_1001d6b90(param_1,&local_28);
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
    case 2:
      FUN_1001d6c50();
      return;
    case 3:
      FUN_1001d6c60(param_1,**(undefined1 **)(param_4 + 8));
      return;
    }
  }
  return;
}

