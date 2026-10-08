
void FUN_1006e7de0(QObject *param_1,QString *param_2,char param_3)

{
  int iVar1;
  Data *pDVar2;
  QObject *pQVar3;
  QArrayData *pQVar4;
  Data *pDVar5;
  long lVar6;
  undefined4 local_50 [2];
  QString local_48;
  Data *local_40;
  Connection local_38 [15];
  undefined1 local_29;
  
  if (param_3 != '\0') {
    if (DAT_102310920 == (QObject *)0x0) {
      pQVar3 = operator_new(0x50);
      FUN_1001d1080(pQVar3);
      DAT_10226c778 = 1;
      DAT_102310920 = pQVar3;
    }
    QObject::disconnect(DAT_102310920,"2quitCanceled()",param_1,"1onAppQuitCanceled()");
    if (DAT_102310920 == (QObject *)0x0) {
      pQVar3 = operator_new(0x50);
      FUN_1001d1080(pQVar3);
      DAT_10226c778 = 1;
      DAT_102310920 = pQVar3;
    }
    QObject::connect(local_38,DAT_102310920,"2quitCanceled()",param_1,"1onAppQuitCanceled()",0);
    QMetaObject::Connection::~Connection(local_38);
  }
  local_50[0] = 0xffff;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  QString::operator=(&local_48,param_2);
  if (*(int *)(local_48.field0_0x0 + 4) != 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("/Contents/MacOS",0xf);
    QString::append(&local_48);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006e7f21;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_1006e7f21:
  if (DAT_102310920 == (QObject *)0x0) {
    pQVar3 = operator_new(0x50);
    FUN_1001d1080(pQVar3);
    DAT_10226c778 = 1;
    DAT_102310920 = pQVar3;
  }
  FUN_1001d1570(DAT_102310920,local_50);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e7fe1;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar6 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_40 + (long)iVar1 * 8 + 8;
      do {
        pQVar4 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar4 == 0) {
LAB_1006e7fc0:
          QArrayData::deallocate(pQVar4,2,8);
        }
        else if (*(int *)pQVar4 != -1) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar4 = *(QArrayData **)pDVar5;
            goto LAB_1006e7fc0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006e7fe1:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}

