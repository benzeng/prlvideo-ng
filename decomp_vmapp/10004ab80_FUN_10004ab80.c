
void FUN_10004ab80(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  QArrayData *pQVar5;
  QArrayData *local_e0;
  QString local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  local_50 = local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_31 = *(int *)local_40 != 0;
    UNLOCK();
  }
  FUN_1006f0aa0(&local_48,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004ac16;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10004ac16:
  FUN_1006dfcd0(&local_58,&local_48);
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_70 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(short *)(param_2 + 0x16) == 0) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("GSHEXT","vm",1,
                    "Invalid buffers count for VIRTEX_REQ_CRASH request: %u (must be >= 1)",0);
    }
LAB_10004b10c:
    *param_4 = 0xf0000002;
  }
  else {
    lVar2 = FUN_1002a6120(param_2,0,0);
    if (lVar2 == 0) {
      if (0 < DAT_1011b55f8) {
        FUN_1008e3970("GSHEXT","vm",1,
                      "Failed to get CR paged buffer (0, 0): pr=%p, pr->Request()=0x%x",param_2,
                      *(undefined4 *)(param_2 + 8));
      }
LAB_10004b439:
      *param_4 = 0xf000001c;
    }
    else {
      if (*(int *)(param_3 + 0x110) != 0) {
        lVar3 = FUN_1002a6120(param_2,*(int *)(param_3 + 0x110),0);
        if (lVar3 == 0) {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("GSHEXT","vm",1,
                          "Failed to get pbProcName paged buffer (%d, 0): pr=%p, pr->Request()=0x%x"
                          ,*(undefined4 *)(param_3 + 0x110),param_2,*(undefined4 *)(param_2 + 8));
          }
          goto LAB_10004b439;
        }
        QByteArray::resize((int)&local_68);
        if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
        }
        FUN_1002a5990(lVar3,0,local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(lVar3 + 8));
        if ((1 < *(uint *)local_68) || (*(long *)(local_68 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_68,*(uint *)(local_68 + 4) + 1,*(uint *)(local_68 + 8) >> 0x1f);
        }
        pQVar5 = local_68 + *(long *)(local_68 + 0x10);
        if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_68 + 4) == 0xffffffff)) {
          _strlen((char *)pQVar5);
        }
        QString::fromUtf8_helper((char *)&local_88,(int)pQVar5);
        QString::operator=(&local_78,&local_88);
        if (*(int *)local_88.field0_0x0 != -1) {
          if (*(int *)local_88.field0_0x0 != 0) {
            LOCK();
            *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
            local_31 = *(int *)local_88.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004ad6b;
          }
          QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
        }
      }
LAB_10004ad6b:
      if (*(int *)(param_3 + 0x118) != 0) {
        lVar3 = FUN_1002a6120(param_2,*(int *)(param_3 + 0x118),0);
        if (lVar3 == 0) {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("GSHEXT","vm",1,
                          "Failed to get pbProcPath paged buffer (%d, 0): pr=%p, pr->Request()=0x%x"
                          ,*(undefined4 *)(param_3 + 0x118),param_2,*(undefined4 *)(param_2 + 8));
          }
          goto LAB_10004b439;
        }
        QByteArray::resize((int)&local_70);
        if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
        }
        FUN_1002a5990(lVar3,0,local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(lVar3 + 8));
        if ((1 < *(uint *)local_70) || (*(long *)(local_70 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_70,*(uint *)(local_70 + 4) + 1,*(uint *)(local_70 + 8) >> 0x1f);
        }
        pQVar5 = local_70 + *(long *)(local_70 + 0x10);
        if ((pQVar5 != (QArrayData *)0x0) && (*(uint *)(local_70 + 4) == 0xffffffff)) {
          _strlen((char *)pQVar5);
        }
        QString::fromUtf8_helper((char *)&local_90,(int)pQVar5);
        QString::operator=(&local_80,&local_90);
        if (*(int *)local_90.field0_0x0 != -1) {
          if (*(int *)local_90.field0_0x0 != 0) {
            LOCK();
            *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
            local_31 = *(int *)local_90.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004ae6e;
          }
          QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
        }
      }
