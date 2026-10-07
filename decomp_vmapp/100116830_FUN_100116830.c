
void FUN_100116830(undefined8 param_1,int param_2,int param_3,long param_4)

{
  int *piVar1;
  int *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      local_28 = (int *)**(undefined8 **)(param_4 + 8);
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + 1;
        local_1b = *local_28 != 0;
        UNLOCK();
      }
      FUN_10005eda0(param_1,&local_28,**(undefined4 **)(param_4 + 0x10));
      piVar1 = local_28;
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + -1;
        local_1a = *local_28 != 0;
        UNLOCK();
        if ((!(bool)local_1a) && (local_28 != (int *)0x0)) {
          FUN_100031ed0(local_28);
          operator_delete(piVar1);
        }
      }
    }
    else if (param_3 == 0) {
      FUN_10005c380(param_1,**(undefined1 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

