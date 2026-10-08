
void * FUN_10091e6d9(long param_1)

{
  void *local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0xa0);
  if (local_28 == (void *)0x0) {
    FUN_10091b97e(param_1,"allocating schema",0);
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0xa0);
    *(undefined8 *)((long)local_28 + 0x78) = *(undefined8 *)(param_1 + 0x98);
    _xmlDictReference(*(xmlDictPtr *)((long)local_28 + 0x78));
  }
  return local_28;
}

