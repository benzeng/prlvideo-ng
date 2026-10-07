
void FUN_10032d130(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(0x100);
  ___bzero(pvVar1,0x100);
  DAT_1011c80e8 = 0x20;
  DAT_1011c80e0 = pvVar1;
  ___cxa_atexit(FUN_100328a50,&DAT_1011c80e0,0x100000000);
  pvVar1 = operator_new__(0x100);
  ___bzero(pvVar1,0x100);
  DAT_1011c8100 = 0x20;
  DAT_1011c80f8 = pvVar1;
  ___cxa_atexit(FUN_100328a70,&DAT_1011c80f8,0x100000000);
  return;
}

