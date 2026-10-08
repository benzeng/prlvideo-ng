
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100598750(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_102273e30 == 0) {
    DAT_102273e30 =
         FUN_1003af8d0("QtMetaTypePrivate::QAssociativeIterableImpl",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273e30;
  cVar2 = QMetaType::hasRegisteredConverterFunction(param_1,DAT_102273e30);
  uVar4 = 1;
  if (cVar2 == '\0') {
    if (DAT_102274460 == '\0') {
      iVar3 = ___cxa_guard_acquire(&DAT_102274460);
      if (iVar3 != 0) {
        _DAT_102274450 = FUN_100598900;
        ___cxa_atexit(FUN_100598890,&DAT_102274450,0x100000000);
        ___cxa_guard_release(&DAT_102274460);
      }
    }
    uVar4 = QMetaType::registerConverterFunction
                      ((AbstractConverterFunction *)&DAT_102274450,param_1,iVar1);
  }
  return uVar4;
}

