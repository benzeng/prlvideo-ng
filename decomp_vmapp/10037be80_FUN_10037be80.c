
void FUN_10037be80(long param_1,long param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  void *pvVar3;
  ushort *puVar4;
  
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long *)(param_1 + 0x20) = param_1 + 0x18;
  *(long *)(param_1 + 0x28) = param_1 + 0x18;
  puVar2 = *(undefined1 **)(param_2 + 0x1b8);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar4 = *(ushort **)(puVar2 + 0x10);
  if (puVar4 == (ushort *)0x0) {
    puVar4 = *(ushort **)(puVar2 + 8);
  }
  uVar1 = *puVar4;
  *(uint *)(param_1 + 0x48) = (uint)uVar1;
  pvVar3 = operator_new__((ulong)uVar1);
  *(void **)(param_1 + 0x40) = pvVar3;
  _memcpy(pvVar3,puVar4,(ulong)uVar1);
  *(undefined1 *)(param_1 + 0x30) = *puVar2;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(long *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(long *)(param_1 + 0x10) = param_2 + 0x188;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 400);
  *(long *)(*(long *)(param_2 + 400) + 0x10) = param_1;
  *(long *)(param_2 + 400) = param_1;
  return;
}

