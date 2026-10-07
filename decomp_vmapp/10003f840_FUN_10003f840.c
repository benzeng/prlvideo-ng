
undefined8 * FUN_10003f840(undefined8 *param_1,undefined8 param_2,undefined4 param_3,short param_4)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_1008ef550();
  sVar1 = _FSOpenResFile(param_2,1);
  if (sVar1 == -1) {
    uVar6 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar6,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x282,
                  "FSOpenResFile() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar6,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  sVar2 = _CurResFile();
  _UseResFile();
  puVar3 = (undefined8 *)_GetResource(param_3,(int)param_4);
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar6,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x28b,
                  "GetResource() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar6,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  lVar4 = _GetHandleSize(puVar3);
  if (lVar4 < 1) {
    _ReleaseResource(puVar3);
    uVar6 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar6,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x291,
                  "GetHandleSize() returned 0",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar6,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  _HLock(puVar3);
  uVar6 = *puVar3;
  uVar5 = _GetHandleSize(puVar3);
  lVar4 = _CFDataCreate(0,uVar6,uVar5);
  _HUnlock(puVar3);
  _ReleaseResource(puVar3);
  if (lVar4 != 0) {
    *param_1 = &PTR_FUN_100bef278;
    param_1[1] = lVar4;
    if (sVar2 != -1) {
      _UseResFile((int)sVar2);
    }
    if (sVar1 != -1) {
      _CloseResFile((int)sVar1);
    }
    FUN_1008ef5a0();
    return param_1;
  }
  uVar6 = ___cxa_allocate_exception(0x60);
  FUN_100516ad0(uVar6,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x29b,
                "CFDataCreate() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar6,&PTR_vtable_100bc4810,FUN_100516cd0);
}

