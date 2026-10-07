
void FUN_1002a98d0(long param_1)

{
  if (*(long *)(param_1 + 0x11890) != 0) {
    (**(code **)(*(long *)(param_1 + 0x11890) + 0x30))(1);
    *(undefined8 *)(param_1 + 0x11890) = 0;
  }
  if (*(long *)(param_1 + 0x11898) != 0) {
    (**(code **)(*(long *)(param_1 + 0x11898) + 0x20))();
    *(undefined8 *)(param_1 + 0x11898) = 0;
  }
  if (*(long *)(param_1 + 0x11888) != 0) {
    _dlclose();
    *(undefined8 *)(param_1 + 0x11888) = 0;
  }
  if (DAT_1011b55f8 < 3) {
    return;
  }
  FUN_1008e3970("","LocalDevices",3,"VGPU [Shutdown]");
  return;
}

