
undefined8 * FUN_1005ccbb0(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  QArrayData *pQVar7;
  int *piVar8;
  bool bVar9;
  QArrayData *local_a0;
  int *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  uint local_60;
  QLocale local_58 [8];
  QString local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  pQVar7 = (QArrayData *)*param_3;
  if (*(int *)(pQVar7 + 4) == 0) {
    QLocale::QLocale(local_58);
    QLocale::name();
    QLocale::~QLocale(local_58);
  }
  else {
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar7;
    if (1 < *(int *)pQVar7 + 1U) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + 1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
    }
  }
  if (*(int *)(local_50.field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1dc08d9);
    QString::operator=(&local_50,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005ccc7f;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_1005ccc7f:
  local_78 = (int *)*param_2;
  if (*local_78 != -1) {
    if (*local_78 == 0) {
      QListData::detach((int)&local_78);
      iVar4 = local_78[2];
      if (iVar4 != local_78[3]) {
        puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar8 = local_78 + (long)iVar4 * 2 + 4;
        lVar5 = (long)local_78[3] * 8 + (long)iVar4 * -8;
        do {
          piVar1 = (int *)*puVar6;
          *(int **)piVar8 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_78 = *local_78 + 1;
      local_31 = *local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)local_78[2] * 2 + 4;
  local_68 = local_78 + (long)local_78[3] * 2 + 4;
  local_60 = 1;
  if (local_78[2] != local_78[3]) {
    do {
      local_80 = *(QArrayData **)local_70;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      iVar4 = 5;
      if (local_60 != 0) {
        cVar2 = QString::startsWith(&local_80,&local_50,1);
        if (cVar2 == '\0') {
          local_60 = 0;
        }
        else {
          local_88.field0_0x0 = local_50.field0_0x0;
          if (1 < *(int *)local_50.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
            local_31 = *(int *)local_50.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0x1e1d87a);
          QString::append(&local_88);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005ccdea;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_1005ccdea:
          local_90 = (QArrayData *)QString::fromAscii_helper("",0);
          puVar6 = (undefined8 *)QString::replace(&local_80,&local_88,&local_90,1);
          piVar8 = (int *)*puVar6;
          *param_1 = piVar8;
          if (1 < *piVar8 + 1U) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            local_31 = *piVar8 != 0;
            UNLOCK();
          }
          if (*(int *)local_90 != -1) {
            if (*(int *)local_90 != 0) {
              LOCK();
              *(int *)local_90 = *(int *)local_90 + -1;
              local_31 = *(int *)local_90 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005cce65;
            }
            QArrayData::deallocate(local_90,2,8);
          }
LAB_1005cce65:
          iVar4 = 1;
          if (*(int *)local_88.field0_0x0 != -1) {
            if (*(int *)local_88.field0_0x0 != 0) {
              LOCK();
              *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
              local_31 = *(int *)local_88.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1005ccea7;
            }
            QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
          }
        }
      }
LAB_1005ccea7:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005cced7;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1005cced7:
      if (iVar4 != 5) goto LAB_1005ccf07;
      local_70 = local_70 + 2;
      uVar3 = local_60 ^ 1;
      bVar9 = local_60 != 1;
      local_60 = uVar3;
    } while ((bVar9) && (local_70 != local_68));
  }
  iVar4 = 2;
LAB_1005ccf07:
  FUN_100039a80(&local_78);
  if (iVar4 != 2) goto LAB_1005cd044;
  iVar4 = QString::compare_helper
                    ((QArrayData *)(local_50.field0_0x0 + *(long *)(local_50.field0_0x0 + 0x10)),
                     *(int *)(local_50.field0_0x0 + 4),"en_US",0xffffffff,1);
  if (iVar4 == 0) {
    *param_1 = PTR_shared_null_1021e1288;
    goto LAB_1005cd044;
  }
  local_98 = (int *)*param_2;
  if (*local_98 != -1) {
    if (*local_98 == 0) {
      QListData::detach((int)&local_98);
      iVar4 = local_98[2];
      if (iVar4 != local_98[3]) {
        puVar6 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        piVar8 = local_98 + (long)iVar4 * 2 + 4;
        lVar5 = (long)local_98[3] * 8 + (long)iVar4 * -8;
        do {
          piVar1 = (int *)*puVar6;
          *(int **)piVar8 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          puVar6 = puVar6 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_98 = *local_98 + 1;
      local_31 = *local_98 != 0;
      UNLOCK();
    }
  }
  pQVar7 = (QArrayData *)QString::fromAscii_helper("en_US",5);
  local_a0 = pQVar7;
  FUN_1005ccbb0(param_1,&local_98,&local_a0);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cd038;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1005cd038:
  FUN_100039a80(&local_98);
LAB_1005cd044:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return param_1;
}

