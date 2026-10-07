
QString * FUN_100474610(QString *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  QArrayData *pQVar7;
  int iVar8;
  long lVar9;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QArrayData *local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QDateTime local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  (**(code **)(*param_2 + 0x70))(&local_40);
  QDateTime::currentDateTime();
  QDateTime::toString(&local_50,local_58,1);
  local_48 = local_50;
  if (1 < *(uint *)local_50 + 1) {
    LOCK();
    *(uint *)local_50 = *(uint *)local_50 + 1;
    local_31 = *(uint *)local_50 != 0;
    UNLOCK();
  }
  uVar6 = *(uint *)(local_50 + 4);
  if ((1 < *(uint *)local_50) || ((*(uint *)(local_50 + 8) & 0x7fffffff) < uVar6 + 2)) {
    QString::reallocData((uint)&local_48,SUB41(uVar6 + 2,0));
    uVar6 = *(uint *)(local_48 + 4);
  }
  *(uint *)(local_48 + 4) = uVar6 + 1;
  *(undefined2 *)(local_48 + (long)(int)uVar6 * 2 + *(long *)(local_48 + 0x10)) = 10;
  *(undefined2 *)(local_48 + (long)(int)*(uint *)(local_48 + 4) * 2 + *(long *)(local_48 + 0x10)) =
       0;
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100474703;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100474703:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100474733;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100474733:
  QDateTime::~QDateTime(local_58);
  uVar5 = (ulong)*(uint *)(local_40 + 8);
  if ((int)*(uint *)(local_40 + 8) < *(int *)(local_40 + 0xc)) {
    lVar9 = 0;
    do {
      plVar1 = *(long **)(local_40 + ((int)uVar5 + lVar9) * 8 + 0x10);
      lVar2 = *plVar1;
      local_70 = (QArrayData *)QString::fromAscii_helper("uid = \"%1\" [%2]\n",0x10);
      local_88 = *(QArrayData **)(*plVar1 + 8);
      if (1 < *(int *)local_88 + 1U) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar7 = local_80 + *(long *)(local_80 + 0x10);
      iVar8 = -1;
      if (pQVar7 != (QArrayData *)0x0) {
        sVar3 = _strlen((char *)pQVar7);
        iVar8 = (int)sVar3;
      }
      local_78 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,iVar8);
      QString::arg(&local_68,&local_70,&local_78,0,0x20);
      uVar4 = FUN_100472bf0(*plVar1 + 0x58);
      QString::arg(&local_60,&local_68,uVar4,0,0x20);
      QString::append(param_1);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047484d;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10047484d:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047487d;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10047487d:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004748ad;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1004748ad:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004748dd;
        }
        QArrayData::deallocate(local_80,1,8);
      }
LAB_1004748dd:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047490d;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_10047490d:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047493d;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10047493d:
      local_98 = (QArrayData *)QString::fromAscii_helper("\tname = \"%1\"\n",0xd);
      local_b0 = *(QArrayData **)(*plVar1 + 0x10);
      if (1 < *(int *)local_b0 + 1U) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + 1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar7 = local_a8 + *(long *)(local_a8 + 0x10);
      iVar8 = -1;
      if (pQVar7 != (QArrayData *)0x0) {
        sVar3 = _strlen((char *)pQVar7);
        iVar8 = (int)sVar3;
      }
      local_a0 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,iVar8);
      QString::arg(&local_90,&local_98,&local_a0,0,0x20);
      QString::append(param_1);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474a1b;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100474a1b:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474a51;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100474a51:
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474a87;
        }
        QArrayData::deallocate(local_a8,1,8);
      }
