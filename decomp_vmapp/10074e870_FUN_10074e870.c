
void * FUN_10074e870(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = _calloc(8,0x804);
  ___bzero(pvVar1,0x4020);
  *(undefined8 *)((long)pvVar1 + 0x4010) = param_1;
  return pvVar1;
}

