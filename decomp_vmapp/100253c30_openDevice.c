
/* Function Stack Size: 0x10 bytes */

int BTController::openDevice(ID param_1,SEL param_2)

{
  ID self;
  
  self = IOBluetoothDevice::deviceWithAddress_
                   ((ID)PTR__OBJC_CLASS___IOBluetoothDevice_100bedb50,
                    PTR_s_deviceWithAddress__100bed400,*(undefined8 *)(param_1 + _addr_to_open));
  *(ID *)(param_1 + _dev_opened) = self;
  IOBluetoothDevice::retain(self,PTR_s_retain_100bed3c0);
  return 0;
}

