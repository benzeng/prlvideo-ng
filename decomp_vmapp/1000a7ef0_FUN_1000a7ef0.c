
undefined8 FUN_1000a7ef0(long param_1,uint *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (param_1 != 0) {
    plVar1 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                     0xfffffffffffffffe);
    if (plVar1 != (long *)0x0) {
      iVar3 = 0;
      if (*param_2 < 0x65) {
        iVar3 = 100 - *param_2;
      }
      (**(code **)(*plVar1 + 0x48))(plVar1,iVar3);
      uVar2 = 1;
    }
  }
  return uVar2;
}

