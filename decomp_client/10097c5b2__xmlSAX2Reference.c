
void _xmlSAX2Reference(void *ctx,xmlChar *name)

{
  undefined8 local_10;
  
  if (ctx != (void *)0x0) {
    if (*name == '#') {
      local_10 = _xmlNewCharRef(*(xmlDocPtr *)((long)ctx + 0x10),name);
    }
    else {
      local_10 = _xmlNewReference(*(xmlDocPtr *)((long)ctx + 0x10),name);
    }
    _xmlAddChild(*(xmlNodePtr *)((long)ctx + 0x50),local_10);
  }
  return;
}

