
ulong FUN_1004115c0(undefined1 *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                   long param_5)

{
  ulong uVar1;
  
  uVar1 = 0x18;
  if (param_2 < 0x19) {
    uVar1 = (ulong)param_2;
  }
  if (param_2 < 4) {
    uVar1 = FUN_1004103f0(0x52400,param_3,param_4,0);
    return uVar1;
  }
  *param_1 = 0;
  param_1[1] = 0x80;
  *(undefined2 *)(param_1 + 2) = 0x1400;
  _memcpy(param_1 + 4,(void *)(param_5 + 0x20),uVar1 - 4);
  return uVar1;
}

