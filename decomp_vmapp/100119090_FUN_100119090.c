
undefined8 * FUN_100119090(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(*(long *)(*param_2 + 0x10) + 0x40);
  plVar2 = operator_new(0x18);
  FUN_1001248e0(plVar2,uVar1,param_3);
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar3 == (undefined8 *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[2] = plVar2;
    *puVar3 = &PTR_FUN_10110d3a8;
  }
  *param_1 = puVar3;
  return param_1;
}

