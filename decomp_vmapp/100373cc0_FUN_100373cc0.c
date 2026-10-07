
void FUN_100373cc0(undefined4 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  
  lVar3 = 0x180;
  (*DAT_1011c5b78)(*param_1);
  do {
    pvVar1 = *(void **)((long)param_1 + lVar3 + -0x10);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)param_1 + lVar3 + -8);
      if (pvVar2 != pvVar1) {
        *(ulong *)((long)param_1 + lVar3 + -8) =
             (~((long)pvVar2 + (-4 - (long)pvVar1)) & 0xfffffffffffffffcU) + (long)pvVar2;
      }
      operator_delete(pvVar1);
    }
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != 0);
  return;
}

