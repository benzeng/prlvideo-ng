
void FUN_1000c5610(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_100deef90(param_2);
  lVar3 = _UTTypeCreatePreferredIdentifierForTag
                    (*(undefined8 *)PTR__kUTTagClassFilenameExtension_1021e1bd8,lVar2,
                     *(undefined8 *)PTR__kUTTypeData_1021e1bf0);
  iVar1 = _LSSetDefaultRoleHandlerForContentType(lVar3,0xffffffff,*param_1);
  if (iVar1 == 0) {
    _LSSetHandlerOptionsForContentType(lVar3,1);
  }
  else if (0 < DAT_10230ffd0) {
    FUN_100df99c0("SGAC","prl_client_app",1,
                  "LSSetDefaultRoleHandlerForContentType() failed with error %d",iVar1);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (lVar2 != 0) {
    _CFRelease(lVar2);
    return;
  }
  return;
}

