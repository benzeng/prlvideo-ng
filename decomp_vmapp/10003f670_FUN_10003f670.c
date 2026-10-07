
undefined8 FUN_10003f670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  QArrayData *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char *local_28;
  undefined1 local_19;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (char *)0x0;
  cVar1 = FUN_10000c400(param_2,&local_38);
  if (cVar1 == '\0') {
    uVar3 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar3,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x255,
                  "GetAppPathByBundleId() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar3,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  pcVar4 = local_28;
  if ((local_38 & 1) == 0) {
    pcVar4 = (char *)((long)&local_38 + 1);
  }
  iVar2 = _FSPathMakeRef(pcVar4,param_3,0);
  if (iVar2 != 0) {
    uVar3 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar3,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x25a,
                  "FSPathMakeRef() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar3,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  if ((local_38 & 1) == 0) {
    pcVar4 = (char *)((long)&local_38 + 1);
LAB_10003f6e5:
    _strlen(pcVar4);
    pcVar5 = pcVar4;
  }
  else {
    pcVar5 = (char *)0x0;
    pcVar4 = local_28;
    if (local_28 != (char *)0x0) goto LAB_10003f6e5;
  }
  QString::fromUtf8_helper((char *)&local_40,(int)pcVar5);
  QString::normalized(param_1,&local_40,1,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10003f73f;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10003f73f:
  std::string::~string((string *)&local_38);
  return param_1;
}

