
void FUN_1003b44b0(long *param_1,long *param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
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
    *(undefined4 *)((long)pvVar3 + 0x48) = 1;
    *(undefined2 *)((long)pvVar3 + 0x4c) = 0;
    *(undefined1 *)((long)pvVar3 + 0x4e) = 0;
    *(undefined2 *)((long)pvVar3 + 0x50) = 0;
    *(undefined2 *)((long)pvVar3 + 0x52) = 0;
    *(undefined1 *)((long)pvVar3 + 0x56) = 0;
    *(undefined2 *)((long)pvVar3 + 0x54) = 0;
    puVar4 = operator_new__(0x48);
    *puVar4 = 1;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[3] = puVar4 + 1;
    puVar4[4] = puVar4 + 3;
    puVar4[5] = puVar4 + 3;
    *(undefined2 *)(puVar4 + 8) = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    *(undefined8 **)((long)pvVar3 + 0x40) = puVar4 + 1;
    puVar4[1] = pvVar3;
    *param_1 = (long)pvVar3;
    *(undefined2 *)((long)pvVar3 + 0x4c) = 0x3a;
  }
  lVar1 = *param_2;
  *(long *)((long)pvVar3 + 8) = lVar1;
  *(undefined8 *)((long)pvVar3 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
  *(void **)(*(long *)(lVar1 + 0x10) + 8) = pvVar3;
  *(void **)(lVar1 + 0x10) = pvVar3;
  *(undefined4 *)((long)pvVar3 + 0x34) = *(undefined4 *)(lVar1 + 0x34);
  *(undefined8 *)((long)pvVar3 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
  lVar2 = *(long *)(lVar1 + 0x38);
  if (*(long *)(lVar2 + 0x30) == lVar1) {
    *(void **)(lVar2 + 0x30) = pvVar3;
  }
  if (*(long *)(lVar2 + 0x28) == lVar1) {
    *(void **)(lVar2 + 0x28) = pvVar3;
  }
  lVar1 = *(long *)((long)pvVar3 + 0x40);
  *(char *)(lVar1 + 0x38) = (char)param_2[7];
  lVar2 = param_2[5];
  *(long *)(lVar1 + 0x30) = param_2[6];
  *(long *)(lVar1 + 0x28) = lVar2;
  *(undefined1 *)(lVar1 + 0x31) = 0;
  *(undefined1 *)(lVar1 + 0x32) = 1;
  *(undefined1 *)(lVar1 + 0x33) = 2;
  *(undefined1 *)(lVar1 + 0x34) = 3;
  *(char *)(lVar1 + 0x30) = (char)(1 << (param_3 & 0x1f));
  *(byte *)(lVar1 + 0x35) = *(byte *)(lVar1 + 0x35) | 4;
  return;
}

