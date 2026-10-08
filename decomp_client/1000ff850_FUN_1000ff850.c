
undefined8 FUN_1000ff850(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  lVar2 = _CFBundleGetMainBundle();
  if (lVar2 == 0) {
    if (DAT_10230ffd0 < 1) {
      return 3;
    }
    pcVar8 = "CFBundleGetMainBundle() err";
LAB_1000ff95a:
    FUN_100df99c0("SGAC","prl_client_app",1,pcVar8);
    return 3;
  }
  lVar2 = _CFBundleCopyBundleURL(lVar2);
  if (lVar2 == 0) {
    if (DAT_10230ffd0 < 1) {
      return 3;
    }
    pcVar8 = "CFBundleCopyBundleURL() err";
    goto LAB_1000ff95a;
  }
  lVar3 = _CFURLCreateCopyAppendingPathComponent
                    (0,lVar2,&cf_Contents_Resources_SharedAppGroupBridge,1);
  if (lVar3 == 0) {
    uVar6 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",1,"CFURLCreateCopyAppendingPathComponent() err");
    }
    goto LAB_1000ffab1;
  }
  lVar4 = _CFURLCopyFileSystemPath(lVar3,0);
  if (lVar4 == 0) {
    uVar6 = 3;
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("SGAC","prl_client_app",1,"CFURLCopyFileSystemPath() err");
    }
  }
  else {
    lVar5 = _CFStringGetCStringPtr(lVar4,0x8000100);
    if (lVar5 == 0) {
      uVar6 = _CFStringGetLength(lVar4);
      lVar5 = _CFStringGetMaximumSizeForEncoding(uVar6,0x8000100);
      pvVar7 = _malloc(lVar5 + 1U);
      uVar9 = 4;
      if (pvVar7 != (void *)0x0) {
        cVar1 = _CFStringGetCString(lVar4,pvVar7,lVar5 + 1U,0x8000100,4);
        if (cVar1 != '\0') {
          std::string::assign(param_1);
          _free(pvVar7);
          uVar6 = 0;
          goto LAB_1000ffaa1;
        }
        _free(pvVar7);
        uVar9 = 7;
      }
      uVar6 = 3;
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",1,"copyCFStringToStdString() err %i",uVar9);
      }
    }
    else {
      uVar6 = 0;
      std::string::assign(param_1);
    }
LAB_1000ffaa1:
    _CFRelease(lVar4);
  }
  _CFRelease(lVar3);
LAB_1000ffab1:
  _CFRelease(lVar2);
  return uVar6;
}

