
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100581300(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_102273510 == 0) {
    DAT_102273510 = FUN_1000ab4a0("QtMetaTypePrivate::QSequentialIterableImpl",0xffffffffffffffff,1)
    ;
  }
  iVar1 = DAT_102273510;
  cVar2 = QMetaType::hasRegisteredConverterFunction(param_1,DAT_102273510);
  uVar4 = 1;
  if (cVar2 == '\0') {
    if (DAT_102274390 == '\0') {
      iVar3 = ___cxa_guard_acquire(&DAT_102274390);
      if (iVar3 != 0) {
        _DAT_102274380 = FUN_100581420;
        ___cxa_atexit(FUN_1005813b0,&DAT_102274380,0x100000000);
        ___cxa_guard_release(&DAT_102274390);
      }
    }
    uVar4 = QMetaType::registerConverterFunction
                      ((AbstractConverterFunction *)&DAT_102274380,param_1,iVar1);
  }
  return uVar4;
}

