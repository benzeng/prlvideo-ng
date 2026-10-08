
void _xmlThrDefSetStructuredErrorFunc(void *ctx,xmlStructuredErrorFunc handler)

{
  _xmlMutexLock(DAT_1023134a8);
  DAT_1023134e8 = handler;
  DAT_1023134f0 = ctx;
  _xmlMutexUnlock(DAT_1023134a8);
  return;
}

