
void FUN_1000d7280(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_100bfbb80;
    puVar2 = puVar1;
  }
  *param_1 = puVar2;
  QMutex::QMutex((QMutex *)(param_1 + 1),0);
  return;
}

