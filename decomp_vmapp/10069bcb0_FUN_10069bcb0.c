
void FUN_10069bcb0(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_2;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((long)pvVar1 + 0x880) != (void *)0x0) {
      _free(*(void **)((long)pvVar1 + 0x880));
    }
    operator_delete(pvVar1);
    if (3 < DAT_1011b55f8) {
      FUN_1008e3970("Compact","dimg",4,"[%p] BATScanReq(%p) deleted",param_1,pvVar1);
    }
    *param_2 = 0;
  }
  return;
}

