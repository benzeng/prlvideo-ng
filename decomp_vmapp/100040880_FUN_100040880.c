
void FUN_100040880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  QArrayData *local_70;
  QString local_68;
  undefined1 local_59;
  char local_58 [40];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  cVar2 = _CFStringGetCString(param_2,local_58,0x20,0x8000100);
  if (cVar2 == '\0') {
    uVar4 = ___cxa_allocate_exception(0x60);
    pcVar5 = "CFStringGetCString() failed";
    uVar6 = 0x36e;
    goto LAB_100040a6b;
  }
  _strlen(local_58);
  QString::fromUtf8_helper((char *)&local_70,(int)local_58);
  QString::normalized(&local_68,&local_70,1,0);
  cVar2 = operator==(&local_68,(QString *)&DAT_1011b6290);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_59 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100040934;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100040934:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_59 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_59) goto LAB_100040964;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100040964:
  if (cVar2 == '\0') {
    sVar3 = _strlen(local_58);
    FUN_100040e10(param_3,3,local_58,(int)sVar3 + 1);
    if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  uVar4 = ___cxa_allocate_exception(0x60);
  pcVar5 = "wild extension discarded";
  uVar6 = 0x372;
LAB_100040a6b:
  FUN_100516ad0(uVar4,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",uVar6,pcVar5,
                DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar4,&PTR_vtable_100bc4810,FUN_100516cd0);
}

