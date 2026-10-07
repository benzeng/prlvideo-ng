
void FUN_100507ab0(undefined8 param_1,int param_2,int param_3,long param_4)

{
  int *piVar1;
  int *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  if (param_2 == 0 && param_3 == 0) {
    local_28 = (int *)**(undefined8 **)(param_4 + 8);
    if (local_28 != (int *)0x0) {
      LOCK();
      *local_28 = *local_28 + 1;
      local_1b = *local_28 != 0;
      UNLOCK();
    }
    FUN_1004c7b60(param_1,&local_28,**(undefined4 **)(param_4 + 0x10));
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
  return;
}

