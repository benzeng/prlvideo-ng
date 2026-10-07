
void FUN_100040db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10111ce50;
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
    return;
  }
  return;
}

