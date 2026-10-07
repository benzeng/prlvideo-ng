
void FUN_1004a19a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  puVar1 = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  lVar5 = _CFBundleCreate(0);
  if ((param_3 != 0) &&
     (lVar6 = _CFBundleGetValueForInfoDictionaryKey(lVar5,&cf_CFBundleDocumentTypes), lVar6 != 0)) {
    lVar7 = _CFArrayGetCount(lVar6);
    lVar10 = 0;
    if (0 < lVar7) {
      do {
        lVar7 = _CFArrayGetValueAtIndex(lVar6,lVar10);
        if ((lVar7 != 0) &&
           (lVar8 = _CFDictionaryGetValue(lVar7,&cf_CFBundleTypeExtensions), lVar8 != 0)) {
          lVar9 = _CFArrayGetCount(lVar8);
          lVar11 = 0;
          if (0 < lVar9) {
            do {
              lVar9 = _CFArrayGetValueAtIndex(lVar8,lVar11);
              if (((lVar9 != 0) && (lVar9 = _CFStringCompare(lVar9,param_3,0), lVar9 == 0)) &&
                 (lVar9 = _CFDictionaryGetValue(lVar7,&cf_CFBundleTypeIconFile), lVar9 != 0)) {
                lVar6 = _CFBundleCopyResourceURL(lVar5,lVar9,&cf_icns,0);
                if (lVar6 == 0) goto LAB_1004a1b62;
                cVar2 = _CFURLGetFSRef(lVar6,local_88);
                if (cVar2 == '\0') {
                  bVar12 = false;
                }
                else {
                  iVar4 = _ReadIconFromFSRef(local_88,puVar1);
                  bVar12 = iVar4 == 0;
                }
                _CFRelease(lVar6);
                bVar13 = true;
                if (bVar12) goto LAB_1004a1bcf;
                goto LAB_1004a1b62;
              }
              lVar9 = _CFArrayGetCount(lVar8);
              lVar11 = lVar11 + 1;
            } while (lVar11 < lVar9);
          }
        }
        lVar7 = _CFArrayGetCount(lVar6);
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar7);
    }
  }
LAB_1004a1b62:
  lVar6 = _CFBundleGetValueForInfoDictionaryKey(lVar5,&cf_CFBundleExecutable);
  if (lVar6 == 0) {
    bVar13 = false;
  }
  else {
    lVar6 = _CFBundleCopyResourceURL(lVar5,lVar6,&cf_icns,0);
    if (lVar6 == 0) {
      bVar13 = false;
    }
    else {
      cVar2 = _CFURLGetFSRef(lVar6,local_88);
      if (cVar2 == '\0') {
        bVar13 = false;
      }
      else {
        iVar4 = _ReadIconFromFSRef(local_88,puVar1);
        bVar13 = iVar4 == 0;
      }
      _CFRelease(lVar6);
LAB_1004a1bcf:
      bVar12 = bVar13;
      if (bVar13) goto LAB_1004a1c3d;
    }
  }
  cVar2 = _CFURLGetFSRef(param_2,local_88);
  bVar12 = bVar13;
  if ((cVar2 != '\0') && (iVar4 = _GetIconRefFromFileInfo(local_88,0,0,0,0,0,param_1,0), iVar4 == 0)
     ) {
    sVar3 = _IconRefToIconFamily(*param_1,0xffffffff,puVar1);
    bVar12 = true;
    if (sVar3 != 0) {
      bVar12 = bVar13;
    }
  }
LAB_1004a1c3d:
  if (bVar12) {
    FUN_1004a1ce0(param_1);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

