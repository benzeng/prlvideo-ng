
void FUN_100b243a0(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)*param_2;
  if (pvVar1 != (void *)0x0) {
    lVar2 = *(long *)(*param_1 + -0x100);
    if (*(void **)((long)pvVar1 + 0x880) != (void *)0x0) {
      _free(*(void **)((long)pvVar1 + 0x880));
    }
    operator_delete(pvVar1);
    if (3 < DAT_10230ffd0) {
      FUN_100df99c0("Compact","dimg",4,"[%p] BATScanReq(%p) deleted",(long)param_1 + lVar2,pvVar1);
    }
    *param_2 = 0;
  }
  return;
}

