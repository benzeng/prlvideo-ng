
void FUN_10009fe50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102282990;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}

