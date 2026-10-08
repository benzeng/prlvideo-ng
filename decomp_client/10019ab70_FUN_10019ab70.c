
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10019ab70(int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  cVar1 = QMetaType::hasRegisteredConverterFunction(param_1,0x27);
  uVar3 = 1;
  if (cVar1 == '\0') {
    if (DAT_10226ddb0 == '\0') {
      iVar2 = ___cxa_guard_acquire(&DAT_10226ddb0);
      if (iVar2 != 0) {
        _DAT_10226dda0 = FUN_10019ac40;
        ___cxa_atexit(FUN_10019ac00,&DAT_10226dda0,0x100000000);
        ___cxa_guard_release(&DAT_10226ddb0);
      }
    }
    uVar3 = QMetaType::registerConverterFunction
                      ((AbstractConverterFunction *)&DAT_10226dda0,param_1,0x27);
  }
  return uVar3;
}

