
undefined8 FUN_100ce5e10(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  bool bVar11;
  long local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QString local_1a0;
  QString local_198;
  QArrayData *local_190;
  QFileInfo local_188 [8];
  QString local_180;
  QFileInfo local_178 [8];
  QString local_170;
  QArrayData *local_168;
  QArrayData *local_160;
  QArrayData *local_158;
  QString local_150;
  QArrayData *local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QString local_108;
  QString local_100;
  QArrayData *local_f8;
  QFileInfo local_f0 [8];
  QString local_e8;
  QFileInfo local_e0 [8];
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
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
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (0 < *(int *)(*(long *)(param_1 + 0x110) + 4)) {
    plVar1 = (long *)(param_1 + 0x110);
    puVar7 = (undefined8 *)(param_1 + 0x118);
    local_1d8 = 0;
    uVar10 = 0;
    do {
      local_50 = (QArrayData *)QString::fromAscii_helper("ide%1:%2",8);
      iVar8 = (int)uVar10;
      iVar9 = (int)(((uint)(uVar10 >> 0x1f) & 1) + iVar8) >> 1;
      QString::arg(&local_48,&local_50,(long)iVar9,0,10,0x20);
      iVar8 = iVar8 - (((uint)(uVar10 >> 0x1f) & 1) + iVar8 & 0xfffffffe);
      QString::arg(&local_40,&local_48,(long)iVar8,0,10,0x20);
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce5f6e;
        }
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100ce5f6e:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce5f9e;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100ce5f9e:
      pcVar2 = *(code **)*param_2;
      local_60 = local_40;
      if (1 < *(int *)local_40 + 1U) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + 1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
      }
      local_68 = (QArrayData *)QString::fromAscii_helper("present",7);
      local_70 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
      (*pcVar2)(&local_58,param_2,&local_60,&local_68,&local_70);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce6037;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100ce6037:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce6067;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100ce6067:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce6097;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_100ce6097:
      local_78 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
      iVar5 = QString::compare(&local_58,&local_78,0);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce60ed;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100ce60ed:
      if (iVar5 == 0) {
        pcVar2 = *(code **)*param_2;
        local_88 = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
        }
        local_90 = (QArrayData *)QString::fromAscii_helper("deviceType",10);
        local_98 = (QArrayData *)QString::fromAscii_helper("disk",4);
        (*pcVar2)(&local_80,param_2,&local_88,&local_90,&local_98);
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_31 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce61a0;
          }
          QArrayData::deallocate(local_98,2,8);
        }
LAB_100ce61a0:
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_31 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce61d6;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_100ce61d6:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce6206;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_100ce6206:
        local_a0 = (QArrayData *)QString::fromAscii_helper("disk",4);
        iVar5 = QString::compare(&local_80,&local_a0,0);
        bVar11 = true;
        if (iVar5 != 0) {
          local_a8 = (QArrayData *)QString::fromAscii_helper("rawDisk",7);
          iVar5 = QString::compare(&local_80,&local_a8,0);
          bVar11 = true;
          if (iVar5 != 0) {
            local_b0 = (QArrayData *)QString::fromAscii_helper("ata-hardDisk",0xc);
            iVar5 = QString::compare(&local_80,&local_b0,0);
            bVar11 = iVar5 == 0;
            if (*(int *)local_b0 != -1) {
              if (*(int *)local_b0 != 0) {
                LOCK();
                *(int *)local_b0 = *(int *)local_b0 + -1;
                local_31 = *(int *)local_b0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce62cf;
              }
              QArrayData::deallocate(local_b0,2,8);
            }
          }
LAB_100ce62cf:
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ce6305;
            }
            QArrayData::deallocate(local_a8,2,8);
          }
        }
