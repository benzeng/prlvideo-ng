
void FUN_1004955f0(long *param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  void *pvVar3;
  
  if (*param_1 != 0) {
    plVar1 = param_1 + 2;
    FUN_100495fe0(param_1[3],plVar1);
    puVar2 = (ulong *)*param_1;
    if (puVar2 != (ulong *)0x0) {
      *param_1 = 0;
      if ((*puVar2 & 1) != 0) {
        *puVar2 = *puVar2 & 0xfffffffffffffffe;
        QMutex::unlock();
      }
      operator_delete(puVar2);
      if (param_2 != 0) {
        FUN_1002a5590(*(undefined8 *)(DAT_1011c3698 + 0x1a28),param_2,0);
      }
    }
    pvVar3 = (void *)*plVar1;
    if (pvVar3 != (void *)0x0) {
      FUN_10047e550(pvVar3);
      operator_delete(pvVar3);
    }
    *plVar1 = 0;
  }
  return;
}

