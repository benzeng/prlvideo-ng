
void FUN_100a74670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102281810;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete((void *)param_1[2]);
  }
  operator_delete(param_1);
  return;
}