LAB_100ce6305:
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce633b;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_100ce633b:
        if (bVar11) {
          puVar6 = (uint *)*plVar1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *plVar1 = (long)puVar6;
            }
            else {
              FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*plVar1;
            }
          }
          *(undefined1 *)((long)puVar6 + local_1d8 + *(long *)(puVar6 + 4)) = 1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *plVar1 = (long)puVar6;
            }
            else {
              FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*plVar1;
            }
          }
          *(undefined1 *)((long)puVar6 + local_1d8 + 1 + *(long *)(puVar6 + 4)) = 1;
          if (1 < *puVar6) {
            if ((puVar6[2] & 0x7fffffff) == 0) {
              puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
              *plVar1 = (long)puVar6;
            }
            else {
              FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
              puVar6 = (uint *)*plVar1;
            }
          }
          *(undefined1 *)((long)puVar6 + local_1d8 + 2 + *(long *)(puVar6 + 4)) = 1;
          pcVar2 = *(code **)*param_2;
          local_c0 = local_40;
          if (1 < *(int *)local_40 + 1U) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + 1;
            local_31 = *(int *)local_40 != 0;
            UNLOCK();
          }
          local_c8 = (QArrayData *)QString::fromAscii_helper("fileName",8);
          local_d0 = (QArrayData *)QString::fromAscii_helper("",0);
          (*pcVar2)(&local_b8,param_2,&local_c0,&local_c8,&local_d0);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ce65f5;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_100ce65f5:
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ce662b;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_100ce662b:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              local_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ce6661;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_100ce6661:
          if (*(int *)(local_b8.field0_0x0 + 4) == 0) {
            puVar6 = (uint *)*plVar1;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *plVar1 = (long)puVar6;
              }
              else {
                FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*plVar1;
              }
            }
            *(undefined1 *)((long)puVar6 + local_1d8 + *(long *)(puVar6 + 4)) = 0;
            bVar3 = true;
          }
          else {
            local_d8.field0_0x0 = local_b8.field0_0x0;
            if (1 < *(int *)local_b8.field0_0x0 + 1U) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + 1;
              local_31 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
            }
            QFileInfo::QFileInfo(local_e0,&local_b8);
            cVar4 = QFileInfo::isRelative();
            if (cVar4 != '\0') {
              (**(code **)(*param_2 + 0x50))(&local_e8);
              QString::operator=(&local_d8,&local_e8);
              if (*(int *)local_e8.field0_0x0 != -1) {
                if (*(int *)local_e8.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
                  local_31 = *(int *)local_e8.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce6710;
                }
                QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
              }
LAB_100ce6710:
              QFileInfo::QFileInfo(local_f0,&local_d8);
              QFileInfo::fileName();
              QString::lastIndexOf(&local_d8,&local_f8,0xffffffff,1);
              if (*(int *)local_f8 != -1) {
                if (*(int *)local_f8 != 0) {
                  LOCK();
                  *(int *)local_f8 = *(int *)local_f8 + -1;
                  local_31 = *(int *)local_f8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce678e;
                }
                QArrayData::deallocate(local_f8,2,8);
              }
LAB_100ce678e:
              QString::mid((int)&local_100,(int)&local_d8);
              QString::operator=(&local_d8,&local_100);
              if (*(int *)local_100.field0_0x0 != -1) {
                if (*(int *)local_100.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
                  local_31 = *(int *)local_100.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce67ee;
                }
                QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
              }
LAB_100ce67ee:
              local_108.field0_0x0 = local_d8.field0_0x0;
              if (1 < *(int *)local_d8.field0_0x0 + 1U) {
                LOCK();
                *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
                local_31 = *(int *)local_d8.field0_0x0 != 0;
                UNLOCK();
              }
              QString::append(&local_108);
              QString::operator=(&local_d8,&local_108);
              if (*(int *)local_108.field0_0x0 != -1) {
                if (*(int *)local_108.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
                  local_31 = *(int *)local_108.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce6868;
                }
                QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
              }
LAB_100ce6868:
              QFileInfo::~QFileInfo(local_f0);
            }
            puVar6 = (uint *)*plVar1;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *plVar1 = (long)puVar6;
              }
              else {
                FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*plVar1;
              }
            }
            QString::operator=((QString *)((long)puVar6 + local_1d8 + 0x10 + *(long *)(puVar6 + 4)),
                               &local_d8);
            puVar6 = (uint *)*plVar1;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *plVar1 = (long)puVar6;
              }
              else {
                FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*plVar1;
              }
            }
            *(undefined4 *)((long)puVar6 + local_1d8 + 0x18 + *(long *)(puVar6 + 4)) = 1;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *plVar1 = (long)puVar6;
              }
              else {
                FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*plVar1;
              }
            }
            *(int *)((long)puVar6 + local_1d8 + 0x1c + *(long *)(puVar6 + 4)) = iVar9;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *plVar1 = (long)puVar6;
              }
              else {
                FUN_100d063c0(plVar1,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*plVar1;
              }
            }
            *(int *)((long)puVar6 + local_1d8 + 0x20 + *(long *)(puVar6 + 4)) = iVar8;
            QFileInfo::~QFileInfo(local_e0);
            bVar3 = false;
            if (*(int *)local_d8.field0_0x0 != -1) {
              if (*(int *)local_d8.field0_0x0 != 0) {
                LOCK();
                *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
                local_31 = *(int *)local_d8.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6ce7;
              }
              QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
            }
          }
