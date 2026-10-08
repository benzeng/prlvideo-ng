
QString * FUN_1005cb9c0(QString *param_1,undefined8 param_2,undefined8 *param_3,QString *param_4)

{
  QArrayData *pQVar1;
  char cVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  long lVar4;
  int iVar5;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  pQVar3 = (QTypedArrayData<unsigned_short> *)*param_3;
  param_1->field0_0x0 = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
    pQVar3 = (QTypedArrayData<unsigned_short> *)*param_3;
  }
  if (*(int *)(pQVar3 + 4) == 0) {
    return param_1;
  }
  if (*(int *)(param_4->field0_0x0 + 4) == 0) {
    return param_1;
  }
  QFileInfo::QFileInfo(local_40,param_4);
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    pQVar1 = local_48;
    lVar4 = *(long *)(local_48 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",3,"Start name \'%s\', target folder: \'%s\'",pQVar1 + lVar4,
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cbab7;
      }
      QArrayData::deallocate(local_50,1,8);
    }
LAB_1005cbab7:
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cbae7;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_1005cbae7:
  cVar2 = QFileInfo::exists();
  if ((cVar2 != '\0') || (lVar4 = FUN_10015d0a0(param_2,param_3), lVar4 != 0)) {
    local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    iVar5 = 0;
    do {
      if (iVar5 == 0) {
        local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      }
      else {
        QString::number((int)&local_70,iVar5);
        QString::fromUtf8_helper((char *)&local_68,0x1e31adc);
        QString::append(&local_68);
      }
      local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_3;
      if (1 < *(int *)local_60.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
        local_31 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_60);
      QString::operator=(&local_58,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cbbe0;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1005cbbe0:
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cbc10;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1005cbc10:
      if ((iVar5 != 0) && (*(int *)local_70 != -1)) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cbc50;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1005cbc50:
      cVar2 = FUN_1005cbf40(param_2,param_4,&local_58);
      if (cVar2 != '\0') {
        QString::operator=(param_1,&local_58);
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10000);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005cbcbb;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1005cbcbb:
  QFileInfo::~QFileInfo(local_40);
  return param_1;
}

