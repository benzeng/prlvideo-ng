
void FUN_100998850(long *param_1)

{
  int iVar1;
  char cVar2;
  QArrayData *pQVar3;
  QArrayData *local_40;
  QArrayData *local_30;
  QArrayData *local_20;
  
  if ((*(uint *)(param_1 + 9) | 2) != 3) {
    if (*(uint *)(param_1 + 9) == 2) {
      if (DAT_10230ffd0 < 2) {
        return;
      }
      pQVar3 = (QArrayData *)param_1[3];
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      QString::toUtf8();
      FUN_100df99c0("","TransporterWizardModel",2,
                    "Page \"%s\" - cannot revert, it\'s being already reverted",
                    local_30 + *(long *)(local_30 + 0x10));
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) goto LAB_1009989fb;
        }
        QArrayData::deallocate(local_30,1,8);
      }
LAB_1009989fb:
      if (*(int *)pQVar3 == -1) {
        return;
      }
      if (*(int *)pQVar3 == 0) goto LAB_100998ad9;
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      iVar1 = *(int *)pQVar3;
      UNLOCK();
    }
    else {
      if (DAT_10230ffd0 < 1) {
        return;
      }
      pQVar3 = (QArrayData *)param_1[3];
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      QString::toUtf8();
      FUN_100df99c0("","TransporterWizardModel",1,"Page \"%s\" - cannot revert, wrong page state %d"
                    ,local_40 + *(long *)(local_40 + 0x10),(int)param_1[9]);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) goto LAB_100998ab8;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_100998ab8:
      if (*(int *)pQVar3 == -1) {
        return;
      }
      if (*(int *)pQVar3 == 0) goto LAB_100998ad9;
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      iVar1 = *(int *)pQVar3;
      UNLOCK();
    }
    if (iVar1 != 0) {
      return;
    }
LAB_100998ad9:
    QArrayData::deallocate(pQVar3,2,8);
    return;
  }
  *(undefined4 *)(param_1 + 9) = 2;
  FUN_1009bf320(param_1,2);
  if (DAT_10230ffd0 < 2) goto LAB_100998940;
  pQVar3 = (QArrayData *)param_1[3];
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  QString::toUtf8();
  FUN_100df99c0("","TransporterWizardModel",2,"Page \"%s\" - reverting changes",
                local_20 + *(long *)(local_20 + 0x10));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) goto LAB_100998910;
    }
    QArrayData::deallocate(local_20,1,8);
  }
LAB_100998910:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100998940;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100998940:
  cVar2 = (**(code **)(*param_1 + 0x100))(param_1);
  if (cVar2 != '\0') {
    FUN_100998c50(param_1);
  }
  return;
}