LAB_100ce6ce7:
          if (*(int *)local_b8.field0_0x0 != -1) {
            if (*(int *)local_b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
              local_31 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ce6d1d;
            }
            QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
          }
LAB_100ce6d1d:
          bVar11 = true;
joined_r0x000100ce7655:
          if (!bVar3) goto LAB_100ce7657;
        }
        else {
          local_110 = (QArrayData *)QString::fromAscii_helper("cdrom-image",0xb);
          iVar5 = QString::compare(&local_80,&local_110,0);
          bVar11 = true;
          if (iVar5 != 0) {
            local_118 = (QArrayData *)QString::fromAscii_helper("cdrom-raw",9);
            iVar5 = QString::compare(&local_80,&local_118,0);
            bVar11 = iVar5 == 0;
            if (*(int *)local_118 != -1) {
              if (*(int *)local_118 != 0) {
                LOCK();
                *(int *)local_118 = *(int *)local_118 + -1;
                local_31 = *(int *)local_118 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6405;
              }
              QArrayData::deallocate(local_118,2,8);
            }
          }
LAB_100ce6405:
          if (*(int *)local_110 != -1) {
            if (*(int *)local_110 != 0) {
              LOCK();
              *(int *)local_110 = *(int *)local_110 + -1;
              local_31 = *(int *)local_110 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ce643b;
            }
            QArrayData::deallocate(local_110,2,8);
          }
LAB_100ce643b:
          if (bVar11) {
            puVar6 = (uint *)*puVar7;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *puVar7 = puVar6;
              }
              else {
                FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*puVar7;
              }
            }
            *(undefined1 *)((long)puVar6 + local_1d8 + *(long *)(puVar6 + 4)) = 1;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *puVar7 = puVar6;
              }
              else {
                FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*puVar7;
              }
            }
            *(undefined1 *)((long)puVar6 + local_1d8 + 1 + *(long *)(puVar6 + 4)) = 1;
            pcVar2 = *(code **)*param_2;
            local_128 = local_40;
            if (1 < *(int *)local_40 + 1U) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + 1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
            }
            local_130 = (QArrayData *)QString::fromAscii_helper("startConnected",0xe);
            local_138 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
            (*pcVar2)(&local_120,param_2,&local_128,&local_130,&local_138);
            if (*(int *)local_138 != -1) {
              if (*(int *)local_138 != 0) {
                LOCK();
                *(int *)local_138 = *(int *)local_138 + -1;
                local_31 = *(int *)local_138 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6b7c;
              }
              QArrayData::deallocate(local_138,2,8);
            }
LAB_100ce6b7c:
            if (*(int *)local_130 != -1) {
              if (*(int *)local_130 != 0) {
                LOCK();
                *(int *)local_130 = *(int *)local_130 + -1;
                local_31 = *(int *)local_130 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6bb2;
              }
              QArrayData::deallocate(local_130,2,8);
            }
LAB_100ce6bb2:
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_31 = *(int *)local_128 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6be8;
              }
              QArrayData::deallocate(local_128,2,8);
            }
LAB_100ce6be8:
            local_140 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
            iVar5 = QString::compare(&local_120,&local_140,0);
            if (*(int *)local_140 != -1) {
              if (*(int *)local_140 != 0) {
                LOCK();
                *(int *)local_140 = *(int *)local_140 + -1;
                local_31 = *(int *)local_140 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6c4d;
              }
              QArrayData::deallocate(local_140,2,8);
            }
