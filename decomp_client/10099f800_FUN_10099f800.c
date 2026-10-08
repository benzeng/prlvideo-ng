
void FUN_10099f800(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  Data *pDVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  QArrayData *local_88;
  QTypedArrayData<unsigned_short> *local_80;
  QArrayData *local_78;
  QTypedArrayData<unsigned_short> *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QString local_48;
  Data *local_40;
  undefined1 local_31;
  
  uVar4 = FUN_1009983a0();
  cVar2 = FUN_100990a60(uVar4);
  if (cVar2 == '\0') {
    FUN_1009a0ca0(&local_90,param_1);
    if (*(int *)(local_90 + 0xc) != *(int *)(local_90 + 8)) {
      pQVar8 = *(QArrayData **)(local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10);
      iVar3 = *(int *)pQVar8;
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + 1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        iVar3 = *(int *)pQVar8;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + 1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        iVar3 = *(int *)pQVar8;
      }
      if (1 < iVar3 + 1U) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + 1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
      }
      local_a0 = pQVar8;
      local_98 = pQVar8;
      CPrlFileDevSelectorWidget::setCurrentItem(uVar4,2,&local_98,&local_a0,0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10099f9a4;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_10099f9a4:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10099f9da;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_10099f9da:
      if (*(int *)pQVar8 != -1) {
        if (*(int *)pQVar8 != 0) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10099fa07;
        }
        QArrayData::deallocate(pQVar8,2,8);
      }
    }
LAB_10099fa07:
    if (*(int *)local_90 == -1) {
      return;
    }
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      UNLOCK();
      if (*(int *)local_90 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar3 = *(int *)(local_90 + 0xc);
    local_40 = local_90;
    if (iVar3 != *(int *)(local_90 + 8)) {
      lVar5 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar3 * -8;
      pDVar6 = local_90 + (long)iVar3 * 8 + 8;
      do {
        pQVar8 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar8 == 0) {
LAB_10099fa80:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_31 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar8 = *(QArrayData **)pDVar6;
            goto LAB_10099fa80;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    goto LAB_10099fdb9;
  }
  FUN_1009a0ca0(&local_40,param_1);
  if (*(int *)(local_40 + 0xc) != *(int *)(local_40 + 8)) {
    FUN_1009a1270(&local_48,&local_40);
    local_68 = local_40;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_68);
        iVar3 = *(int *)(local_68 + 8);
        if (iVar3 != *(int *)(local_68 + 0xc)) {
          pDVar6 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
          pDVar7 = local_68 + (long)iVar3 * 8 + 0x10;
          lVar5 = (long)*(int *)(local_68 + 0xc) * 8 + (long)iVar3 * -8;
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
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
    }
    pDVar6 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
    local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
    local_60 = pDVar6;
    if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
      do {
        local_50 = 1;
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
        local_70 = *(QTypedArrayData<unsigned_short> **)pDVar6;
        if (1 < *(int *)local_70 + 1U) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + 1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
        }
        local_78 = *(QArrayData **)pDVar6;
        if (1 < *(int *)local_78 + 1U) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + 1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
        }
        local_60 = pDVar6;
        CPrlFileDevSelectorWidget::addFileDevItem(uVar4,2,&local_70,&local_78);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10099fb5a;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_10099fb5a:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_31 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10099fb8a;
          }
          QArrayData::deallocate((QArrayData *)local_70,2,8);
        }
LAB_10099fb8a:
        cVar2 = operator==((QString *)pDVar6,&local_48);
        if (cVar2 != '\0') {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x30);
          local_80 = *(QTypedArrayData<unsigned_short> **)pDVar6;
          if (1 < *(int *)local_80 + 1U) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + 1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
          }
          local_88 = *(QArrayData **)pDVar6;
          if (1 < *(int *)local_88 + 1U) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + 1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
          }
          CPrlFileDevSelectorWidget::setCurrentItem(uVar4,2,&local_80,&local_88,0);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10099fc1c;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10099fc1c:
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10099fc50;
            }
            QArrayData::deallocate((QArrayData *)local_80,2,8);
          }
        }
LAB_10099fc50:
        pDVar6 = local_60 + 8;
        local_60 = pDVar6;
      } while (pDVar6 != local_58);
    }
    pDVar6 = local_68;
    local_50 = 1;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10099fd01;
      }
      iVar3 = *(int *)(local_68 + 0xc);
      if (iVar3 != *(int *)(local_68 + 8)) {
        lVar5 = (long)*(int *)(local_68 + 8) * 8 + (long)iVar3 * -8;
        pDVar7 = local_68 + (long)iVar3 * 8 + 8;
        do {
          pQVar8 = *(QArrayData **)pDVar7;
          if (*(int *)pQVar8 == 0) {
LAB_10099fce0:
            QArrayData::deallocate(pQVar8,2,8);
          }
          else if (*(int *)pQVar8 != -1) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + -1;
            local_31 = *(int *)pQVar8 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar8 = *(QArrayData **)pDVar7;
              goto LAB_10099fce0;
            }
          }
          pDVar7 = pDVar7 + -8;
          lVar5 = lVar5 + 8;
        } while (lVar5 != 0);
      }
      QListData::dispose(pDVar6);
    }
LAB_10099fd01:
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10099fd31;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10099fd31:
  if (*(int *)local_40 == -1) {
    return;
  }
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return;
    }
    local_31 = 0;
  }
  iVar3 = *(int *)(local_40 + 0xc);
  if (iVar3 != *(int *)(local_40 + 8)) {
    lVar5 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar3 * -8;
    pDVar6 = local_40 + (long)iVar3 * 8 + 8;
    do {
      pQVar8 = *(QArrayData **)pDVar6;
      if (*(int *)pQVar8 == 0) {
LAB_10099fda0:
        QArrayData::deallocate(pQVar8,2,8);
      }
      else if (*(int *)pQVar8 != -1) {
        LOCK();
        *(int *)pQVar8 = *(int *)pQVar8 + -1;
        local_31 = *(int *)pQVar8 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          pQVar8 = *(QArrayData **)pDVar6;
          goto LAB_10099fda0;
        }
      }
      pDVar6 = pDVar6 + -8;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0);
  }
LAB_10099fdb9:
  QListData::dispose(local_40);
  return;
}