LAB_100474a87:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474abd;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100474abd:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474af3;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100474af3:
      if (*(int *)(lVar2 + 0x24) < 0) {
        local_d8 = (QArrayData *)QString::fromAscii_helper("\tinfo.ver = %1.%2.%3-%4\n",0x18);
        QString::arg(&local_d0,&local_d8,*(undefined4 *)(lVar2 + 0x18),0,10,0x20);
        QString::arg(&local_c8,&local_d0,*(undefined4 *)(lVar2 + 0x1c),0,10,0x20);
        QString::arg(&local_c0,&local_c8,*(uint *)(lVar2 + 0x24) & 0x7fffffff,0,10,0x20);
        QString::arg(&local_b8,&local_c0,*(undefined4 *)(lVar2 + 0x20),0,10,0x20);
        QString::append(param_1);
        if (*(int *)local_b8 != -1) {
          if (*(int *)local_b8 != 0) {
            LOCK();
            *(int *)local_b8 = *(int *)local_b8 + -1;
            local_31 = *(int *)local_b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474dd8;
          }
          QArrayData::deallocate(local_b8,2,8);
        }
LAB_100474dd8:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_31 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474e0e;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_100474e0e:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474e44;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100474e44:
        if (*(int *)local_d0 != -1) {
          if (*(int *)local_d0 != 0) {
            LOCK();
            *(int *)local_d0 = *(int *)local_d0 + -1;
            local_31 = *(int *)local_d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474e7a;
          }
          QArrayData::deallocate(local_d0,2,8);
        }
LAB_100474e7a:
        if (*(int *)local_d8 != -1) {
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            local_31 = *(int *)local_d8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474eb0;
          }
          QArrayData::deallocate(local_d8,2,8);
        }
      }
      else {
        local_100 = (QArrayData *)QString::fromAscii_helper("\tinfo.ver = %1.%2.%3.%4\n",0x18);
        QString::arg(&local_f8,&local_100,*(undefined4 *)(lVar2 + 0x18),0,10,0x20);
        QString::arg(&local_f0,&local_f8,*(undefined4 *)(lVar2 + 0x1c),0,10,0x20);
        QString::arg(&local_e8,&local_f0,*(undefined4 *)(lVar2 + 0x20),0,10,0x20);
        QString::arg(&local_e0,&local_e8,*(undefined4 *)(lVar2 + 0x24),0,10,0x20);
        QString::append(param_1);
        if (*(int *)local_e0 != -1) {
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            local_31 = *(int *)local_e0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474bed;
          }
          QArrayData::deallocate(local_e0,2,8);
        }
LAB_100474bed:
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_31 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474c23;
          }
          QArrayData::deallocate(local_e8,2,8);
        }
LAB_100474c23:
        if (*(int *)local_f0 != -1) {
          if (*(int *)local_f0 != 0) {
            LOCK();
            *(int *)local_f0 = *(int *)local_f0 + -1;
            local_31 = *(int *)local_f0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474c59;
          }
          QArrayData::deallocate(local_f0,2,8);
        }
LAB_100474c59:
        if (*(int *)local_f8 != -1) {
          if (*(int *)local_f8 != 0) {
            LOCK();
            *(int *)local_f8 = *(int *)local_f8 + -1;
            local_31 = *(int *)local_f8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474c8f;
          }
          QArrayData::deallocate(local_f8,2,8);
        }
LAB_100474c8f:
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100474eb0;
          }
          QArrayData::deallocate(local_100,2,8);
        }
      }
LAB_100474eb0:
      local_118 = (QArrayData *)QString::fromAscii_helper("\tinfo.intVer = %1.%2\n",0x15);
      QString::arg(&local_110,&local_118,*(undefined4 *)(lVar2 + 0x28),0,10,0x20);
      QString::arg(&local_108,&local_110,*(undefined4 *)(lVar2 + 0x2c),0,10,0x20);
      QString::append(param_1);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474f56;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_100474f56:
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474f8c;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_100474f8c:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100474fc2;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_100474fc2:
      local_128 = (QArrayData *)QString::fromAscii_helper("\ttext = \"%1\"\n",0xd);
      QString::arg(&local_120,&local_128,*plVar1 + 0x40,0,0x20);
      QString::append(param_1);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475041;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_100475041:
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_31 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475077;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_100475077:
      local_138 = (QArrayData *)QString::fromAscii_helper("\tdata.sz = %1\n",0xe);
      QString::arg(&local_130,&local_138,(long)*(int *)(*(long *)(*plVar1 + 0x48) + 4),0,10,0x20);
      QString::append(param_1);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_31 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475100;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_100475100:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475136;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_100475136:
      local_148 = (QArrayData *)QString::fromAscii_helper("\ttime = %1\n",0xb);
      QDateTime::toString(&local_150,*plVar1 + 0x50,1);
      QString::arg(&local_140,&local_148,&local_150,0,0x20);
      QString::append(param_1);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_31 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004751cf;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1004751cf:
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_31 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475205;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_100475205:
      if (*(int *)local_148 != -1) {
        if (*(int *)local_148 != 0) {
          LOCK();
          *(int *)local_148 = *(int *)local_148 + -1;
          local_31 = *(int *)local_148 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047523b;
        }
        QArrayData::deallocate(local_148,2,8);
      }
