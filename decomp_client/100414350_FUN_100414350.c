
void FUN_100414350(long param_1)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  Data *pDVar10;
  long lVar11;
  Data *pDVar12;
  QArrayData *pQVar13;
  bool bVar14;
  QVariant local_160;
  QArrayData *local_150;
  QVariant local_148;
  QArrayData *local_138;
  Data *local_130;
  QArrayData *local_128;
  Data *local_120;
  Data *local_118;
  Data *local_110;
  uint local_108;
  Data *local_100;
  QArrayData *local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QVariant local_d0;
  QArrayData *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QVariant local_70;
  int *local_60;
  QArrayData *local_58;
  QVariant local_50;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_58 = (QArrayData *)
             QString::fromAscii_helper("Settings.Startup.ExternalDeviceSystemName",0x29);
  FUN_1003e1800(&local_50,uVar6,&local_58);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004143e7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004143e7:
  local_60 = (int *)PTR_shared_null_1021e15e8;
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,0x1df35e1);
  local_98 = (QArrayData *)PTR_shared_null_1021e1288;
  QVariant::QVariant(&local_90,10,&local_98,0);
  FUN_10041e0f0(&local_78,&local_80,&local_90);
  FUN_10041e170(&local_60,&local_78);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100414493;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100414493:
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004144d5;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1004144d5:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100414505;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100414505:
  uVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  lVar7 = FUN_10015a340(uVar6);
  plVar1 = *(long **)(lVar7 + 0x180);
  local_b8 = (Data *)*plVar1;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 == 0) {
      QListData::detach((int)&local_b8);
      lVar9 = (long)*(int *)(local_b8 + 8);
      lVar7 = *plVar1;
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_b8 + lVar9 * 8) &&
         (lVar11 = *(int *)(local_b8 + 0xc) - lVar9,
         lVar11 != 0 && lVar9 <= *(int *)(local_b8 + 0xc))) {
        _memcpy(local_b8 + lVar9 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
  local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
  if (*(int *)(local_b8 + 8) == *(int *)(local_b8 + 0xc)) {
    bVar14 = false;
  }
  else {
    bVar14 = false;
    do {
      local_a0 = 1;
      plVar1 = *(long **)local_b0;
      iVar5 = CHwUsbDevice::getUsbType();
      if (iVar5 == 0xd) {
        (**(code **)(*plVar1 + 0xb8))(&local_c0,plVar1);
        cVar4 = FUN_1001aee90(&local_c0,&local_40);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100414643;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100414643:
        bVar3 = true;
        if (cVar4 == '\0') {
          bVar3 = bVar14;
        }
        bVar14 = bVar3;
        (**(code **)(*plVar1 + 0xa8))(&local_e0,plVar1);
        (**(code **)(*plVar1 + 0xb8))(&local_f8,plVar1);
        QVariant::QVariant(&local_f0,10,&local_f8,0);
        FUN_10041e0f0(&local_d8,&local_e0,&local_f0);
        FUN_10041e170(&local_60,&local_d8);
        QVariant::~QVariant(&local_d0);
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004146f7;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
LAB_1004146f7:
        QVariant::~QVariant(&local_f0);
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100414735;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_100414735:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100414773;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
      }
LAB_100414773:
      local_b0 = local_b0 + 8;
    } while (local_b0 != local_a8);
  }
  local_a0 = 1;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004147cb;
    }
    QListData::dispose(local_b8);
  }
