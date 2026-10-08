
void FUN_100a65620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_102238e08;
  if ((int)((long *)param_1[3])[0xb] == 2) {
    (**(code **)(*(long *)param_1[3] + 0x30))();
  }
  operator_delete(param_1);
  return;
}

