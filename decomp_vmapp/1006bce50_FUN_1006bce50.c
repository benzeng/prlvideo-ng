
undefined8 * FUN_1006bce50(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == 3) {
    puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[2] = PTR_shared_null_100ba20d0;
      *puVar1 = &PTR_FUN_10116d550;
      puVar2 = puVar1;
    }
  }
  else if (param_1 == 1) {
    puVar1 = operator_new(0x60,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1006bdb20(puVar1);
      puVar2 = puVar1;
    }
  }
  else {
    if (param_1 != 0) {
      return (undefined8 *)0x0;
    }
    puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    puVar2 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1006ce540(puVar1);
      puVar2 = puVar1;
    }
  }
  puVar1 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(int *)((long)puVar2 + 0xc) = param_1;
    puVar1 = puVar2;
  }
  return puVar1;
}

