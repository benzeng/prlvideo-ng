
undefined8 FUN_1005d78c0(long param_1)

{
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x28))();
    return 0;
  }
  FUN_1008e3970("","vdisk",0,"Null pointer specified as locker");
  return 0x80000003;
}

