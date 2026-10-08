
QString * FUN_100710060(QString *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e15e8;
  puVar2 = PTR_shared_null_1021e1288;
  local_50 = PTR_shared_null_1021e1288;
  local_58 = PTR_shared_null_1021e1288;
  local_60 = PTR_shared_null_1021e15e8;
  FUN_1005819a0(param_1,&local_50,&local_58,&local_60);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007100e2;
    }
    FUN_1005596c0(&local_60,puVar3 + (long)*(int *)(puVar3 + 8) * 8 + 0x10,
                  puVar3 + (long)*(int *)(puVar3 + 0xc) * 8 + 0x10);
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
LAB_1007100e2:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 == 0) {
LAB_1007100ff:
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
    else {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1007100ff;
    }
    if (*(int *)puVar2 != -1) {
      if (*(int *)puVar2 != 0) {
        LOCK();
        *(int *)puVar2 = *(int *)puVar2 + -1;
        local_31 = *(int *)puVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100710148;
      }
      QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
    }
  }
LAB_100710148:
  lVar1 = *param_2;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_Windows_102274b40,0xffffffff,1);
  if (iVar4 == 0) {
    FUN_100710490(param_1);
    return param_1;
  }
  lVar1 = *param_2;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_Linux_102274b48,0xffffffff,1);
  if (iVar4 == 0) {
    FUN_100712630(param_1);
    return param_1;
  }
  lVar1 = *param_2;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_Mac_OS_X_102274b50,0xffffffff,1);
  if (iVar4 == 0) {
    FUN_100712fd0(param_1);
    return param_1;
  }
  lVar1 = *param_2;
  iVar4 = QString::compare_helper
                    (*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),
                     PTR_s_Generic_102274b58,0xffffffff,1);
  if (iVar4 != 0) {
    FUN_100df99c0("","prl_client_app",0,"Invalid base profile id.");
    return param_1;
  }
  FUN_100714cc0(param_1);
  puVar2 = PTR_s_Generic_102274b58;
  if (PTR_s_Generic_102274b58 != (undefined *)0x0) {
    _strlen(PTR_s_Generic_102274b58);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)puVar2);
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007102b2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007102b2:
  puVar2 = PTR_s_Generic_102274b58;
  if (PTR_s_Generic_102274b58 != (undefined *)0x0) {
    _strlen(PTR_s_Generic_102274b58);
  }
  QString::fromUtf8_helper((char *)&local_48,(int)puVar2);
  QString::operator=(param_1 + 1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

