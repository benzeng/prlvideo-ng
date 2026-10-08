
undefined8 * FUN_1001c0220(undefined8 *param_1,uint param_2,char param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  Data *pDVar5;
  AnonymousUnion0 AVar6;
  char cVar7;
  int iVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  long lVar11;
  Data *pDVar12;
  Data *pDVar13;
  Data *pDVar14;
  QPixmap local_190 [32];
  QArrayData *local_170;
  QArrayData *local_168;
  QPixmap local_160 [32];
  QString local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  long local_100;
  long *local_f8;
  long *local_f0;
  int local_e8;
  undefined1 local_e0 [16];
  QString local_d0;
  QPixmap local_c8 [32];
  QArrayData *local_a8;
  QPixmap local_a0 [32];
  AnonymousUnion0 local_80;
  Data *local_78;
  AnonymousUnion0 local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined *local_48;
  AnonymousUnion0 local_40;
  undefined1 local_31;
  
  puVar4 = PTR_shared_null_1021e15e8;
  *param_1 = PTR_shared_null_1021e15e8;
  if ((param_2 & 2) == 0) goto LAB_1001c0625;
  local_48 = puVar4;
  pQVar9 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
  local_50 = pQVar9;
  FUN_1000341d0(&local_48,&local_50);
  pQVar10 = (QArrayData *)QString::fromAscii_helper("Parallels Image Tool",0x14);
  local_58 = pQVar10;
  FUN_1000341d0(&local_48,&local_58);
  if (*(int *)pQVar10 != -1) {
    if (*(int *)pQVar10 != 0) {
      LOCK();
      *(int *)pQVar10 = *(int *)pQVar10 + -1;
      local_31 = *(int *)pQVar10 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c02d4;
    }
    QArrayData::deallocate(pQVar10,2,8);
  }
LAB_1001c02d4:
  if (*(int *)pQVar9 != -1) {
    if (*(int *)pQVar9 != 0) {
      LOCK();
      *(int *)pQVar9 = *(int *)pQVar9 + -1;
      local_31 = *(int *)pQVar9 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c0301;
    }
    QArrayData::deallocate(pQVar9,2,8);
  }
LAB_1001c0301:
  if ((param_2 & 1) != 0) {
    pQVar9 = (QArrayData *)QString::fromAscii_helper("Parallels Explorer",0x12);
    local_60 = pQVar9;
    FUN_1000341d0(&local_48,&local_60);
    pQVar10 = (QArrayData *)QString::fromAscii_helper("Parallels Mounter",0x11);
    local_68 = pQVar10;
    FUN_1000341d0(&local_48,&local_68);
    if (*(int *)pQVar10 != -1) {
      if (*(int *)pQVar10 != 0) {
        LOCK();
        *(int *)pQVar10 = *(int *)pQVar10 + -1;
        local_31 = *(int *)pQVar10 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001c0383;
      }
      QArrayData::deallocate(pQVar10,2,8);
    }
LAB_1001c0383:
    if (*(int *)pQVar9 != -1) {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_31 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1001c03b0;
      }
      QArrayData::deallocate(pQVar9,2,8);
    }
  }
