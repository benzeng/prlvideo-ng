
void FUN_10012bba0(undefined8 param_1,long param_2,long param_3)

{
  void *pvVar1;
  
  for (; param_3 != param_2; param_3 = param_3 + -8) {
    pvVar1 = *(void **)(param_3 + -8);
    if (pvVar1 != (void *)0x0) {
      CHwUsbDevice::~CHwUsbDevice((CHwUsbDevice *)((long)pvVar1 + 8));
      FUN_100035ea0(pvVar1);
      operator_delete(pvVar1);
    }
  }
  return;
}

