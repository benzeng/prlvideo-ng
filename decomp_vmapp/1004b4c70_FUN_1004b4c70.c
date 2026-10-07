
void FUN_1004b4c70(int *param_1,QString *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  QArrayData *pQVar4;
  char cVar5;
  QString *pQVar6;
  bool bVar7;
  long lVar8;
  QString local_70;
  undefined8 local_68;
  undefined8 local_60;
  QArrayData *local_58;
  int local_50;
  long local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_3 == 0) {
    return;
  }
  QReadWriteLock::lockForRead();
  if (DAT_1011bc000 == 0) goto LAB_1004b4ee9;
  QMutex::lock();
  bVar7 = true;
  lVar3 = *(long *)(param_1 + 0xe);
  iVar1 = *(int *)(lVar3 + 8);
  pQVar6 = (QString *)(lVar3 + 0x10 + (long)iVar1 * 8);
  iVar2 = *(int *)(lVar3 + 0xc);
  if (iVar1 == iVar2) {
LAB_1004b4d1b:
    if (pQVar6 == (QString *)(lVar3 + 0x10 + (long)iVar2 * 8)) goto LAB_1004b4d45;
    if (1 < DAT_1011b55f8) {
      QString::toUtf8();
      FUN_1008e3970("CHRSERVER_PACKAGESENDER","ChrToolSrv",2,
                    "IGNORE SENDING PACKAGE TO DISCONNECTED CLIENT %s",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004b4ed7;
        }
        QArrayData::deallocate(local_40,1,8);
        bVar7 = true;
      }
    }
  }
  else {
    lVar8 = (long)iVar2 * 8 + (long)iVar1 * -8;
    do {
      cVar5 = operator==(pQVar6,param_2);
      if (cVar5 != '\0') goto LAB_1004b4d1b;
      pQVar6 = pQVar6 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
LAB_1004b4d45:
    local_50 = 1;
    if (*param_1 + 1 != 0) {
      local_50 = *param_1 + 1;
    }
    *param_1 = local_50;
    pQVar4 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_58 = pQVar4;
    local_48 = param_3;
    FUN_1004b5f50(param_1 + 8,&local_58);
    if ((param_1[4] == 0) || (*(long *)(param_1 + 6) == 0)) {
      FUN_1004b5a80(&local_70,param_1 + 8);
      QString::operator=((QString *)(param_1 + 2),&local_70);
      *(undefined8 *)(param_1 + 6) = local_60;
      *(undefined8 *)(param_1 + 4) = local_68;
      bVar7 = false;
      QMutex::unlock();
      FUN_1004b5020(param_1,&local_70);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_31 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004b4e2e;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
    }
LAB_1004b4e2e:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004b4ed7;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_1004b4ed7:
  if (bVar7) {
    QMutex::unlock();
  }
LAB_1004b4ee9:
  QReadWriteLock::unlock();
  return;
}

