
undefined1 FUN_100cdd060(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x44c) == '\0') {
    uVar2 = 0;
  }
  else {
    lVar5 = _CopyEventCGEvent(param_2);
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = _CGEventGetType(lVar5);
      _CGEventGetTimestamp(lVar5);
      uVar6 = _CGEventGetIntegerValueField(lVar5,0x2a);
      _CGEventGetIntegerValueField(lVar5,9);
      if (uVar6 >> 0x20 == 0xa5a55a5a) {
        _CGEventSetIntegerValueField(lVar5,9,uVar6 & 0xffffffff);
      }
      if ((uVar3 < 0x1c) && ((0xe401cfeU >> (uVar3 & 0x1f) & 1) != 0)) {
        cVar1 = FUN_100cd84a0(param_1 + 0x498,lVar5);
        uVar2 = 1;
        if (cVar1 == '\0') {
          uVar4 = _CGEventGetType(lVar5);
          uVar7 = 0;
          if ((*(long *)(param_1 + 0x4b0) != 0) &&
             (uVar7 = 0, *(int *)(*(long *)(param_1 + 0x4b0) + 4) != 0)) {
            uVar7 = *(undefined8 *)(param_1 + 0x4b8);
          }
          uVar2 = FUN_100cd8a80(uVar7,uVar4,lVar5);
        }
      }
      else {
        uVar2 = FUN_100cd8a80(param_1,uVar3,lVar5);
      }
      _CFRelease(lVar5);
    }
  }
  QMutex::unlock();
  return uVar2;
}