LAB_100ce6c4d:
            puVar6 = (uint *)*puVar7;
            if (iVar5 == 0) {
              if (1 < *puVar6) {
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                  *puVar7 = puVar6;
                }
                else {
                  FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                  puVar6 = (uint *)*puVar7;
                }
              }
              *(undefined1 *)((long)puVar6 + local_1d8 + 2 + *(long *)(puVar6 + 4)) = 1;
            }
            else {
              if (1 < *puVar6) {
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                  *puVar7 = puVar6;
                }
                else {
                  FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                  puVar6 = (uint *)*puVar7;
                }
              }
              *(undefined1 *)((long)puVar6 + local_1d8 + 2 + *(long *)(puVar6 + 4)) = 0;
            }
            local_148 = (QArrayData *)QString::fromAscii_helper("cdrom-image",0xb);
            iVar5 = QString::compare(&local_80,&local_148,0);
            if (*(int *)local_148 != -1) {
              if (*(int *)local_148 != 0) {
                LOCK();
                *(int *)local_148 = *(int *)local_148 + -1;
                local_31 = *(int *)local_148 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6df0;
              }
              QArrayData::deallocate(local_148,2,8);
            }
LAB_100ce6df0:
            puVar6 = (uint *)*puVar7;
            if (1 < *puVar6) {
              if ((puVar6[2] & 0x7fffffff) == 0) {
                puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                *puVar7 = puVar6;
              }
              else {
                FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                puVar6 = (uint *)*puVar7;
              }
            }
            *(uint *)((long)puVar6 + local_1d8 + 4 + *(long *)(puVar6 + 4)) = (uint)(iVar5 != 0);
            pcVar2 = *(code **)*param_2;
            local_158 = local_40;
            if (1 < *(int *)local_40 + 1U) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + 1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
            }
            local_160 = (QArrayData *)QString::fromAscii_helper("fileName",8);
            local_168 = (QArrayData *)QString::fromAscii_helper("",0);
            (*pcVar2)(&local_150,param_2,&local_158,&local_160,&local_168);
            if (*(int *)local_168 != -1) {
              if (*(int *)local_168 != 0) {
                LOCK();
                *(int *)local_168 = *(int *)local_168 + -1;
                local_31 = *(int *)local_168 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6f0d;
              }
              QArrayData::deallocate(local_168,2,8);
            }
LAB_100ce6f0d:
            if (*(int *)local_160 != -1) {
              if (*(int *)local_160 != 0) {
                LOCK();
                *(int *)local_160 = *(int *)local_160 + -1;
                local_31 = *(int *)local_160 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6f43;
              }
              QArrayData::deallocate(local_160,2,8);
            }
LAB_100ce6f43:
            if (*(int *)local_158 != -1) {
              if (*(int *)local_158 != 0) {
                LOCK();
                *(int *)local_158 = *(int *)local_158 + -1;
                local_31 = *(int *)local_158 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce6f79;
              }
              QArrayData::deallocate(local_158,2,8);
            }
