
void FUN_10070e080(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_2 + 0x10);
  if (pvVar2 != (void *)0x0) {
    lVar1 = *(long *)(param_2 + 8);
    if ((*(byte *)(lVar1 + 8) & 0xfd) == 0) {
      FUN_10070b090(lVar1 + 0x50,pvVar2,0,*(undefined4 *)(lVar1 + 0x50));
      pvVar2 = *(void **)(param_2 + 0x10);
    }
    _free(pvVar2);
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  lVar1 = *(long *)(param_2 + 8);
  *(undefined8 *)(lVar1 + 0x20) = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
    *(long *)(param_1 + 0x10) = lVar1;
  }
  else {
    *(long *)(*(long *)(param_1 + 0x18) + 0x20) = lVar1;
  }
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}

