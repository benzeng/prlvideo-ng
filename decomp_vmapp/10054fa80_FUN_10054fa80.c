
undefined1 FUN_10054fa80(long param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_100761880(*(undefined8 *)(param_1 + 0x30),FUN_100761810,0,
                          *(undefined8 *)(param_1 + 0x48));
    if (iVar2 == *(int *)(param_1 + 0x50)) {
      *(undefined4 *)(param_1 + 0x50) = 0;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      FUN_1008e3970("","TransMem",0,"CCompressedFile::put_data() buffered write failed");
    }
  }
  pvVar1 = *(void **)(param_1 + 0x48);
  if (pvVar1 != (void *)0x0) {
    _free(pvVar1);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return uVar3;
}

