
char FUN_100d77620(undefined8 param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  char *pcVar7;
  long local_40;
  undefined8 local_38;
  
  iVar3 = FUN_100d77460(param_1,&local_38);
  if (iVar3 != 0) {
    if (iVar3 == 6) {
      return '\x06';
    }
    if (iVar3 == 0xc) {
      return '\f';
    }
    return '\x03';
  }
  local_40 = 0;
  iVar3 = _FSCopyAliasInfo(local_38,0,0,&local_40,0,0);
  lVar1 = local_40;
  cVar2 = '\x06';
  if (iVar3 == -0x32) goto LAB_100d777d6;
  if (iVar3 == 0) {
    if (local_40 != 0) {
      lVar4 = _CFStringGetCStringPtr(local_40,0x8000100);
      if (lVar4 == 0) {
        uVar5 = _CFStringGetLength(lVar1);
        lVar4 = _CFStringGetMaximumSizeForEncoding(uVar5,0x8000100);
        pvVar6 = _malloc(lVar4 + 1U);
        iVar3 = 4;
        if (pvVar6 != (void *)0x0) {
          cVar2 = _CFStringGetCString(lVar1,pvVar6,lVar4 + 1U,0x8000100);
          iVar3 = 7;
          if (cVar2 != '\0') {
            iVar3 = 0;
            std::string::assign(param_2);
          }
          _free(pvVar6);
        }
      }
      else {
        iVar3 = 0;
        std::string::assign(param_2);
      }
      cVar2 = (iVar3 != 0) * '\x03';
      _CFRelease(local_40);
      goto LAB_100d777d6;
    }
    cVar2 = '\x03';
    if (DAT_10230ffd0 < 1) goto LAB_100d777d6;
    pcVar7 = "FSCopyAliasInfo() err %d (no result), aliasPath=\"%s\"";
    iVar3 = 0;
  }
  else {
    cVar2 = '\x03';
    if (DAT_10230ffd0 < 1) goto LAB_100d777d6;
    pcVar7 = "FSCopyAliasInfo() err %i, aliasPath=\"%s\"";
  }
  cVar2 = '\x03';
  FUN_100df99c0("","MacAlias",1,pcVar7,iVar3,param_1);
LAB_100d777d6:
  _DisposeHandle(local_38);
  return cVar2;
}

