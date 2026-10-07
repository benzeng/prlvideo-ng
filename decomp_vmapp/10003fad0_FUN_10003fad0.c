
undefined8 * FUN_10003fad0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_28;
  long local_20;
  
  FUN_10003f840(&local_28,param_2,0x706c7374,0);
  lVar1 = _CFPropertyListCreateFromXMLData(0,local_20,0,0);
  if (lVar1 != 0) {
    *param_1 = &PTR_FUN_100bef2a8;
    param_1[1] = lVar1;
    local_28 = &PTR_FUN_100bef278;
    if (local_20 != 0) {
      _CFRelease(local_20);
    }
    return param_1;
  }
  uVar2 = ___cxa_allocate_exception(0x60);
  FUN_100516ad0(uVar2,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x2ab,
                "CFPropertyListCreateFromXMLData() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar2,&PTR_vtable_100bc4810,FUN_100516cd0);
}

