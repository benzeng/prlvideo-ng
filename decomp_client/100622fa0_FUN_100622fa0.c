
void FUN_100622fa0(uint param_1,QStringList *param_2,bool param_3)

{
  AnonymousUnion0 AVar1;
  char cVar2;
  int iVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  long lVar6;
  Data *pDVar7;
  Data *pDVar8;
  undefined8 local_78;
  QVariant local_70;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  local_38.field1 = (Data *)PTR_shared_null_1021e15e8;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  cVar2 = FUN_100d80630(1);
  if (cVar2 == '\0') {
    FUN_1001c74e0(&local_48);
  }
  else {
    QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
  }
  if (*(int *)(local_48 + 4) == 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("",0);
    local_50 = pQVar4;
    FUN_1000341d0(&local_38,&local_50);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006230ba;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_58,0x1e31adc);
    QString::append(&local_58);
    FUN_1000341d0(&local_38,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006230ba;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1006230ba:
  if (param_1 == 0x3c72) {
    uVar5 = FUN_100152280();
    lVar6 = FUN_1001554a0(uVar5);
    if (lVar6 != 0) {
      uVar5 = FUN_10016f500(lVar6);
      FUN_10061abe0(&local_70,uVar5,9);
      local_78 = QVariant::toDate();
      QDate::toString(&local_60,&local_78,4);
      FUN_1000341d0(&local_40,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_29 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10062314e;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10062314e:
      QVariant::~QVariant(&local_70);
    }
  }
  iVar3 = CMessageManager::instance();
  CMessageManager::showMessageBox
            (iVar3,(QWidget *)(ulong)param_1,param_2,(QStringList *)&local_38.field0,
             (CSlotInfo *)&local_40,param_3);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006231ac;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006231ac:
  pDVar8 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100623231;
    }
    iVar3 = *(int *)(local_40 + 0xc);
    if (iVar3 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = local_40 + (long)iVar3 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar4 == 0) {
LAB_100623210:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar7;
            goto LAB_100623210;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_100623231:
  AVar1 = local_38;
  if (*(int *)local_38.field1 != -1) {
    if (*(int *)local_38.field1 != 0) {
      LOCK();
      *(int *)local_38.field1 = *(int *)local_38.field1 + -1;
      UNLOCK();
      if (*(int *)local_38.field1 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar3 = *(int *)(local_38.field1 + 0xc);
    if (iVar3 != *(int *)(local_38.field1 + 8)) {
      lVar6 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar3 * -8;
      pDVar8 = (Data *)(local_38.field1 + (long)iVar3 * 8 + 8);
      do {
        pQVar4 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar4 == 0) {
LAB_1006232a0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar8;
            goto LAB_1006232a0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar1.field1);
  }
  return;
}