LAB_10047523b:
      local_160 = (QArrayData *)QString::fromAscii_helper("\towner = %1\n",0xc);
      local_178 = *(QArrayData **)(*plVar1 + 0x60);
      if (1 < *(int *)local_178 + 1U) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + 1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      pQVar7 = local_170 + *(long *)(local_170 + 0x10);
      iVar8 = -1;
      if (pQVar7 != (QArrayData *)0x0) {
        sVar3 = _strlen((char *)pQVar7);
        iVar8 = (int)sVar3;
      }
      local_168 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,iVar8);
      QString::arg(&local_158,&local_160,&local_168,0,0x20);
      QString::append(param_1);
      if (*(int *)local_158 != -1) {
        if (*(int *)local_158 != 0) {
          LOCK();
          *(int *)local_158 = *(int *)local_158 + -1;
          local_31 = *(int *)local_158 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475318;
        }
        QArrayData::deallocate(local_158,2,8);
      }
LAB_100475318:
      if (*(int *)local_168 != -1) {
        if (*(int *)local_168 != 0) {
          LOCK();
          *(int *)local_168 = *(int *)local_168 + -1;
          local_31 = *(int *)local_168 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047534e;
        }
        QArrayData::deallocate(local_168,2,8);
      }
LAB_10047534e:
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_31 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475384;
        }
        QArrayData::deallocate(local_170,1,8);
      }
LAB_100475384:
      if (*(int *)local_178 != -1) {
        if (*(int *)local_178 != 0) {
          LOCK();
          *(int *)local_178 = *(int *)local_178 + -1;
          local_31 = *(int *)local_178 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004753ba;
        }
        QArrayData::deallocate(local_178,2,8);
      }
LAB_1004753ba:
      if (*(int *)local_160 != -1) {
        if (*(int *)local_160 != 0) {
          LOCK();
          *(int *)local_160 = *(int *)local_160 + -1;
          local_31 = *(int *)local_160 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004753f0;
        }
        QArrayData::deallocate(local_160,2,8);
      }
LAB_1004753f0:
      local_188 = (QArrayData *)QString::fromAscii_helper("\tflags = %1\n",0xc);
      QString::number((uint)&local_1a0,*(int *)(*plVar1 + 0x68));
      QString::toLocal8Bit();
      pQVar7 = local_198 + *(long *)(local_198 + 0x10);
      iVar8 = -1;
      if (pQVar7 != (QArrayData *)0x0) {
        sVar3 = _strlen((char *)pQVar7);
        iVar8 = (int)sVar3;
      }
      local_190 = (QArrayData *)QString::fromAscii_helper((char *)pQVar7,iVar8);
      QString::arg(&local_180,&local_188,&local_190,0,0x20);
      QString::append(param_1);
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004754c4;
        }
        QArrayData::deallocate(local_180,2,8);
      }
LAB_1004754c4:
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1004754fa;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_1004754fa:
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475530;
        }
        QArrayData::deallocate(local_198,1,8);
      }
LAB_100475530:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100475566;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100475566:
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10047559c;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_10047559c:
      lVar9 = lVar9 + 1;
      uVar5 = (ulong)*(int *)(local_40 + 8);
    } while (lVar9 < (long)((long)*(int *)(local_40 + 0xc) - uVar5));
  }
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
    FUN_100479b10(&local_40,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                  local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10);
    QListData::dispose(local_40);
  }
  return param_1;
}