LAB_10004ae6e:
      if (*(int *)(param_3 + 0x1c) == 2) {
        local_c0 = local_58;
        if (1 < *(uint *)local_58 + 1) {
          LOCK();
          *(uint *)local_58 = *(uint *)local_58 + 1;
          local_31 = *(uint *)local_58 != 0;
          UNLOCK();
        }
        FUN_10004c030(&local_c0);
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004aeda;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_10004aeda:
        local_d0 = (QArrayData *)local_78.field0_0x0;
        if (1 < *(int *)local_78.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
        }
        FUN_10004c610(&local_c8,param_3,&local_d0);
        QString::operator=(&local_60,&local_c8);
        if (*(int *)local_c8.field0_0x0 != -1) {
          if (*(int *)local_c8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
            local_31 = *(int *)local_c8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004af52;
          }
          QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
        }
LAB_10004af52:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004af88;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_10004af88:
        uVar1 = QDir::separator();
        local_e0 = local_58;
        if (1 < *(uint *)local_58 + 1) {
          LOCK();
          *(uint *)local_58 = *(uint *)local_58 + 1;
          local_31 = *(uint *)local_58 != 0;
          UNLOCK();
        }
        uVar4 = *(uint *)(local_58 + 4);
        if ((1 < *(uint *)local_58) || ((*(uint *)(local_58 + 8) & 0x7fffffff) < uVar4 + 2)) {
          QString::reallocData((uint)&local_e0,SUB41(uVar4 + 2,0));
          uVar4 = *(uint *)(local_e0 + 4);
        }
        *(uint *)(local_e0 + 4) = uVar4 + 1;
        *(undefined2 *)(local_e0 + (long)(int)uVar4 * 2 + *(long *)(local_e0 + 0x10)) = uVar1;
        *(undefined2 *)
         (local_e0 + (long)(int)*(uint *)(local_e0 + 4) * 2 + *(long *)(local_e0 + 0x10)) = 0;
        local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
        if (1 < *(uint *)local_e0 + 1) {
          LOCK();
          *(uint *)local_e0 = *(uint *)local_e0 + 1;
          local_31 = *(uint *)local_e0 != 0;
          UNLOCK();
        }
        QString::append(&local_d8);
        FUN_10004daf0(lVar2,&local_d8);
        if (*(int *)local_d8.field0_0x0 != -1) {
          if (*(int *)local_d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004b08a;
          }
          QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
        }
LAB_10004b08a:
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004b0c0;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_10004b0c0:
        FUN_10008fdb0(*(undefined8 *)(param_1 + 0x110),0x4e37,0x10);
      }
      else {
        if (*(int *)(param_3 + 0x1c) != 1) {
          if (0 < DAT_1011b55f8) {
            FUN_1008e3970("GSHEXT","vm",1,"Unknown action with code = %d");
          }
          goto LAB_10004b10c;
        }
        local_98 = local_58;
        if (1 < *(uint *)local_58 + 1) {
          LOCK();
          *(uint *)local_58 = *(uint *)local_58 + 1;
          local_31 = *(uint *)local_58 != 0;
          UNLOCK();
        }
        FUN_10004c030(&local_98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004b1c3;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_10004b1c3:
        local_a8 = (QArrayData *)local_78.field0_0x0;
        if (1 < *(int *)local_78.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
        }
        FUN_10004c610(&local_a0,param_3,&local_a8);
        QString::operator=(&local_60,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004b23b;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10004b23b:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004b271;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_10004b271:
        uVar1 = QDir::separator();
        local_b8 = local_58;
        if (1 < *(uint *)local_58 + 1) {
          LOCK();
          *(uint *)local_58 = *(uint *)local_58 + 1;
          local_31 = *(uint *)local_58 != 0;
          UNLOCK();
        }
        uVar4 = *(uint *)(local_58 + 4);
        if ((1 < *(uint *)local_58) || ((*(uint *)(local_58 + 8) & 0x7fffffff) < uVar4 + 2)) {
          QString::reallocData((uint)&local_b8,SUB41(uVar4 + 2,0));
          uVar4 = *(uint *)(local_b8 + 4);
        }
        *(uint *)(local_b8 + 4) = uVar4 + 1;
        *(undefined2 *)(local_b8 + (long)(int)uVar4 * 2 + *(long *)(local_b8 + 0x10)) = uVar1;
        *(undefined2 *)
         (local_b8 + (long)(int)*(uint *)(local_b8 + 4) * 2 + *(long *)(local_b8 + 0x10)) = 0;
        local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
        if (1 < *(uint *)local_b8 + 1) {
          LOCK();
          *(uint *)local_b8 = *(uint *)local_b8 + 1;
          local_31 = *(uint *)local_b8 != 0;
          UNLOCK();
        }
        QString::append(&local_b0);
        FUN_10004daf0(lVar2,&local_b0);
        if (*(int *)local_b0.field0_0x0 != -1) {
          if (*(int *)local_b0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
            local_31 = *(int *)local_b0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004b373;
          }
          QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
        }
LAB_10004b373:
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10004b3a9;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
      }
LAB_10004b3a9:
      *param_4 = 0;
    }
  }
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b476;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10004b476:
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b4a6;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_10004b4a6:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b4d6;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10004b4d6:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b506;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_10004b506:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b536;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10004b536:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b566;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10004b566:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10004b596;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10004b596:
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

