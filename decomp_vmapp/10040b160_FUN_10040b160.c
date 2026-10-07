
undefined8
FUN_10040b160(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = DAT_1011cc6f8;
  lVar1 = DAT_1011cc6f0;
  if ((param_1 == DAT_1011cc6f0) || (param_1 == DAT_1011cc6f8)) {
    if (((param_1 != DAT_1011cc6f0) || (cVar3 = QMutex::tryLock(0x11cc700), cVar3 != '\0')) &&
       ((param_1 != lVar2 || (cVar3 = QMutex::tryLock(0x11cc708), cVar3 != '\0')))) {
      if (((DAT_1011cc6d8 == 0) || (lVar5 = DAT_1011cc6d8, DAT_1011cc6f8 != param_1)) &&
         ((DAT_1011cc6d0 == 0 || (lVar5 = DAT_1011cc6d0, DAT_1011cc6f0 != param_1)))) {
        if (param_6 != 0) {
          FUN_10040cd30(param_6,param_2);
        }
        iVar4 = FUN_1008e38f0(&DAT_101119ca0);
        uVar6 = 0xffffffff;
        if (iVar4 != 0) {
          FUN_1008e3970("","PrlAudioCore",0,
                        "Unknown generation id has come: %lld (currentInput = %lld, output = %lld)."
                        ,param_1,DAT_1011cc6f8,DAT_1011cc6f0);
        }
      }
      else {
        FUN_10040cd50(lVar5,param_2,param_3,param_4,param_5,param_6);
        uVar6 = 0;
      }
      if ((param_1 != lVar1) && (param_1 != lVar2)) {
        return uVar6;
      }
      QMutex::unlock();
      return uVar6;
    }
    if (param_6 == 0) {
      return 0;
    }
    if (param_1 != lVar2) {
      return 0;
    }
  }
  else if (param_6 == 0) {
    return 0;
  }
  FUN_10040cd30(param_6,param_2);
  return 0;
}

