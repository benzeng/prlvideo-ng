
undefined8 * FUN_1003ce5e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  size_t sVar10;
  QVariant *pQVar11;
  int *piVar12;
  bool bVar13;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QVariant local_b0;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  _func_void_Node_ptr *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  uint local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  lVar8 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
  if (lVar8 == 0) {
    return param_1;
  }
  cVar4 = QAbstractButton::isChecked();
  if (cVar4 == '\0') {
    return param_1;
  }
  local_32 = 0;
  local_33 = 0;
  local_34 = 0;
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  iVar6 = QString::compare_helper
                    (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),"Scaled",
                     0xffffffff,1);
  if (iVar6 == 0) {
    local_32 = 0;
LAB_1003ce739:
    local_33 = 0;
    local_34 = 0;
  }
  else {
    iVar6 = QString::compare_helper
                      (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                       "RetinaBest",0xffffffff,1);
    if (iVar6 == 0) {
      local_32 = 1;
      local_33 = 1;
      local_34 = 0;
    }
    else {
      iVar6 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                         "MoreSpace",0xffffffff,1);
      if (iVar6 == 0) {
        local_32 = 1;
        goto LAB_1003ce739;
      }
      iVar6 = QString::compare_helper
                        (local_40 + *(long *)(local_40 + 0x10),*(undefined4 *)(local_40 + 4),
                         "RetinaNative",0xffffffff,1);
      if (iVar6 == 0) {
        local_32 = 1;
        local_33 = 1;
        local_34 = 1;
      }
    }
  }
  uVar9 = FUN_1003b0b10(*(undefined8 *)(param_2 + 0x18));
  cVar4 = FUN_1003bf680(uVar9);
  puVar3 = PTR_s_VmConfig_1021f1e00;
  iVar6 = -1;
  if (PTR_s_VmConfig_1021f1e00 != (undefined *)0x0) {
    sVar10 = _strlen(PTR_s_VmConfig_1021f1e00);
    iVar6 = (int)sVar10;
  }
  local_88 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
  FUN_1003ae3b0(&local_80,param_4,&local_88);
  FUN_1000626e0(&local_78,&local_80);
  local_70 = local_78;
  if (*local_78 != -1) {
    if (*local_78 == 0) {
      QListData::detach((int)&local_70);
      iVar6 = local_70[2];
      if (iVar6 != local_70[3]) {
        local_78 = local_78 + (long)local_78[2] * 2 + 4;
        piVar12 = local_70 + (long)iVar6 * 2 + 4;
        lVar8 = (long)local_70[3] * 8 + (long)iVar6 * -8;
        do {
          piVar2 = *(int **)local_78;
          *(int **)piVar12 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar12 = piVar12 + 2;
          local_78 = local_78 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
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
  FUN_100036370(&local_78);
  if (*(int *)(local_80 + 0x10) != -1) {
    if (*(int *)(local_80 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_80 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ce888;
    }
    QHashData::free_helper(local_80);
  }
LAB_1003ce888:
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003ce8b8;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003ce8b8:
  if (local_58 != 0) {
    do {
      if (local_68 == local_60) break;
      local_90 = *(QArrayData **)local_68;
      if (1 < *(int *)local_90 + 1U) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + 1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
      }
      if (local_58 != 0) {
        local_98 = (QArrayData *)QString::fromAscii_helper(".EnableHiResDrawing",0x13);
        cVar5 = QString::endsWith(&local_90,&local_98,1);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003ce979;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_1003ce979:
        if (cVar5 == '\0') {
          if (cVar4 != '\0') {
            local_b8 = (QArrayData *)QString::fromAscii_helper(".UseHiResInGuest",0x10);
            cVar5 = QString::endsWith(&local_90,&local_b8,1);
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ceab5;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
LAB_1003ceab5:
            if (cVar5 != '\0') {
              iVar6 = -1;
              if (puVar3 != (undefined *)0x0) {
                sVar10 = _strlen(puVar3);
                iVar6 = (int)sVar10;
              }
              local_c0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
              uVar9 = FUN_1003ae480(param_1,&local_c0);
              pQVar11 = (QVariant *)FUN_1002edf40(uVar9,&local_90);
              QVariant::QVariant(&local_d0,1,&local_33,0);
              QVariant::operator=(pQVar11,&local_d0);
              QVariant::~QVariant(&local_d0);
              if (*(int *)local_c0 != -1) {
                if (*(int *)local_c0 != 0) {
                  LOCK();
                  *(int *)local_c0 = *(int *)local_c0 + -1;
                  local_31 = *(int *)local_c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1003ceca0;
                }
                QArrayData::deallocate(local_c0,2,8);
              }
              goto LAB_1003ceca0;
            }
          }
          local_d8 = (QArrayData *)QString::fromAscii_helper(".NativeScalingInGuest",0x15);
          cVar5 = QString::endsWith(&local_90,&local_d8,1);
          if (*(int *)local_d8 != -1) {
            if (*(int *)local_d8 != 0) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + -1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003cebe8;
            }
            QArrayData::deallocate(local_d8,2,8);
          }
LAB_1003cebe8:
          if (cVar5 != '\0') {
            iVar6 = -1;
            if (puVar3 != (undefined *)0x0) {
              sVar10 = _strlen(puVar3);
              iVar6 = (int)sVar10;
            }
            local_e0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
            uVar9 = FUN_1003ae480(param_1,&local_e0);
            pQVar11 = (QVariant *)FUN_1002edf40(uVar9,&local_90);
            QVariant::QVariant(&local_f0,1,&local_34,0);
            QVariant::operator=(pQVar11,&local_f0);
            QVariant::~QVariant(&local_f0);
            if (*(int *)local_e0 != -1) {
              if (*(int *)local_e0 != 0) {
                LOCK();
                *(int *)local_e0 = *(int *)local_e0 + -1;
                local_31 = *(int *)local_e0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003ceca0;
              }
              QArrayData::deallocate(local_e0,2,8);
            }
          }
        }
        else {
          iVar6 = -1;
          if (puVar3 != (undefined *)0x0) {
            sVar10 = _strlen(puVar3);
            iVar6 = (int)sVar10;
          }
          local_a0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar6);
          uVar9 = FUN_1003ae480(param_1,&local_a0);
          pQVar11 = (QVariant *)FUN_1002edf40(uVar9,&local_90);
          QVariant::QVariant(&local_b0,1,&local_32,0);
          QVariant::operator=(pQVar11,&local_b0);
          QVariant::~QVariant(&local_b0);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003ceca0;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
        }
LAB_1003ceca0:
        local_58 = 0;
      }
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003cecdd;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1003cecdd:
      local_68 = local_68 + 2;
      uVar7 = local_58 ^ 1;
      bVar13 = local_58 != 1;
      local_58 = uVar7;
    } while (bVar13);
  }
  FUN_100036370(&local_70);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

