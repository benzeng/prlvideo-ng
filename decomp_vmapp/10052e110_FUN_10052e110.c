
QChar * FUN_10052e110(QChar *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined **)param_1 = PTR_shared_null_100ba20d0;
  pcVar1 = DAT_1011ccd68;
  uVar2 = (*DAT_1011ccc38)();
  lVar3 = (*pcVar1)(uVar2);
  if (lVar3 != 0) {
    lVar4 = _CFStringGetTypeID();
    lVar5 = _CFGetTypeID(lVar3);
    if (lVar4 == lVar5) {
      lVar4 = _CFStringGetLength(lVar3);
      lVar5 = _CFStringGetCharactersPtr(lVar3);
      if (lVar5 == 0) {
        pvVar6 = _malloc(lVar4 * 2);
        if (pvVar6 != (void *)0x0) {
          _CFStringGetCharacters(lVar3,0,lVar4,pvVar6);
          QString::setUnicode(param_1,(int)pvVar6);
          _free(pvVar6);
        }
      }
      else {
        QString::setUnicode(param_1,(int)lVar5);
      }
    }
    _CFRelease(lVar3);
  }
  return param_1;
}

