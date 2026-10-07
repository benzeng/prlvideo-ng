
void _xmlThrDefSetGenericErrorFunc(void *ctx,xmlGenericErrorFunc handler)

{
  _xmlMutexLock(DAT_1011b8728);
  PTR__xmlGenericErrorDefaultFunc_1011113b8 = handler;
  if (handler == (xmlGenericErrorFunc)0x0) {
    PTR__xmlGenericErrorDefaultFunc_1011113b8 = _xmlGenericErrorDefaultFunc;
  }
  DAT_1011b8770 = ctx;
  _xmlMutexUnlock(DAT_1011b8728);
  return;
}

