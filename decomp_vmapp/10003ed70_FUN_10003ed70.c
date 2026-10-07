
void FUN_10003ed70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *local_88;
  void *local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  cVar2 = FUN_10000c400(param_2);
  if (cVar2 == '\0') {
    uVar4 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar4,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x346,
                  "GetAppPathByBundleId() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar4,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  std::string::insert((ulong)&local_48,(char *)0x0);
  std::string::insert((ulong)&local_48,(char *)0x0);
  uVar7 = 0;
  do {
    iVar1 = (&DAT_100b2d3e0)[uVar7];
    local_68 = (void *)0x0;
    pvStack_60 = (void *)0x0;
    local_58 = 0;
    FUN_1004a2320(&local_48,iVar1,iVar1,5,&local_68);
    if (iVar1 * iVar1 * 4 <= (int)pvStack_60 - (int)local_68) {
      iVar3 = FUN_1004998f0(iVar1,iVar1,0x20);
      local_88 = (undefined1 *)0x0;
      if (iVar3 != 0) {
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        local_88 = operator_new((long)iVar3);
        lVar6 = -(long)iVar3;
        puVar5 = local_88;
        do {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0);
      }
      FUN_100499a40(local_88,local_68,iVar1,iVar1,0x20,1);
      FUN_100040e10(param_3,2,local_88,iVar3);
      if (local_88 != (undefined1 *)0x0) {
        operator_delete(local_88);
      }
    }
    if (local_68 != (void *)0x0) {
      if (pvStack_60 != local_68) {
        pvStack_60 = local_68;
      }
      operator_delete(local_68);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  std::string::~string((string *)&local_48);
  return;
}

