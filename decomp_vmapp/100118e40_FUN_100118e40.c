
undefined8 * FUN_100118e40(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = operator_new(0x18);
  FUN_100122570(plVar1,param_2);
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = plVar1;
    *puVar2 = &PTR_FUN_10110d3a8;
  }
  *param_1 = puVar2;
  return param_1;
}

