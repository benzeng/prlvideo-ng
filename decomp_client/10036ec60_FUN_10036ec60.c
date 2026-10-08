
QString * FUN_10036ec60(QString *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  CTaskGenericId *pCVar3;
  long lVar4;
  undefined **ppuVar5;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  CTaskGenericId local_50 [31];
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_1002450f0(local_50,param_2 + 0x40);
  pCVar3 = (CTaskGenericId *)CTaskManager::instance();
  lVar4 = CTaskManager::getTaskById(pCVar3);
  if (lVar4 != 0) {
    uVar1 = FUN_1002450d0(lVar4);
    switch(uVar1) {
    case 0:
      iVar2 = FUN_100243ee0(lVar4);
      ppuVar5 = &PTR_s_Preparing_to_configure_your_virt_1022701e0;
      if (iVar2 == 0) {
        ppuVar5 = (undefined **)PTR_PTR_1021e1060;
      }
      QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,(int)*ppuVar5);
      QString::operator=(param_1,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
      break;
    case 1:
      QMetaObject::tr((char *)&local_60,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Searching_for_new_devices____1022701a8);
      QString::operator=(param_1,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
      break;
    case 2:
      iVar2 = FUN_100243ee0(lVar4);
      ppuVar5 = &PTR_s_Configuring_virtual_hardware____1022701d8;
      if (iVar2 == 0) {
        ppuVar5 = (undefined **)PTR_PTR_1021e1068;
      }
      QMetaObject::tr((char *)&local_68,PTR_staticMetaObject_1021e1520,(int)*ppuVar5);
      QString::operator=(param_1,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
      break;
    case 3:
      QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                      (int)PTR_s_Installing_the_latest_version_of_1022701b8);
      QString::operator=(param_1,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) break;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
  }
  CTaskGenericId::~CTaskGenericId(local_50);
  return param_1;
}

