
undefined8 * FUN_100772a20(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uid_t uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  uint local_c0;
  QArrayData *local_b8;
  int *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  uint local_60;
  undefined1 local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_100ba2188;
  uVar6 = _geteuid();
  if (uVar6 != 0) {
    return param_1;
  }
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_48 = (QArrayData *)QString::fromAscii_helper("pkgutil --pkgs=com.vagrant.vagrant",0x22);
  cVar5 = FUN_100770460(&local_48,&local_40,0,0,0);
  bVar13 = true;
  if (cVar5 != '\0') {
    local_50 = (QArrayData *)QString::fromAscii_helper("com.vagrant.vagrant",0x13);
    iVar7 = QString::indexOf(&local_40,&local_50,0,1);
    bVar13 = iVar7 == -1;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100772ae9;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100772ae9:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100772b19;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100772b19:
  bVar3 = true;
  if (!bVar13) {
    FUN_100773330(local_58,0);
    FUN_1006ed730(&local_78,local_58);
    local_70 = (undefined8 *)(local_78 + 0x10 + (long)*(int *)(local_78 + 8) * 8);
    local_68 = (undefined8 *)(local_78 + 0x10 + (long)*(int *)(local_78 + 0xc) * 8);
    local_60 = 1;
    iVar7 = 2;
    if (*(int *)(local_78 + 8) == *(int *)(local_78 + 0xc)) {
      bVar4 = 0;
    }
    else {
      bVar4 = 0;
      do {
        puVar1 = (undefined8 *)*local_70;
        local_98 = (int *)*puVar1;
        if (1 < *local_98 + 1U) {
          LOCK();
          *local_98 = *local_98 + 1;
          local_31 = *local_98 != 0;
          UNLOCK();
        }
        local_90 = (int *)puVar1[1];
        if (1 < *local_90 + 1U) {
          LOCK();
          *local_90 = *local_90 + 1;
          local_31 = *local_90 != 0;
          UNLOCK();
        }
        local_88 = (int *)puVar1[2];
        if (1 < *local_88 + 1U) {
          LOCK();
          *local_88 = *local_88 + 1;
          local_31 = *local_88 != 0;
          UNLOCK();
        }
        local_80 = (int *)puVar1[3];
        if (1 < *local_80 + 1U) {
          LOCK();
          *local_80 = *local_80 + 1;
          local_31 = *local_80 != 0;
          UNLOCK();
        }
        iVar7 = 5;
        if (local_60 != 0) {
          local_a8 = (QArrayData *)
                     QString::fromAscii_helper("su %1 -c \'vagrant plugin list\'",0x1e);
          QString::arg(&local_a0,&local_a8,&local_98,0,0x20);
          cVar5 = FUN_100770460(&local_a0,&local_40,0,0,0);
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              local_31 = *(int *)local_a0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100772c96;
            }
            QArrayData::deallocate(local_a0,2,8);
          }
LAB_100772c96:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100772ccc;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
LAB_100772ccc:
          if (cVar5 == '\0') {
            iVar7 = 1;
            bVar4 = 1;
          }
          else {
            local_b8 = (QArrayData *)QString::fromAscii_helper("\n",1);
            QString::split(&local_b0,&local_40,&local_b8,0,1);
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100772d42;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
LAB_100772d42:
            local_d8 = local_b0;
            if (*local_b0 != -1) {
              if (*local_b0 == 0) {
                QListData::detach((int)&local_d8);
                iVar8 = local_d8[2];
                if (iVar8 != local_d8[3]) {
                  piVar11 = local_b0 + (long)local_b0[2] * 2 + 4;
                  piVar12 = local_d8 + (long)iVar8 * 2 + 4;
                  lVar9 = (long)local_d8[3] * 8 + (long)iVar8 * -8;
                  do {
                    piVar2 = *(int **)piVar11;
                    *(int **)piVar12 = piVar2;
                    if (1 < *piVar2 + 1U) {
                      LOCK();
                      *piVar2 = *piVar2 + 1;
                      local_31 = *piVar2 != 0;
                      UNLOCK();
                    }
                    piVar12 = piVar12 + 2;
                    piVar11 = piVar11 + 2;
                    lVar9 = lVar9 + -8;
                  } while (lVar9 != 0);
                }
              }
              else {
                LOCK();
                *local_b0 = *local_b0 + 1;
                local_31 = *local_b0 != 0;
                UNLOCK();
              }
            }
            local_d0 = local_d8 + (long)local_d8[2] * 2 + 4;
            local_c8 = local_d8 + (long)local_d8[3] * 2 + 4;
            local_c0 = 1;
            if (local_d8[2] != local_d8[3]) {
              do {
                local_e0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_d0;
                if (1 < *(int *)local_e0.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
                  local_31 = *(int *)local_e0.field0_0x0 != 0;
                  UNLOCK();
                }
                if (local_c0 != 0) {
                  QString::trimmed();
                  QString::operator=(&local_e0,&local_e8);
                  if (*(int *)local_e8.field0_0x0 != -1) {
                    if (*(int *)local_e8.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                      local_31 = *(int *)local_e8.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100772eb5;
                    }
                    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
                  }
LAB_100772eb5:
                  local_f0 = (QArrayData *)QString::fromAscii_helper("vagrant-parallels",0x11);
                  iVar8 = QString::indexOf(&local_e0,&local_f0,0,1);
                  if (*(int *)local_f0 != -1) {
                    if (*(int *)local_f0 != 0) {
                      LOCK();
                      *(int *)local_f0 = *(int *)local_f0 + -1;
                      local_31 = *(int *)local_f0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100772f1b;
                    }
                    QArrayData::deallocate(local_f0,2,8);
                  }
LAB_100772f1b:
                  if (iVar8 != -1) {
                    FUN_10000c490(param_1,&local_e0);
                  }
                  local_c0 = 0;
                }
                if (*(int *)local_e0.field0_0x0 != -1) {
                  if (*(int *)local_e0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
                    local_31 = *(int *)local_e0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100772f6b;
                  }
                  QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
                }
LAB_100772f6b:
                local_d0 = local_d0 + 2;
                uVar10 = local_c0 ^ 1;
                bVar13 = local_c0 != 1;
                local_c0 = uVar10;
              } while ((bVar13) && (local_d0 != local_c8));
            }
            FUN_100013180(&local_d8);
            FUN_100013180(&local_b0);
            local_60 = 0;
          }
        }
        FUN_1006ed5b0(&local_98);
        if (iVar7 != 5) goto LAB_100773010;
        local_70 = local_70 + 1;
        uVar10 = local_60 ^ 1;
      } while ((local_60 != 1) && (local_60 = uVar10, local_70 != local_68));
      iVar7 = 2;
      local_60 = uVar10;
    }
LAB_100773010:
    FUN_1006ed500(&local_78);
    FUN_1006ed500(local_58);
    bVar3 = (bool)(bVar4 | iVar7 == 2);
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077305d;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10077305d:
  if (!bVar3) {
    FUN_100013180(param_1);
  }
  return param_1;
}

