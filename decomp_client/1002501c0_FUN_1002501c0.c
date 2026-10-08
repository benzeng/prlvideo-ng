
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1002501c0(QByteArray *param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    if (DAT_1022743b0 == 0) {
      DAT_1022743b0 = FUN_100250100("GUI::StringPair",0xffffffffffffffff,1);
    }
    if (DAT_1022743b0 != -1) {
      uVar5 = QMetaType::registerNormalizedTypedef(param_1,DAT_1022743b0);
      return uVar5;
    }
  }
  uVar6 = 0x107;
  if (param_3 == 0) {
    uVar6 = 7;
  }
  uVar3 = QMetaType::registerNormalizedType(param_1,FUN_1002502f0,FUN_1002503b0,0x10,uVar6,0);
  if (0 < (int)uVar3) {
    if (DAT_102273520 == 0) {
      DAT_102273520 =
           FUN_100250480("QtMetaTypePrivate::QPairVariantInterfaceImpl",0xffffffffffffffff,1);
    }
    iVar1 = DAT_102273520;
    cVar2 = QMetaType::hasRegisteredConverterFunction(uVar3,DAT_102273520);
    if (cVar2 == '\0') {
      if (DAT_102271d20 == '\0') {
        iVar4 = ___cxa_guard_acquire(&DAT_102271d20);
        if (iVar4 != 0) {
          _DAT_102271d10 = FUN_100250600;
          ___cxa_atexit(FUN_100250410,&DAT_102271d10,0x100000000);
          ___cxa_guard_release(&DAT_102271d20);
        }
      }
      QMetaType::registerConverterFunction((AbstractConverterFunction *)&DAT_102271d10,uVar3,iVar1);
    }
  }
  return (ulong)uVar3;
}

