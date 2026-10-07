
void FUN_10007de50(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  long *plVar5;
  long *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  CVmEventParameter *local_150;
  QArrayData *local_148;
  QDateTime local_140 [8];
  QString local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  string local_108;
  undefined1 local_107 [15];
  undefined1 *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 7) {
    local_e0 = (QArrayData *)
               QString::fromAscii_helper
                         ("Mac OS version %1.%2.%3 (build %4) on platform: %5; ",0x34);
    QString::arg(&local_d8,&local_e0,*(undefined4 *)(param_2 + 0xa4),0,10,0x20);
    QString::arg(&local_d0,&local_d8,*(undefined4 *)(param_2 + 0xa8),0,10,0x20);
    QString::arg(&local_c8,&local_d0,*(undefined4 *)(param_2 + 0xac),0,10,0x20);
    sVar4 = _strlen((char *)(param_2 + 0x24));
    local_e8 = (QArrayData *)QString::fromAscii_helper((char *)(param_2 + 0x24),(int)sVar4);
    QString::arg(&local_c0,&local_c8,&local_e8,0,0x20);
    sVar4 = _strlen((char *)(param_2 + 100));
    local_f0 = (QArrayData *)QString::fromAscii_helper((char *)(param_2 + 100),(int)sVar4);
    QString::arg(&local_b8,&local_c0,&local_f0,0,0x20);
    QString::operator=(&local_50,&local_b8);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_21 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e108;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_10007e108:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_21 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e13e;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_10007e13e:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_21 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e174;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_10007e174:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_21 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e1aa;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_10007e1aa:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_21 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e1e0;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10007e1e0:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_21 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e216;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_10007e216:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_21 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e24c;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10007e24c:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_21 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e282;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_10007e282:
    if (0 < DAT_1011b55f8) {
      QString::toUtf8();
      std::string::__init((char *)&local_108,(ulong)(local_30 + *(long *)(local_30 + 0x10)));
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          local_21 = *(int *)local_30 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e2ea;
        }
        QArrayData::deallocate(local_30,1,8);
      }
LAB_10007e2ea:
      if (((byte)local_108 & 1) == 0) {
        local_f8 = local_107;
      }
      FUN_1008e3970("","vm",1,"GuestOSDetails: %s",local_f8);
      std::string::~string(&local_108);
    }
LAB_10007e673:
    local_118 = (QArrayData *)QString::fromAscii_helper("OSArch: %1",10);
    QString::arg(&local_110,&local_118,*(undefined4 *)(param_2 + 8),0,10,0x20);
    QString::append(&local_50);
    if (*(int *)local_110 != -1) {
      if (*(int *)local_110 != 0) {
        LOCK();
        *(int *)local_110 = *(int *)local_110 + -1;
        local_21 = *(int *)local_110 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e6f6;
      }
      QArrayData::deallocate(local_110,2,8);
    }
LAB_10007e6f6:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_21 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e72c;
      }
      QArrayData::deallocate(local_118,2,8);
    }
LAB_10007e72c:
    local_130 = (QArrayData *)QString::fromAscii_helper("%1 GuestOSDetails: %2",0x15);
    QDateTime::currentDateTime();
    local_148 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
    QDateTime::toString(&local_138);
    QString::arg(&local_128,&local_130,&local_138,0,0x20);
    QString::arg(&local_120,&local_128,&local_50,0,0x20);
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_21 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e7f9;
      }
      QArrayData::deallocate(local_128,2,8);
    }
LAB_10007e7f9:
    if (*(int *)local_138.field0_0x0 != -1) {
      if (*(int *)local_138.field0_0x0 != 0) {
        LOCK();
        *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
        local_21 = *(int *)local_138.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e82f;
      }
      QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
    }
LAB_10007e82f:
    if (*(int *)local_148 != -1) {
      if (*(int *)local_148 != 0) {
        LOCK();
        *(int *)local_148 = *(int *)local_148 + -1;
        local_21 = *(int *)local_148 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e865;
      }
      QArrayData::deallocate(local_148,2,8);
    }
