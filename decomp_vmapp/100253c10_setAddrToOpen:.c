
/* Function Stack Size: 0x18 bytes */

void BTController::setAddrToOpen_(ID param_1,SEL param_2,BluetoothDeviceAddress *param_3)

{
  *(BluetoothDeviceAddress **)(param_1 + _addr_to_open) = param_3;
  *(undefined8 *)(param_1 + _dev_opened) = 0;
  return;
}

