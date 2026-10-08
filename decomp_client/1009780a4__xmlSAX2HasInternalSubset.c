
int _xmlSAX2HasInternalSubset(void *ctx)

{
  undefined4 local_24;
  
  if ((ctx == (void *)0x0) || (*(long *)((long)ctx + 0x10) == 0)) {
    local_24 = 0;
  }
  else {
    local_24 = (uint)(*(long *)(*(long *)((long)ctx + 0x10) + 0x50) != 0);
  }
  return local_24;
}

