
undefined8 * FUN_10025c710(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
    if (param_1 != (void *)0x0) {
      if (*(int *)((long)param_1 + 0x10) != 0) {
        *(undefined4 *)((long)param_1 + 0x10) = 0;
        QMutex::unlock();
      }
      operator_delete(param_1);
      puVar1 = (undefined8 *)0x0;
    }
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = param_1;
    *puVar1 = &PTR_FUN_101115a10;
  }
  return puVar1;
}

