
void * _xmlMemRealloc(void *ptr,size_t size)

{
  void *pvVar1;
  
  pvVar1 = _xmlReallocLoc(ptr,size,"none",0);
  return pvVar1;
}