LAB_1004147cb:
  if (!bVar14) {
    FUN_1001b1ce0(&local_100);
    local_120 = local_100;
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 == 0) {
        QListData::detach((int)&local_120);
        iVar5 = *(int *)(local_120 + 8);
        if (iVar5 != *(int *)(local_120 + 0xc)) {
          pDVar10 = local_100 + (long)*(int *)(local_100 + 8) * 8 + 0x10;
          pDVar12 = local_120 + (long)iVar5 * 8 + 0x10;
          lVar7 = (long)*(int *)(local_120 + 0xc) * 8 + (long)iVar5 * -8;
          do {
            piVar2 = *(int **)pDVar10;
            *(int **)pDVar12 = piVar2;
            if (1 < *piVar2 + 1U) {
              LOCK();
              *piVar2 = *piVar2 + 1;
              local_31 = *piVar2 != 0;
              UNLOCK();
            }
            pDVar12 = pDVar12 + 8;
            pDVar10 = pDVar10 + 8;
            lVar7 = lVar7 + -8;
          } while (lVar7 != 0);
        }
      }
      else {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + 1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
      }
    }
    local_118 = local_120 + (long)*(int *)(local_120 + 8) * 8 + 0x10;
    local_110 = local_120 + (long)*(int *)(local_120 + 0xc) * 8 + 0x10;
    local_108 = 1;
    if (*(int *)(local_120 + 8) != *(int *)(local_120 + 0xc)) {
      do {
        local_128 = *(QArrayData **)local_118;
        if (1 < *(int *)local_128 + 1U) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + 1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
        }
        if (local_108 != 0) {
          local_138 = (QArrayData *)QString::fromAscii_helper("---sdjhfgsjhdfgs",0x10);
          QString::split(&local_130,&local_128,&local_138,0,1);
          if (*(int *)local_138 != -1) {
            if (*(int *)local_138 != 0) {
              LOCK();
              *(int *)local_138 = *(int *)local_138 + -1;
              local_31 = *(int *)local_138 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10041495d;
            }
            QArrayData::deallocate(local_138,2,8);
          }
LAB_10041495d:
          if ((*(int *)(local_130 + 0xc) - *(int *)(local_130 + 8) == 2) &&
             (cVar4 = FUN_1001aee90(local_130 + (long)*(int *)(local_130 + 8) * 8 + 0x18,&local_40),
             pDVar10 = local_130, cVar4 != '\0')) {
            iVar5 = *(int *)(local_130 + 8);
            QVariant::QVariant(&local_160,10,local_130 + (long)iVar5 * 8 + 0x18,0);
            FUN_10041e0f0(&local_150,pDVar10 + (long)iVar5 * 8 + 0x10,&local_160);
            FUN_10041e170(&local_60,&local_150);
            QVariant::~QVariant(&local_148);
            if (*(int *)local_150 != -1) {
              if (*(int *)local_150 != 0) {
                LOCK();
                *(int *)local_150 = *(int *)local_150 + -1;
                local_31 = *(int *)local_150 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100414a19;
              }
              QArrayData::deallocate(local_150,2,8);
            }
LAB_100414a19:
            QVariant::~QVariant(&local_160);
          }
          pDVar10 = local_130;
          if (*(int *)local_130 != -1) {
            if (*(int *)local_130 != 0) {
              LOCK();
              *(int *)local_130 = *(int *)local_130 + -1;
              local_31 = *(int *)local_130 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100414aee;
            }
            iVar5 = *(int *)(local_130 + 0xc);
            if (iVar5 != *(int *)(local_130 + 8)) {
              lVar7 = (long)*(int *)(local_130 + 8) * 8 + (long)iVar5 * -8;
              pDVar12 = local_130 + (long)iVar5 * 8 + 8;
              do {
                pQVar13 = *(QArrayData **)pDVar12;
                if (*(int *)pQVar13 == 0) {
LAB_100414ac0:
                  QArrayData::deallocate(pQVar13,2,8);
                }
                else if (*(int *)pQVar13 != -1) {
                  LOCK();
                  *(int *)pQVar13 = *(int *)pQVar13 + -1;
                  local_31 = *(int *)pQVar13 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar13 = *(QArrayData **)pDVar12;
                    goto LAB_100414ac0;
                  }
                }
                pDVar12 = pDVar12 + -8;
                lVar7 = lVar7 + 8;
              } while (lVar7 != 0);
            }
            QListData::dispose(pDVar10);
          }
LAB_100414aee:
          local_108 = 0;
        }
        if (*(int *)local_128 != -1) {
          if (*(int *)local_128 != 0) {
            LOCK();
            *(int *)local_128 = *(int *)local_128 + -1;
            local_31 = *(int *)local_128 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100414b2e;
          }
          QArrayData::deallocate(local_128,2,8);
        }
LAB_100414b2e:
        local_118 = local_118 + 8;
        uVar8 = local_108 ^ 1;
        bVar14 = local_108 != 1;
        local_108 = uVar8;
      } while ((bVar14) && (local_118 != local_110));
    }
    pDVar10 = local_120;
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100414c01;
      }
      iVar5 = *(int *)(local_120 + 0xc);
      if (iVar5 != *(int *)(local_120 + 8)) {
        lVar7 = (long)*(int *)(local_120 + 8) * 8 + (long)iVar5 * -8;
        pDVar12 = local_120 + (long)iVar5 * 8 + 8;
        do {
          pQVar13 = *(QArrayData **)pDVar12;
          if (*(int *)pQVar13 == 0) {
LAB_100414be0:
            QArrayData::deallocate(pQVar13,2,8);
          }
          else if (*(int *)pQVar13 != -1) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar13 = *(QArrayData **)pDVar12;
              goto LAB_100414be0;
            }
          }
          pDVar12 = pDVar12 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(pDVar10);
    }
LAB_100414c01:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100414c91;
      }
      iVar5 = *(int *)(local_100 + 0xc);
      if (iVar5 != *(int *)(local_100 + 8)) {
        lVar7 = (long)*(int *)(local_100 + 8) * 8 + (long)iVar5 * -8;
        pDVar10 = local_100 + (long)iVar5 * 8 + 8;
        do {
          pQVar13 = *(QArrayData **)pDVar10;
          if (*(int *)pQVar13 == 0) {
LAB_100414c70:
            QArrayData::deallocate(pQVar13,2,8);
          }
          else if (*(int *)pQVar13 != -1) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar13 = *(QArrayData **)pDVar10;
              goto LAB_100414c70;
            }
          }
          pDVar10 = pDVar10 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose(local_100);
    }
  }
LAB_100414c91:
  FUN_1003fa820();
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100414ccb;
    }
    FUN_10041b480(&local_60,local_60);
  }
LAB_100414ccb:
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

