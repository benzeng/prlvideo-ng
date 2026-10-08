
undefined1 FUN_10003a7d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  long lVar13;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  lVar9 = _CGWindowListCopyWindowInfo(2,param_3);
  if (lVar9 == 0) {
    uVar12 = 0;
  }
  else {
    lVar10 = _CFArrayGetCount(lVar9);
    if (0 < lVar10) {
      uVar1 = *(undefined8 *)PTR__kCGWindowNumber_1021e1990;
      uVar2 = *(undefined8 *)PTR__kCGWindowLayer_1021e1988;
      uVar3 = *(undefined8 *)PTR__kCGWindowOwnerPID_1021e1998;
      lVar13 = 0;
      do {
        uVar11 = _CFArrayGetValueAtIndex(lVar9,lVar13);
        local_34 = 0;
        cVar5 = _CFDictionaryGetValueIfPresent(uVar11,uVar1,&local_40);
        if (cVar5 != '\0') {
          _CFNumberGetValue(local_40,9,&local_34);
        }
        local_44 = -1;
        cVar5 = _CFDictionaryGetValueIfPresent(uVar11,uVar2,&local_50);
        if (cVar5 != '\0') {
          _CFNumberGetValue(local_50,3,&local_44);
        }
        local_54 = 0xffffffff;
        cVar5 = _CFDictionaryGetValueIfPresent(uVar11,uVar3,&local_60);
        if (cVar5 != '\0') {
          _CFNumberGetValue(local_60,9,&local_54);
        }
        cVar5 = FUN_10003a660(local_54);
        iVar8 = local_44;
        if (cVar5 == '\0') {
LAB_10003a918:
          pcVar4 = DAT_102311b38;
          uVar7 = (*DAT_1023119d8)();
          iVar8 = (*pcVar4)(uVar7,local_34,local_80);
          if (iVar8 == 0) {
            cVar5 = _CGRectContainsPoint(param_1,param_2);
            uVar12 = 1;
            if (cVar5 != '\0') goto LAB_10003a989;
          }
        }
        else {
          iVar6 = _CGWindowLevelForKey(7);
          if (iVar8 != iVar6) goto LAB_10003a918;
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < lVar10);
    }
    uVar12 = 0;
LAB_10003a989:
    _CFRelease(lVar9);
  }
  return uVar12;
}

