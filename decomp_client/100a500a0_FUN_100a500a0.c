
undefined1
FUN_100a500a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,long *param_6,undefined8 *param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  double dVar13;
  double dVar14;
  long local_38;
  
  lVar4 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                     PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
  uVar9 = *(undefined8 *)PTR__kCFBooleanTrue_1021e18e0;
  _CFDictionarySetValue(lVar4,*(undefined8 *)PTR__kSecReturnAttributes_1021e1ba8,uVar9);
  _CFDictionarySetValue
            (lVar4,*(undefined8 *)PTR__kSecMatchLimit_1021e1b78,
             *(undefined8 *)PTR__kSecMatchLimitAll_1021e1b80);
  _CFDictionarySetValue
            (lVar4,*(undefined8 *)PTR__kSecClass_1021e1b60,
             *(undefined8 *)PTR__kSecClassInternetPassword_1021e1b68);
  _CFDictionarySetValue(lVar4,*(undefined8 *)PTR__kSecAttrAccount_1021e1af8,param_4);
  _CFDictionaryAddValue(lVar4,*(undefined8 *)PTR__kSecAttrProtocol_1021e1b10,param_1);
  _CFDictionaryAddValue
            (lVar4,*(undefined8 *)PTR__kSecAttrAccessGroup_1021e1af0,
             &cf_4C6364ACXT_com_parallels_desktop_passwords);
  _CFDictionaryAddValue(lVar4,*(undefined8 *)PTR__kSecAttrSynchronizable_1021e1b50,uVar9);
  if (param_7 != (undefined8 *)0x0) {
    _CFDictionaryAddValue(lVar4,*(undefined8 *)PTR__kSecReturnData_1021e1bb0,uVar9);
  }
  local_38 = 0;
  iVar2 = _SecItemCopyMatching(lVar4,&local_38);
  lVar8 = local_38;
  if (iVar2 == 0) {
    if (local_38 == 0) {
      uVar12 = 0;
      goto LAB_100a5045a;
    }
    iVar2 = _CFArrayGetCount(local_38);
    if (iVar2 < 1) {
      uVar12 = 0;
    }
    else {
      uVar9 = *(undefined8 *)PTR__kSecAttrServer_1021e1b48;
      lVar10 = 0;
      lVar11 = 0;
      do {
        lVar5 = _CFArrayGetValueAtIndex(lVar8,lVar10);
        lVar6 = _CFDictionaryGetValue(lVar5,uVar9);
        if (lVar6 != 0) {
          lVar7 = _CFStringCompare(lVar6,param_2,1);
          if (lVar7 == 0) break;
          lVar7 = _CFStringGetLength(param_3);
          if (lVar7 != 0) {
            cVar1 = _CFStringHasSuffix(lVar6,param_3);
            if (cVar1 == '\0') {
              lVar5 = lVar11;
            }
            if (lVar11 == 0) {
              lVar11 = lVar5;
            }
          }
        }
        lVar10 = lVar10 + 1;
        lVar5 = lVar11;
      } while (lVar10 < iVar2);
      if (lVar5 == 0) {
        uVar12 = 0;
      }
      else {
        if (param_5 != (undefined4 *)0x0) {
          uVar3 = FUN_100a50890(lVar5);
          *param_5 = uVar3;
        }
        if (param_7 != (undefined8 *)0x0) {
          lVar8 = _CFDictionaryGetValue(lVar5,*(undefined8 *)PTR__kSecValueData_1021e1bb8);
          if (lVar8 == 0) {
            uVar12 = 0;
            FUN_100df99c0("","VmCliPasswordClient",0,"No kSecValueData in record");
            goto LAB_100a5044c;
          }
          uVar9 = _CFDataCreateCopy(0,lVar8);
          *param_7 = uVar9;
        }
        uVar12 = 1;
        if (param_6 != (long *)0x0) {
          lVar8 = _CFDictionaryGetValue(lVar5,*(undefined8 *)PTR__kSecAttrCreationDate_1021e1b00);
          if (lVar8 == 0) {
            uVar12 = 0;
            FUN_100df99c0("","VmCliPasswordClient",0,"No kSecAttrCreationDate in record");
          }
          else {
            dVar13 = (double)_CFGregorianDateGetAbsoluteTime(0,0x10100000641,0);
            dVar14 = (double)_CFDateGetAbsoluteTime(lVar8);
            dVar14 = dVar14 - dVar13;
            if (DAT_100e1e240 <= dVar14) {
              dVar14 = dVar14 - DAT_100e1e240;
            }
            *param_6 = (long)dVar14 * 10000000;
          }
        }
      }
    }
  }
  else if (iVar2 == -0x62d4) {
    uVar12 = 0;
  }
  else if (iVar2 == -0x84e2) {
    if (DAT_1023139d0 == '\0') {
      FUN_100df99c0("","VmCliPasswordClient",0,"%s, error errSecMissingEntitlement",
                    "getPassword failed");
      DAT_1023139d0 = '\x01';
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    uVar12 = 0;
    FUN_100df99c0("","VmCliPasswordClient",0,"%s, error %d","getPassword failed",iVar2);
  }
LAB_100a5044c:
  if (local_38 != 0) {
    _CFRelease();
  }
LAB_100a5045a:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar12;
}

