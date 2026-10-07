
undefined8
FUN_100024a00(long param_1,byte param_2,byte param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar1 = 0;
  }
  else {
    *(uint *)(param_1 + 0x8c) = (uint)param_2;
    *(uint *)(param_1 + 0x90) = (uint)param_3;
    *(undefined4 *)(param_1 + 0x94) = param_4;
    *(undefined4 *)(param_1 + 0x98) = param_5;
    *(undefined1 *)(param_1 + 0x8a) = 1;
    uVar1 = FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),7,param_1 + 0x8c,0x10,1,0);
  }
  return uVar1;
}

