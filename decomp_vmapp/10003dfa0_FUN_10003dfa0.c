
void FUN_10003dfa0(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined **local_68;
  void *local_60;
  ulong local_58;
  undefined4 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0xa9) == '\0') {
    uVar5 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar5,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x140,
                  "Shared Mac Applications are disabled",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar5,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  if (param_2[6] != 3) {
    uVar5 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar5,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x14f,
                  "bit_box type WMA_Command::bbt_utf8string expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar5,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  pcVar1 = (char *)(param_2 + 8);
  _strlen(pcVar1);
  QString::fromUtf8_helper((char *)&local_48,(int)pcVar1);
  QString::normalized(&local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003e030;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10003e030:
  if (*(int *)((long)param_2 + (ulong)(uint)param_2[7] + 0x24) != 1) {
    uVar5 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar5,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x155,
                  "bit_box type WMA_Command::bbt_uint32 expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar5,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  uVar2 = *(uint *)(pcVar1 + (ulong)(uint)param_2[7] + 0xc);
  local_68 = &PTR_FUN_10111ce50;
  local_50 = 0;
  local_58 = 0;
  local_60 = (void *)0x0;
  FUN_10003ecc0(param_1,&local_40,&local_68);
  pvVar3 = local_60;
  uVar4 = (uint)local_58;
  if ((uint)local_58 <= uVar2) {
    _memcpy(param_2 + 5,local_60,local_58 & 0xffffffff);
    param_2[2] = 0;
    *param_2 = 0x66;
    param_2[1] = 3;
    param_2[3] = 0x40000000;
    param_2[4] = uVar4;
    local_68 = &PTR_FUN_10111ce50;
    if (pvVar3 != (void *)0x0) {
      _free(pvVar3);
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
    return;
  }
  param_2[2] = 0xffffff99;
  uVar5 = ___cxa_allocate_exception(0x60);
  FUN_100516ad0(uVar5,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x160,
                "too much bit_box data to fit command buffer",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar5,&PTR_vtable_100bc4810,FUN_100516cd0);
}

