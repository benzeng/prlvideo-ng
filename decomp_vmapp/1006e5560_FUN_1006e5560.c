
undefined8 FUN_1006e5560(undefined8 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QFile local_48 [16];
  QArrayData *local_38;
  undefined1 local_29;
  
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_1;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_29 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0xae94ce);
  QString::append(&local_50);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e55e2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e55e2:
  QFile::QFile(local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_29 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e561f;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1006e561f:
  cVar2 = QFile::open(local_48,1);
  if (cVar2 == '\0') {
    uVar8 = 0xffff;
    if (DAT_1011b55f8 < 2) goto LAB_1006e5c37;
    QFile::fileName();
    QString::toUtf8();
    FUN_1008e3970("","cmn_utils",2,"Can\'t open file \'%s\' ",local_58 + *(long *)(local_58 + 0x10))
    ;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006e5c07;
      }
      QArrayData::deallocate(local_58,1,8);
    }
LAB_1006e5c07:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006e5c37;
      }
      QArrayData::deallocate(local_60,2,8);
    }
    goto LAB_1006e5c37;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QString::arg(&local_70,&local_78,param_1,0,0x20);
  lVar5 = 0;
  QIODevice::readLine((longlong)&local_88);
  pQVar7 = local_88 + *(long *)(local_88 + 0x10);
  if ((pQVar7 != (QArrayData *)0x0) && (*(uint *)(local_88 + 4) != 0)) {
    lVar5 = 0;
    do {
      if (pQVar7[lVar5] == (QArrayData)0x0) break;
      lVar5 = lVar5 + 1;
    } while ((uint)lVar5 < *(uint *)(local_88 + 4));
  }
  local_80 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,(int)lVar5);
  QString::arg(&local_68,&local_70,&local_80,0,0x20);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e56f1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1006e56f1:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e5721;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1006e5721:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e5751;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006e5751:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e5781;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006e5781:
  FUN_100710220(&local_90,&local_68);
  puVar1 = PTR_s___mode_10116da68;
  iVar3 = -1;
  if (PTR_s___mode_10116da68 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s___mode_10116da68);
    iVar3 = (int)sVar4;
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  FUN_100710370(&local_98,&local_90,&local_a0);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e580f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1006e580f:
  iVar3 = QString::compare_helper
                    (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                     PTR_s_ps_10116da70,0xffffffff,1);
  uVar8 = 0;
  if (iVar3 != 0) {
    uVar8 = 1;
    iVar3 = QString::compare_helper
                      (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                       PTR_s_pdfm_10116da78,0xffffffff,1);
    if (iVar3 != 0) {
      iVar3 = QString::compare_helper
                        (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                         PTR_s_pdfwl_10116da80,0xffffffff,1);
      uVar8 = 5;
      if (iVar3 != 0) {
        iVar3 = QString::compare_helper
                          (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                           PTR_s_pwe_10116da88,0xffffffff,1);
        uVar8 = 2;
        if (iVar3 != 0) {
          iVar3 = QString::compare_helper
                            (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                             PTR_s_pp_10116da90,0xffffffff,1);
          uVar8 = 3;
          if (iVar3 != 0) {
            iVar3 = QString::compare_helper
                              (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),
                               PTR_s_pmobile_10116da98,0xffffffff,1);
            uVar8 = 6;
            if ((iVar3 != 0) && (uVar8 = 0xffff, 1 < DAT_1011b55f8)) {
              QString::toUtf8();
              FUN_1008e3970("","cmn_utils",2,"Wrong value of execute mode %s.",
                            local_a8 + *(long *)(local_a8 + 0x10));
              if (*(int *)local_a8 != -1) {
                if (*(int *)local_a8 != 0) {
                  LOCK();
                  *(int *)local_a8 = *(int *)local_a8 + -1;
                  local_29 = *(int *)local_a8 != 0;
                  UNLOCK();
                  if ((bool)local_29) goto LAB_1006e59e9;
                }
                QArrayData::deallocate(local_a8,1,8);
              }
            }
          }
        }
      }
    }
  }
LAB_1006e59e9:
  puVar1 = PTR_s___appstore_client_10116db08;
  if (param_2 != (undefined4 *)0x0) {
    iVar3 = -1;
    if (PTR_s___appstore_client_10116db08 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s___appstore_client_10116db08);
      iVar3 = (int)sVar4;
    }
    local_b0 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
    cVar2 = FUN_100710950(&local_90,&local_b0);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006e5a6b;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1006e5a6b:
    if (cVar2 != '\0') {
      *param_2 = 2;
    }
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e5aac;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1006e5aac:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e5b41;
    }
    iVar3 = *(int *)(local_90 + 0xc);
    if (iVar3 != *(int *)(local_90 + 8)) {
      lVar5 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_90 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_1006e5b20:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_1006e5b20;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(local_90);
  }
LAB_1006e5b41:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006e5c37;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006e5c37:
  QFile::~QFile(local_48);
  return uVar8;
}

