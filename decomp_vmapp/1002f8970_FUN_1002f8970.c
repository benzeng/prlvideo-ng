
long FUN_1002f8970(long param_1,undefined1 param_2,uint param_3,short param_4,ushort param_5)

{
  long lVar1;
  
  if (param_3 == 0xb) {
    lVar1 = 0x20;
    if (param_5 < *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4)) {
      lVar1 = (ulong)(param_4 != 0) << 5;
    }
    return lVar1;
  }
  lVar1 = FUN_1002dc480(param_1,param_2,param_3 & 0xff,param_4,param_5);
  return lVar1;
}

