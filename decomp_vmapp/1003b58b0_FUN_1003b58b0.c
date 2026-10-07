
void FUN_1003b58b0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  
  for (; param_2 != (undefined8 *)0x0; param_2 = (undefined8 *)*param_2) {
    if (param_2[1] == 0) {
      pvVar3 = (void *)**(long **)(param_1 + 8);
      if (pvVar3 == (void *)0x0) {
        pvVar3 = operator_new(0x98);
        *(void **)pvVar3 = pvVar3;
        *(void **)((long)pvVar3 + 8) = pvVar3;
        *(void **)((long)pvVar3 + 0x10) = pvVar3;
        *(void **)((long)pvVar3 + 0x18) = pvVar3;
        *(long *)((long)pvVar3 + 0x20) = (long)pvVar3 + 0x18;
        *(long *)((long)pvVar3 + 0x28) = (long)pvVar3 + 0x18;
        *(void **)((long)pvVar3 + 0x30) = pvVar3;
        *(long *)((long)pvVar3 + 0x38) = (long)pvVar3 + 0x30;
        *(long *)((long)pvVar3 + 0x40) = (long)pvVar3 + 0x30;
        *(undefined8 *)((long)pvVar3 + 0x48) = 0;
        *(long *)((long)pvVar3 + 0x50) = (long)pvVar3 + 0x48;
        *(long *)((long)pvVar3 + 0x58) = (long)pvVar3 + 0x48;
        *(undefined8 *)((long)pvVar3 + 0x60) = 0;
        *(long *)((long)pvVar3 + 0x68) = (long)pvVar3 + 0x60;
        *(long *)((long)pvVar3 + 0x70) = (long)pvVar3 + 0x60;
        *(undefined4 *)((long)pvVar3 + 0x78) = 0;
        *(undefined1 *)((long)pvVar3 + 0x7c) = 0;
        *(undefined8 *)((long)pvVar3 + 0x90) = 0;
        *(undefined8 *)((long)pvVar3 + 0x88) = 0;
        *(undefined8 *)((long)pvVar3 + 0x80) = 0;
      }
      else {
        lVar2 = *(long *)((long)pvVar3 + 0x10);
        *(undefined8 *)(lVar2 + 8) = *(undefined8 *)((long)pvVar3 + 8);
        *(long *)(*(long *)((long)pvVar3 + 8) + 0x10) = lVar2;
        *(void **)((long)pvVar3 + 8) = pvVar3;
        *(void **)((long)pvVar3 + 0x10) = pvVar3;
      }
      puVar1 = param_2 + 2;
      lVar2 = param_2[4];
      *(undefined8 *)(lVar2 + 8) = param_2[3];
      *(long *)(param_2[3] + 0x10) = lVar2;
      param_2[4] = puVar1;
      param_2[1] = pvVar3;
      param_2[3] = (long)pvVar3 + 0x48;
      param_2[4] = *(undefined8 *)((long)pvVar3 + 0x58);
      *(undefined8 **)(*(long *)((long)pvVar3 + 0x58) + 8) = puVar1;
      *(undefined8 **)((long)pvVar3 + 0x58) = puVar1;
      lVar2 = *(long *)(param_1 + 0x18);
      *(long *)((long)pvVar3 + 8) = lVar2 + 0x100;
      *(undefined8 *)((long)pvVar3 + 0x10) = *(undefined8 *)(lVar2 + 0x110);
      *(void **)(*(long *)(lVar2 + 0x110) + 8) = pvVar3;
      *(void **)(lVar2 + 0x110) = pvVar3;
    }
  }
  return;
}

