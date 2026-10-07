
void _xmlCtxtResetLastError(void *ctx)

{
  if ((ctx != (void *)0x0) && (*(int *)((long)ctx + 0x25c) != 0)) {
    _xmlResetError((xmlErrorPtr)((long)ctx + 600));
  }
  return;
}

