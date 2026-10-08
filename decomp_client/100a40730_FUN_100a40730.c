
void FUN_100a40730(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  Data *pDVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  Data *pDVar10;
  QArrayData *pQVar11;
  QArrayData *local_b0;
  Data *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  undefined1 local_31;
  
  lVar6 = FUN_100a39010();
  if (lVar6 == 0) {
    return;
  }
  lVar6 = *param_2;
  lVar8 = *(long *)(lVar6 + 0x10);
  if (*(int *)(lVar6 + lVar8) != 0x20000) {
    return;
  }
  switch(*(undefined4 *)(lVar8 + 4 + lVar6)) {
  case 0:
    uVar9 = FUN_100a39010();
    FUN_100a3cbe0(uVar9,param_1 + 2);
    return;
  case 1:
    local_58 = (undefined8 *)0x0;
    puStack_50 = (undefined8 *)0x0;
    local_48 = (undefined8 *)0x0;
    puVar7 = operator_new(0x18);
    puStack_50 = puVar7 + 3;
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    local_58 = puVar7;
    local_48 = puStack_50;
    CVmConfiguration::getVmSettings();
    lVar6 = CVmSettings::getVmTools();
    CVmTools::getVmSharedApplications();
    lVar8 = CVmSharedApplications::getWebApplications();
    if (((lVar6 == 0) || (lVar8 == 0)) ||
       (cVar4 = CVmTools::isIsolatedVm(), puVar7 = local_58, cVar4 != '\0')) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    else {
      uVar5 = WebApplications::getWebBrowser();
      *(undefined4 *)local_58 = uVar5;
      uVar5 = WebApplications::getFtpClient();
      *(undefined4 *)((long)local_58 + 4) = uVar5;
      uVar5 = WebApplications::getEmailClient();
      *(undefined4 *)(local_58 + 1) = uVar5;
      uVar5 = WebApplications::getRemoteAccess();
      *(undefined4 *)((long)local_58 + 0xc) = uVar5;
      uVar5 = WebApplications::getRss();
      *(undefined4 *)(local_58 + 2) = uVar5;
      uVar5 = WebApplications::getNewsgroups();
      *(undefined4 *)((long)local_58 + 0x14) = uVar5;
    }
    uVar9 = FUN_100a39010();
    FUN_100a3c8e0(uVar9,param_1 + 2,&local_58);
    if (local_58 != (undefined8 *)0x0) {
      if (puStack_50 != local_58) {
        puStack_50 = (undefined8 *)
                     ((~((long)puStack_50 + (-4 - (long)local_58)) & 0xfffffffffffffffcU) +
                     (long)puStack_50);
      }
      operator_delete(local_58);
    }
    break;
  case 2:
    QByteArray::right((int)&local_60);
    if (*(int *)(local_60 + 4) != 0) {
      QString::fromUtf16((ushort *)&local_70,(int)lVar8 + 0x10 + (int)lVar6);
      QString::normalized(&local_68,&local_70,1,0);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a4092a;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100a4092a:
      uVar9 = FUN_100a39010();
      QString::trimmed();
      FUN_100a3cd00(uVar9,param_1 + 2,&local_78,*(undefined4 *)(lVar8 + 8 + lVar6));
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a40987;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100a40987:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100a409b7;
        }
        QArrayData::deallocate(local_68,2,8);
      }
    }
LAB_100a409b7:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    break;
  case 8:
    local_80 = (Data *)PTR_shared_null_1021e15e8;
    local_88 = (Data *)PTR_shared_null_1021e15e8;
    local_90 = (Data *)PTR_shared_null_1021e15e8;
    local_98 = (QArrayData *)PTR_shared_null_1021e1288;
    local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
    local_a8 = (Data *)PTR_shared_null_1021e15e8;
    QByteArray::right((int)&local_b0);
    cVar4 = FUN_100a412e0();
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a40aae;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_100a40aae:
    if (cVar4 != '\0') {
      uVar9 = FUN_100a39010();
      FUN_100a3cd80(uVar9,param_1 + 2,&local_80,&local_88,&local_90,&local_98,&local_a0,&local_a8);
    }
    pDVar3 = local_a8;
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a40b6f;
      }
      iVar1 = *(int *)(local_a8 + 0xc);
      if (iVar1 != *(int *)(local_a8 + 8)) {
        lVar6 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_a8 + (long)iVar1 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar11 == 0) {
LAB_100a40b4e:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar10;
              goto LAB_100a40b4e;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar3);
    }
LAB_100a40b6f:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a40ba5;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100a40ba5:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a40bdb;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100a40bdb:
    pDVar3 = local_90;
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a40c65;
      }
      iVar1 = *(int *)(local_90 + 0xc);
      if (iVar1 != *(int *)(local_90 + 8)) {
        lVar6 = (long)*(int *)(local_90 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_90 + (long)iVar1 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar11 == 0) {
LAB_100a40c44:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar10;
              goto LAB_100a40c44;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar3);
    }
LAB_100a40c65:
    pDVar3 = local_88;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100a40ce9;
      }
      iVar1 = *(int *)(local_88 + 0xc);
      if (iVar1 != *(int *)(local_88 + 8)) {
        lVar6 = (long)*(int *)(local_88 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_88 + (long)iVar1 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar11 == 0) {
LAB_100a40cc8:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar10;
              goto LAB_100a40cc8;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar3);
    }
LAB_100a40ce9:
    pDVar3 = local_80;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        if (*(int *)local_80 != 0) {
          return;
        }
        local_31 = 0;
      }
      iVar1 = *(int *)(local_80 + 0xc);
      if (iVar1 != *(int *)(local_80 + 8)) {
        lVar6 = (long)*(int *)(local_80 + 8) * 8 + (long)iVar1 * -8;
        pDVar10 = local_80 + (long)iVar1 * 8 + 8;
        do {
          pQVar11 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar11 == 0) {
LAB_100a40d54:
            QArrayData::deallocate(pQVar11,2,8);
          }
          else if (*(int *)pQVar11 != -1) {
            LOCK();
            *(int *)pQVar11 = *(int *)pQVar11 + -1;
            local_31 = *(int *)pQVar11 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar11 = *(QArrayData **)pDVar10;
              goto LAB_100a40d54;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar6 = lVar6 + 8;
        } while (lVar6 != 0);
      }
      QListData::dispose(pDVar3);
    }
    break;
  case 9:
  case 10:
  case 0xc:
  case 0xd:
    lVar6 = FUN_100a39010();
    plVar2 = *(long **)(lVar6 + 0x18);
    if (plVar2 != (long *)0x0) {
      lVar6 = 0;
      if ((*param_1 != 0) && (lVar6 = 0, *(int *)(*param_1 + 4) != 0)) {
        lVar6 = param_1[1];
      }
      lVar8 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x000100a407de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))
                (plVar2,lVar6,*(long *)(lVar8 + 0x10) + lVar8,(long)*(int *)(lVar8 + 4));
      return;
    }
  }
  return;
}

