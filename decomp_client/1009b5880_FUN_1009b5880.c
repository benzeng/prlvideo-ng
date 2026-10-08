
void FUN_1009b5880(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  QString local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if ((int)param_2 != 0x8000000) {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
    local_30 = (QArrayData *)PTR_shared_null_1021e1288;
    FUN_1009b64f0(param_1,param_2,&local_28,&local_30);
    FUN_1009b6410(param_1,&local_28,&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009b5ad1;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_1009b5ad1:
    if (*(int *)local_28 == -1) {
      return;
    }
    local_40 = local_28;
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1009b5d53;
  }
  uVar2 = FUN_1009983c0(param_1);
  cVar1 = FUN_100992bf0(uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_1009983c0(param_1);
    cVar1 = FUN_100992b40(uVar2);
    if (cVar1 != '\0') {
      QMetaObject::tr((char *)&local_98,(char *)&PTR_PTR_102235990,0x1e352b6);
      QString::operator=((QString *)(param_1 + 0x50),&local_98);
      FUN_1009b4cd0(param_1);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_19 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1009b5b8a;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
LAB_1009b5b8a:
      uVar2 = FUN_1009983c0(param_1);
      FUN_1009928c0(uVar2);
      return;
    }
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_The_source_computer_cannot_be_tr_10227e010);
    FUN_100998560(&local_78,param_1);
    QString::arg(&local_68,&local_70,&local_78,0,0x20);
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_The_source_computer_cannot_be_tr_10227e010);
    FUN_100998560(&local_90,param_1);
    QString::arg(&local_80,&local_88,&local_90,0,0x20);
    FUN_1009b6410(param_1,&local_68,&local_80);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_19 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009b5c6c;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1009b5c6c:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_19 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009b5ca2;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1009b5ca2:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_19 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009b5cd2;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1009b5cd2:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_19 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009b5d02;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1009b5d02:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_19 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1009b5d32;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1009b5d32:
    if (*(int *)local_70 == -1) {
      return;
    }
    local_40 = local_70;
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_19 = 0;
    }
    goto LAB_1009b5d53;
  }
  QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s__1_has_detected_that__2_has_a_bu_10227e140);
  FUN_100998560(&local_48,param_1);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  QMetaObject::tr((char *)&local_58,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Please_synchronize_the_versions_a_10227e148);
  FUN_100998560(&local_60,param_1);
  QString::arg(&local_50,&local_58,&local_60,0,0x20);
  FUN_1009b6410(param_1,&local_38,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b5983;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009b5983:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b59b3;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009b59b3:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b59e3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1009b59e3:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b5a13;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1009b5a13:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1009b5a43;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009b5a43:
  if (*(int *)local_40 == -1) {
    return;
  }
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return;
    }
    local_19 = 0;
  }
LAB_1009b5d53:
  QArrayData::deallocate(local_40,2,8);
  return;
}

