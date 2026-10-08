
void FUN_1004e42d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  FUN_1004dd9a0();
  *param_1 = &PTR_FUN_102219360;
  param_1[2] = &PTR_FUN_102219590;
  uVar1 = FUN_1003b0ad0(param_2);
  uVar1 = FUN_1003e5be0(uVar1,7,0);
  param_1[9] = uVar1;
  uVar1 = FUN_1004595b0(uVar1,param_2,param_1);
  param_1[10] = uVar1;
  local_30 = (QArrayData *)QString::fromAscii_helper("m_pbRestoreDefaults",0x13);
  lVar2 = qt_qFindChild_helper(uVar1,&local_30,PTR_staticMetaObject_1021e12c0,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_1004e4390;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004e4390:
  if (lVar2 != 0) {
    FUN_1004de5f0(param_1,lVar2);
  }
  return;
}

