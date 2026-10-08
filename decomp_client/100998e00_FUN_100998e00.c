
undefined1 FUN_100998e00(long *param_1)

{
  QArrayData *pQVar1;
  char cVar2;
  QArrayData *local_40;
  QArrayData *local_30;
  
  if ((int)param_1[9] != 1) {
    return 1;
  }
  if (1 < DAT_10230ffd0) {
    pQVar1 = (QArrayData *)param_1[3];
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
    QString::toUtf8();
    FUN_100df99c0("","TransporterWizardModel",2,"Page \"%s\" - validation changes",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_100998ead;
      }
      QArrayData::deallocate(local_30,1,8);
    }
LAB_100998ead:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_100998edd;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
LAB_100998edd:
  cVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  *(undefined4 *)(param_1 + 9) = 3;
  FUN_1009bf320(param_1,3);
  if (DAT_10230ffd0 < 2) {
    return 1;
  }
  pQVar1 = (QArrayData *)param_1[3];
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toUtf8();
  FUN_100df99c0("","TransporterWizardModel",2,"Page \"%s\" - completed",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_100998f8e;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100998f8e:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return 1;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return 1;
}

