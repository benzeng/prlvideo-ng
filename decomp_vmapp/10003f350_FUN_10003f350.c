
void FUN_10003f350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  QArrayData *local_90;
  undefined1 local_81;
  undefined1 local_80 [80];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_10003f670(&local_90,param_2,local_80);
  QMutex::lock();
  lVar2 = DAT_1011c35e0;
  if (DAT_1011c35e0 != 0) {
    DAT_1011c35e8 = DAT_1011c35e8 + 1;
  }
  QMutex::unlock();
  if (lVar2 == 0) {
    uVar4 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar4,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x3f4,
                  "failed to get reference on CFavRunAppsHost",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar4,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  cVar3 = FUN_100044770(lVar2,&local_90,param_3,1);
  if (cVar3 == '\0') {
    uVar4 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar4,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x3f9,
                  "failed to launch application",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar4,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  FUN_1000416d0(&DAT_1011c35d0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_81 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_81) goto LAB_10003f412;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10003f412:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

