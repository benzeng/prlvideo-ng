
void FUN_100075a90(QWidget *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_60;
  QVariant local_58;
  QVariant local_48;
  AnonymousUnion0 local_38;
  undefined1 local_29;
  
  QObject::property((char *)&local_48);
  QVariant::toStringList();
  QVariant::~QVariant(&local_48);
  FUN_1000341d0(&local_38,param_2);
  QVariant::QVariant(&local_58,(QStringList *)&local_38.field0);
  QObject::setProperty((char *)param_1,(QVariant *)"restorableProperties");
  QVariant::~QVariant(&local_58);
  QString::toLatin1();
  QObject::setProperty((char *)param_1,(QVariant *)(local_60 + *(long *)(local_60 + 0x10)));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100075b57;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100075b57:
  uVar3 = MacUtils::getWindowRef(param_1);
  cVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (uVar3,PTR_s_respondsToSelector__102269d98,
                     PTR_s_invalidateRestorableState_102269e78);
  if (cVar2 != '\0') {
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (uVar3,PTR_s_performSelector__102269300,PTR_s_invalidateRestorableState_102269e78);
  }
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
    iVar1 = *(int *)(local_38.field1 + 0xc);
    if (iVar1 != *(int *)(local_38.field1 + 8)) {
      lVar6 = (long)*(int *)(local_38.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = (Data *)(local_38.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar5 == 0) {
LAB_100075c00:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar4;
            goto LAB_100075c00;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)local_38.field1);
  }
  return;
}

