
xmlEntityPtr _xmlSAX2GetParameterEntity(void *ctx,xmlChar *name)

{
  undefined8 local_30;
  
  if (ctx == (void *)0x0) {
    local_30 = (xmlEntityPtr)0x0;
  }
  else {
    local_30 = _xmlGetParameterEntity(*(xmlDocPtr *)((long)ctx + 0x10),name);
  }
  return local_30;
}

