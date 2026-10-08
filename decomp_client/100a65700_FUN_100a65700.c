
void FUN_100a65700(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102238e68;
  if ((-1 < *(int *)(param_1 + 2)) && (-1 < *(int *)((long)param_1 + 0x14))) {
    _close(*(int *)(param_1 + 2));
    _close(*(int *)((long)param_1 + 0x14));
  }
  _close(*(int *)((long)param_1 + 0xc));
  operator_delete(param_1);
  return;
}

