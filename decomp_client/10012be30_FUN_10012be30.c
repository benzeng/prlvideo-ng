
void FUN_10012be30(undefined8 param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  
  pvVar1 = operator_new(200);
  FUN_100036740(pvVar1,param_3);
  CHwUsbDevice::CHwUsbDevice((CHwUsbDevice *)((long)pvVar1 + 8),(CHwUsbDevice *)(param_3 + 8));
  *param_2 = pvVar1;
  return;
}

