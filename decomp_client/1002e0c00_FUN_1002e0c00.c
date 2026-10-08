
void FUN_1002e0c00(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Data_conflict *pDVar5;
  long lVar6;
  Data_conflict local_80;
  undefined4 local_78;
  QString local_70;
  QVariant local_68;
  QString local_58;
  QMapNodeBase *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (-1 < param_2) {
    QObject::sender();
    QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1438);
    lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1408);
    QVariant::QVariant(&local_48,(QVariant *)(lVar3 + 0x18));
    iVar2 = QVariant::toInt((bool *)&local_48);
    QVariant::~QVariant(&local_48);
    if (iVar2 != 0) {
      FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,
                    "Failed to query URL descriptor with error: %d",iVar2);
      lVar3 = *param_1;
      param_2 = -0x7ffffff7;
      goto LAB_1002e0e7c;
    }
    CHttpResponseParser::getValues();
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Link",4);
    local_78 = 0x80000000;
    local_80.field7 = 0;
    if (*(long *)(local_50 + 0x10) == 0) {
LAB_1002e0d32:
      lVar4 = 0;
    }
    else {
      lVar3 = *(long *)(local_50 + 0x10);
      lVar6 = 0;
      do {
        while (lVar4 = lVar3, cVar1 = operator<((QString *)(lVar4 + 0x18),&local_70), cVar1 == '\0')
        {
          lVar3 = *(long *)(lVar4 + 8);
          lVar6 = lVar4;
          if (*(long *)(lVar4 + 8) == 0) goto LAB_1002e0d21;
        }
        lVar3 = *(long *)(lVar4 + 0x10);
      } while (*(long *)(lVar4 + 0x10) != 0);
      lVar4 = lVar6;
      if (lVar6 == 0) goto LAB_1002e0d32;
LAB_1002e0d21:
      cVar1 = operator<(&local_70,(QString *)(lVar4 + 0x18));
      if (cVar1 != '\0') goto LAB_1002e0d32;
    }
    pDVar5 = &local_80;
    if (lVar4 != 0) {
      pDVar5 = (Data_conflict *)(lVar4 + 0x20);
    }
    QVariant::QVariant(&local_68,(QVariant *)pDVar5);
    QVariant::toString();
    QVariant::~QVariant(&local_68);
    QVariant::~QVariant((QVariant *)&local_80);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e0d9b;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_1002e0d9b:
    iVar2 = *(int *)(local_58.field0_0x0 + 4);
    if (iVar2 == 0) {
      FUN_100df99c0("[TASK_PROMO]","prl_client_app",0,"Invalid Link from response parameters: %d",
                    param_2);
      (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
    }
    else {
      QString::operator=((QString *)(param_1[3] + 0x10),&local_58);
    }
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e0e26;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1002e0e26:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002e0e6e;
      }
      if (*(long *)(local_50 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(local_50,(int)*(undefined8 *)(local_50 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)local_50);
    }
LAB_1002e0e6e:
    if (iVar2 == 0) {
      return;
    }
  }
  lVar3 = *param_1;
LAB_1002e0e7c:
  (**(code **)(lVar3 + 0xb0))(param_1,param_2);
  return;
}

