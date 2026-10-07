
undefined8 FUN_1000fa0a0(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                     0xfffffffffffffffe);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
  }
  return 0;
}

