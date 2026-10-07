
void FUN_100362c60(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  
  FUN_10038d8e0(param_2);
  if ((*(ushort *)(param_2 + 0xb0) & 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0xc0);
    pvVar3 = operator_new(0x30);
    *(void **)pvVar3 = pvVar3;
    *(undefined8 *)((long)pvVar3 + 0x20) = 0;
    *(undefined8 *)((long)pvVar3 + 0x18) = 0;
    *(long *)((long)pvVar3 + 0x28) = param_2;
    *(long *)((long)pvVar3 + 0x10) = lVar1 + 0x10;
    lVar2 = *(long *)(lVar1 + 0x18);
    *(long *)((long)pvVar3 + 8) = lVar2;
    *(void **)(lVar2 + 0x10) = pvVar3;
    *(void **)(lVar1 + 0x18) = pvVar3;
    *(void **)(param_2 + 0x60) = pvVar3;
  }
  return;
}

