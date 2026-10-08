
void FUN_1006ad2d0(undefined8 param_1,QString *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  Data *pDVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  undefined4 local_a4;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  QString local_80;
  QArrayData *local_78;
  Data_conflict local_70;
  undefined4 local_68;
  QSettings local_60 [16];
  QVariant local_50;
  QArrayData *local_40;
  Data *local_38;
  undefined1 local_29;
  
  QSettings::QSettings(local_60,(QObject *)0x0);
  local_68 = 0x80000000;
  local_70.field7 = 0;
  QSettings::value((QString *)&local_50,(QVariant *)local_60);
  QVariant::toString();
  local_78 = (QArrayData *)QString::fromAscii_helper(".",1);
  QString::split(&local_38,&local_40,&local_78,0,1);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ad386;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006ad386:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ad3b6;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006ad3b6:
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant((QVariant *)&local_70);
  QSettings::~QSettings(local_60);
  if (*(int *)(local_38 + 0xc) - *(int *)(local_38 + 8) < 2) goto LAB_1006ad5d1;
  FUN_1006b0c80(&local_80,&local_38,0);
  QString::operator=(param_2,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ad42f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1006ad42f:
  local_a0 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_a0);
      iVar1 = *(int *)(local_a0 + 8);
      if (iVar1 != *(int *)(local_a0 + 0xc)) {
        pDVar4 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
        pDVar5 = local_a0 + (long)iVar1 * 8 + 0x10;
        lVar3 = (long)*(int *)(local_a0 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)pDVar4;
          *(int **)pDVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_29 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar5 = pDVar5 + 8;
          pDVar4 = pDVar4 + 8;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
    do {
      local_88 = 1;
      local_a4 = FUN_100694830();
      FUN_100071ff0(param_3,&local_a4);
      local_98 = local_98 + 8;
    } while (local_98 != local_90);
  }
  pDVar4 = local_a0;
  local_88 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006ad5d1;
    }
    iVar1 = *(int *)(local_a0 + 0xc);
    if (iVar1 != *(int *)(local_a0 + 8)) {
      lVar3 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar1 * -8;
      pDVar5 = local_a0 + (long)iVar1 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar6 == 0) {
LAB_1006ad5b0:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar5;
            goto LAB_1006ad5b0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar4);
  }
LAB_1006ad5d1:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar3 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar4 = local_38 + (long)iVar1 * 8 + 8;
      do {
        pQVar6 = *(QArrayData **)pDVar4;
        if (*(int *)pQVar6 == 0) {
LAB_1006ad640:
          QArrayData::deallocate(pQVar6,2,8);
        }
        else if (*(int *)pQVar6 != -1) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_29 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar6 = *(QArrayData **)pDVar4;
            goto LAB_1006ad640;
          }
        }
        pDVar4 = pDVar4 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_38);
  }
  return;
}

