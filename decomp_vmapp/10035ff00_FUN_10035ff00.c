
void FUN_10035ff00(long param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  
  pvVar1 = (void *)*param_2;
  if (pvVar1 != (void *)0x0) {
    *param_2 = 0;
    if ((*(long *)((long)pvVar1 + 0x10) != 0) && (*(long *)((long)pvVar1 + 0x18) == 0)) {
      FUN_10035c0d0(*(undefined8 *)(param_1 + 8),pvVar1);
    }
    FUN_10035bc70(*(undefined8 *)(param_1 + 8),pvVar1);
    lVar2 = *(long *)((long)pvVar1 + 0x48);
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)((long)pvVar1 + 0x40);
    *(long *)(*(long *)((long)pvVar1 + 0x40) + 0x10) = lVar2;
    operator_delete(pvVar1);
    return;
  }
  return;
}

