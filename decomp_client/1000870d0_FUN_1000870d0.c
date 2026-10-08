
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1000870d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = QMetaType::hasRegisteredConverterFunction(param_1,0x27);
  uVar3 = 1;
  if (cVar1 == '\0') {
    if (DAT_10226c7d0 == '\0') {
      iVar2 = ___cxa_guard_acquire(&DAT_10226c7d0);
      if (iVar2 != 0) {
        _DAT_10226c7c0 = FUN_1000871a0;
        ___cxa_atexit(FUN_100087160,&DAT_10226c7c0,0x100000000);
        ___cxa_guard_release(&DAT_10226c7d0);
      }
    }
    uVar3 = QMetaType::registerConverterFunction
                      ((AbstractConverterFunction *)&DAT_10226c7c0,param_1,0x27);
  }
  return uVar3;
}

