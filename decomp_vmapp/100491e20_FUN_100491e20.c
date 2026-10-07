
undefined4
FUN_100491e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined1 *param_5,char param_6)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  QArrayData *pQVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  long *local_d8;
  QArrayData *local_d0;
  undefined *local_c8;
  QArrayData *local_c0;
  int *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined *local_98;
  int *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QArrayData *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1004916a0(&local_88,param_2,param_2);
  FUN_10048b000(&local_90,param_1,param_2,param_3);
  local_98 = PTR_shared_null_100ba2188;
  QString::toUtf8();
  pQVar6 = local_a0 + *(long *)(local_a0 + 0x10);
  local_b8 = local_90;
  if (*local_90 != -1) {
    if (*local_90 == 0) {
      QListData::detach((int)&local_b8);
      iVar4 = local_b8[2];
      if (iVar4 != local_b8[3]) {
        piVar9 = local_90 + (long)local_90[2] * 2 + 4;
        piVar10 = local_b8 + (long)iVar4 * 2 + 4;
        lVar7 = (long)local_b8[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = *(int **)piVar9;
          *(int **)piVar10 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          piVar9 = piVar9 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_90 = *local_90 + 1;
      local_31 = *local_90 != 0;
      UNLOCK();
    }
  }
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_60 = local_b8;
  if (*local_b8 != -1) {
    if (*local_b8 == 0) {
      QListData::detach((int)&local_60);
      iVar4 = local_60[2];
      if (iVar4 != local_60[3]) {
        piVar9 = local_b8 + (long)local_b8[2] * 2 + 4;
        piVar10 = local_60 + (long)iVar4 * 2 + 4;
        lVar7 = (long)local_60[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = *(int **)piVar9;
          *(int **)piVar10 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          piVar9 = piVar9 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_b8 = *local_b8 + 1;
      local_31 = *local_b8 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (local_60[2] != local_60[3]) {
    do {
      local_68 = *(QArrayData **)local_58;
      if (1 < *(int *)local_68 + 1U) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        iVar4 = QString::indexOf(&local_68,0x20,0,1);
        if (iVar4 < 0) {
          QString::fromUtf8_helper((char *)&local_80,0xa10314);
          QString::append(&local_80);
          QString::append(&local_b0);
          if (*(int *)local_80.field0_0x0 != -1) {
            if (*(int *)local_80.field0_0x0 != 0) {
              LOCK();
              *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
              local_31 = *(int *)local_80.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004921c0;
            }
            QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
          }
        }
        else {
          QString::fromUtf8_helper((char *)&local_78,0xa37b0e);
          QString::append(&local_78);
          local_70.field0_0x0 = local_78.field0_0x0;
          if (1 < *(int *)local_78.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0xa51e6a);
          QString::append(&local_70);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004920e6;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1004920e6:
          QString::append(&local_b0);
          if (*(int *)local_70.field0_0x0 != -1) {
            if (*(int *)local_70.field0_0x0 != 0) {
              LOCK();
              *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
              local_31 = *(int *)local_70.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100492125;
            }
            QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
          }
LAB_100492125:
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004921c0;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
        }
LAB_1004921c0:
        local_48 = 0;
      }
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004921f7;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1004921f7:
      local_58 = local_58 + 2;
      uVar8 = local_48 ^ 1;
      bVar11 = local_48 != 1;
      local_48 = uVar8;
    } while ((bVar11) && (local_58 != local_50));
  }
  FUN_100013180(&local_60);
  puVar3 = PTR_shared_null_100ba20d0;
  QString::toUtf8();
  FUN_1008e3970("TCHOST","ToolsCenterHost",0,"run: %s %s",pQVar6,
                local_a8 + *(long *)(local_a8 + 0x10));
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004922a9;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_1004922a9:
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_31 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004922df;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1004922df:
  FUN_100013180(&local_b8);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492321;
    }
    QArrayData::deallocate(local_a0,1,8);
  }
LAB_100492321:
  uVar5 = 0;
  if (local_90[3] - local_90[2] < 2) goto LAB_1004924c7;
  if (param_6 != '\0') {
    pQVar6 = (QArrayData *)QString::fromAscii_helper("PRL_NETTOOLS_OPT=--compare",0x1a);
    local_c0 = pQVar6;
    FUN_10000c490(&local_98,&local_c0);
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        local_31 = *(int *)pQVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10049239d;
      }
      QArrayData::deallocate(pQVar6,2,8);
    }
  }
LAB_10049239d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 1;
  }
  local_c8 = puVar3;
  pQVar6 = (QArrayData *)QString::fromAscii_helper("FAKE_SESSION_UUID",0x11);
  param_4 = (long *)*param_4;
  if (param_4 != (long *)0x0) {
    LOCK();
    *(int *)(param_4 + 1) = (int)param_4[1] + 1;
    UNLOCK();
  }
  local_d8 = param_4;
  local_d0 = pQVar6;
  uVar5 = FUN_100486cb0(param_1,&local_d0,&local_88,&local_90,&local_98,0x3800,&local_d8,&local_c8,
                        FUN_100491710,2);
  if (param_4 != (long *)0x0) {
    LOCK();
    plVar1 = param_4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*param_4 + 0x10))(param_4);
    }
  }
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_31 = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100492494;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100492494:
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004924c7;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_1004924c7:
  FUN_100013180(&local_98);
  FUN_100013180(&local_90);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return uVar5;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
  return uVar5;
}

