
undefined8 * FUN_10003fbb0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _CFURLCreateFromFSRef(0);
  if (lVar1 == 0) {
    uVar3 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar3,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x2c1,
                  "CFURLCreateFromFSRef() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar3,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  lVar2 = _CFBundleCopyInfoDictionaryInDirectory(lVar1);
  *param_1 = &PTR_FUN_100bef2a8;
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    _CFRelease(lVar1);
    return param_1;
  }
  uVar3 = ___cxa_allocate_exception(0x60);
  FUN_100516ad0(uVar3,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x2c9,
                "CFBundleCopyInfoDictionaryInDirectory() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar3,&PTR_vtable_100bc4810,FUN_100516cd0);
}

