
void FUN_10042ee60(long param_1)

{
  void *pvVar1;
  
  FUN_10042e0d0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18,*(undefined4 *)(param_1 + 0x20),0x89a
               );
  FUN_10042d6a0(*(undefined8 *)(param_1 + 0x10));
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_10042d610(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

