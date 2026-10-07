
undefined8 FUN_1002dc1f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  char *pcVar5;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1008e3970("","USB",0,"[CUsbDevBase] Misconfigured device (bad std desc)");
    return 0x80000009;
  }
  puVar3 = _malloc(0x40);
  *(undefined8 **)(param_1 + 0x28) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    pcVar5 = "[CUsbDevBase] Not enough memory (std desc)";
  }
  else {
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    *(undefined1 *)(param_1 + 0x39) = 1;
    pvVar4 = _malloc(puVar1[1]);
    *puVar3 = pvVar4;
    if (pvVar4 == (void *)0x0) {
      pcVar5 = "[CUsbDevBase] Not enough memory (dev desc)";
    }
    else {
      _memcpy(pvVar4,(void *)*puVar1,puVar1[1]);
      lVar2 = *(long *)(param_1 + 0x28);
      *(undefined8 *)(lVar2 + 8) = puVar1[1];
      pvVar4 = _malloc(puVar1[3]);
      *(void **)(lVar2 + 0x10) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        _memcpy(pvVar4,(void *)puVar1[2],puVar1[3]);
        *(undefined8 *)(lVar2 + 0x18) = puVar1[3];
        if (puVar1[4] != 0) {
          pvVar4 = _malloc(puVar1[5]);
          *(void **)(lVar2 + 0x20) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            pcVar5 = "[CUsbDevBase] Not enough memory (qual desc)";
            goto LAB_1002dc3fe;
          }
          _memcpy(pvVar4,(void *)puVar1[4],puVar1[5]);
          *(undefined8 *)(lVar2 + 0x28) = puVar1[5];
        }
        if (puVar1[6] != 0) {
          pvVar4 = _malloc(puVar1[7]);
          *(void **)(lVar2 + 0x30) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            pcVar5 = "[CUsbDevBase] Not enough memory";
            goto LAB_1002dc3fe;
          }
          _memcpy(pvVar4,(void *)puVar1[6],puVar1[7]);
          *(undefined8 *)(lVar2 + 0x38) = puVar1[7];
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        pvVar4 = operator_new__((ulong)*(byte *)(*(long *)(lVar2 + 0x10) + 4) << 4);
        *(void **)(param_1 + 0x18) = pvVar4;
        ___bzero(pvVar4,(ulong)*(byte *)(*(long *)(lVar2 + 0x10) + 4) << 4);
        return 0;
      }
      pcVar5 = "[CUsbDevBase] Not enough memory (cfg desc)";
    }
  }
LAB_1002dc3fe:
  FUN_1008e3970("","USB",0,pcVar5);
  return 0x80000002;
}

