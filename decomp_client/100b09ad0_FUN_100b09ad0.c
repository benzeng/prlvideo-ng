
void * FUN_100b09ad0(void)

{
  void *pvVar1;
  
  pvVar1 = _calloc(1,0x18);
  if ((pvVar1 == (void *)0x0) && (2 < DAT_10230ffd0)) {
    FUN_100df99c0("","PrlPCSC",3,"PCSC: Can\'t allocate memory for new relay info.");
  }
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","PrlPCSC",3,"PCSC: New relay initialized.");
  }
  return pvVar1;
}

