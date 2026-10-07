
undefined8 FUN_1000acc70(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)___dynamic_cast(param_1,&PTR_vtable_100baea70,&PTR_vtable_100bb08b0,0x68);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x38))(plVar1);
      (**(code **)(*plVar1 + 0x30))(plVar1);
      (**(code **)(*plVar1 + 0x40))(plVar1);
      FUN_100288ca0(plVar1);
    }
  }
  return 0;
}

