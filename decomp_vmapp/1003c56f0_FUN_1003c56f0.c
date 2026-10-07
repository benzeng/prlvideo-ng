
void FUN_1003c56f0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_101119500;
  lVar1 = param_1[3];
  *(undefined8 *)(lVar1 + 8) = param_1[2];
  *(long *)(param_1[2] + 0x10) = lVar1;
  operator_delete(param_1);
  return;
}

