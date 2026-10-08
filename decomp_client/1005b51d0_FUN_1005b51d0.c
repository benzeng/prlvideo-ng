
void FUN_1005b51d0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  QArrayData *pQVar4;
  QString QVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  bool bVar12;
  QArrayData *local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  undefined4 local_e8;
  QString local_e0;
  QString local_d8;
  int *local_d0;
  int *local_c8;
  int *local_c0;
  int *local_b8;
  uint local_b0;
  QArrayData *local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  undefined4 local_90;
  long local_88;
  _func_void_Node_ptr *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  lVar10 = FUN_1005b86c0(uVar9);
  if (lVar10 == 0) {
    return;
  }
  FileUtils::tempPath();
  iVar7 = QString::indexOf(param_2,&local_40,0,1);
  if (iVar7 != -1) goto LAB_1005b592e;
  local_48 = (QArrayData *)QString::fromAscii_helper("/tmp/",5);
  cVar6 = QString::startsWith(param_2,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b5284;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005b5284:
  if (cVar6 != '\0') goto LAB_1005b592e;
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",3,"%s was unmounted",local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005b52fe;
      }
      QArrayData::deallocate(local_50,1,8);
    }
  }
LAB_1005b52fe:
  uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005bca20(&local_80,uVar9,3);
  FUN_1002b5da0(&local_78,&local_80);
  local_70 = local_78;
  if (*local_78 != -1) {
    if (*local_78 == 0) {
      QListData::detach((int)&local_70);
      iVar7 = local_70[2];
      if (iVar7 != local_70[3]) {
        local_78 = local_78 + (long)local_78[2] * 2 + 4;
        piVar11 = local_70 + (long)iVar7 * 2 + 4;
        lVar10 = (long)local_70[3] * 8 + (long)iVar7 * -8;
        do {
          piVar3 = *(int **)local_78;
          *(int **)piVar11 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_78 = local_78 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_78 = *local_78 + 1;
      local_31 = *local_78 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)local_70[2] * 2 + 4;
  local_60 = local_70 + (long)local_70[3] * 2 + 4;
  local_58 = 1;
  FUN_100039a80(&local_78);
  if (*(int *)(local_80 + 0x10) != -1) {
    if (*(int *)(local_80 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_80 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005b540c;
    }
    QHashData::free_helper(local_80);
  }
LAB_1005b540c:
  if (local_58 == 0) {
    bVar12 = false;
  }
  else {
    bVar12 = false;
    if (local_68 != local_60) {
      do {
        piVar11 = local_68;
        uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
        uVar9 = FUN_1005b86c0(uVar9);
        uVar9 = FUN_10015a340(uVar9);
        FUN_100122bf0(&local_88,uVar9,piVar11);
        iVar7 = *(int *)(local_88 + 8);
        iVar2 = *(int *)(local_88 + 0xc);
        FUN_100039a80(&local_88);
        if (iVar2 == iVar7) {
          pQVar4 = *(QArrayData **)piVar11;
          if (1 < *(int *)pQVar4 + 1U) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + 1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
          }
          lVar10 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
          if (1 < *(int *)pQVar4 + 1U) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + 1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
          }
          local_90 = 3;
          local_98 = pQVar4;
          FUN_1005b6b10(lVar10 + 0x140,&local_98);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b550b;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1005b550b:
          if (1 < *(int *)pQVar4 + 1U) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + 1;
            local_31 = *(int *)pQVar4 != 0;
            UNLOCK();
          }
          local_a0 = 3;
          local_a8 = pQVar4;
          FUN_100840070(param_1,&local_a8);
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b5576;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_1005b5576:
          bVar12 = true;
          if (*(int *)pQVar4 != -1) {
            if (*(int *)pQVar4 != 0) {
              LOCK();
              *(int *)pQVar4 = *(int *)pQVar4 + -1;
              local_31 = *(int *)pQVar4 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b55b0;
            }
            QArrayData::deallocate(pQVar4,2,8);
          }
        }
LAB_1005b55b0:
        local_68 = local_68 + 2;
        local_58 = 1;
      } while (local_68 != local_60);
    }
  }
  FUN_100039a80(&local_70);
  if (!bVar12) {
    *(undefined1 *)(param_1 + 0x79) = 1;
  }
  uVar9 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
  FUN_1005b4030(&local_d0,uVar9);
  local_c8 = local_d0;
  if (*local_d0 != -1) {
    if (*local_d0 == 0) {
      QListData::detach((int)&local_c8);
      iVar7 = local_c8[2];
      if (iVar7 != local_c8[3]) {
        local_d0 = local_d0 + (long)local_d0[2] * 2 + 4;
        piVar11 = local_c8 + (long)iVar7 * 2 + 4;
        lVar10 = (long)local_c8[3] * 8 + (long)iVar7 * -8;
        do {
          piVar3 = *(int **)local_d0;
          *(int **)piVar11 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar11 = piVar11 + 2;
          local_d0 = local_d0 + 2;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *local_d0 = *local_d0 + 1;
      local_31 = *local_d0 != 0;
      UNLOCK();
    }
  }
  local_c0 = local_c8 + (long)local_c8[2] * 2 + 4;
  local_b8 = local_c8 + (long)local_c8[3] * 2 + 4;
  local_b0 = 1;
  FUN_100039a80(&local_d0);
  if (local_b0 != 0) {
    do {
      if (local_c0 == local_b8) break;
      local_d8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_c0;
      if (1 < *(int *)local_d8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_b0 != 0) {
        MacUtils::getRealCdMountName(&local_e0,&local_d8);
        QVar5.field0_0x0 = local_d8.field0_0x0;
        if (*(int *)(local_e0.field0_0x0 + 4) == 0) {
          if (1 < *(int *)local_d8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
          }
          lVar10 = FUN_1005c11d0(*(undefined8 *)(param_1 + 0x10));
          local_f0 = (QArrayData *)QVar5.field0_0x0;
          if (1 < *(int *)QVar5.field0_0x0 + 1U) {
            LOCK();
            *(int *)QVar5.field0_0x0 = *(int *)QVar5.field0_0x0 + 1;
            local_31 = *(int *)QVar5.field0_0x0 != 0;
            UNLOCK();
          }
          local_e8 = 1;
          FUN_1005b6b10(lVar10 + 0x140,&local_f0);
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b57ea;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
LAB_1005b57ea:
          local_100 = (QArrayData *)QVar5.field0_0x0;
          if (1 < *(int *)QVar5.field0_0x0 + 1U) {
            LOCK();
            *(int *)QVar5.field0_0x0 = *(int *)QVar5.field0_0x0 + 1;
            local_31 = *(int *)QVar5.field0_0x0 != 0;
            UNLOCK();
          }
          local_f8 = 1;
          FUN_100840070(param_1,&local_100);
          if (*(int *)local_100 != -1) {
            if (*(int *)local_100 != 0) {
              LOCK();
              *(int *)local_100 = *(int *)local_100 + -1;
              local_31 = *(int *)local_100 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b5851;
            }
            QArrayData::deallocate(local_100,2,8);
          }
LAB_1005b5851:
          if (*(int *)QVar5.field0_0x0 != -1) {
            if (*(int *)QVar5.field0_0x0 != 0) {
              LOCK();
              *(int *)QVar5.field0_0x0 = *(int *)QVar5.field0_0x0 + -1;
              local_31 = *(int *)QVar5.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005b5880;
            }
            QArrayData::deallocate((QArrayData *)QVar5.field0_0x0,2,8);
          }
        }
LAB_1005b5880:
        if (*(int *)local_e0.field0_0x0 != -1) {
          if (*(int *)local_e0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1005b58b6;
          }
          QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
        }
LAB_1005b58b6:
        local_b0 = 0;
      }
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005b58f6;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_1005b58f6:
      local_c0 = local_c0 + 2;
      uVar8 = local_b0 ^ 1;
      bVar12 = local_b0 != 1;
      local_b0 = uVar8;
    } while (bVar12);
  }
  FUN_100039a80(&local_c8);
LAB_1005b592e:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

