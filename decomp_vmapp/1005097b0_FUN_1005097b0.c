
undefined1 FUN_1005097b0(undefined8 param_1,QString *param_2)

{
  char cVar1;
  long lVar2;
  longlong lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long local_28 [2];
  
  lVar2 = FUN_1005098f0();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    QFile::QFile((QFile *)local_28,param_2);
    cVar1 = QFile::open(local_28,10);
    if (cVar1 == '\0') {
      uVar6 = 0;
    }
    else {
      lVar3 = _CFDataGetBytePtr(lVar2);
      _CFDataGetLength(lVar2);
      lVar4 = QIODevice::write((char *)local_28,lVar3);
      lVar5 = _CFDataGetLength(lVar2);
      if (lVar4 == lVar5) {
        uVar6 = 1;
        (**(code **)(local_28[0] + 0x70))(local_28);
      }
      else {
        uVar6 = 0;
      }
    }
    QFile::~QFile((QFile *)local_28);
    _CFRelease(lVar2);
  }
  return uVar6;
}

