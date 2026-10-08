
void FUN_100357140(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *pQVar5;
  long lVar6;
  QArrayData *local_160;
  QVariant local_158;
  QArrayData *local_148;
  QArrayData *local_140;
  QString local_138;
  QString local_130;
  QString local_128;
  QString local_120;
  QString local_118;
  Data_conflict local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  Data_conflict local_c0;
  int *local_b8;
  int *local_b0;
  long *local_a8;
  long *local_a0;
  int local_98;
  QString local_90;
  QString local_88;
  QString local_80 [2];
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3);
  if (lVar4 == 0) {
    return;
  }
  QSettings::QSettings((QSettings *)local_80,(QObject *)0x0);
  pQVar5 = (QArrayData *)QString::fromAscii_helper("Fullscreen",10);
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_31 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar5;
  QString::fromUtf8_helper((char *)&local_70,0x1e2468c);
  QString::append(&local_90);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100357208;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100357208:
  local_88.field0_0x0 = local_90.field0_0x0;
  if (1 < *(int *)local_90.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
    local_31 = *(int *)local_90.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_88);
  QSettings::remove(local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100357271;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100357271:
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003572a7;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1003572a7:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003572d4;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1003572d4:
  uVar3 = FUN_10018c280(lVar4);
  uVar3 = FUN_100319950(uVar3);
  FUN_1003591b0(&local_b8,uVar3);
  FUN_100359780(&local_b0,&local_b8);
  local_a8 = (long *)(local_b0 + (long)local_b0[2] * 2 + 4);
  local_a0 = (long *)(local_b0 + (long)local_b0[3] * 2 + 4);
  local_98 = 1;
  if (*local_b8 == -1) {
LAB_100357377:
    if (local_a8 != local_a0) {
      do {
        lVar4 = *(long *)*local_a8;
        lVar6 = 0;
        if ((lVar4 != 0) && (lVar6 = 0, *(int *)(lVar4 + 4) != 0)) {
          lVar6 = ((long *)*local_a8)[1];
        }
        iVar1 = FUN_100325aa0(lVar6);
        if (iVar1 == 2) {
          uVar3 = FUN_100323e30(lVar6,0);
          iVar1 = FUN_1003798d0(uVar3);
          pQVar5 = (QArrayData *)QString::fromAscii_helper("Fullscreen",10);
          if (1 < *(int *)pQVar5 + 1U) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + 1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
          }
          local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar5;
          QString::fromUtf8_helper((char *)&local_68,0x1e2468c);
          QString::append(&local_e8);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10035745a;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_10035745a:
          local_e0.field0_0x0 = local_e8.field0_0x0;
          if (1 < *(int *)local_e8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + 1;
            local_31 = *(int *)local_e8.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_e0);
          local_d8.field0_0x0 = local_e0.field0_0x0;
          if (1 < *(int *)local_e0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
            local_31 = *(int *)local_e0.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_60,0x1e2468c);
          QString::append(&local_d8);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357500;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_100357500:
          iVar2 = FUN_100323e20(lVar6);
          QString::number((uint)&local_f0,iVar2);
          local_d0.field0_0x0 = local_d8.field0_0x0;
          if (1 < *(int *)local_d8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
            local_31 = *(int *)local_d8.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_d0);
          local_c8.field0_0x0 = local_d0.field0_0x0;
          if (1 < *(int *)local_d0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
            local_31 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_58,0x1e2468c);
          QString::append(&local_c8);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_31 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003575c1;
            }
            QArrayData::deallocate(local_58,2,8);
          }
LAB_1003575c1:
          local_f8 = (QArrayData *)QString::fromAscii_helper("Display Number",0xe);
          local_c0.field15 = (QObject *)local_c8.field0_0x0;
          if (1 < *(int *)local_c8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
            local_31 = *(int *)local_c8.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append((QString *)&local_c0);
          QVariant::QVariant(&local_108,iVar1);
          QSettings::setValue(local_80,(QVariant *)&local_c0);
          QVariant::~QVariant(&local_108);
          if (*(int *)local_c0.field15 != -1) {
            if (*(int *)local_c0.field15 != 0) {
              LOCK();
              *(int *)local_c0.field15 = *(int *)local_c0.field15 + -1;
              local_31 = *(int *)local_c0.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10035766e;
            }
            QArrayData::deallocate((QArrayData *)local_c0.field15,2,8);
          }
LAB_10035766e:
          if (*(int *)local_f8 != -1) {
            if (*(int *)local_f8 != 0) {
              LOCK();
              *(int *)local_f8 = *(int *)local_f8 + -1;
              local_31 = *(int *)local_f8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003576a4;
            }
            QArrayData::deallocate(local_f8,2,8);
          }
LAB_1003576a4:
          if (*(int *)local_c8.field0_0x0 != -1) {
            if (*(int *)local_c8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
              local_31 = *(int *)local_c8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003576da;
            }
            QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
          }
LAB_1003576da:
          if (*(int *)local_d0.field0_0x0 != -1) {
            if (*(int *)local_d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
              local_31 = *(int *)local_d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357710;
            }
            QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
          }
LAB_100357710:
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357746;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
LAB_100357746:
          if (*(int *)local_d8.field0_0x0 != -1) {
            if (*(int *)local_d8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
              local_31 = *(int *)local_d8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10035777c;
            }
            QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
          }
LAB_10035777c:
          if (*(int *)local_e0.field0_0x0 != -1) {
            if (*(int *)local_e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
              local_31 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003577b2;
            }
            QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
          }
LAB_1003577b2:
          if (*(int *)local_e8.field0_0x0 != -1) {
            if (*(int *)local_e8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
              local_31 = *(int *)local_e8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003577e8;
            }
            QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
          }
LAB_1003577e8:
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_31 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357815;
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
LAB_100357815:
          pQVar5 = (QArrayData *)QString::fromAscii_helper("Fullscreen",10);
          if (1 < *(int *)pQVar5 + 1U) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + 1;
            local_31 = *(int *)pQVar5 != 0;
            UNLOCK();
          }
          local_138.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar5;
          QString::fromUtf8_helper((char *)&local_50,0x1e2468c);
          QString::append(&local_138);
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357899;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_100357899:
          local_130.field0_0x0 = local_138.field0_0x0;
          if (1 < *(int *)local_138.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + 1;
            local_31 = *(int *)local_138.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_130);
          local_128.field0_0x0 = local_130.field0_0x0;
          if (1 < *(int *)local_130.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
            local_31 = *(int *)local_130.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
          QString::append(&local_128);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357941;
            }
            QArrayData::deallocate(local_48,2,8);
          }
LAB_100357941:
          iVar1 = FUN_100323e20(lVar6);
          QString::number((uint)&local_140,iVar1);
          local_120.field0_0x0 = local_128.field0_0x0;
          if (1 < *(int *)local_128.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + 1;
            local_31 = *(int *)local_128.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_120);
          local_118.field0_0x0 = local_120.field0_0x0;
          if (1 < *(int *)local_120.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + 1;
            local_31 = *(int *)local_120.field0_0x0 != 0;
            UNLOCK();
          }
          QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
          QString::append(&local_118);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357a0d;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_100357a0d:
          local_148 = (QArrayData *)QString::fromAscii_helper("Display Id",10);
          local_110.field15 = (QObject *)local_118.field0_0x0;
          if (1 < *(int *)local_118.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
            local_31 = *(int *)local_118.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append((QString *)&local_110);
          uVar3 = FUN_100323e30(lVar6,0);
          FUN_1003798e0((QByteArray *)&local_160,uVar3);
          QVariant::QVariant(&local_158,(QByteArray *)&local_160);
          QSettings::setValue(local_80,(QVariant *)&local_110);
          QVariant::~QVariant(&local_158);
          if (*(int *)local_160 != -1) {
            if (*(int *)local_160 != 0) {
              LOCK();
              *(int *)local_160 = *(int *)local_160 + -1;
              local_31 = *(int *)local_160 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357ad1;
            }
            QArrayData::deallocate(local_160,1,8);
          }
LAB_100357ad1:
          if (*(int *)local_110.field15 != -1) {
            if (*(int *)local_110.field15 != 0) {
              LOCK();
              *(int *)local_110.field15 = *(int *)local_110.field15 + -1;
              local_31 = *(int *)local_110.field15 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357b07;
            }
            QArrayData::deallocate((QArrayData *)local_110.field15,2,8);
          }
LAB_100357b07:
          if (*(int *)local_148 != -1) {
            if (*(int *)local_148 != 0) {
              LOCK();
              *(int *)local_148 = *(int *)local_148 + -1;
              local_31 = *(int *)local_148 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357b3d;
            }
            QArrayData::deallocate(local_148,2,8);
          }
LAB_100357b3d:
          if (*(int *)local_118.field0_0x0 != -1) {
            if (*(int *)local_118.field0_0x0 != 0) {
              LOCK();
              *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
              local_31 = *(int *)local_118.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357b73;
            }
            QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
          }
LAB_100357b73:
          if (*(int *)local_120.field0_0x0 != -1) {
            if (*(int *)local_120.field0_0x0 != 0) {
              LOCK();
              *(int *)local_120.field0_0x0 = *(int *)local_120.field0_0x0 + -1;
              local_31 = *(int *)local_120.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357ba9;
            }
            QArrayData::deallocate((QArrayData *)local_120.field0_0x0,2,8);
          }
LAB_100357ba9:
          if (*(int *)local_140 != -1) {
            if (*(int *)local_140 != 0) {
              LOCK();
              *(int *)local_140 = *(int *)local_140 + -1;
              local_31 = *(int *)local_140 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357bdf;
            }
            QArrayData::deallocate(local_140,2,8);
          }
LAB_100357bdf:
          if (*(int *)local_128.field0_0x0 != -1) {
            if (*(int *)local_128.field0_0x0 != 0) {
              LOCK();
              *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
              local_31 = *(int *)local_128.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357c15;
            }
            QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
          }
LAB_100357c15:
          if (*(int *)local_130.field0_0x0 != -1) {
            if (*(int *)local_130.field0_0x0 != 0) {
              LOCK();
              *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
              local_31 = *(int *)local_130.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357c4e;
            }
            QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
          }
LAB_100357c4e:
          if (*(int *)local_138.field0_0x0 != -1) {
            if (*(int *)local_138.field0_0x0 != 0) {
              LOCK();
              *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
              local_31 = *(int *)local_138.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357c84;
            }
            QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
          }
LAB_100357c84:
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              local_31 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100357cc0;
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
        }
LAB_100357cc0:
        local_a8 = local_a8 + 1;
        local_98 = 1;
      } while (local_a8 != local_a0);
    }
  }
  else {
    if (*local_b8 == 0) {
LAB_10035735e:
      FUN_100359550(&local_b8,local_b8);
    }
    else {
      LOCK();
      *local_b8 = *local_b8 + -1;
      local_31 = *local_b8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_10035735e;
    }
    if (local_98 != 0) goto LAB_100357377;
  }
  if (*local_b0 != -1) {
    if (*local_b0 != 0) {
      LOCK();
      *local_b0 = *local_b0 + -1;
      local_31 = *local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100357d1c;
    }
    FUN_100359550(&local_b0,local_b0);
  }
LAB_100357d1c:
  QSettings::~QSettings((QSettings *)local_80);
  return;
}

