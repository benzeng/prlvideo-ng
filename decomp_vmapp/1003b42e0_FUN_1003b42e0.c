
void * FUN_1003b42e0(undefined8 param_1,long param_2,undefined2 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = operator_new(0x58);
  *(void **)pvVar3 = pvVar3;
  *(void **)((long)pvVar3 + 8) = pvVar3;
  *(void **)((long)pvVar3 + 0x10) = pvVar3;
  *(void **)((long)pvVar3 + 0x18) = pvVar3;
  *(long *)((long)pvVar3 + 0x20) = (long)pvVar3 + 0x18;
  *(long *)((long)pvVar3 + 0x28) = (long)pvVar3 + 0x18;
  *(undefined8 *)((long)pvVar3 + 0x40) = 0;
  *(undefined8 *)((long)pvVar3 + 0x38) = 0;
  *(undefined8 *)((long)pvVar3 + 0x30) = 0;
  *(undefined4 *)((long)pvVar3 + 0x48) = 2;
  *(undefined2 *)((long)pvVar3 + 0x4c) = 0;
  *(undefined1 *)((long)pvVar3 + 0x4e) = 0;
  *(undefined2 *)((long)pvVar3 + 0x50) = 0;
  *(undefined2 *)((long)pvVar3 + 0x52) = 0;
  *(undefined1 *)((long)pvVar3 + 0x56) = 0;
  *(undefined2 *)((long)pvVar3 + 0x54) = 0;
  puVar4 = operator_new__(0x88);
  *puVar4 = 2;
  puVar4[2] = 0;
  puVar4[1] = 0;
  puVar4[3] = puVar4 + 1;
  puVar4[4] = puVar4 + 3;
  puVar4[5] = puVar4 + 3;
  puVar4[10] = 0;
  puVar4[9] = 0;
  *(undefined2 *)(puVar4 + 8) = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[0xb] = puVar4 + 9;
  puVar4[0xc] = puVar4 + 0xb;
  puVar4[0xd] = puVar4 + 0xb;
  *(undefined2 *)(puVar4 + 0x10) = 0;
  puVar4[0xf] = 0;
  puVar4[0xe] = 0;
  *(undefined8 **)((long)pvVar3 + 0x40) = puVar4 + 1;
  puVar4[1] = pvVar3;
  puVar4[9] = pvVar3;
  *(long *)((long)pvVar3 + 8) = param_2;
  lVar1 = *(long *)(param_2 + 0x10);
  *(long *)((long)pvVar3 + 0x10) = lVar1;
  *(void **)(lVar1 + 8) = pvVar3;
  *(void **)(param_2 + 0x10) = pvVar3;
  *(undefined2 *)((long)pvVar3 + 0x4c) = param_3;
  *(undefined4 *)((long)pvVar3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)((long)pvVar3 + 0x38) = lVar1;
  if (*(long *)(lVar1 + 0x30) == param_2) {
    *(void **)(lVar1 + 0x30) = pvVar3;
  }
  if (*(long *)(lVar1 + 0x28) == param_2) {
    *(void **)(lVar1 + 0x28) = pvVar3;
  }
  uVar2 = *(undefined8 *)(param_4 + 0x28);
  puVar4[7] = *(undefined8 *)(param_4 + 0x30);
  puVar4[6] = uVar2;
  *(undefined1 *)(puVar4 + 8) = *(undefined1 *)(param_4 + 0x38);
  *(undefined1 *)((long)puVar4 + 0x39) = 0;
  *(undefined1 *)((long)puVar4 + 0x3a) = 1;
  *(undefined1 *)((long)puVar4 + 0x3b) = 2;
  *(undefined1 *)((long)puVar4 + 0x3c) = 3;
  *(byte *)((long)puVar4 + 0x3d) = *(byte *)((long)puVar4 + 0x3d) | 4;
  *(undefined1 *)(puVar4 + 7) = 0;
  lVar1 = *(long *)((long)pvVar3 + 0x40);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_5 + 0x30);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined1 *)(lVar1 + 0x78) = *(undefined1 *)(param_5 + 0x38);
  *(undefined1 *)(lVar1 + 0x70) = 0;
  return pvVar3;
}

