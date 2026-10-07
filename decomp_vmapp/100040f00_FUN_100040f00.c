
long FUN_100040f00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **local_30;
  long local_28;
  
  lVar1 = _CFDictionaryGetTypeID();
  lVar2 = _CFGetTypeID(param_1);
  if (lVar1 != lVar2) {
    uVar3 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar3,"../Tools/SharedHostApplications/Host/WinMicroApp.h",0x100,
                  "object is not a CFDictionary",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar3,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  FUN_10003f520(&local_30,param_2);
  lVar1 = _CFDictionaryGetValue(param_1,local_28);
  if (lVar1 != 0) {
    local_30 = &PTR_FUN_100bef248;
    if (local_28 != 0) {
      _CFRelease(local_28);
    }
    return lVar1;
  }
  uVar3 = ___cxa_allocate_exception(0x60);
  FUN_100516ad0(uVar3,"../Tools/SharedHostApplications/Host/WinMicroApp.h",0x107,
                "CFDictionaryGetValue() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar3,&PTR_vtable_100bc4810,FUN_100516cd0);
}

