
undefined4 FUN_100b60910(long param_1,undefined8 *param_2)

{
  int *piVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  QMapNodeBase *pQVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined4 uVar11;
  long lVar12;
  bool bVar13;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  uint local_78;
  QString local_70;
  QArrayData *local_68;
  undefined *local_60;
  QMapNodeBase *local_58;
  QString local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_100b60fd0();
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (*(int *)(local_40.field0_0x0 + 4) == 0) {
    return 0x80011029;
  }
  if (1 < *(int *)local_40.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
    local_31 = *(int *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::trimmed();
  iVar6 = *(int *)(local_48 + 4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b60994;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100b60994:
  if (iVar6 < 0x23) {
    FUN_100b90700(&local_50,param_2);
    QString::operator=(&local_40,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b609e3;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
  }
LAB_100b609e3:
  puVar3 = PTR_shared_null_1021e12f0;
  local_58 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  local_60 = PTR_shared_null_1021e12f0;
  QString::toLatin1();
  iVar6 = FUN_100b90e60(local_68 + *(long *)(local_68 + 0x10),&local_58);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b60a42;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100b60a42:
  if (iVar6 == 0) {
    local_70.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("valid_period",0xc);
    if (*(long *)(local_58 + 0x10) == 0) {
LAB_100b60ae2:
      lVar10 = 0;
    }
    else {
      lVar8 = *(long *)(local_58 + 0x10);
      lVar12 = 0;
      do {
        while (lVar10 = lVar8, cVar5 = operator<((QString *)(lVar10 + 0x18),&local_70),
              cVar5 == '\0') {
          lVar8 = *(long *)(lVar10 + 8);
          lVar12 = lVar10;
          if (*(long *)(lVar10 + 8) == 0) goto LAB_100b60ad1;
        }
        lVar8 = *(long *)(lVar10 + 0x10);
      } while (*(long *)(lVar10 + 0x10) != 0);
      lVar10 = lVar12;
      if (lVar12 == 0) goto LAB_100b60ae2;
LAB_100b60ad1:
      cVar5 = operator<(&local_70,(QString *)(lVar10 + 0x18));
      if (cVar5 != '\0') goto LAB_100b60ae2;
    }
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100b60b14;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100b60b14:
    uVar11 = 0x80011024;
    if (lVar10 == 0) {
      FUN_100b7c510(&local_98,param_1 + 0x18);
      local_90 = local_98;
      if (*local_98 != -1) {
        if (*local_98 == 0) {
          QListData::detach((int)&local_90);
          iVar6 = local_90[2];
          if (iVar6 != local_90[3]) {
            local_98 = local_98 + (long)local_98[2] * 2 + 4;
            piVar9 = local_90 + (long)iVar6 * 2 + 4;
            lVar8 = (long)local_90[3] * 8 + (long)iVar6 * -8;
            do {
              piVar1 = *(int **)local_98;
              *(int **)piVar9 = piVar1;
              if (1 < *piVar1 + 1U) {
                LOCK();
                *piVar1 = *piVar1 + 1;
                local_31 = *piVar1 != 0;
                UNLOCK();
              }
              piVar9 = piVar9 + 2;
              local_98 = local_98 + 2;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
        }
        else {
          LOCK();
          *local_98 = *local_98 + 1;
          local_31 = *local_98 != 0;
          UNLOCK();
        }
      }
      local_88 = local_90 + (long)local_90[2] * 2 + 4;
      local_80 = local_90 + (long)local_90[3] * 2 + 4;
      local_78 = 1;
      FUN_100036370(&local_98);
      if (local_78 != 0) {
        do {
          if (local_88 == local_80) break;
          pQVar2 = *(QArrayData **)local_88;
          if (1 < *(int *)pQVar2 + 1U) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + 1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
          }
          if (local_78 != 0) {
            local_78 = 0;
          }
          if (*(int *)pQVar2 != -1) {
            if (*(int *)pQVar2 != 0) {
              LOCK();
              *(int *)pQVar2 = *(int *)pQVar2 + -1;
              local_31 = *(int *)pQVar2 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b60c50;
            }
            QArrayData::deallocate(pQVar2,2,8);
          }
LAB_100b60c50:
          local_88 = local_88 + 2;
          uVar7 = local_78 ^ 1;
          bVar13 = local_78 != 1;
          local_78 = uVar7;
        } while (bVar13);
      }
      FUN_100036370(&local_90);
      iVar6 = FUN_100b61850(param_1,&local_40,&local_58,&local_60);
      uVar11 = 0x80011000;
      if (iVar6 != 0) {
        uVar11 = 0;
      }
    }
  }
  else {
    uVar11 = 0x80011000;
    if (iVar6 + 0x12U < 0x1a) {
      uVar11 = *(undefined4 *)(&DAT_101cdc110 + (long)(int)(iVar6 + 0x12U) * 4);
    }
  }
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_31 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b60ce0;
    }
    if (*(long *)(puVar3 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree((QMapNodeBase *)puVar3,(int)*(undefined8 *)(puVar3 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)PTR_shared_null_1021e12f0);
  }
LAB_100b60ce0:
  pQVar4 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b60d28;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_10012a490();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
LAB_100b60d28:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar11;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar11;
}

