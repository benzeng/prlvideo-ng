
undefined8 * FUN_100d980b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(8);
  *puVar1 = param_2;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar2 == (undefined8 *)0x0) {
    operator_delete(puVar1);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = puVar1;
    *puVar2 = &PTR_FUN_10230fc40;
  }
  *param_1 = puVar2;
  return param_1;
}

