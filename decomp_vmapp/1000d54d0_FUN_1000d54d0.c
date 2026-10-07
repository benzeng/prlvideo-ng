
undefined8 FUN_1000d54d0(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef8d0,
                                     0xfffffffffffffffe);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  return 0;
}

