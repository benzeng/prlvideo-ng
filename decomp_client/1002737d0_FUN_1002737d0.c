
undefined8 FUN_1002737d0(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  QObject *pQVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  undefined8 *puVar13;
  Data *pDVar14;
  Data *pDVar15;
  QArrayData *pQVar16;
  QWidget *pQVar17;
  bool bVar18;
  long local_70;
  QArrayData *local_68;
  Data *local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x3bfa;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return 0x3bfa;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0x3bfa;
  }
  uVar6 = FUN_10016f500();
  FUN_10061abe0(&local_48,uVar6,0);
  iVar3 = QVariant::toInt((bool *)&local_48);
  if (iVar3 == 0) {
    bVar18 = false;
LAB_100273876:
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar6 = FUN_10016f500(uVar6);
    cVar1 = FUN_10061b500(uVar6);
    if (cVar1 != '\0') {
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar6 = FUN_10016f500(uVar6);
      cVar1 = FUN_10061c4a0(uVar6);
      if (cVar1 != '\0') goto LAB_1002738cf;
      uVar6 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
      }
      uVar6 = FUN_10016f500(uVar6);
      bVar2 = FUN_10061c5c0(uVar6);
      bVar2 = bVar2 ^ 1;
      if (bVar18) goto LAB_1002738d6;
      goto LAB_1002738df;
    }
LAB_1002738cf:
    if (bVar18) goto LAB_1002738d4;
    QVariant::~QVariant(&local_48);
  }
  else {
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar6 = FUN_10016f500(uVar6);
    FUN_10061abe0(&local_58,uVar6,0);
    iVar3 = QVariant::toInt((bool *)&local_58);
    bVar18 = true;
    if (iVar3 == -0x7ffeefa8) goto LAB_100273876;
LAB_1002738d4:
    bVar2 = 0;
LAB_1002738d6:
    QVariant::~QVariant(&local_58);
LAB_1002738df:
    QVariant::~QVariant(&local_48);
    if (bVar2 != 0) {
      return 0x3bfa;
    }
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  iVar3 = FUN_10015d3a0(uVar6);
  uVar6 = FUN_100794960();
  iVar4 = FUN_100796670(uVar6);
  if (((*(long *)(param_1 + 0x28) == 0) || (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0)) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    uVar6 = FUN_1001d50a0();
    uVar6 = FUN_1001d50d0(uVar6);
    cVar1 = FUN_1001e1720(uVar6);
    if (cVar1 == '\0') {
      if (DAT_102310920 == (void *)0x0) {
        pvVar7 = operator_new(0x50);
        FUN_1001d1080(pvVar7);
        DAT_10226c778 = 1;
        DAT_102310920 = pvVar7;
      }
      pvVar7 = DAT_102310920;
      local_60 = *(Data **)((long)DAT_102310920 + 0x28);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 == 0) {
          QListData::detach((int)&local_60);
          iVar12 = *(int *)(local_60 + 8);
          if (iVar12 != *(int *)(local_60 + 0xc)) {
            puVar13 = (undefined8 *)
                      (*(long *)((long)pvVar7 + 0x28) + 0x10 +
                      (long)*(int *)(*(long *)((long)pvVar7 + 0x28) + 8) * 8);
            pDVar14 = local_60 + (long)iVar12 * 8 + 0x10;
            lVar8 = (long)*(int *)(local_60 + 0xc) * 8 + (long)iVar12 * -8;
            do {
              piVar11 = (int *)*puVar13;
              *(int **)pDVar14 = piVar11;
              if (1 < *piVar11 + 1U) {
                LOCK();
                *piVar11 = *piVar11 + 1;
                local_31 = *piVar11 != 0;
                UNLOCK();
              }
              pDVar14 = pDVar14 + 8;
              puVar13 = puVar13 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        else {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + 1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
        }
      }
      pDVar14 = local_60;
      iVar12 = *(int *)(local_60 + 8);
      iVar5 = *(int *)(local_60 + 0xc);
      bVar18 = iVar5 == iVar12;
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100273b10;
          iVar12 = *(int *)(local_60 + 8);
          iVar5 = *(int *)(local_60 + 0xc);
        }
        if (iVar5 != iVar12) {
          lVar8 = (long)iVar12 * 8 + (long)iVar5 * -8;
          pDVar15 = local_60 + (long)iVar5 * 8 + 8;
          do {
            pQVar16 = *(QArrayData **)pDVar15;
            if (*(int *)pQVar16 == 0) {
LAB_100273aef:
              QArrayData::deallocate(pQVar16,2,8);
            }
            else if (*(int *)pQVar16 != -1) {
              LOCK();
              *(int *)pQVar16 = *(int *)pQVar16 + -1;
              local_31 = *(int *)pQVar16 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar16 = *(QArrayData **)pDVar15;
                goto LAB_100273aef;
              }
            }
            pDVar15 = pDVar15 + -8;
            lVar8 = lVar8 + 8;
          } while (lVar8 != 0);
        }
        QListData::dispose(pDVar14);
      }
LAB_100273b10:
      if (bVar18 && iVar3 + iVar4 == 0) {
        pQVar9 = operator_new(0x48);
        CContentWindow::CContentWindow((CContentWindow *)pQVar9,0,0);
        piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar9);
        piVar11 = *(int **)(param_1 + 0x28);
        if (piVar11 != piVar10) {
          if (piVar10 != (int *)0x0) {
            LOCK();
            *piVar10 = *piVar10 + 1;
            local_31 = *piVar10 != 0;
            UNLOCK();
            piVar11 = *(int **)(param_1 + 0x28);
          }
          if (piVar11 != (int *)0x0) {
            LOCK();
            *piVar11 = *piVar11 + -1;
            local_31 = *piVar11 != 0;
            UNLOCK();
            if ((!(bool)local_31) && (*(void **)(param_1 + 0x28) != (void *)0x0)) {
              operator_delete(*(void **)(param_1 + 0x28));
            }
          }
          *(int **)(param_1 + 0x28) = piVar10;
          *(QObject **)(param_1 + 0x30) = pQVar9;
        }
        if (piVar10 != (int *)0x0) {
          LOCK();
          *piVar10 = *piVar10 + -1;
          local_31 = *piVar10 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            operator_delete(piVar10);
          }
        }
        pQVar17 = (QWidget *)0x0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (pQVar17 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          pQVar17 = *(QWidget **)(param_1 + 0x30);
        }
        WidgetUtils::setWindowResizeEnabled(pQVar17,false);
      }
    }
  }
  if (DAT_102310958 == (void *)0x0) {
    pvVar7 = operator_new(0x18);
    FUN_100612710(pvVar7);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar7;
  }
  pvVar7 = DAT_102310958;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10015a2b0(&local_68,uVar6);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x30);
  }
  lVar8 = FUN_100612b70(pvVar7,&local_68,uVar6,10);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100273c62;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_100273c62:
  if (lVar8 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to validate license.");
    uVar6 = 0x80000009;
  }
  else {
    cVar1 = CAbstractTask::isFinished();
    uVar6 = 0;
    if (cVar1 == '\0') {
      uVar6 = 0;
      QObject::connect(&local_70,lVar8,"2taskFinished(PRL_RESULT)",param_1,
                       "1onValidateLicenseFinished(PRL_RESULT)",0);
      if (local_70 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      CAbstractTask::setWaitForSubTaskCompletion();
    }
  }
  return uVar6;
}

