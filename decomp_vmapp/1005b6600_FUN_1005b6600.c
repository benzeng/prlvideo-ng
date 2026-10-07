
undefined8 * FUN_1005b6600(undefined8 *param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (param_2 == 1) {
    plVar1 = operator_new(0x88,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar3 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_1005e2ef0(plVar1);
      plVar3 = plVar1;
    }
    puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 == (undefined8 *)0x0) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      *param_1 = 0;
    }
    else {
      *(undefined4 *)(puVar2 + 1) = 1;
      puVar2[2] = plVar3;
      *puVar2 = &PTR_FUN_10111e0a0;
      *param_1 = puVar2;
    }
  }
  else if (param_2 == 0) {
    plVar1 = operator_new(0x88,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar3 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_1005b7150(plVar1);
      plVar3 = plVar1;
    }
    puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (puVar2 == (undefined8 *)0x0) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      *param_1 = 0;
    }
    else {
      *(undefined4 *)(puVar2 + 1) = 1;
      puVar2[2] = plVar3;
      *puVar2 = &PTR_FUN_10111e0a0;
      *param_1 = puVar2;
    }
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}

