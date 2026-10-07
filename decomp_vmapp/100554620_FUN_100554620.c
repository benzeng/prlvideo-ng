
void FUN_100554620(long param_1)

{
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x48))();
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100554070();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_1007614d0(param_1);
  if (*(undefined8 **)(param_1 + 0x68) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x68))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}

