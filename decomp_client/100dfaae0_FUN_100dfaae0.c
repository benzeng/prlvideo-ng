
int FUN_100dfaae0(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  bool bVar21;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_50 = 0;
  local_38 = lVar10;
  iVar7 = _SecRequirementCreateWithString(&cf_anchorapplegeneric,0,&local_50);
  if (iVar7 == 0) {
    iVar7 = _SecStaticCodeCheckValidity(param_1,1,local_50);
    if (iVar7 == 0) {
      local_48 = 0;
      iVar8 = _SecCodeCopySigningInformation(param_1,2,&local_48);
      iVar7 = -1;
      if (iVar8 == 0) {
        uVar9 = _CFDictionaryGetValue
                          (local_48,*(undefined8 *)PTR__kSecCodeInfoCertificates_1021e1b70);
        lVar10 = _CFArrayGetCount(uVar9);
        if (0 < lVar10) {
          uVar1 = *(undefined8 *)PTR__kSecOIDX509V1SubjectName_1021e1b90;
          uVar2 = *(undefined8 *)PTR__kSecPropertyKeyValue_1021e1ba0;
          uVar3 = *(undefined8 *)PTR__kSecOIDOrganizationalUnitName_1021e1b88;
          uVar4 = *(undefined8 *)PTR__kSecPropertyKeyLabel_1021e1b98;
          uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0;
          lVar20 = 0;
          do {
            uVar11 = _CFArrayGetValueAtIndex(uVar9,lVar20);
            if (param_2 == 0) {
LAB_100dfacd0:
              if (param_3 == 0) {
LAB_100dfaee8:
                _CFRelease(local_48);
                iVar7 = 0;
                lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
                goto LAB_100dfaefe;
              }
              local_40 = uVar1;
              lVar12 = _CFArrayCreate(0,&local_40,1,0);
              if (lVar12 != 0) {
                lVar13 = _SecCertificateCopyValues(uVar11,lVar12,0);
                if (lVar13 == 0) {
                  _CFRelease(lVar12);
                }
                else {
                  uVar11 = _CFDictionaryGetValue(lVar13,local_40);
                  lVar14 = _CFDictionaryGetValue(uVar11,uVar2);
                  if (lVar14 != 0) {
                    lVar15 = _CFArrayGetCount(lVar14);
                    lVar19 = 0;
                    if (0 < lVar15) {
                      do {
                        uVar11 = _CFArrayGetValueAtIndex(lVar14,lVar19);
                        lVar15 = _CFGetTypeID(uVar11);
                        lVar16 = _CFDictionaryGetTypeID();
                        if (lVar15 == lVar16) {
                          uVar17 = _CFDictionaryGetValue(uVar11,uVar4);
                          cVar6 = _CFEqual(uVar17,uVar3);
                          if ((cVar6 != '\0') &&
                             (lVar15 = _CFDictionaryGetValue(uVar11,uVar2), lVar15 != 0)) {
                            lVar16 = _CFGetTypeID(lVar15);
                            lVar18 = _CFStringGetTypeID();
                            if (lVar16 == lVar18) {
                              lVar14 = _CFStringCreateWithCString(uVar5,param_3,0x8000100);
                              iVar7 = -1;
                              lVar16 = 0;
                              if (lVar14 != 0) {
                                lVar15 = _CFStringCompare(lVar14,lVar15,0);
                                iVar7 = -(uint)(lVar15 != 0);
                                lVar16 = lVar14;
                              }
                              break;
                            }
                          }
                        }
                        lVar19 = lVar19 + 1;
                        lVar15 = _CFArrayGetCount(lVar14);
                        iVar7 = -1;
                        lVar16 = 0;
                      } while (lVar19 < lVar15);
                      _CFRelease(lVar12);
                      _CFRelease(lVar13);
                      if (lVar16 != 0) {
                        _CFRelease(lVar16);
                      }
                      if (iVar7 == 0) goto LAB_100dfaee8;
                      goto LAB_100dfaec0;
                    }
                  }
                  _CFRelease(lVar12);
                  _CFRelease(lVar13);
                }
              }
            }
            else {
              local_40 = 0;
              iVar7 = _SecCertificateCopyCommonName(uVar11,&local_40);
              if (iVar7 == 0) {
                lVar12 = _CFStringCreateWithCString(uVar5,param_2,0x8000100);
                if (lVar12 == 0) {
                  _CFRelease(local_40);
                }
                else {
                  if ((param_4 & 2) == 0) {
                    lVar13 = _CFStringCompare(lVar12,local_40,0);
                    bVar21 = lVar13 != 0;
                  }
                  else {
                    cVar6 = _CFStringHasPrefix(local_40,lVar12);
                    bVar21 = cVar6 == '\0';
                  }
                  _CFRelease(local_40);
                  _CFRelease(lVar12);
                  if (!bVar21) goto LAB_100dfacd0;
                }
              }
            }
LAB_100dfaec0:
            lVar20 = lVar20 + 1;
          } while (lVar20 < lVar10);
        }
        _CFRelease(local_48);
        lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
        iVar7 = -1;
      }
    }
LAB_100dfaefe:
    _CFRelease(local_50);
  }
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

