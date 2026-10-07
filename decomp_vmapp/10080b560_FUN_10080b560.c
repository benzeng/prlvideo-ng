
long FUN_10080b560(long param_1,long param_2,undefined1 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if ((param_5 == 0) && (*(int *)(lVar1 + 0x280) == 0)) {
    *(short *)(lVar1 + 0x230) = *(short *)(lVar1 + 0x232);
    *(short *)(lVar1 + 0x232) = *(short *)(lVar1 + 0x232) + 1;
  }
  *(undefined1 *)(lVar1 + 0x290) = param_3;
  *(undefined8 *)(lVar1 + 0x298) = param_4;
  *(undefined2 *)(lVar1 + 0x2a0) = *(undefined2 *)(lVar1 + 0x230);
  *(long *)(lVar1 + 0x2a8) = param_5;
  *(undefined8 *)(lVar1 + 0x2b0) = param_6;
  return param_2 + 0xc;
}

