
/* WARNING: Removing unreachable block (ram,0x00010003e3be) */
/* WARNING: Removing unreachable block (ram,0x00010003e486) */

void FUN_10003e2f0(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  string local_40 [24];
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    uVar1 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar1,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x173,
                  "Shared Mac Applications are disabled",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar1,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  if (param_2[6] == 3) {
    _strlen((char *)(param_2 + 8));
    std::string::__init((char *)local_40,(ulong)(param_2 + 8));
    if (*(int *)((long)param_2 + (ulong)(uint)param_2[7] + 0x24) == 1) {
      FUN_10003ed70();
      _memcpy(param_2 + 5,(void *)0x0,0);
      param_2[2] = 0;
      *param_2 = 0x67;
      param_2[1] = 3;
      param_2[3] = 0x40000000;
      param_2[4] = 0;
      std::string::~string(local_40);
      return;
    }
    uVar1 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar1,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x184,
                  "bit_box type WMA_Command::bbt_uint32 expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar1,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  uVar1 = ___cxa_allocate_exception(0x60);
  FUN_100516ad0(uVar1,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x17e,
                "bit_box type WMA_Command::bbt_utf8string expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar1,&PTR_vtable_100bc4810,FUN_100516cd0);
}

