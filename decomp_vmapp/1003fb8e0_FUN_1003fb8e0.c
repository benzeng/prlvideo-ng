
undefined8 FUN_1003fb8e0(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                     0xfffffffffffffffe);
    if (plVar1 != (long *)0x0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x288))(plVar1);
      }
    }
  }
  return 0;
}

