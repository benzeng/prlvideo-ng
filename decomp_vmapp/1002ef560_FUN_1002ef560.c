
void FUN_1002ef560(void)

{
  if (*(long **)(DAT_1011c3698 + 0x1950) == (long *)0x0) {
    FUN_1008e3970("","LocalDevices",0,"adev_destroy_all: No connection with hypervisor.");
  }
  else {
    (**(code **)(**(long **)(DAT_1011c3698 + 0x1950) + 0x108))();
  }
  FUN_1002ef490(FUN_1002ef3e0);
  return;
}

