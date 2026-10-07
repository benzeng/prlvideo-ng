
void * FUN_100661bd0(void)

{
  void *pvVar1;
  
  pvVar1 = _calloc(1,0x18);
  if ((pvVar1 == (void *)0x0) && (2 < DAT_1011b55f8)) {
    FUN_1008e3970("","PrlPCSC",3,"PCSC: Can\'t allocate memory for new relay info.");
  }
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","PrlPCSC",3,"PCSC: New relay initialized.");
  }
  return pvVar1;
}

