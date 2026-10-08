
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_100205ff0(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *local_1c8;
  long local_1c0;
  QArrayData *local_1b8;
  QString local_1b0;
  long local_1a8 [3];
  int local_18c;
  QArrayData *local_188;
  QString local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  CVmEvent local_150 [224];
  QEvent local_70 [32];
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  char *local_38;
  undefined1 local_29;
  
  local_18c = 100000;
  _PrlEvent_GetType(*param_2);
  if ((local_18c == 0x186e4) || (local_18c == 0x1889e)) {
    local_1a8[2] = 0;
    local_1a8[1] = 0;
    local_1a8[0] = *param_2;
    if (local_1a8[0] != 0) {
      _PrlHandle_AddRef();
    }
    FUN_10011d190(local_1a8,local_1a8 + 2,local_1a8 + 1);
    if (local_1a8[0] != 0) {
      _PrlHandle_Free();
    }
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x88);
    }
    FUN_100144c60(uVar5);
  }
  if (local_18c == 0x186e4) {
    uVar5 = 0;
    if ((*(long *)(param_1 + 0x80) != 0) &&
       (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x88);
    }
    QMetaObject::tr((char *)&local_1b8,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Reconfiguring_the_resulting_virt_10226ff08);
    FUN_100144c80(uVar5,&local_1b8);
    if (*(int *)local_1b8 == -1) {
      return 0;
    }
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      UNLOCK();
      if (*(int *)local_1b8 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_1b8,2,8);
    return 0;
  }
  if (local_18c == 0x18897) {
    uVar5 = CMessageManager::instance();
    local_1c0 = *param_2;
    if (local_1c0 != 0) {
      _PrlHandle_AddRef();
    }
    if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
       (*(long *)(param_1 + 0x30) == 0)) {
      local_1c8 = (QArrayData *)QString::fromAscii_helper("",0);
    }
    else {
      FUN_100188480(&local_1c8);
    }
    CMessageManager::showMessageFromServer(uVar5,&local_1c0,&local_1c8,0);
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_29 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002066b3;
      }
      QArrayData::deallocate(local_1c8,2,8);
    }
LAB_1002066b3:
    if (local_1c0 != 0) {
      _PrlHandle_Free();
      return 1;
    }
    return 1;
  }
  if (local_18c != 0x1889e) {
    return 0;
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x80) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x80) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x88);
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    _PrlHandle_AddRef(lVar1);
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QMetaObject::tr((char *)&local_1b0,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Importing_the_data____10226fef8);
  iVar3 = _PrlEvent_GetDataPtr(lVar1,&local_38);
  pcVar2 = local_38;
  if (iVar3 == 0) {
    if (local_38 != (char *)0x0) {
      _strlen(local_38);
    }
    QString::fromUtf8_helper((char *)&local_50,(int)pcVar2);
    QString::normalized(&local_48,&local_50,1,0);
    QString::operator=(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_29 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002062aa;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1002062aa:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002062da;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002062da:
    _PrlBuffer_Free(local_38);
    local_158 = (QArrayData *)local_40.field0_0x0;
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    CVmEvent::CVmEvent(local_150,(QTypedArrayData<unsigned_short> *)&local_158);
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_29 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100206348;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_100206348:
    local_160 = (QArrayData *)QString::fromAscii_helper("device_type",0xb);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_29 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002063ac;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_1002063ac:
    iVar3 = -1;
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      iVar3 = QString::toInt((bool *)&local_168,0);
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_29 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100206412;
        }
        QArrayData::deallocate(local_168,2,8);
      }
    }
LAB_100206412:
    local_170 = (QArrayData *)QString::fromAscii_helper("device_index",0xc);
    lVar6 = CVmEvent::getEventParameter((QTypedArrayData<unsigned_short> *)local_150);
    if (*(int *)local_170 != -1) {
      if (*(int *)local_170 != 0) {
        LOCK();
        *(int *)local_170 = *(int *)local_170 + -1;
        local_29 = *(int *)local_170 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100206476;
      }
      QArrayData::deallocate(local_170,2,8);
    }
LAB_100206476:
    if (lVar6 != 0) {
      CVmEventParameter::getParamValue();
      iVar4 = QString::toInt((bool *)&local_178,0);
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_29 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1002064d9;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1002064d9:
      if ((iVar3 == 6) && (-1 < iVar4)) {
        QMetaObject::tr((char *)&local_188,PTR_staticMetaObject_1021e1520,
                        (int)PTR_s_Importing_Hard_Disk__1____10226ff00);
        QString::arg(&local_180,&local_188,(long)(iVar4 + 1),0,10,0x20);
        QString::operator=(&local_1b0,&local_180);
        if (*(int *)local_180.field0_0x0 != -1) {
          if (*(int *)local_180.field0_0x0 != 0) {
            LOCK();
            *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
            local_29 = *(int *)local_180.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10020657f;
          }
          QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
        }
LAB_10020657f:
        if (*(int *)local_188 != -1) {
          if (*(int *)local_188 != 0) {
            LOCK();
            *(int *)local_188 = *(int *)local_188 + -1;
            local_29 = *(int *)local_188 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1002065b5;
          }
          QArrayData::deallocate(local_188,2,8);
        }
      }
    }
LAB_1002065b5:
    QEvent::~QEvent(local_70);
    CVmEventBase::~CVmEventBase((CVmEventBase *)local_150);
  }
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002065fa;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002065fa:
  FUN_100144c80(uVar5,&local_1b0);
  if (*(int *)local_1b0.field0_0x0 != -1) {
    if (*(int *)local_1b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_1b0.field0_0x0 = *(int *)local_1b0.field0_0x0 + -1;
      local_29 = *(int *)local_1b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10020663f;
    }
    QArrayData::deallocate((QArrayData *)local_1b0.field0_0x0,2,8);
  }
LAB_10020663f:
  if (lVar1 != 0) {
    _PrlHandle_Free(lVar1);
  }
  return 0;
}

