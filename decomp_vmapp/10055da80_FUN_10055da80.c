
undefined1
FUN_10055da80(undefined8 param_1,undefined4 param_2,char param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  if (param_4 != (long *)0x0) {
    if (param_3 == '\0') {
      iVar1 = (**(code **)(*param_4 + 0x40))(param_4,param_1,param_2,param_5);
      if (-1 < iVar1) {
        return 1;
      }
      pcVar2 = "CGuestMemoryCompressor::io_callback_impl() failed to decrypt (%d)";
    }
    else {
      iVar1 = (**(code **)(*param_4 + 0x38))(param_4,param_1,param_2,param_5);
      if (-1 < iVar1) {
        return 1;
      }
      pcVar2 = "CGuestMemoryCompressor::io_callback_impl() failed to encrypt (%d)";
    }
    uVar3 = 0;
    FUN_1008e3970("","TransMem",0,pcVar2);
  }
  return uVar3;
}

