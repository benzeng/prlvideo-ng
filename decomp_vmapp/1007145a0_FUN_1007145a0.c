
void FUN_1007145a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    _fclose((FILE *)*param_1);
    puVar1 = (undefined8 *)param_1[1];
    while (puVar1 != param_1 + 1) {
      puVar1 = (undefined8 *)*puVar1;
      FUN_100713fa0();
    }
    _free(param_1);
    return;
  }
  return;
}

