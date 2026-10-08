
undefined8 * FUN_1003c9d70(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  size_t sVar6;
  long lVar7;
  undefined8 uVar8;
  QVariant *this;
  int *piVar9;
  int iVar10;
  Data *pDVar11;
  Data *pDVar12;
  bool bVar13;
  QVariant local_110;
  QArrayData *local_100;
  int local_f4;
  Data *local_f0;
  Data *local_e8;
  Data *local_e0;
  undefined4 local_d8;
  int local_cc;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  QVariant local_a8;
  Data *local_98;
  QVariant local_90;
  Data *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  _func_void_Node_ptr *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c0);
  *param_1 = PTR_shared_null_1021e15d0;
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar10 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar10 = (int)sVar6;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar10);
  FUN_1003ae3b0(&local_68,param_4,&local_70);
  FUN_1000626e0(&local_60,&local_68);
  local_58 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_58);
      iVar10 = local_58[2];
      if (iVar10 != local_58[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar9 = local_58 + (long)iVar10 * 2 + 4;
        lVar7 = (long)local_58[3] * 8 + (long)iVar10 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar9 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_60 = local_60 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_31 = *local_60 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  FUN_100036370(&local_60);
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c9ed8;
    }
    QHashData::free_helper(local_68);
  }
LAB_1003c9ed8:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003c9f08;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003c9f08:
  if (local_40 != 0) {
    do {
      if (local_50 == local_48) break;
      local_78 = *(QArrayData **)local_50;
      if (1 < *(int *)local_78 + 1U) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + 1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        uVar8 = FUN_1003b0af0(*(undefined8 *)(param_2 + 0x18));
        FUN_1003e1800(&local_90,uVar8,&local_78,0);
        FUN_1003df0d0(&local_80,&local_90);
        QVariant::~QVariant(&local_90);
        QObject::property((char *)&local_a8);
        FUN_1003df0d0(&local_98,&local_a8);
        QVariant::~QVariant(&local_a8);
        cVar4 = QAbstractButton::isChecked();
        if (cVar4 == '\0') {
          FUN_10012b980(&local_f0,&local_98);
          local_e8 = local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10;
          local_e0 = local_f0 + (long)*(int *)(local_f0 + 0xc) * 8 + 0x10;
          if (*(int *)(local_f0 + 8) != *(int *)(local_f0 + 0xc)) {
            do {
              local_d8 = 1;
              local_f4 = **(int **)local_e8;
              iVar10 = *(int *)(local_80 + 8);
              if (iVar10 != *(int *)(local_80 + 0xc)) {
                pDVar11 = local_80 + (long)iVar10 * 8 + 0x10;
                lVar7 = (long)*(int *)(local_80 + 0xc) * 8 + (long)iVar10 * -8;
                do {
                  if (**(int **)pDVar11 == local_f4) {
                    FUN_10028a360(&local_80,&local_f4);
                    break;
                  }
                  pDVar11 = pDVar11 + 8;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
              local_e8 = local_e8 + 8;
            } while (local_e8 != local_e0);
          }
          pDVar11 = local_f0;
          local_d8 = 1;
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ca290;
            }
            iVar10 = *(int *)(local_f0 + 0xc);
            if (iVar10 != *(int *)(local_f0 + 8)) {
              lVar7 = (long)*(int *)(local_f0 + 8) * 8 + (long)iVar10 * -8;
              pDVar12 = local_f0 + (long)iVar10 * 8 + 8;
              do {
                if (*(void **)pDVar12 != (void *)0x0) {
                  operator_delete(*(void **)pDVar12);
                }
                pDVar12 = pDVar12 + -8;
                lVar7 = lVar7 + 8;
              } while (lVar7 != 0);
            }
            QListData::dispose(pDVar11);
          }
        }
        else {
          FUN_10012b980(&local_c8,&local_98);
          local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
          local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
          if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
            do {
              local_b0 = 1;
              local_cc = **(int **)local_c0;
              iVar10 = *(int *)(local_80 + 8);
              if (iVar10 != *(int *)(local_80 + 0xc)) {
                pDVar11 = local_80 + (long)iVar10 * 8 + 0x10;
                lVar7 = (long)*(int *)(local_80 + 0xc) * 8 + (long)iVar10 * -8;
                do {
                  if (**(int **)pDVar11 == local_cc) goto LAB_1003ca084;
                  pDVar11 = pDVar11 + 8;
                  lVar7 = lVar7 + -8;
                } while (lVar7 != 0);
              }
              FUN_10012b680(&local_80,&local_cc);
LAB_1003ca084:
              local_c0 = local_c0 + 8;
            } while (local_c0 != local_b8);
          }
          pDVar11 = local_c8;
          local_b0 = 1;
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ca290;
            }
            iVar10 = *(int *)(local_c8 + 0xc);
            if (iVar10 != *(int *)(local_c8 + 8)) {
              lVar7 = (long)*(int *)(local_c8 + 8) * 8 + (long)iVar10 * -8;
              pDVar12 = local_c8 + (long)iVar10 * 8 + 8;
              do {
                if (*(void **)pDVar12 != (void *)0x0) {
                  operator_delete(*(void **)pDVar12);
                }
                pDVar12 = pDVar12 + -8;
                lVar7 = lVar7 + 8;
              } while (lVar7 != 0);
            }
            QListData::dispose(pDVar11);
          }
        }
