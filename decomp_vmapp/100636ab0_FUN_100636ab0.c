
void FUN_100636ab0(long *param_1,QByteArray *param_2,undefined8 *param_3)

{
  QArrayData *pQVar1;
  undefined8 *puVar2;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_19 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    local_48.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels Desktop",0x11);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100636b38;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100636b38:
  QString::toUtf8();
  local_68 = (QArrayData *)QString::fromAscii_helper("problem_report_product(%1,txt)=",0x1f);
  QString::arg(&local_60,&local_68,(long)*(int *)(local_50 + 4),0,10,0x20);
  QString::toUtf8();
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636bba;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100636bba:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636bea;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100636bea:
  local_38 = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_19 = *(int *)local_58 != 0;
    UNLOCK();
  }
  puVar2 = (undefined8 *)QByteArray::append((QByteArray *)&local_38);
  local_70 = (QArrayData *)*puVar2;
  if (1 < *(int *)local_70 + 1U) {
    LOCK();
    *(int *)local_70 = *(int *)local_70 + 1;
    local_19 = *(int *)local_70 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636c58;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100636c58:
  QByteArray::append(param_2);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636c94;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_100636c94:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636cc4;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100636cc4:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636cf4;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100636cf4:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636d24;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100636d24:
  local_78 = (QArrayData *)QString::fromAscii_helper("12.2.1-41615",0xc);
  QString::toUtf8();
  local_98 = (QArrayData *)QString::fromAscii_helper("problem_report_version(%1,txt)=",0x1f);
  QString::arg(&local_90,&local_98,(long)*(int *)(local_80 + 4),0,10,0x20);
  QString::toUtf8();
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_19 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636dcd;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100636dcd:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_19 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636e03;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100636e03:
  local_30 = local_88;
  if (1 < *(int *)local_88 + 1U) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + 1;
    local_19 = *(int *)local_88 != 0;
    UNLOCK();
  }
  puVar2 = (undefined8 *)QByteArray::append((QByteArray *)&local_30);
  local_a0 = (QArrayData *)*puVar2;
  if (1 < *(int *)local_a0 + 1U) {
    LOCK();
    *(int *)local_a0 = *(int *)local_a0 + 1;
    local_19 = *(int *)local_a0 != 0;
    UNLOCK();
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636e74;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100636e74:
  QByteArray::append(param_2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_19 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636eb9;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100636eb9:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_19 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636ee9;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_100636ee9:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636f19;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_100636f19:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636f49;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100636f49:
  local_b8 = (QArrayData *)QString::fromAscii_helper("problem_report_xml(%1,txt)=",0x1b);
  QString::arg(&local_b0,&local_b8,(long)*(int *)(*param_1 + 4),0,10,0x20);
  QString::toUtf8();
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_19 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100636fd2;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100636fd2:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_19 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100637008;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100637008:
  local_28 = local_a8;
  if (1 < *(int *)local_a8 + 1U) {
    LOCK();
    *(int *)local_a8 = *(int *)local_a8 + 1;
    local_19 = *(int *)local_a8 != 0;
    UNLOCK();
  }
  puVar2 = (undefined8 *)QByteArray::append((QByteArray *)&local_28);
  pQVar1 = (QArrayData *)*puVar2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_19 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10063707b;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_10063707b:
  QByteArray::append(param_2);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006370c0;
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1006370c0:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      UNLOCK();
      if (*(int *)local_a8 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
  return;
}

