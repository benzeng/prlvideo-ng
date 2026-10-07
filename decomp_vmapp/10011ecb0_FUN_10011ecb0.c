
undefined4 FUN_10011ecb0(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  QArrayData *pQVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  pQVar3 = (QArrayData *)QString::fromAscii_helper("login_local_cmd_application_mode",0x20);
  local_28 = pQVar3;
  uVar1 = FUN_10011d510(param_1,&local_28);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_1a = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_10011ed11;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10011ed11:
  if (uVar1 < 7) {
    uVar2 = *(undefined4 *)((long)&PTR___mh_execute_header_100b32f10 + (long)(int)uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

