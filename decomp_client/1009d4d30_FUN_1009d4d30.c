
void FUN_1009d4d30(void)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  string local_468 [24];
  string local_450;
  char local_44f [15];
  char *local_440;
  undefined1 local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (DAT_102311280 == 0) {
    uVar3 = _CFURLCreateWithFileSystemPath
                      (0,&cf__System_Library_CoreServices_SystemVersion_plist,0,0);
    lVar4 = _CFReadStreamCreateWithFile(0,uVar3);
    _CFRelease(uVar3);
    if (lVar4 != 0) {
      cVar2 = _CFReadStreamOpen(lVar4);
      if (cVar2 == '\0') {
        if (lVar1 == local_38) {
          _CFRelease(lVar4);
          return;
        }
        goto LAB_1009d4f69;
      }
      lVar5 = _CFReadStreamRead(lVar4,local_438,0x400);
      if (lVar5 < 0) {
LAB_1009d4e1b:
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        do {
          if (lVar5 == 0) goto LAB_1009d4e45;
          lVar6 = lVar8;
          if (lVar8 == 0) {
            lVar6 = _CFDataCreateMutable(0,0);
          }
          _CFDataAppendBytes(lVar6,local_438,lVar5);
          lVar5 = _CFReadStreamRead(lVar4,local_438,0x400);
          lVar8 = lVar6;
        } while (-1 < lVar5);
        lVar8 = 0;
        if (lVar6 != 0) {
          _CFRelease(lVar6);
          goto LAB_1009d4e1b;
        }
      }
LAB_1009d4e45:
      _CFReadStreamClose(lVar4);
      _CFRelease(lVar4);
      if (lVar8 != 0) {
        lVar4 = _CFPropertyListCreateWithData(0,lVar8,0,0,0);
        _CFRelease(lVar8);
        if (lVar4 != 0) {
          uVar3 = _CFDictionaryGetValue(lVar4,&cf_ProductBuildVersion);
          uVar7 = _CFDictionaryGetValue(lVar4,&cf_ProductVersion);
          FUN_1009d9840(&local_450,uVar3);
          FUN_1009d9840(local_468,uVar7);
          _CFRelease(lVar4);
          if (((byte)local_450 & 1) == 0) {
            local_440 = local_44f;
          }
          _strlcpy(&DAT_102311270,local_440,0x10);
          DAT_102311280 = FUN_1009d9930(local_468,0);
          DAT_102311284 = FUN_1009d9930(local_468,1);
          DAT_102311288 = FUN_1009d9930(local_468,2);
          std::string::~string(local_468);
          std::string::~string(&local_450);
        }
      }
    }
  }
  if (lVar1 == local_38) {
    return;
  }
LAB_1009d4f69:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

