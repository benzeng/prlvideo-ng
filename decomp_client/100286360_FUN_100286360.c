
void FUN_100286360(undefined8 param_1,Data *param_2)

{
  int iVar1;
  void *pvVar2;
  Data *pDVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 != *(int *)(param_2 + 8)) {
    lVar4 = (long)*(int *)(param_2 + 8) * 8 + (long)iVar1 * -8;
    pDVar3 = param_2 + (long)iVar1 * 8 + 8;
    do {
      pvVar2 = *(void **)pDVar3;
      if (pvVar2 != (void *)0x0) {
        CHwUsbDevice::~CHwUsbDevice((CHwUsbDevice *)((long)pvVar2 + 8));
        FUN_100035ea0(pvVar2);
        operator_delete(pvVar2);
      }
      pDVar3 = pDVar3 + -8;
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0);
  }
  QListData::dispose(param_2);
  return;
}

