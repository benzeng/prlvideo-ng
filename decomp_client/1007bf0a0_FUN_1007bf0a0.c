
void FUN_1007bf0a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1007bf8a0(param_1,1);
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001547d0(uVar1,param_1 + 0x30);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get server instance.");
    return;
  }
  lVar2 = FUN_10015a340(lVar2);
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1007c2220(param_1,*(undefined8 *)(lVar2 + 0x160),&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf132;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007bf132:
  uVar1 = *(undefined8 *)(lVar2 + 0x188);
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,(int)PTR_s_Printer_10226e7a0);
  FUN_1007c1750(param_1,uVar1,&local_40,param_2,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007bf1a2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1007bf1a2:
  FUN_1007c2b80(param_1);
  return;
}

