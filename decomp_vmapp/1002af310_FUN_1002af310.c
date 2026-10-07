
void FUN_1002af310(long param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x980 + (long)param_2 * 0x8f0) = param_3;
  *(undefined4 *)(param_1 + 0x984 + (long)param_2 * 0x8f0) = param_4;
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x910);
    *(undefined4 *)(lVar1 + 0x1c) = param_3;
    *(undefined4 *)(lVar1 + 0x20) = param_4;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x910);
    lVar2 = (ulong)(param_2 - 1) * 0x414;
    *(undefined4 *)(lVar1 + 0x30 + lVar2) = param_3;
    *(undefined4 *)(lVar1 + 0x34 + lVar2) = param_4;
  }
  FUN_100434440(*(undefined8 *)(*(long *)(param_1 + 8) + 0xf0));
  return;
}

