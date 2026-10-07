
undefined8 FUN_1003fb2b0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != 0) {
    plVar1 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bef130,
                                     0xfffffffffffffffe);
    if (plVar1 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if (lVar2 != 0) {
        plVar1 = (long *)(**(code **)(*plVar1 + 0x10))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1);
      }
    }
  }
  return 0;
}

