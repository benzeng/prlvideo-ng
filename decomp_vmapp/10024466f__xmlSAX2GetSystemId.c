
xmlChar * _xmlSAX2GetSystemId(void *ctx)

{
  undefined8 local_28;
  
  if ((ctx == (void *)0x0) || (*(long *)((long)ctx + 0x38) == 0)) {
    local_28 = (xmlChar *)0x0;
  }
  else {
    local_28 = *(xmlChar **)(*(long *)((long)ctx + 0x38) + 8);
  }
  return local_28;
}

