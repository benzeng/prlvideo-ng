
undefined8 FUN_10005b160(long param_1,QChar *param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  long local_40;
  undefined8 local_38;
  
  lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1022699d0,&cf_file_data);
  uVar8 = 6;
  if ((lVar3 != 0) &&
     (lVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                        (lVar3,PTR_s_objectForKey__1022699d0,&cf__CFURLAliasData), lVar3 != 0)) {
    uVar8 = _CFDataGetBytePtr(lVar3);
    uVar4 = _CFDataGetLength(lVar3);
    sVar1 = _PtrToHand(uVar8,&local_38,uVar4);
    uVar8 = 3;
    if (sVar1 == 0) {
      local_40 = 0;
      iVar2 = _FSCopyAliasInfo(local_38,0,0,&local_40,0,0);
      lVar3 = local_40;
      if ((iVar2 == 0) && (local_40 != 0)) {
        lVar5 = _CFStringGetLength(local_40);
        lVar6 = _CFStringGetCharactersPtr(lVar3);
        if (lVar6 == 0) {
          pvVar7 = _malloc(lVar5 * 2);
          uVar8 = 3;
          if (pvVar7 != (void *)0x0) {
            uVar8 = 0;
            _CFStringGetCharacters(lVar3,0,lVar5,pvVar7);
            QString::setUnicode(param_2,(int)pvVar7);
            _free(pvVar7);
          }
        }
        else {
          uVar8 = 0;
          QString::setUnicode(param_2,(int)lVar6);
        }
        _CFRelease(local_40);
      }
      else {
        uVar8 = 3;
        if (2 < DAT_10230ffd0) {
          uVar8 = 3;
          FUN_100df99c0("DOCKDEFAULTS","prl_client_app",3,
                        "Dock file tile URL alias path not available, FSCopyAliasInfo() err %i");
        }
      }
      _DisposeHandle(local_38);
    }
  }
  return uVar8;
}

