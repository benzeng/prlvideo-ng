
undefined8 FUN_1001e79e0(void)

{
  int iVar1;
  undefined *puVar2;
  AnonymousUnion0 AVar3;
  char cVar4;
  QArrayData *pQVar5;
  void *pvVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  Data *pDVar9;
  long lVar10;
  AnonymousUnion0 local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  AnonymousUnion0 local_a8;
  QArrayData *local_a0;
  AnonymousUnion0 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  Data *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/bin/bash",9);
  puVar2 = PTR_shared_null_1021e15e8;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100d92750(&local_68);
  QString::fromUtf8_helper((char *)&local_60,0x1db6743);
  QString::append(&local_60);
  local_58.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_29 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1db6743);
  QString::append(&local_58);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7aa8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001e7aa8:
  FUN_1000341d0(&local_50,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_29 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7ae5;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1001e7ae5:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7b15;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1001e7b15:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7b45;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1001e7b45:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("stop",4);
  local_70 = pQVar5;
  FUN_1000341d0(&local_50,&local_70);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7b95;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001e7b95:
  if (DAT_102310920 == (void *)0x0) {
    pvVar6 = operator_new(0x50);
    FUN_1001d1080(pvVar6);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar6;
  }
  cVar4 = FUN_1001d1270(DAT_102310920);
  if (cVar4 == '\0') {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("--agents-only",0xd);
    local_80 = pQVar5;
    FUN_1000341d0(&local_50,&local_80);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_29 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e7ce8;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1001e7ce8:
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Stop agents");
  }
  else {
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Stop services");
    if (DAT_102310920 == (void *)0x0) {
      pvVar6 = operator_new(0x50);
      FUN_1001d1080(pvVar6);
      DAT_10226c778 = 1;
      DAT_102310920 = pvVar6;
    }
    cVar4 = FUN_1001d1290(DAT_102310920);
    if (cVar4 != '\0') {
      pQVar5 = (QArrayData *)QString::fromAscii_helper("--launchd-mode",0xe);
      local_78 = pQVar5;
      FUN_1000341d0(&local_50,&local_78);
      if (*(int *)pQVar5 != -1) {
        if (*(int *)pQVar5 != 0) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1001e7c78;
        }
        QArrayData::deallocate(pQVar5,2,8);
      }
LAB_1001e7c78:
      FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Services will be stopped in headless mode.");
    }
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper(">/dev/null",10);
  local_88 = pQVar5;
  FUN_1000341d0(&local_50,&local_88);
  pQVar7 = (QArrayData *)QString::fromAscii_helper("2>&1",4);
  local_90 = pQVar7;
  FUN_1000341d0(&local_50,&local_90);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_29 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7d81;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1001e7d81:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7dae;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001e7dae:
  local_98.field1 = (Data *)puVar2;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("-c",2);
  local_a0 = pQVar5;
  FUN_1000341d0(&local_98,&local_a0);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7e0e;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001e7e0e:
  pQVar5 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_a8.field0,(QChar *)&local_50,
             (int)*(undefined8 *)(pQVar5 + 0x10) + (int)pQVar5);
  FUN_1000341d0(&local_98,&local_a8);
  if (*(int *)local_a8.field1 != -1) {
    if (*(int *)local_a8.field1 != 0) {
      LOCK();
      *(int *)local_a8.field1 = *(int *)local_a8.field1 + -1;
      local_29 = *(int *)local_a8.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7e85;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field1,2,8);
  }
LAB_1001e7e85:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e7eb0;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1001e7eb0:
  cVar4 = QProcess::startDetached(&local_48,(QStringList *)&local_98.field0);
  if (cVar4 == '\0') {
    local_c0.field0_0x0 = local_48.field0_0x0;
    if (1 < *(int *)local_48.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
      local_29 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1e31adc);
    QString::append(&local_c0);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e7f39;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1001e7f39:
    pQVar5 = (QArrayData *)QString::fromAscii_helper(" ",1);
    QtPrivate::QStringList_join
              ((QStringList *)&local_c8.field0,(QChar *)&local_98,
               (int)*(undefined8 *)(pQVar5 + 0x10) + (int)pQVar5);
    local_b8.field0_0x0 = local_c0.field0_0x0;
    if (1 < *(int *)local_c0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_b8);
    QString::toUtf8();
    FUN_100df99c0("[BOOTSTRAP]","prl_client_app",0,"Failed to start stop services command [%s]",
                  local_b0 + *(long *)(local_b0 + 0x10));
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e800e;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_1001e800e:
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_29 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e8044;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1001e8044:
    if (*(int *)local_c8.field1 != -1) {
      if (*(int *)local_c8.field1 != 0) {
        LOCK();
        *(int *)local_c8.field1 = *(int *)local_c8.field1 + -1;
        local_29 = *(int *)local_c8.field1 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e807a;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field1,2,8);
    }
LAB_1001e807a:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_29 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e80a5;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_1001e80a5:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_29 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1001e80db;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
  }
LAB_1001e80db:
  AVar3 = local_98;
  if (*(int *)local_98.field1 != -1) {
    if (*(int *)local_98.field1 != 0) {
      LOCK();
      *(int *)local_98.field1 = *(int *)local_98.field1 + -1;
      local_29 = *(int *)local_98.field1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e8171;
    }
    iVar1 = *(int *)(local_98.field1 + 0xc);
    if (iVar1 != *(int *)(local_98.field1 + 8)) {
      lVar10 = (long)*(int *)(local_98.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_98.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar5 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar5 == 0) {
LAB_1001e8150:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar8;
            goto LAB_1001e8150;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose((Data *)AVar3.field1);
  }
LAB_1001e8171:
  pDVar8 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001e8201;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar10 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      pDVar9 = local_50 + (long)iVar1 * 8 + 8;
      do {
        pQVar5 = *(QArrayData **)pDVar9;
        if (*(int *)pQVar5 == 0) {
LAB_1001e81e0:
          QArrayData::deallocate(pQVar5,2,8);
        }
        else if (*(int *)pQVar5 != -1) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + -1;
          local_29 = *(int *)pQVar5 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar5 = *(QArrayData **)pDVar9;
            goto LAB_1001e81e0;
          }
        }
        pDVar9 = pDVar9 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar8);
  }
LAB_1001e8201:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 0;
}