LAB_10007e865:
    QDateTime::~QDateTime(local_140);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_21 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e8a7;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_10007e8a7:
    local_150 = operator_new(0xd0);
    local_158 = local_120;
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      local_21 = *(int *)local_120 != 0;
      UNLOCK();
    }
    local_160 = (QArrayData *)QString::fromAscii_helper("writing_file_string",0x13);
    CVmEventParameter::CVmEventParameter(local_150,1,&local_158);
    if (puStack_40 == local_38) {
      FUN_10002da50(&local_48,&local_150);
    }
    else {
      *puStack_40 = local_150;
      puStack_40 = puStack_40 + 1;
    }
    if (*(int *)local_160 != -1) {
      if (*(int *)local_160 != 0) {
        LOCK();
        *(int *)local_160 = *(int *)local_160 + -1;
        local_21 = *(int *)local_160 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e973;
      }
      QArrayData::deallocate(local_160,2,8);
    }
LAB_10007e973:
    if (*(int *)local_158 != -1) {
      if (*(int *)local_158 != 0) {
        LOCK();
        *(int *)local_158 = *(int *)local_158 + -1;
        local_21 = *(int *)local_158 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007e9a9;
      }
      QArrayData::deallocate(local_158,2,8);
    }
LAB_10007e9a9:
    uVar3 = DAT_1011c3650;
    plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_168 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      plVar5[2] = 0;
      *plVar5 = (long)&PTR_FUN_100bef0d0;
      local_168 = plVar5;
    }
    FUN_100063770(uVar3,0x18c18,0,&local_48,0xbbb,&local_168);
    if (local_168 != (long *)0x0) {
      LOCK();
      plVar5 = local_168 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)(*local_168 + 0x10))();
      }
    }
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_21 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10007ea68;
      }
      QArrayData::deallocate(local_120,2,8);
    }
  }
  else {
    if (iVar1 == 9) {
      if (*(char *)(param_2 + 0x24) != '\0') {
        local_a8 = (QArrayData *)QString::fromAscii_helper("OSVersion: %1; ",0xf);
        sVar4 = _strlen((char *)(param_2 + 0x24));
        local_b0 = (QArrayData *)QString::fromAscii_helper((char *)(param_2 + 0x24),(int)sVar4);
        QString::arg(&local_a0,&local_a8,&local_b0,0,0x20);
        QString::operator=(&local_50,&local_a0);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_21 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10007df3b;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10007df3b:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_21 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10007df71;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_10007df71:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_21 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10007e673;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
      goto LAB_10007e673;
    }
    if (iVar1 != 8) goto LAB_10007e673;
    if (0x117 < *(uint *)(param_2 + 0x20)) {
      local_98 = (QArrayData *)
                 QString::fromAscii_helper
                           ("OSVersion: %1.%2.%3 ServicePack: %4.%5; SuiteMask: 0x%6; ProductType: %7; ProductEdition: %8; "
                            ,0x5e);
      QString::arg(&local_90,&local_98,*(undefined4 *)(param_2 + 0x24),0,10,0x20);
      QString::arg(&local_88,&local_90,*(undefined4 *)(param_2 + 0x28),0,10,0x20);
      QString::arg(&local_80,&local_88,*(undefined4 *)(param_2 + 0x2c),0,10,0x20);
      QString::arg(&local_78,&local_80,*(undefined2 *)(param_2 + 0x130),0,10,0x20);
      QString::arg(&local_70,&local_78,*(undefined2 *)(param_2 + 0x132),0,10,0x20);
      QString::arg(&local_68,&local_70,*(undefined2 *)(param_2 + 0x134),0,0x10,0x20);
      QString::arg(&local_60,&local_68,*(undefined1 *)(param_2 + 0x136),0,10,0x20);
      QString::arg(&local_58,&local_60,*(undefined4 *)(param_2 + 0x138),0,10,0x20);
      QString::operator=(&local_50,&local_58);
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_21 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e4e7;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_10007e4e7:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_21 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e517;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10007e517:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e547;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10007e547:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_21 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e577;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10007e577:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e5a7;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_10007e5a7:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_21 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e5d7;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_10007e5d7:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_21 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e607;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10007e607:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_21 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e63d;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_10007e63d:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_21 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10007e673;
        }
        QArrayData::deallocate(local_98,2,8);
      }
      goto LAB_10007e673;
    }
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",1,"old guest tools: contains no OS version details");
    }
  }
LAB_10007ea68:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007ea98;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10007ea98:
  if (local_48 != (undefined8 *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (undefined8 *)
                   ((~((long)puStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                   (long)puStack_40);
    }
    operator_delete(local_48);
  }
  return;
}

