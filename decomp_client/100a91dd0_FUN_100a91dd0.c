
undefined8 * FUN_100a91dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)FUN_100ab6150(param_2,param_3);
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      puVar2 = (undefined8 *)0x0;
    }
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = plVar1;
    *puVar2 = &PTR_FUN_102281968;
  }
  *param_1 = puVar2;
  return param_1;
}

