
void FUN_10003e550(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  char cVar5;
  ostream *poVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined **local_68;
  void *local_60;
  ulong local_58;
  undefined4 local_50;
  string local_48 [24];
  id local_30 [8];
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    uVar7 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar7,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x1a2,
                  "Shared Mac Applications are disabled",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  if (param_2[6] != 3) {
    uVar7 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar7,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x1ad,
                  "bit_box type WMA_Command::bbt_utf8string expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  pcVar1 = (char *)(param_2 + 8);
  _strlen(pcVar1);
  std::string::__init((char *)local_48,(ulong)pcVar1);
  if (*(int *)((long)param_2 + (ulong)(uint)param_2[7] + 0x24) != 1) {
    uVar7 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar7,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x1b3,
                  "bit_box type WMA_Command::bbt_uint32 expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar7,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  uVar2 = *(uint *)(pcVar1 + (ulong)(uint)param_2[7] + 0xc);
  local_68 = &PTR_FUN_10111ce50;
  local_50 = 0;
  local_58 = 0;
  local_60 = (void *)0x0;
  FUN_10003f050(param_1,local_48,&local_68);
  pvVar3 = local_60;
  uVar4 = (uint)local_58;
  if ((uint)local_58 <= uVar2) {
    _memcpy(param_2 + 5,local_60,local_58 & 0xffffffff);
    param_2[2] = 0;
    *param_2 = 0x68;
    param_2[1] = 3;
    param_2[3] = 0x40000000;
    param_2[4] = uVar4;
    local_68 = &PTR_FUN_10111ce50;
    if (pvVar3 != (void *)0x0) {
      _free(pvVar3);
    }
    std::string::~string(local_48);
    return;
  }
  param_2[2] = 0xffffff99;
  poVar6 = (ostream *)FUN_100041ea0(PTR_cout_100ba21a8,"Av: ",4);
  uVar7 = std::ostream::operator<<(poVar6,uVar2);
  poVar6 = (ostream *)FUN_100041ea0(uVar7,"; need: ",8);
  cVar5 = std::ostream::operator<<(poVar6,uVar4);
  std::ios_base::getloc();
  plVar8 = (long *)std::locale::use_facet(local_30);
  (**(code **)(*plVar8 + 0x38))(plVar8,10);
  std::locale::~locale((locale *)local_30);
  std::ostream::put(cVar5);
  std::ostream::flush();
  uVar7 = ___cxa_allocate_exception(0x60);
  FUN_100516ad0(uVar7,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x1bf,
                "too much bit_box data to fit command buffer",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar7,&PTR_vtable_100bc4810,FUN_100516cd0);
}