LAB_100ce6f79:
            if (iVar5 == 0) {
              if (*(int *)(local_150.field0_0x0 + 4) != 0) {
                local_170.field0_0x0 = local_150.field0_0x0;
                if (1 < *(int *)local_150.field0_0x0 + 1U) {
                  LOCK();
                  *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + 1;
                  local_31 = *(int *)local_150.field0_0x0 != 0;
                  UNLOCK();
                }
                QFileInfo::QFileInfo(local_178,&local_150);
                cVar4 = QFileInfo::isRelative();
                if (cVar4 != '\0') {
                  (**(code **)(*param_2 + 0x50))(&local_180);
                  QString::operator=(&local_170,&local_180);
                  if (*(int *)local_180.field0_0x0 != -1) {
                    if (*(int *)local_180.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_180.field0_0x0 = *(int *)local_180.field0_0x0 + -1;
                      local_31 = *(int *)local_180.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100ce71fe;
                    }
                    QArrayData::deallocate((QArrayData *)local_180.field0_0x0,2,8);
                  }
LAB_100ce71fe:
                  QFileInfo::QFileInfo(local_188,&local_170);
                  QFileInfo::fileName();
                  QString::lastIndexOf(&local_170,&local_190,0xffffffff,1);
                  if (*(int *)local_190 != -1) {
                    if (*(int *)local_190 != 0) {
                      LOCK();
                      *(int *)local_190 = *(int *)local_190 + -1;
                      local_31 = *(int *)local_190 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100ce727c;
                    }
                    QArrayData::deallocate(local_190,2,8);
                  }
LAB_100ce727c:
                  QString::mid((int)&local_198,(int)&local_170);
                  QString::operator=(&local_170,&local_198);
                  if (*(int *)local_198.field0_0x0 != -1) {
                    if (*(int *)local_198.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
                      local_31 = *(int *)local_198.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100ce72dc;
                    }
                    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
                  }
LAB_100ce72dc:
                  local_1a0.field0_0x0 = local_170.field0_0x0;
                  if (1 < *(int *)local_170.field0_0x0 + 1U) {
                    LOCK();
                    *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + 1;
                    local_31 = *(int *)local_170.field0_0x0 != 0;
                    UNLOCK();
                  }
                  QString::append(&local_1a0);
                  QString::operator=(&local_170,&local_1a0);
                  if (*(int *)local_1a0.field0_0x0 != -1) {
                    if (*(int *)local_1a0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
                      local_31 = *(int *)local_1a0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100ce7356;
                    }
                    QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
                  }
LAB_100ce7356:
                  QFileInfo::~QFileInfo(local_188);
                }
                puVar6 = (uint *)*puVar7;
                if (1 < *puVar6) {
                  if ((puVar6[2] & 0x7fffffff) == 0) {
                    puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                    *puVar7 = puVar6;
                  }
                  else {
                    FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                    puVar6 = (uint *)*puVar7;
                  }
                }
                QString::operator=((QString *)((long)puVar6 + local_1d8 + 8 + *(long *)(puVar6 + 4))
                                   ,&local_170);
                QFileInfo::~QFileInfo(local_178);
                if (*(int *)local_170.field0_0x0 != -1) {
                  if (*(int *)local_170.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_170.field0_0x0 = *(int *)local_170.field0_0x0 + -1;
                    local_31 = *(int *)local_170.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100ce74d2;
                  }
                  QArrayData::deallocate((QArrayData *)local_170.field0_0x0,2,8);
                }
                goto LAB_100ce74d2;
              }
              puVar6 = (uint *)*puVar7;
              if (1 < *puVar6) {
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                  *puVar7 = puVar6;
                }
                else {
                  FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                  puVar6 = (uint *)*puVar7;
                }
              }
              *(undefined1 *)((long)puVar6 + local_1d8 + *(long *)(puVar6 + 4)) = 0;
              bVar11 = true;
            }
            else {
              pcVar2 = *(code **)*param_2;
              local_1b0 = local_40;
              if (1 < *(int *)local_40 + 1U) {
                LOCK();
                *(int *)local_40 = *(int *)local_40 + 1;
                local_31 = *(int *)local_40 != 0;
                UNLOCK();
              }
              local_1b8 = (QArrayData *)QString::fromAscii_helper("autodetect",10);
              local_1c0 = (QArrayData *)QString::fromAscii_helper("FALSE",5);
              (*pcVar2)(&local_1a8,param_2,&local_1b0,&local_1b8,&local_1c0);
              if (*(int *)local_1c0 != -1) {
                if (*(int *)local_1c0 != 0) {
                  LOCK();
                  *(int *)local_1c0 = *(int *)local_1c0 + -1;
                  local_31 = *(int *)local_1c0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce703a;
                }
                QArrayData::deallocate(local_1c0,2,8);
              }
LAB_100ce703a:
              if (*(int *)local_1b8 != -1) {
                if (*(int *)local_1b8 != 0) {
                  LOCK();
                  *(int *)local_1b8 = *(int *)local_1b8 + -1;
                  local_31 = *(int *)local_1b8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce7070;
                }
                QArrayData::deallocate(local_1b8,2,8);
              }
LAB_100ce7070:
              if (*(int *)local_1b0 != -1) {
                if (*(int *)local_1b0 != 0) {
                  LOCK();
                  *(int *)local_1b0 = *(int *)local_1b0 + -1;
                  local_31 = *(int *)local_1b0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce70a6;
                }
                QArrayData::deallocate(local_1b0,2,8);
              }
LAB_100ce70a6:
              local_1c8 = (QArrayData *)QString::fromAscii_helper("TRUE",4);
              iVar5 = QString::compare(&local_1a8,&local_1c8,0);
              if (*(int *)local_1c8 != -1) {
                if (*(int *)local_1c8 != 0) {
                  LOCK();
                  *(int *)local_1c8 = *(int *)local_1c8 + -1;
                  local_31 = *(int *)local_1c8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce710b;
                }
                QArrayData::deallocate(local_1c8,2,8);
              }
LAB_100ce710b:
              if (iVar5 != 0) {
                puVar6 = (uint *)*puVar7;
                if (1 < *puVar6) {
                  if ((puVar6[2] & 0x7fffffff) == 0) {
                    puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                    *puVar7 = puVar6;
                  }
                  else {
                    FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                    puVar6 = (uint *)*puVar7;
                  }
                }
                QString::operator=((QString *)
                                   ((long)puVar6 + local_1d8 + 0x10 + *(long *)(puVar6 + 4)),
                                   &local_150);
              }
              if (*(int *)local_1a8 != -1) {
                if (*(int *)local_1a8 != 0) {
                  LOCK();
                  *(int *)local_1a8 = *(int *)local_1a8 + -1;
                  local_31 = *(int *)local_1a8 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100ce74d2;
                }
                QArrayData::deallocate(local_1a8,2,8);
              }
LAB_100ce74d2:
              puVar6 = (uint *)*puVar7;
              if (1 < *puVar6) {
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                  *puVar7 = puVar6;
                }
                else {
                  FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                  puVar6 = (uint *)*puVar7;
                }
              }
              *(undefined4 *)((long)puVar6 + local_1d8 + 0x18 + *(long *)(puVar6 + 4)) = 1;
              if (1 < *puVar6) {
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                  *puVar7 = puVar6;
                }
                else {
                  FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                  puVar6 = (uint *)*puVar7;
                }
              }
              *(int *)((long)puVar6 + local_1d8 + 0x1c + *(long *)(puVar6 + 4)) = iVar9;
              if (1 < *puVar6) {
                if ((puVar6[2] & 0x7fffffff) == 0) {
                  puVar6 = (uint *)QArrayData::allocate(0x28,8,0,2);
                  *puVar7 = puVar6;
                }
                else {
                  FUN_100d06780(puVar7,puVar6[1],puVar6[2] & 0x7fffffff,0);
                  puVar6 = (uint *)*puVar7;
                }
              }
              *(int *)((long)puVar6 + local_1d8 + 0x20 + *(long *)(puVar6 + 4)) = iVar8;
              bVar11 = false;
            }
            if (*(int *)local_150.field0_0x0 != -1) {
              if (*(int *)local_150.field0_0x0 != 0) {
                LOCK();
                *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
                local_31 = *(int *)local_150.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ce7616;
              }
              QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
            }
LAB_100ce7616:
            bVar3 = bVar11;
            if (*(int *)local_120 != -1) {
              if (*(int *)local_120 != 0) {
                LOCK();
                *(int *)local_120 = *(int *)local_120 + -1;
                local_31 = *(int *)local_120 != 0;
                UNLOCK();
                if ((bool)local_31) goto joined_r0x000100ce7655;
              }
              QArrayData::deallocate(local_120,2,8);
            }
            goto joined_r0x000100ce7655;
          }
LAB_100ce7657:
          bVar11 = false;
        }
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_31 = *(int *)local_80 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ce7689;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_100ce7689:
        if (!bVar11) goto LAB_100ce7690;
      }
      else {
LAB_100ce7690:
        bVar11 = false;
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce76c2;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100ce76c2:
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100ce76f2;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100ce76f2:
      if (bVar11) {
        return 0x8117002;
      }
      uVar10 = uVar10 + 1;
      local_1d8 = local_1d8 + 0x28;
    } while ((long)uVar10 < (long)*(int *)(*plVar1 + 4));
  }
  return 0x8000000;
}

