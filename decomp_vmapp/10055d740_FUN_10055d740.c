
undefined1 FUN_10055d740(long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uVar4;
  
  uVar4 = 1;
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    lVar1 = **(long **)(param_1 + 0x88);
    if (param_4 == '\0') {
      iVar2 = (**(code **)(lVar1 + 0x40))();
      if (-1 < iVar2) {
        return 1;
      }
      pcVar3 = "CGuestMemoryCompressor::io_callback_impl() failed to decrypt (%d)";
    }
    else {
      iVar2 = (**(code **)(lVar1 + 0x38))();
      if (-1 < iVar2) {
        return 1;
      }
      pcVar3 = "CGuestMemoryCompressor::io_callback_impl() failed to encrypt (%d)";
    }
    uVar4 = 0;
    FUN_1008e3970("","TransMem",0,pcVar3);
  }
  return uVar4;
}

