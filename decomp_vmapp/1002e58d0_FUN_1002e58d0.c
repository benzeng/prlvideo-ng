
void FUN_1002e58d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bb4978;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}

