
void FUN_100438210(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_10111c4a0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    if ((*(char *)((long)puVar1 + 0x14) != '\0') && ((void *)*puVar1 != (void *)0x0)) {
      operator_delete__((void *)*puVar1);
    }
    operator_delete(puVar1);
  }
  operator_delete(param_1);
  return;
}

