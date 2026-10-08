
void FUN_1007d32b0(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  QString local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QString local_90;
  QVariant local_88;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar3 = (undefined8 *)QObject::sender();
  puVar2 = PTR_shared_null_1021e1288;
  if ((puVar3 == (undefined8 *)0x0) || ((*(byte *)(puVar3[1] + 0x20) & 1) == 0)) {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    goto LAB_1007d372c;
  }
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QObject::objectName();
  QString::operator=(&local_58,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d333f;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007d333f:
  if ((*(int *)(local_58.field0_0x0 + 4) == 0) && (lVar4 = (**(code **)*puVar3)(puVar3), lVar4 != 0)
     ) {
    (**(code **)*puVar3)(puVar3);
    pcVar5 = (char *)QMetaObject::className();
    if (pcVar5 != (char *)0x0) {
      _strlen(pcVar5);
    }
    QString::fromUtf8_helper((char *)&local_50,(int)pcVar5);
    QString::operator=(&local_58,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007d33d1;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_1007d33d1:
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
  puVar3 = *(undefined8 **)(puVar3[1] + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      QObject::objectName();
      QString::operator=(&local_68,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1007d3449;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_1007d3449:
      if ((*(int *)(local_68.field0_0x0 + 4) == 0) &&
         (lVar4 = (**(code **)*puVar3)(puVar3), lVar4 != 0)) {
        (**(code **)*puVar3)(puVar3);
        pcVar5 = (char *)QMetaObject::className();
        if (pcVar5 != (char *)0x0) {
          _strlen(pcVar5);
        }
        QString::fromUtf8_helper((char *)&local_48,(int)pcVar5);
        QString::operator=(&local_68,&local_48);
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d34e0;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
      }
LAB_1007d34e0:
      if (*(int *)(local_68.field0_0x0 + 4) != 0) {
        QObject::property((char *)&local_88);
        QVariant::toString();
        iVar1 = *(int *)(local_78 + 4);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d3541;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1007d3541:
        QVariant::~QVariant(&local_88);
        if (iVar1 != 0) {
          QObject::property((char *)&local_a8);
          QVariant::toString();
          QString::fromUtf8_helper((char *)&local_90,0x1e18c0a);
          QString::append(&local_90);
          QString::append(&local_68);
          if (*(int *)local_90.field0_0x0 != -1) {
            if (*(int *)local_90.field0_0x0 != 0) {
              LOCK();
              *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
              local_31 = *(int *)local_90.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007d35df;
            }
            QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
          }
LAB_1007d35df:
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1007d3615;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1007d3615:
          QVariant::~QVariant(&local_a8);
        }
        local_b0.field0_0x0 = local_68.field0_0x0;
        if (1 < *(int *)local_68.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_40,0x1e18c0a);
        QString::append(&local_b0);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d3690;
          }
          QArrayData::deallocate(local_40,2,8);
        }
LAB_1007d3690:
        QString::insert((int)&local_58,(QChar *)0x0,
                        (int)*(undefined8 *)(local_b0.field0_0x0 + 0x10) + (int)local_b0.field0_0x0)
        ;
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1007d36e2;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
      }
LAB_1007d36e2:
      puVar3 = *(undefined8 **)(puVar3[1] + 0x10);
    } while (puVar3 != (undefined8 *)0x0);
  }
  FUN_1007d3200();
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007d372c;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1007d372c:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}

