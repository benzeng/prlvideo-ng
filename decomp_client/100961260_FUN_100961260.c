
void * FUN_100961260(undefined8 param_1)

{
  undefined8 local_28;
  
  local_28 = (void *)(*(code *)_xmlMalloc)(0x50);
  if (local_28 == (void *)0x0) {
    FUN_100960bbc(param_1,0);
    local_28 = (void *)0x0;
  }
  else {
    _memset(local_28,0,0x50);
  }
  return local_28;
}

