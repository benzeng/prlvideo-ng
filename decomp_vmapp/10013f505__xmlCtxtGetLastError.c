
xmlErrorPtr _xmlCtxtGetLastError(void *ctx)

{
  undefined8 local_28;
  
  if (ctx == (void *)0x0) {
    local_28 = (xmlErrorPtr)0x0;
  }
  else if (*(int *)((long)ctx + 0x25c) == 0) {
    local_28 = (xmlErrorPtr)0x0;
  }
  else {
    local_28 = (xmlErrorPtr)((long)ctx + 600);
  }
  return local_28;
}

