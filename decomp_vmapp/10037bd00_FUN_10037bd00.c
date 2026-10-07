
void FUN_10037bd00(undefined1 *param_1,undefined1 *param_2)

{
  ushort uVar1;
  void *pvVar2;
  ushort *puVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  puVar3 = *(ushort **)(param_2 + 0x10);
  if (puVar3 == (ushort *)0x0) {
    puVar3 = *(ushort **)(param_2 + 8);
  }
  uVar1 = *puVar3;
  *(uint *)(param_1 + 0x18) = (uint)uVar1;
  pvVar2 = operator_new__((ulong)uVar1);
  *(void **)(param_1 + 0x10) = pvVar2;
  _memcpy(pvVar2,puVar3,(ulong)uVar1);
  *param_1 = *param_2;
  return;
}

