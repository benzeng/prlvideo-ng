
void FUN_1002622a0(long param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x151) = 1;
  while( true ) {
    do {
      if (*(char *)(param_1 + 0x151) == '\0') {
        return;
      }
      if (*(int *)(param_1 + 0x144) == 0) {
        uVar1 = FUN_1003dfee0(*(undefined4 *)(param_1 + 0x14c),0,0);
        *(undefined4 *)(param_1 + 0x148) = uVar1;
      }
    } while (*(int *)(param_1 + 0x148) < 0);
    _fcntl(*(int *)(param_1 + 0x148),4,4);
    *(undefined4 *)(param_1 + 0x144) = 1;
    FUN_1002621e0(param_1);
    *(undefined4 *)(param_1 + 0x144) = 0;
    if (*(char *)(param_1 + 0x151) == '\0') break;
    _close(*(int *)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  }
  return;
}

