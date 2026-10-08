
/* WARNING: Enum "enum_2029": Some values do not have unique names */

xmlParserInputPtr _xmlSAX2ResolveEntity(void *ctx,xmlChar *publicId,xmlChar *systemId)

{
  char *URL;
  undefined8 local_48;
  undefined8 local_10;
  
  local_10 = 0;
  if (ctx == (void *)0x0) {
    local_48 = (xmlParserInputPtr)0x0;
  }
  else {
    if (*(long *)((long)ctx + 0x38) != 0) {
      local_10 = *(long *)(*(long *)((long)ctx + 0x38) + 8);
    }
    if (local_10 == 0) {
      local_10 = *(long *)((long)ctx + 0x118);
    }
    URL = (char *)_xmlBuildURI(systemId,local_10);
    local_48 = _xmlLoadExternalEntity(URL,(char *)publicId,ctx);
    if (URL != (char *)0x0) {
      (*(code *)_xmlFree)(URL);
    }
  }
  return local_48;
}

