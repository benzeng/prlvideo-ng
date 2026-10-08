
void _xmlThrDefSetGenericErrorFunc(void *ctx,xmlGenericErrorFunc handler)

{
  _xmlMutexLock(DAT_1023134a8);
  PTR__xmlGenericErrorDefaultFunc_1022794b8 = handler;
  if (handler == (xmlGenericErrorFunc)0x0) {
    PTR__xmlGenericErrorDefaultFunc_1022794b8 = _xmlGenericErrorDefaultFunc;
  }
  DAT_1023134f0 = ctx;
  _xmlMutexUnlock(DAT_1023134a8);
  return;
}

