
void FUN_10029ff90(long *param_1)

{
  undefined8 uVar1;
  
  if ((long *)*param_1 != (long *)0x0) {
    if (DAT_1011c3e38 != 0) {
      (**(code **)(*(long *)*param_1 + 0x58))();
      FUN_1002a30b0(&DAT_1011c3e38);
    }
    if (DAT_1011c3e40 != 0) {
      (**(code **)(*(long *)*param_1 + 0x60))();
      FUN_1002a30b0(&DAT_1011c3e40);
    }
    (**(code **)(*(long *)*param_1 + 0x18))();
    uVar1 = 0;
    if (*param_1 != 0) {
      uVar1 = ___dynamic_cast(*param_1,&PTR_vtable_101116138,&PTR_vtable_100baea70,
                              0xfffffffffffffffe);
    }
    FUN_10025ab50(uVar1);
    *param_1 = 0;
  }
  return;
}

