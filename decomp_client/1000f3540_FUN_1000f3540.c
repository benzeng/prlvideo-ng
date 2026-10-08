
undefined8 FUN_1000f3540(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 local_438 [1024];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  lVar4 = _CFBundleGetMainBundle();
  if (lVar4 == 0) {
    uVar7 = 3;
    if (DAT_10230ffd0 < 1) goto LAB_1000f36c2;
    pcVar6 = "CFBundleGetMainBundle() err";
  }
  else {
    lVar4 = _CFBundleCopyBundleURL(lVar4);
    if (lVar4 != 0) {
      uVar7 = 0;
      lVar5 = _CFURLCreateCopyAppendingPathComponent
                        (0,lVar4,&cf_Contents_Applications_ParallelsLink_app,1);
      if (lVar5 == 0) {
        uVar7 = 3;
        if (0 < DAT_10230ffd0) {
          FUN_100df99c0("SGAC","prl_client_app",1,"CFURLCreateCopyAppendingPathComponent() err");
        }
      }
      else {
        iVar3 = _LSRegisterURL(lVar5,0);
        if (iVar3 != 0) {
          cVar2 = _CFURLGetFileSystemRepresentation(lVar5,1,local_438,0x400);
          if (cVar2 == '\0') {
            local_438[0] = 0;
          }
          if (0 < DAT_10230ffd0) {
            FUN_100df99c0("SGAC","prl_client_app",1,"LSRegisterURL() err %i, path=\"%s\"",iVar3,
                          local_438);
          }
          uVar7 = 3;
        }
        _CFRelease(lVar5);
      }
      _CFRelease(lVar4);
      goto LAB_1000f36c2;
    }
    uVar7 = 3;
    if (DAT_10230ffd0 < 1) goto LAB_1000f36c2;
    pcVar6 = "CFBundleCopyBundleURL() err";
  }
  uVar7 = 3;
  FUN_100df99c0("SGAC","prl_client_app",1,pcVar6);
LAB_1000f36c2:
  if (lVar1 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

