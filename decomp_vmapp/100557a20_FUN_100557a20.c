
void * FUN_100557a20(long param_1)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x98);
  uVar2 = 0;
  while (lVar4 = (ulong)uVar2 * 0x10, *(char *)(lVar1 + 8 + lVar4) != '\0') {
    uVar2 = uVar2 + 1;
    if (*(uint *)(param_1 + 0x84) < uVar2) {
      FUN_1008e3970("","TransMem",0,"CSnapshotEngineCompressed::get_buffer() all buffers are busy");
      return (void *)0x0;
    }
  }
  *(undefined1 *)(lVar1 + 8 + lVar4) = 1;
  if (*(void **)(lVar1 + lVar4) != (void *)0x0) {
    return *(void **)(lVar1 + lVar4);
  }
  pvVar3 = _valloc((ulong)*(uint *)(*(long *)(param_1 + 0x10) + 4));
  *(undefined8 *)(lVar1 + lVar4) = pvVar3;
  if (pvVar3 != (void *)0x0) {
    return pvVar3;
  }
  FUN_1008e3970("","TransMem",0,
                "CSnapshotEngineCompressed::get_buffer() failed to allocate data buffer");
  return *(void **)(lVar1 + lVar4);
}

