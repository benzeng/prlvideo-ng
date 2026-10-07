
void FUN_10061a8a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc83a0;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    _free((void *)param_1[0x1b]);
  }
  FUN_10061a370(param_1);
  return;
}

