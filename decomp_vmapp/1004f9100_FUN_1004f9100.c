
undefined8 * FUN_1004f9100(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = operator_new(0x10);
  uVar1 = *(undefined2 *)(param_2 + 0x1a);
  *puVar2 = &PTR_FUN_10111d1e0;
  *(undefined2 *)(puVar2 + 1) = uVar1;
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar3 == (undefined8 *)0x0) {
    operator_delete(puVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = puVar2;
    *puVar3 = &PTR_FUN_10111cca8;
  }
  *param_1 = puVar3;
  return param_1;
}

