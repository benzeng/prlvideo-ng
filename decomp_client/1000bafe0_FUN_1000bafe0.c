
int FUN_1000bafe0(long param_1,bool param_2,int param_3,long *param_4)

{
  int iVar1;
  QStringList *pQVar2;
  undefined1 local_60 [24];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar1 = FUN_1000bb2a0(param_1,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000bb043;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000bb043:
  if (iVar1 != 2) {
    return iVar1;
  }
  if (param_3 == -1) {
    return 2;
  }
  if (param_3 != 0) {
    iVar1 = FUN_1000bb4d0(param_1);
    return iVar1;
  }
  if (*(int *)(*param_4 + 0xc) == *(int *)(*param_4 + 8)) {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_To_open_a_file_from_your_virtual_10226fc80);
  }
  else {
    QMetaObject::tr(local_60 + 0x10,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_To_open_file___1__from_your_virt_10226fc88);
    QString::arg(&local_48,local_60 + 0x10,*param_4 + 0x10 + (long)*(int *)(*param_4 + 8) * 8,0,0x20
                );
    if (*(int *)local_60._16_8_ != -1) {
      if (*(int *)local_60._16_8_ != 0) {
        LOCK();
        *(int *)local_60._16_8_ = *(int *)local_60._16_8_ + -1;
        local_31 = *(int *)local_60._16_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000bb118;
      }
      QArrayData::deallocate((QArrayData *)local_60._16_8_,2,8);
    }
  }
LAB_1000bb118:
  iVar1 = CMessageManager::instance();
  pQVar2 = (QStringList *)FUN_1000b6b00(*(undefined8 *)(param_1 + 0xb0));
  local_60._8_8_ = PTR_shared_null_1021e15e8;
  local_60._0_8_ = PTR_shared_null_1021e15e8;
  FUN_1000341d0(local_60,&local_48);
  CMessageManager::showMessageBox
            (iVar1,(QWidget *)0x3bc9,pQVar2,(QStringList *)(local_60 + 8),(CSlotInfo *)local_60,
             param_2);
  FUN_100039a80(local_60);
  FUN_100039a80(local_60 + 8);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return -3;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,2,8);
  }
  return -3;
}

