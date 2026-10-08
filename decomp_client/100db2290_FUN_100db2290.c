
void FUN_100db2290(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_10230fcd0;
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      _acl_free((void *)*puVar1);
    }
    operator_delete(puVar1);
    return;
  }
  return;
}

