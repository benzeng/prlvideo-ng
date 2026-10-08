
int _xmlSAX2GetColumnNumber(void *ctx)

{
  undefined4 local_24;
  
  if ((ctx == (void *)0x0) || (*(long *)((long)ctx + 0x38) == 0)) {
    local_24 = 0;
  }
  else {
    local_24 = *(int *)(*(long *)((long)ctx + 0x38) + 0x38);
  }
  return local_24;
}

