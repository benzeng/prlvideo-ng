
undefined8 * FUN_10003f520(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  QArrayData *local_28;
  
  QString::toUtf8();
  lVar1 = _CFStringCreateWithCString(0,local_28 + *(long *)(local_28 + 0x10),0x8000100);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_10003f57e;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10003f57e:
  if (lVar1 == 0) {
    uVar2 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar2,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x228,
                  "CFStringCreateWithCharacters() failed",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar2,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  *param_1 = &PTR_FUN_100bef248;
  param_1[1] = lVar1;
  return param_1;
}

