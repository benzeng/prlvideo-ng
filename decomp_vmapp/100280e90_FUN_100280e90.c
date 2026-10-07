
void FUN_100280e90(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101115da8;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    if (*(int *)((long)pvVar1 + 0x10) != 0) {
      *(undefined4 *)((long)pvVar1 + 0x10) = 0;
      QMutex::unlock();
    }
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

