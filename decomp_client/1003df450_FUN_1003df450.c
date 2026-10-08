
void FUN_1003df450(undefined8 *param_1,BootDevice *param_2)

{
  undefined8 *puVar1;
  BootDevice *this;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    this = operator_new(0xb8);
    BootDevice::BootDevice(this,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_1003df540(param_1,0x7fffffff,1);
    this = operator_new(0xb8);
    BootDevice::BootDevice(this,param_2);
  }
  *puVar1 = this;
  return;
}

