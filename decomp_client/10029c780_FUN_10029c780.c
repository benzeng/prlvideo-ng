
undefined8 FUN_10029c780(long param_1)

{
  code *pcVar1;
  char cVar2;
  QString *pQVar3;
  QArrayData *pQVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  Connection local_130 [8];
  undefined1 local_128 [16];
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  _func_void_Node_ptr *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  code *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  QMetaObject::tr((char *)&local_88,(char *)&PTR_staticMetaObject_102207460,0x1de2eba);
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_10029c110(param_1,&local_88);
  }
  else {
    pQVar3 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (pQVar3 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) {
      pQVar3 = *(QString **)(param_1 + 0x48);
    }
    local_90 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText(pQVar3,&local_88);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_21 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029c832;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_10029c832:
  local_98 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  local_a0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x28);
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_21 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_80,0x1de2ece);
  QString::append(&local_a0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029c8b1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10029c8b1:
  QString::fromUtf8_helper((char *)&local_78,0x1de2ed1);
  QString::append(&local_a0);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029c906;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10029c906:
  if (*(int *)(param_1 + 0x34) < 0) {
    iVar7 = 0x1de2eec;
    if (*(char *)(param_1 + 0x30) != '\0') {
      iVar7 = 0x1de2ee5;
    }
    QString::fromUtf8_helper((char *)&local_70,iVar7);
    QString::append(&local_a0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029ca40;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
  else {
    local_b0 = (QArrayData *)
               QString::fromAscii_helper
                         ("%1 ( http://reports.parallels.com/Reports/Report.aspx?ReportId=%1 )",0x43
                         );
    QString::arg(&local_a8,&local_b0,(long)*(int *)(param_1 + 0x34),0,10,0x20);
    QString::append(&local_a0);
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_21 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029c997;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
LAB_10029c997:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_21 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029ca40;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
  }
LAB_10029ca40:
  QString::fromUtf8_helper((char *)&local_68,0x1eeaa60);
  QString::append(&local_a0);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029ca95;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10029ca95:
  FUN_1001c7340(&local_c8);
  QString::fromUtf8_helper((char *)&local_c0,0x1de2f38);
  QString::append(&local_c0);
  local_b8.field0_0x0 = local_c0.field0_0x0;
  if (1 < *(int *)local_c0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
    local_21 = *(int *)local_c0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_60,0x1eeaa60);
  QString::append(&local_b8);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cb40;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10029cb40:
  QString::append(&local_a0);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_21 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cb89;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_10029cb89:
  if (*(int *)local_c0.field0_0x0 != -1) {
    if (*(int *)local_c0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
      local_21 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cbbf;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
  }
LAB_10029cbbf:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cbf5;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10029cbf5:
  local_d0 = (QArrayData *)QString::fromAscii_helper("content",7);
  pQVar3 = (QString *)FUN_10002c250(&local_98,&local_d0);
  QString::operator=(pQVar3,&local_a0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_21 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cc65;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10029cc65:
  local_d8 = (QArrayData *)QString::fromAscii_helper("email",5);
  pQVar3 = (QString *)FUN_10002c250(&local_98,&local_d8);
  QString::operator=(pQVar3,(QString *)(param_1 + 0x20));
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029ccd2;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_10029ccd2:
  FUN_1001c72e0(&local_e0);
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    QString::number((int)&local_f0,0xc);
    QString::fromUtf8_helper((char *)&local_e8,0x1e31adc);
    QString::append(&local_e8);
    QString::append(&local_e0);
    if (*(int *)local_e8.field0_0x0 != -1) {
      if (*(int *)local_e8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
        local_21 = *(int *)local_e8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029cd7a;
      }
      QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
    }
LAB_10029cd7a:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_21 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029cdb0;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_10029cdb0:
  cVar2 = FUN_100d80630(1);
  if (cVar2 != '\0') {
    pQVar4 = (QArrayData *)QString::fromAscii_helper(" ",1);
    local_100 = pQVar4;
    FUN_100137810(&local_f8,&local_100,PTR_s_Lite_102270a50);
    QString::append(&local_e0);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_21 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029ce43;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_10029ce43:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10029ce6e;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_10029ce6e:
  QString::fromUtf8_helper((char *)&local_58,0x1de2f58);
  QString::append(&local_e0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cec3;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10029cec3:
  QString::fromUtf8_helper((char *)&local_50,0x1de2f61);
  QString::append(&local_e0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cf18;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10029cf18:
  local_108 = (QArrayData *)QString::fromAscii_helper("subject",7);
  pQVar3 = (QString *)FUN_10002c250(&local_98,&local_108);
  QString::operator=(pQVar3,&local_e0);
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cf88;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_10029cf88:
  local_110 = (QArrayData *)QString::fromAscii_helper("name",4);
  pQVar3 = (QString *)FUN_10002c250(&local_98,&local_110);
  QString::operator=(pQVar3,(QString *)(param_1 + 0x18));
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_21 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029cff5;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10029cff5:
  CAbstractTask::setWaitForSubTaskCompletion();
  pvVar5 = operator_new(0x48);
  local_128 = QUuid::createUuid();
  QUuid::toString();
  FUN_10029e150(pvVar5,&local_98,&local_118);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_21 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029d07c;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_10029d07c:
  local_38 = PTR_taskFinished_1021e1300;
  local_30 = 0;
  local_48 = FUN_10029d9f0;
  local_40 = 0;
  puVar6 = operator_new(0x20);
  *puVar6 = 1;
  *(code **)(puVar6 + 2) = FUN_10029df50;
  *(code **)(puVar6 + 4) = FUN_10029d9f0;
  *(undefined8 *)(puVar6 + 6) = 0;
  QObject::connectImpl
            (local_130,pvVar5,&local_38,param_1,&local_48,puVar6,0,0,PTR_staticMetaObject_1021e1308)
  ;
  QMetaObject::Connection::~Connection(local_130);
  CAbstractTask::execute();
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      local_21 = *(int *)local_e0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029d14c;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
LAB_10029d14c:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_21 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029d182;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_10029d182:
  if (*(int *)(local_98 + 0x10) != -1) {
    if (*(int *)(local_98 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_98 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10029d1b7;
    }
    QHashData::free_helper(local_98);
  }
LAB_10029d1b7:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
  return 0;
}

