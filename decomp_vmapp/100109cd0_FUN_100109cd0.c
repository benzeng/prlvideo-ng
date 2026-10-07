
void FUN_100109cd0(undefined8 *param_1)

{
  _unlink((char *)*param_1);
  _close(*(int *)(param_1 + 3));
  _free((void *)*param_1);
  return;
}

