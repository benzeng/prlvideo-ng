
undefined8 *
FUN_10011b620(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = operator_new(0x18);
  FUN_100123cf0(plVar1,param_2,param_3,param_4,param_5,param_6);
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

