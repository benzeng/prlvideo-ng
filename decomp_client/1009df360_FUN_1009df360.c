
void FUN_1009df360(long *param_1)

{
  if ((void *)param_1[2] != (void *)0x0) {
    _free((void *)param_1[2]);
  }
  if (*param_1 != 0) {
    _CFRelease();
    return;
  }
  return;
}

