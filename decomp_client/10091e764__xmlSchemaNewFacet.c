
void * _xmlSchemaNewFacet(void)

{
  undefined8 local_20;
  
  local_20 = (void *)(*(code *)_xmlMalloc)(0x48);
  if (local_20 == (void *)0x0) {
    local_20 = (void *)0x0;
  }
  else {
    _memset(local_20,0,0x48);
  }
  return local_20;
}

