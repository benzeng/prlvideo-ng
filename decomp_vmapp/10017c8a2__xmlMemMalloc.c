
void * _xmlMemMalloc(size_t size)

{
  void *pvVar1;
  
  pvVar1 = _xmlMallocLoc(size,"none",0);
  return pvVar1;
}

