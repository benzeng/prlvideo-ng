
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10041b130(QByteArray *param_1,long param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    if (DAT_102273f54 == 0) {
      DAT_102273f54 = FUN_10041b070("Mappings::ValuePair",0xffffffffffffffff,1);
    }
    if (DAT_102273f54 != -1) {
      uVar5 = QMetaType::registerNormalizedTypedef(param_1,DAT_102273f54);
      return uVar5;
    }
  }
  uVar6 = 0x107;
  if (param_3 == 0) {
    uVar6 = 7;
  }
  uVar3 = QMetaType::registerNormalizedType(param_1,FUN_10041b260,FUN_10041b2f0,0x18,uVar6,0);
  if (0 < (int)uVar3) {
    if (DAT_102273520 == 0) {
      DAT_102273520 =
           FUN_100250480("QtMetaTypePrivate::QPairVariantInterfaceImpl",0xffffffffffffffff,1);
    }
    iVar1 = DAT_102273520;
    cVar2 = QMetaType::hasRegisteredConverterFunction(uVar3,DAT_102273520);
    if (cVar2 == '\0') {
      if (DAT_102273f68 == '\0') {
        iVar4 = ___cxa_guard_acquire(&DAT_102273f68);
        if (iVar4 != 0) {
          _DAT_102273f58 = FUN_10041b400;
          ___cxa_atexit(FUN_10041b390,&DAT_102273f58,0x100000000);
          ___cxa_guard_release(&DAT_102273f68);
        }
      }
      QMetaType::registerConverterFunction((AbstractConverterFunction *)&DAT_102273f58,uVar3,iVar1);
    }
  }
  return (ulong)uVar3;
}

