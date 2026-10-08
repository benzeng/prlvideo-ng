
void FUN_1004a68a0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  AnonymousUnion0 AVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  AnonymousUnion0 local_98;
  Data *local_90;
  QArrayData *local_88;
  QVariant local_80;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  QObject::property((char *)&local_48);
  QVariant::toStringList();
  local_70 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_70);
      iVar3 = *(int *)(local_70 + 8);
      if (iVar3 != *(int *)(local_70 + 0xc)) {
        pDVar6 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
        pDVar7 = local_70 + (long)iVar3 * 8 + 0x10;
        lVar4 = (long)*(int *)(local_70 + 0xc) * 8 + (long)iVar3 * -8;
        do {
          piVar1 = *(int **)pDVar6;
          *(int **)pDVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar7 = pDVar7 + 8;
          pDVar6 = pDVar6 + 8;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      QString::toLatin1();
      QObject::property((char *)&local_80);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a69ef;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_1004a69ef:
      QVariant::toStringList();
      local_98.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_b8 = local_90;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 == 0) {
          QListData::detach((int)&local_b8);
          iVar3 = *(int *)(local_b8 + 8);
          if (iVar3 != *(int *)(local_b8 + 0xc)) {
            pDVar6 = local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10;
            pDVar7 = local_b8 + (long)iVar3 * 8 + 0x10;
            lVar4 = (long)*(int *)(local_b8 + 0xc) * 8 + (long)iVar3 * -8;
            do {
              piVar1 = *(int **)pDVar6;
              *(int **)pDVar7 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_31 = *piVar1 != 0;
                UNLOCK();
              }
              pDVar7 = pDVar7 + 8;
              pDVar6 = pDVar6 + 8;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
          }
        }
        else {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + 1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
        }
      }
      local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
      local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
      if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
        do {
          local_a0 = 1;
          local_c0 = *(QArrayData **)local_b0;
          if (1 < *(int *)local_c0 + 1U) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + 1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
          }
          iVar3 = QString::indexOf(&local_c0,param_2,0,1);
          if (iVar3 == -1) {
            FUN_1000341d0(&local_98,&local_c0);
          }
          else {
            uVar5 = QString::replace(&local_c0,param_2,param_3,1);
            FUN_1000341d0(&local_98,uVar5);
          }
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004a6b95;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1004a6b95:
          local_b0 = local_b0 + 8;
        } while (local_b0 != local_a8);
      }
      pDVar6 = local_b8;
      local_a0 = 1;
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a6c78;
        }
        iVar3 = *(int *)(local_b8 + 0xc);
        if (iVar3 != *(int *)(local_b8 + 8)) {
          lVar4 = (long)*(int *)(local_b8 + 8) * 8 + (long)iVar3 * -8;
          pDVar7 = local_b8 + (long)iVar3 * 8 + 8;
          do {
            pQVar8 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar8 == 0) {
LAB_1004a6c50:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar7;
                goto LAB_1004a6c50;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose(pDVar6);
      }
LAB_1004a6c78:
      QString::toLatin1();
      pQVar8 = local_c8;
      lVar4 = *(long *)(local_c8 + 0x10);
      QVariant::QVariant(&local_d8,(QStringList *)&local_98.field0);
      QObject::setProperty(param_1,(QVariant *)(pQVar8 + lVar4));
      QVariant::~QVariant(&local_d8);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a6cf7;
        }
        QArrayData::deallocate(local_c8,1,8);
      }
LAB_1004a6cf7:
      AVar2 = local_98;
      if (*(int *)local_98.field1 != -1) {
        if (*(int *)local_98.field1 != 0) {
          LOCK();
          *(int *)local_98.field1 = *(int *)local_98.field1 + -1;
          local_31 = *(int *)local_98.field1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a6d95;
        }
        iVar3 = *(int *)(local_98.field1 + 0xc);
        if (iVar3 != *(int *)(local_98.field1 + 8)) {
          lVar4 = (long)*(int *)(local_98.field1 + 8) * 8 + (long)iVar3 * -8;
          pDVar6 = (Data *)(local_98.field1 + (long)iVar3 * 8 + 8);
          do {
            pQVar8 = *(QArrayData **)pDVar6;
            if (*(int *)pQVar8 == 0) {
LAB_1004a6d70:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar6;
                goto LAB_1004a6d70;
              }
            }
            pDVar6 = pDVar6 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose((Data *)AVar2.field1);
      }
LAB_1004a6d95:
      pDVar6 = local_90;
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004a6e35;
        }
        iVar3 = *(int *)(local_90 + 0xc);
        if (iVar3 != *(int *)(local_90 + 8)) {
          lVar4 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar3 * -8;
          pDVar7 = local_90 + (long)iVar3 * 8 + 8;
          do {
            pQVar8 = *(QArrayData **)pDVar7;
            if (*(int *)pQVar8 == 0) {
LAB_1004a6e10:
              QArrayData::deallocate(pQVar8,2,8);
            }
            else if (*(int *)pQVar8 != -1) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_31 = *(int *)pQVar8 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar8 = *(QArrayData **)pDVar7;
                goto LAB_1004a6e10;
              }
            }
            pDVar7 = pDVar7 + -8;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0);
        }
        QListData::dispose(pDVar6);
      }
LAB_1004a6e35:
      QVariant::~QVariant(&local_80);
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  pDVar6 = local_70;
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a6ef1;
    }
    iVar3 = *(int *)(local_70 + 0xc);
    if (iVar3 != *(int *)(local_70 + 8)) {
      lVar4 = (long)*(int *)(local_70 + 8) * 8 + (long)iVar3 * -8;
      pDVar7 = local_70 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_1004a6ed0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_1004a6ed0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1004a6ef1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004a6f81;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar4 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_50 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_1004a6f60:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_1004a6f60;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_50);
  }
LAB_1004a6f81:
  QVariant::~QVariant(&local_48);
  return;
}

