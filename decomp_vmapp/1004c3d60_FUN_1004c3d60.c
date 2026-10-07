
undefined1 FUN_1004c3d60(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = _CFPreferencesCopyAppValue(&cf_Accounts,&cf_MobileMeAccounts);
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    lVar3 = _CFArrayGetTypeID();
    lVar4 = _CFGetTypeID(lVar2);
    if ((lVar3 == lVar4) && (lVar3 = _CFArrayGetCount(lVar2), 0 < lVar3)) {
      lVar4 = 0;
      do {
        uVar5 = _CFArrayGetValueAtIndex(lVar2,lVar4);
        lVar6 = _CFDictionaryGetTypeID();
        lVar7 = _CFGetTypeID(uVar5);
        if ((lVar6 == lVar7) &&
           (cVar1 = _CFDictionaryGetValueIfPresent(uVar5,&cf_Services,&local_38), cVar1 != '\0')) {
          lVar6 = _CFArrayGetTypeID();
          lVar7 = _CFGetTypeID(local_38);
          if (lVar6 != lVar7) {
LAB_1004c3edb:
            uVar10 = 0;
            goto LAB_1004c3f30;
          }
          lVar6 = _CFArrayGetCount(local_38);
          lVar7 = 0;
          if (0 < lVar6) {
            do {
              uVar5 = _CFArrayGetValueAtIndex(local_38,lVar7);
              lVar8 = _CFDictionaryGetTypeID();
              lVar9 = _CFGetTypeID(uVar5);
              if ((lVar8 == lVar9) &&
                 (cVar1 = _CFDictionaryGetValueIfPresent(uVar5,&cf_Name,&local_40), cVar1 != '\0'))
              {
                lVar8 = _CFStringGetTypeID();
                lVar9 = _CFGetTypeID(local_40);
                if (lVar8 != lVar9) goto LAB_1004c3edb;
                lVar8 = _CFStringCompare(local_40,&cf_MOBILE_DOCUMENTS,0);
                if (lVar8 == 0) {
                  cVar1 = _CFDictionaryGetValueIfPresent(uVar5,&cf_Enabled,&local_48);
                  if (cVar1 == '\0') goto LAB_1004c3f2d;
                  lVar3 = _CFBooleanGetTypeID();
                  lVar4 = _CFGetTypeID(local_48);
                  if (lVar3 != lVar4) goto LAB_1004c3f2d;
                  cVar1 = _CFBooleanGetValue(local_48);
                  *(bool *)param_1 = cVar1 != '\0';
                  uVar10 = 1;
                  goto LAB_1004c3f30;
                }
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < lVar6);
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < lVar3);
    }
LAB_1004c3f2d:
    uVar10 = 0;
LAB_1004c3f30:
    _CFRelease(lVar2);
  }
  return uVar10;
}

