
undefined8 FUN_100a304c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long ***ppplVar1;
  long ****pppplVar2;
  int iVar3;
  long lVar4;
  long ****pppplVar5;
  long **local_50;
  undefined8 local_48;
  long ***local_40;
  long ***local_38;
  long local_30;
  
  lVar4 = _CFStringCompare(param_3,*(undefined8 *)PTR__kUTTypeFileURL_1021e1bf8,0);
  if (lVar4 == 0) {
    FUN_100a301e0(param_1,param_2);
  }
  else {
    local_30 = 0;
    local_40 = (long ***)&local_40;
    local_38 = (long ***)&local_40;
    iVar3 = _PasteboardGetItemIdentifier(*param_2,1,&local_48);
    if (iVar3 == 0) {
      local_50 = (long **)0x0;
      iVar3 = _PasteboardCopyItemFlavorData(*param_2,local_48,param_3,&local_50);
      if (iVar3 == 0) {
        pppplVar5 = operator_new(0x18);
        pppplVar5[2] = (long ***)local_50;
        if ((long ***)local_50 != (long ***)0x0) {
          _CFRetain();
        }
        pppplVar5[1] = (long ***)&local_40;
        *pppplVar5 = local_40;
        local_40[1] = (long **)pppplVar5;
        local_30 = local_30 + 1;
        local_40 = (long ***)pppplVar5;
        FUN_100a32cd0(param_1,&local_40);
      }
      else {
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("CPTOOL","CPInterceptor",1,
                        "PasteboardCopyItemFlavorData failed with status=%d",iVar3);
        }
        FUN_100a32cd0(param_1,&local_40);
      }
      if ((long ***)local_50 != (long ***)0x0) {
        _CFRelease();
      }
    }
    else {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("CPTOOL","CPInterceptor",1,"PasteboardGetItemIdentifier with status=%d");
      }
      FUN_100a32cd0(param_1,&local_40);
    }
    if (local_30 != 0) {
      ppplVar1 = (long ***)*local_38;
      ppplVar1[1] = local_40[1];
      *local_40[1] = (long *)ppplVar1;
      local_30 = 0;
      pppplVar5 = (long ****)local_38;
      while (pppplVar5 != &local_40) {
        pppplVar2 = (long ****)pppplVar5[1];
        if (pppplVar5[2] != (long ***)0x0) {
          _CFRelease();
        }
        operator_delete(pppplVar5);
        pppplVar5 = pppplVar2;
      }
    }
  }
  return param_1;
}

