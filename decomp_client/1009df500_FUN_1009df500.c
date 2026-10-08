
void FUN_1009df500(long *param_1)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 == 0) {
    FUN_100df99c0("","PasswordEncryption",0,"ASSERT( %s ) occured in %s:%d [%s]","m_itemRef",
                  "CPasswordEncryption.cpp",300,"ChangeGenericPassword");
  }
  lVar2 = param_1[3];
  if (lVar2 == 0) {
    FUN_100df99c0("","PasswordEncryption",0,"ASSERT( %s ) occured in %s:%d [%s]","m_pPasswordBuffer"
                  ,"CPasswordEncryption.cpp",0x12d,"ChangeGenericPassword");
    lVar2 = param_1[3];
  }
  iVar1 = _SecKeychainItemModifyAttributesAndData(*param_1,0,(int)param_1[4],lVar2);
  *(int *)((long)param_1 + 0x24) = iVar1;
  if (iVar1 != 0) {
    FUN_100df99c0("","PasswordEncryption",0,
                  "(!)Error: can\'t modify password entry at keychan with result code %d.",iVar1);
    return;
  }
  return;
}

