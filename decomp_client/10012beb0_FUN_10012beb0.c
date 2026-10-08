
void FUN_10012beb0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_2 - param_3 != 0) {
    lVar3 = 0;
    do {
      pvVar2 = operator_new(200);
      lVar1 = *(long *)(param_4 + lVar3);
      FUN_100036740(pvVar2,lVar1);
      CHwUsbDevice::CHwUsbDevice((CHwUsbDevice *)((long)pvVar2 + 8),(CHwUsbDevice *)(lVar1 + 8));
      *(void **)(param_2 + lVar3) = pvVar2;
      lVar3 = lVar3 + 8;
    } while ((param_2 - param_3) + lVar3 != 0);
  }
  return;
}