LAB_1001c03b0:
  local_70.field1 = (Data *)puVar4;
  local_78 = (Data *)puVar4;
  MacUtils::getRunningApps((QStringList *)&local_80.field0,(QList *)&local_48);
  if (local_70.field1 != local_80.field1) {
    local_40.field1 = local_80.field1;
    if (*(uint *)local_80.field1 != 0xffffffff) {
      if (*(uint *)local_80.field1 == 0) {
        QListData::detach((int)&local_40);
        uVar1 = *(uint *)(local_40.field1 + 8);
        if (uVar1 != *(uint *)(local_40.field1 + 0xc)) {
          pDVar12 = local_80.field1 + (long)(int)*(uint *)(local_80.field1 + 8) * 8 + 0x10;
          pDVar13 = local_40.field1 + (long)(int)uVar1 * 8 + 0x10;
          lVar11 = (long)(int)*(uint *)(local_40.field1 + 0xc) * 8 + (long)(int)uVar1 * -8;
          do {
            piVar2 = *(int **)pDVar12;
            *(int **)pDVar13 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            pDVar13 = pDVar13 + 8;
            pDVar12 = pDVar12 + 8;
            lVar11 = lVar11 + -8;
          } while (lVar11 != 0);
        }
      }
      else {
        LOCK();
        *(uint *)local_80.field1 = *(uint *)local_80.field1 + 1;
        local_31 = *(uint *)local_80.field1 != 0;
        UNLOCK();
      }
    }
    AVar6 = local_40;
    local_40.field1 = local_70.field1;
    local_70.field1 = AVar6.field1;
    FUN_100039a80(&local_40);
  }
  FUN_100039a80(&local_80);
  if (0 < (int)((*(uint *)(local_70.field1 + 0xc) - 1) - *(uint *)(local_70.field1 + 8))) {
    lVar11 = 0;
    do {
      if (1 < *(uint *)local_70.field1) {
        FUN_100036c40(&local_70,*(uint *)(local_70.field1 + 4));
      }
      AVar6 = local_70;
      uVar1 = *(uint *)(local_70.field1 + 8);
      if (param_3 == '\0') {
        QPixmap::QPixmap(local_c8);
      }
      else {
        if (1 < *(uint *)local_78) {
          FUN_1001c1700(&local_78,*(uint *)(local_78 + 4));
        }
        QPixmap::QPixmap(local_c8,*(QPixmap **)
                                   (local_78 + ((int)*(uint *)(local_78 + 8) + lVar11) * 8 + 0x10));
      }
      FUN_1001c18a0(&local_a8,AVar6.field1 + ((int)uVar1 + lVar11) * 8 + 0x10,local_c8);
      FUN_1001c1090(param_1,&local_a8);
      QPixmap::~QPixmap(local_a0);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001c057c;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
LAB_1001c057c:
      QPixmap::~QPixmap(local_c8);
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)((*(uint *)(local_70.field1 + 0xc) - 1) - *(uint *)(local_70.field1 + 8))
            );
  }
  pDVar5 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001c0613;
    }
    iVar8 = *(int *)(local_78 + 0xc);
    if (iVar8 != *(int *)(local_78 + 8)) {
      lVar11 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar8 * -8;
      pDVar14 = local_78 + (long)iVar8 * 8 + 8;
      do {
        if (*(long **)pDVar14 != (long *)0x0) {
          (**(code **)(**(long **)pDVar14 + 8))();
        }
        pDVar14 = pDVar14 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_1001c0613:
  FUN_100039a80(&local_70);
  FUN_100039a80(&local_48);
LAB_1001c0625:
  if ((param_2 & 4) != 0) {
    local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    if ((param_2 & 1) == 0) {
      FUN_100d78ea0(local_e0);
      FUN_100d793f0(local_e0,&local_d0);
      FUN_100d79060(local_e0);
    }
    MacUtils::getProcessesInfo();
    FUN_1001c1b20(&local_100,local_108);
    local_f8 = (long *)(local_100 + 0x10 + (long)*(int *)(local_100 + 8) * 8);
    local_f0 = (long *)(local_100 + 0x10 + (long)*(int *)(local_100 + 0xc) * 8);
    local_e8 = 1;
    FUN_1001c1230(local_108);
    if ((local_e8 != 0) && (local_f8 != local_f0)) {
      do {
        lVar11 = *local_f8;
        lVar3 = *(long *)(lVar11 + 8);
        iVar8 = QString::compare_helper
                          (*(long *)(lVar3 + 0x10) + lVar3,*(undefined4 *)(lVar3 + 4),"prl_vm_app",
                           0xffffffff,1);
        if (iVar8 == 0) {
          local_128 = (QArrayData *)QString::fromAscii_helper(".app",4);
          QString::lastIndexOf(lVar11 + 0x10,&local_128,0xffffffff,1);
          QString::left((int)&local_120);
          FUN_100d79030(local_118,&local_120);
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_31 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001c07ca;
            }
            QArrayData::deallocate(local_120,2,8);
          }
LAB_1001c07ca:
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              local_31 = *(int *)local_128 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001c0800;
            }
            QArrayData::deallocate(local_128,2,8);
          }
LAB_1001c0800:
          local_130 = (QArrayData *)PTR_shared_null_1021e1288;
          cVar7 = FUN_100d79080(local_118,&local_130);
          if (cVar7 == '\0') {
LAB_1001c0891:
            if ((param_2 & 1) == 0) {
              local_140.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
              cVar7 = FUN_100d793f0(local_118,&local_140);
              if (cVar7 == '\0') {
LAB_1001c08d7:
                iVar8 = 0;
              }
              else {
                cVar7 = operator==(&local_140,&local_d0);
                iVar8 = 10;
                if (cVar7 == '\0') goto LAB_1001c08d7;
              }
              if (*(int *)local_140.field0_0x0 != -1) {
                if (*(int *)local_140.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_140.field0_0x0 = *(int *)local_140.field0_0x0 + -1;
                  local_31 = *(int *)local_140.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_1001c090f;
                }
                QArrayData::deallocate((QArrayData *)local_140.field0_0x0,2,8);
              }
LAB_1001c090f:
              if (iVar8 != 0) goto LAB_1001c09f0;
            }
            QMetaObject::tr((char *)&local_170,PTR_staticMetaObject_1021e1520,0x1dd7924);
            QPixmap::QPixmap(local_190);
            FUN_1001c18a0(&local_168,&local_170,local_190);
            FUN_1001c1090(param_1,&local_168);
            QPixmap::~QPixmap(local_160);
            if (*(int *)local_168 != -1) {
              if (*(int *)local_168 != 0) {
                LOCK();
                *(int *)local_168 = *(int *)local_168 + -1;
                local_31 = *(int *)local_168 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001c09a4;
              }
              QArrayData::deallocate(local_168,2,8);
            }
LAB_1001c09a4:
            QPixmap::~QPixmap(local_190);
            if (*(int *)local_170 != -1) {
              if (*(int *)local_170 != 0) {
                LOCK();
                *(int *)local_170 = *(int *)local_170 + -1;
                local_31 = *(int *)local_170 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001c09f0;
              }
              QArrayData::deallocate(local_170,2,8);
            }
          }
          else {
            local_138 = (QArrayData *)QString::fromAscii_helper(".appstore",9);
            cVar7 = QString::endsWith(&local_130,&local_138,1);
            if (*(int *)local_138 != -1) {
              if (*(int *)local_138 != 0) {
                LOCK();
                *(int *)local_138 = *(int *)local_138 + -1;
                local_31 = *(int *)local_138 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1001c0889;
              }
              QArrayData::deallocate(local_138,2,8);
            }
LAB_1001c0889:
            if (cVar7 == '\0') goto LAB_1001c0891;
          }
LAB_1001c09f0:
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_31 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1001c0a26;
            }
            QArrayData::deallocate(local_130,2,8);
          }
LAB_1001c0a26:
          FUN_100d79060(local_118);
        }
        local_f8 = local_f8 + 1;
        local_e8 = 1;
      } while (local_f8 != local_f0);
    }
    FUN_1001c1230(&local_100);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_d0.field0_0x0 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
  }
  return param_1;
}

