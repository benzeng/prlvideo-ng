
undefined8 *
FUN_1001182f0(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x18);
  FUN_10011c900(puVar1,param_3,param_4);
  *(undefined4 *)(puVar1 + 2) = param_2;
  *puVar1 = &PTR_FUN_100bab148;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_FUN_100bab150)(puVar1);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = puVar1;
    *puVar2 = &PTR_FUN_10110d3a8;
  }
  *param_1 = puVar2;
  return param_1;
}

