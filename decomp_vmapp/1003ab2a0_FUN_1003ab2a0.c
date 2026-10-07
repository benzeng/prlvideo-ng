
void FUN_1003ab2a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100bbdaa8;
  while (puVar1 = (undefined8 *)param_1[7], puVar1 != (undefined8 *)0x0) {
    param_1[7] = *puVar1;
    *puVar1 = 0;
    FUN_1003c4120(puVar1);
    operator_delete(puVar1);
  }
  while (puVar1 = (undefined8 *)param_1[8], puVar1 != (undefined8 *)0x0) {
    param_1[8] = *puVar1;
    *puVar1 = 0;
    FUN_1003c4120(puVar1);
    operator_delete(puVar1);
  }
  *param_1 = &PTR_FUN_101119500;
  lVar2 = param_1[3];
  *(undefined8 *)(lVar2 + 8) = param_1[2];
  *(long *)(param_1[2] + 0x10) = lVar2;
  param_1[2] = param_1 + 1;
  param_1[3] = param_1 + 1;
  return;
}

