
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_100d35f30(QString *param_1,QString *param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  long lVar3;
  char cVar4;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  
  if ((*(int *)(param_1->field0_0x0 + 4) == 0) || (*(int *)(param_2->field0_0x0 + 4) == 0)) {
    QString::toUtf8();
    lVar3 = *(long *)(local_30 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("","VIUtils",0,"Unable to copy(overwrite) file \'%s\' to \'%s\'",local_30 + lVar3,
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_100d36249;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100d36249:
    if (*(int *)local_30 == -1) {
      return 0;
    }
    local_70 = local_30;
    if (*(int *)local_30 == 0) goto LAB_100d3631b;
    LOCK();
    *(int *)local_30 = *(int *)local_30 + -1;
    iVar1 = *(int *)local_30;
    UNLOCK();
  }
  else {
    cVar4 = QFile::exists(param_1);
    if (cVar4 == '\0') {
      QString::toUtf8();
      lVar3 = *(long *)(local_40 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("","VIUtils",0,
                    "Unable to copy(overwrite) file \'%s\' to \'%s\', source file does not exist",
                    local_40 + lVar3,local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) goto LAB_100d362fa;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_100d362fa:
      if (*(int *)local_40 == -1) {
        return 0;
      }
      local_70 = local_40;
      if (*(int *)local_40 == 0) goto LAB_100d3631b;
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      iVar1 = *(int *)local_40;
      UNLOCK();
    }
    else {
      cVar4 = QFile::exists(param_2);
      if (cVar4 != '\0') {
        if (1 < DAT_10230ffd0) {
          pQVar2 = (QArrayData *)param_2->field0_0x0;
          if (1 < *(int *)pQVar2 + 1U) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + 1;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","VIUtils",2,"Destination file %s already exists.",
                        local_50 + *(long *)(local_50 + 0x10));
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              UNLOCK();
              if (*(int *)local_50 != 0) goto LAB_100d3600c;
            }
            QArrayData::deallocate(local_50,1,8);
          }
LAB_100d3600c:
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              UNLOCK();
              if (*(int *)pQVar2 != 0) goto LAB_100d3603c;
            }
            QArrayData::deallocate(pQVar2,2,8);
          }
        }
LAB_100d3603c:
        cVar4 = QFile::remove(param_2);
        if ((cVar4 == '\0') && (1 < DAT_10230ffd0)) {
          pQVar2 = (QArrayData *)param_2->field0_0x0;
          if (1 < *(int *)pQVar2 + 1U) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + 1;
            UNLOCK();
          }
          QString::toLocal8Bit();
          FUN_100df99c0("","VIUtils",2,"Error during deleting %s.",
                        local_60 + *(long *)(local_60 + 0x10));
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              UNLOCK();
              if (*(int *)local_60 != 0) goto LAB_100d360d4;
            }
            QArrayData::deallocate(local_60,1,8);
          }
LAB_100d360d4:
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              UNLOCK();
              if (*(int *)pQVar2 != 0) goto LAB_100d36104;
            }
            QArrayData::deallocate(pQVar2,2,8);
          }
        }
      }
LAB_100d36104:
      cVar4 = QFile::copy(param_1,param_2);
      if (cVar4 != '\0') {
        return 1;
      }
      QString::toUtf8();
      lVar3 = *(long *)(local_70 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("","VIUtils",0,"Failed to copy(overwrite) file \'%s\' to \'%s\'",
                    local_70 + lVar3,local_78 + *(long *)(local_78 + 0x10));
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          UNLOCK();
          if (*(int *)local_78 != 0) goto LAB_100d36198;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_100d36198:
      if (*(int *)local_70 == -1) {
        return 0;
      }
      if (*(int *)local_70 == 0) goto LAB_100d3631b;
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      iVar1 = *(int *)local_70;
      UNLOCK();
    }
  }
  if (iVar1 != 0) {
    return 0;
  }
LAB_100d3631b:
  QArrayData::deallocate(local_70,1,8);
  return 0;
}

