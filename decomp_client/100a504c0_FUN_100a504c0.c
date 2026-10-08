
undefined1 FUN_100a504c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  
  lVar3 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                     PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
  _CFDictionarySetValue
            (lVar3,*(undefined8 *)PTR__kSecClass_1021e1b60,
             *(undefined8 *)PTR__kSecClassInternetPassword_1021e1b68);
  _CFDictionarySetValue(lVar3,*(undefined8 *)PTR__kSecAttrAccount_1021e1af8,param_3);
  _CFDictionaryAddValue(lVar3,*(undefined8 *)PTR__kSecAttrProtocol_1021e1b10,param_1);
  _CFDictionarySetValue(lVar3,*(undefined8 *)PTR__kSecAttrServer_1021e1b48,param_2);
  _CFDictionaryAddValue
            (lVar3,*(undefined8 *)PTR__kSecAttrAccessGroup_1021e1af0,
             &cf_4C6364ACXT_com_parallels_desktop_passwords);
  uVar1 = *(undefined8 *)PTR__kCFBooleanTrue_1021e18e0;
  _CFDictionaryAddValue(lVar3,*(undefined8 *)PTR__kSecAttrSynchronizable_1021e1b50,uVar1);
  _CFDictionaryAddValue(lVar3,*(undefined8 *)PTR__kSecReturnAttributes_1021e1ba8,uVar1);
  _CFDictionaryAddValue(lVar3,*(undefined8 *)PTR__kSecReturnData_1021e1bb0,uVar1);
  iVar2 = _SecItemDelete(lVar3);
  uVar4 = 1;
  if (iVar2 != 0) {
    if ((iVar2 == -0x84e2) && (DAT_1023139d0 == '\0')) {
      FUN_100df99c0("","VmCliPasswordClient",0,"%s, error errSecMissingEntitlement",
                    "delPassword failed");
      DAT_1023139d0 = '\x01';
    }
    uVar4 = 0;
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return uVar4;
}

