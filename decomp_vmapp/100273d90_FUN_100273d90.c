
void * FUN_100273d90(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 == 0x40) {
    pvVar1 = operator_new(0xc8f8,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar2 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_10027d6b0(pvVar1,param_2,param_3);
      pvVar2 = pvVar1;
    }
  }
  else if (param_1 - 0x80U < 2) {
    pvVar1 = operator_new(0x5200,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar2 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_10027ae90(pvVar1,param_2,param_3,param_4);
      pvVar2 = pvVar1;
    }
  }
  else {
    pvVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    pvVar2 = (void *)0x0;
    if (pvVar1 != (void *)0x0) {
      FUN_10027cc70(pvVar1,param_2,param_3);
      pvVar2 = pvVar1;
    }
  }
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
    FUN_1008e3970("","LocalDevices",0,"INetDevice::CreateNetDevice() failed");
  }
  return pvVar2;
}

