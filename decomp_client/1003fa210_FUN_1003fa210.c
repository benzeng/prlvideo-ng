
undefined8 *
FUN_1003fa210(undefined8 *param_1,undefined8 *param_2,long *param_3,BootDevice *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  BootDevice *this;
  
  puVar1 = (uint *)*param_2;
  if (*puVar1 < 2) {
    puVar2 = (undefined8 *)QListData::insert((int)param_2);
  }
  else {
    puVar2 = (undefined8 *)
             FUN_1003df540(param_2,(ulong)(*param_3 - (long)(puVar1 + (ulong)puVar1[2] * 2 + 4)) >>
                                   3 & 0xffffffff,1);
  }
  this = operator_new(0xb8);
  BootDevice::BootDevice(this,param_4);
  *puVar2 = this;
  *param_1 = puVar2;
  return param_1;
}

