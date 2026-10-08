
undefined8 FUN_10005b3f0(long param_1,undefined8 param_2)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_31;
  undefined8 local_30;
  
  lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 8),PTR_s_objectForKey__1022699d0,&cf_file_data);
  uVar4 = 6;
  if (lVar2 != 0) {
    lVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (lVar2,PTR_s_objectForKey__1022699d0,&cf__CFURLAliasData);
    if (lVar2 != 0) {
      uVar4 = _CFDataGetBytePtr(lVar2);
      uVar3 = _CFDataGetLength(lVar2);
      sVar1 = _PtrToHand(uVar4,&local_30,uVar3);
      uVar4 = 3;
      if (sVar1 == 0) {
        sVar1 = _FSResolveAliasWithMountFlags(0,local_30,param_2,&local_31,1);
        uVar4 = 10;
        if ((sVar1 != -0x2b) && (sVar1 != -0x23)) {
          if (sVar1 == 0) {
            uVar4 = 0;
          }
          else if (0 < DAT_10230ffd0) {
            FUN_100df99c0("DOCKDEFAULTS","prl_client_app",1,
                          "Dock file tile URL alias path not resolved, FSResolveAliasWithMountFlags() err %i"
                         );
          }
        }
        _DisposeHandle(local_30);
      }
    }
  }
  return uVar4;
}

