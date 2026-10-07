
void FUN_100609c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100bc8190;
  if ((void *)param_1[0x23] != (void *)0x0) {
    _free((void *)param_1[0x23]);
    return;
  }
  return;
}

