
int FUN_1003b2630(undefined8 param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  undefined1 local_110 [8];
  Data *local_108;
  Data *local_100;
  Data *local_f8;
  undefined4 local_f0;
  QVariant local_e8;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  Data *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  Data *local_60;
  QArrayData *local_58;
  QVariant local_50;
  QString local_40;
  undefined1 local_31;
  
  lVar5 = FUN_1003b0a30();
  if (lVar5 == 0) {
    return 0;
  }
  uVar6 = FUN_1003b0a30(param_1);
  uVar3 = FUN_10018a9d0(uVar6);
  uVar6 = FUN_1003b0af0(param_1);
  local_58 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_50,uVar6,&local_58,0);
  iVar4 = QVariant::toUInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b26f1;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003b26f1:
  if ((param_2 == 0) && (iVar4 == 7)) {
    return 0;
  }
  uVar6 = FUN_1003b0af0(param_1);
  local_70 = (QArrayData *)QString::fromAscii_helper("Hardware.%1",0xb);
  FUN_1003b0eb0(&local_78,0xf);
  QString::arg(&local_68,&local_70,&local_78,0,0x20);
  FUN_1003e17d0(&local_60,uVar6,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b2792;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003b2792:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b27c2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003b27c2:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b27f2;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1003b27f2:
  if ((param_2 == 1) && (iVar4 = 0, *(int *)(local_60 + 0xc) == *(int *)(local_60 + 8)))
  goto LAB_1003b2f71;
  uVar6 = FUN_1003b0a60(param_1);
  lVar5 = FUN_10015a340(uVar6);
  uVar6 = FUN_1003b0af0(param_1);
  local_90 = (QArrayData *)QString::fromAscii_helper("Hardware.%1",0xb);
  FUN_1003b0eb0(&local_98,0xb);
  QString::arg(&local_88,&local_90,&local_98,0,0x20);
  FUN_1003e17d0(&local_80,uVar6,&local_88);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b28c0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1003b28c0:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b28f6;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1003b28f6:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b292c;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003b292c:
  local_b8 = local_80;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_b8);
      lVar7 = (long)*(int *)(local_b8 + 8);
      if ((local_80 + (long)*(int *)(local_80 + 8) * 8 != local_b8 + lVar7 * 8) &&
         (lVar8 = *(int *)(local_b8 + 0xc) - lVar7, lVar8 != 0 && lVar7 <= *(int *)(local_b8 + 0xc))
         ) {
        _memcpy(local_b8 + lVar7 * 8 + 0x10,local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10,
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10;
  local_a8 = local_b8 + (long)*(int *)(local_b8 + 0xc) * 8 + 0x10;
  iVar9 = 0;
  if (*(int *)(local_b8 + 8) != *(int *)(local_b8 + 0xc)) {
    iVar9 = 0;
    do {
      local_a0 = 1;
      iVar4 = *(int *)local_b0;
      local_d0 = (QArrayData *)
                 QString::fromAscii_helper("Hardware.%1[%2].PrinterInterfaceType",0x24);
      FUN_1003b0eb0(&local_d8,0xb);
      QString::arg(&local_c8,&local_d0,&local_d8,0,0x20);
      QString::arg(&local_c0,&local_c8,(long)iVar4,0,10,0x20);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b2a9c;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_1003b2a9c:
      if (*(int *)local_d8 != -1) {
        if (*(int *)local_d8 != 0) {
          LOCK();
          *(int *)local_d8 = *(int *)local_d8 + -1;
          local_31 = *(int *)local_d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b2ad2;
        }
        QArrayData::deallocate(local_d8,2,8);
      }
LAB_1003b2ad2:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b2b08;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_1003b2b08:
      uVar6 = FUN_1003b0af0(param_1);
      FUN_1003e1800(&local_e8,uVar6,&local_c0);
      if ((local_e8.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
        iVar4 = QVariant::toLongLong((bool *)&local_e8);
        iVar9 = iVar9 + (uint)(iVar4 == param_2);
      }
      QVariant::~QVariant(&local_e8);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003b2b87;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_1003b2b87:
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
      if ((bool)local_31) goto LAB_1003b2bdc;
    }
    QListData::dispose(local_b8);
  }
LAB_1003b2bdc:
  if ((param_2 == 1) && ((uVar3 & 0xfffffffe) == 0x30000004)) {
    plVar1 = *(long **)(lVar5 + 0x180);
    local_108 = (Data *)*plVar1;
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 == 0) {
        QListData::detach((int)&local_108);
        lVar7 = (long)*(int *)(local_108 + 8);
        lVar5 = *plVar1;
        if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_108 + lVar7 * 8) &&
           (lVar8 = *(int *)(local_108 + 0xc) - lVar7,
           lVar8 != 0 && lVar7 <= *(int *)(local_108 + 0xc))) {
          _memcpy(local_108 + lVar7 * 8 + 0x10,
                  (void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),lVar8 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + 1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
      }
    }
    local_100 = local_108 + (long)*(int *)(local_108 + 8) * 8 + 0x10;
    local_f8 = local_108 + (long)*(int *)(local_108 + 0xc) * 8 + 0x10;
    if (*(int *)(local_108 + 8) != *(int *)(local_108 + 0xc)) {
      do {
        local_f0 = 1;
        plVar1 = *(long **)local_100;
        (**(code **)(*plVar1 + 200))(local_110,plVar1);
        uVar6 = FUN_1003b0a30(param_1);
        FUN_100188480(&local_118,uVar6);
        cVar2 = QtPrivate::QStringList_contains(local_110,&local_118,1);
        if (cVar2 == '\0') {
          bVar10 = false;
        }
        else {
          iVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1);
          if ((iVar4 == 1) || (iVar4 = (**(code **)(*plVar1 + 0xd8))(plVar1), iVar4 == 3)) {
            (**(code **)(*plVar1 + 0xb8))(&local_128,plVar1);
            QString::QString(&local_40,0x7c);
            QString::section(&local_120,&local_128,&local_40,3,3,0);
            if (*(int *)local_40.field0_0x0 != -1) {
              if (*(int *)local_40.field0_0x0 != 0) {
                LOCK();
                *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
                local_31 = *(int *)local_40.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b2db9;
              }
              QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
            }
LAB_1003b2db9:
            iVar4 = QString::compare_helper
                              (local_120 + *(long *)(local_120 + 0x10),
                               *(undefined4 *)(local_120 + 4),"low",0xffffffff,1);
            bVar10 = iVar4 == 0;
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_31 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b2e1c;
              }
              QArrayData::deallocate(local_120,2,8);
            }
LAB_1003b2e1c:
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_31 = *(int *)local_128 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003b2e70;
              }
              QArrayData::deallocate(local_128,2,8);
            }
          }
          else {
            bVar10 = false;
          }
        }
LAB_1003b2e70:
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003b2ea6;
          }
          QArrayData::deallocate(local_118,2,8);
        }
LAB_1003b2ea6:
        FUN_100039a80(local_110);
        iVar9 = (uint)bVar10 + iVar9;
        local_100 = local_100 + 8;
      } while (local_100 != local_f8);
    }
    local_f0 = 1;
    if (*(int *)local_108 != -1) {
      if (*(int *)local_108 != 0) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + -1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1003b2f0d;
      }
      QListData::dispose(local_108);
    }
  }
LAB_1003b2f0d:
  if (param_2 == 0) {
    iVar4 = 3 - iVar9;
  }
  else {
    uVar6 = FUN_1003b0a60(param_1);
    cVar2 = FUN_1001754c0(uVar6,0xd);
    iVar4 = 0;
    if (cVar2 != '\0') {
      iVar4 = 0x7e - iVar9;
    }
  }
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b2f71;
    }
    QListData::dispose(local_80);
  }
LAB_1003b2f71:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return iVar4;
      }
      local_31 = 0;
    }
    QListData::dispose(local_60);
  }
  return iVar4;
}

