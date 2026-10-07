
void _xmlThrDefSetStructuredErrorFunc(void *ctx,xmlStructuredErrorFunc handler)

{
  _xmlMutexLock(DAT_1011b8728);
  DAT_1011b8768 = handler;
  DAT_1011b8770 = ctx;
  _xmlMutexUnlock(DAT_1011b8728);
  return;
}