LAB_1003ca290:
        iVar10 = -1;
        if (puVar3 != (undefined *)0x0) {
          sVar6 = _strlen(puVar3);
          iVar10 = (int)sVar6;
        }
        local_100 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar10);
        uVar8 = FUN_1003ae480(param_1,&local_100);
        this = (QVariant *)FUN_1002edf40(uVar8,&local_78);
        if (DAT_1022743b8 == 0) {
          DAT_1022743b8 = FUN_1003df280("QList<PRL_ALLOWED_VM_COMMAND>",0xffffffffffffffff,1);
        }
        QVariant::QVariant(&local_110,DAT_1022743b8,&local_80,0);
        QVariant::operator=(this,&local_110);
        QVariant::~QVariant(&local_110);
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003ca364;
          }
          QArrayData::deallocate(local_100,2,8);
        }
LAB_1003ca364:
        pDVar11 = local_98;
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003ca404;
          }
          iVar10 = *(int *)(local_98 + 0xc);
          if (iVar10 != *(int *)(local_98 + 8)) {
            lVar7 = (long)*(int *)(local_98 + 8) * 8 + (long)iVar10 * -8;
            pDVar12 = local_98 + (long)iVar10 * 8 + 8;
            do {
              if (*(void **)pDVar12 != (void *)0x0) {
                operator_delete(*(void **)pDVar12);
              }
              pDVar12 = pDVar12 + -8;
              lVar7 = lVar7 + 8;
            } while (lVar7 != 0);
          }
          QListData::dispose(pDVar11);
        }
LAB_1003ca404:
        pDVar11 = local_80;
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003ca494;
          }
          iVar10 = *(int *)(local_80 + 0xc);
          if (iVar10 != *(int *)(local_80 + 8)) {
            lVar7 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar10 * -8;
            pDVar12 = local_80 + (long)iVar10 * 8 + 8;
            do {
              if (*(void **)pDVar12 != (void *)0x0) {
                operator_delete(*(void **)pDVar12);
              }
              pDVar12 = pDVar12 + -8;
              lVar7 = lVar7 + 8;
            } while (lVar7 != 0);
          }
          QListData::dispose(pDVar11);
        }
LAB_1003ca494:
        local_40 = 0;
      }
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003ca4cb;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1003ca4cb:
      local_50 = local_50 + 2;
      uVar5 = local_40 ^ 1;
      bVar13 = local_40 != 1;
      local_40 = uVar5;
    } while (bVar13);
  }
  FUN_100036370(&local_58);
  return param_1;
}

