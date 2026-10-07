
void FUN_1002ade20(undefined8 param_1,long param_2)

{
  uint in_EAX;
  undefined8 uStack_18;
  
  uStack_18 = (ulong)in_EAX;
  if (DAT_1011c4a88 != param_2) {
    DAT_1011c4a88 = param_2;
    _CGLSetCurrentContext(param_2);
  }
  (*DAT_1011c6048)(0x85b5,(long)&uStack_18 + 4);
  (*DAT_1011c5770)(0);
  if (uStack_18._4_4_ != 0) {
    (*DAT_1011c5b88)(1,(long)&uStack_18 + 4);
  }
  if (DAT_1011c4a88 != 0) {
    DAT_1011c4a88 = 0;
    _CGLSetCurrentContext(0);
  }
  _CGLClearDrawable(param_2);
  _CGLDestroyContext(param_2);
  return;
}

