
undefined8 FUN_1002f8450(long param_1,undefined1 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      *param_2 = 0x50;
      uVar1 = 1;
      if (1 < param_3) {
        param_2[1] = *(undefined1 *)(param_1 + 0x68);
        uVar1 = 2;
      }
    }
    *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xfd;
  }
  return uVar1;
}

