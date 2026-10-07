
undefined1 FUN_1004c3f80(undefined1 *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 local_38;
  
  lVar2 = _CFPreferencesCopyAppValue(&cf_PhotoStreamConfigurationKey,&cf_com_apple_iLifePhotoStream)
  ;
  if (lVar2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar3 = _CFDictionaryGetTypeID();
    lVar4 = _CFGetTypeID(lVar2);
    if (lVar3 == lVar4) {
      cVar1 = _CFDictionaryGetValueIfPresent
                        (lVar2,&cf_PhotoStreamConfigurationEnabledPhotoStreamTypesKey,&local_38);
      if (cVar1 == '\0') {
        uVar8 = 0;
      }
      else {
        *param_1 = 0;
        lVar3 = _CFArrayGetCount(local_38);
        lVar4 = 0;
        if (0 < lVar3) {
          do {
            uVar5 = _CFArrayGetValueAtIndex(local_38,lVar4);
            lVar6 = _CFStringGetTypeID();
            lVar7 = _CFGetTypeID(uVar5);
            if ((lVar6 == lVar7) &&
               (lVar6 = _CFStringCompare(uVar5,&
                                               cf_PhotoStreamConfigurationStreamTypeClassicPhotoStream
                                         ,0), lVar6 == 0)) {
              *param_1 = 1;
              break;
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < lVar3);
        }
        uVar8 = 1;
      }
    }
    else {
      uVar8 = 0;
    }
    _CFRelease(lVar2);
  }
  return uVar8;
}

