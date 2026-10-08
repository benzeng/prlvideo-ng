
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001cf4d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = QMetaType::hasRegisteredConverterFunction(param_1,0x27);
  uVar3 = 1;
  if (cVar1 == '\0') {
    if (DAT_1022711a0 == '\0') {
      iVar2 = ___cxa_guard_acquire(&DAT_1022711a0);
      if (iVar2 != 0) {
        _DAT_102271190 = FUN_1001cf6f0;
        ___cxa_atexit(FUN_1001cf6d0,&DAT_102271190,0x100000000);
        ___cxa_guard_release(&DAT_1022711a0);
      }
    }
    uVar3 = QMetaType::registerConverterFunction
                      ((AbstractConverterFunction *)&DAT_102271190,param_1,0x27);
  }
  return uVar3;
}

