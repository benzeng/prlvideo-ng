
undefined8 FUN_100cf5da0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  long local_138;
  QString local_130;
  QString local_128;
  QArrayData *local_120;
  QFileInfo local_118 [8];
  QString local_110;
  QFileInfo local_108 [8];
  QString local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QString local_e0;
  QString local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QFileInfo local_c0 [8];
  QString local_b8;
  QFileInfo local_b0 [8];
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_1 + 0x110);
  puVar8 = (undefined8 *)(param_1 + 0x118);
  local_138 = 0;
  uVar10 = 0;
  do {
    local_68 = (QArrayData *)QString::fromAscii_helper("ide%1:%2",8);
    iVar9 = (int)uVar10;
    iVar11 = (int)(((uint)(uVar10 >> 0x1f) & 1) + iVar9) >> 1;
    QString::arg(&local_60,&local_68,(long)iVar11,0,10,0x20);
    iVar9 = iVar9 - (((uint)(uVar10 >> 0x1f) & 1) + iVar9 & 0xfffffffe);
    QString::arg(&local_58,&local_60,(long)iVar9,0,10,0x20);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf5e8e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100cf5e8e:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf5ebe;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cf5ebe:
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::fromUtf8_helper((char *)&local_50,0x1e28e7e);
    QString::operator=(&local_70,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf5f1b;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100cf5f1b:
    pcVar2 = *(code **)(*param_2 + 0x10);
    local_78 = local_58;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
    local_80 = (QArrayData *)local_70.field0_0x0;
    if (1 < *(int *)local_70.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
    }
    iVar6 = (*pcVar2)(param_2,&local_78,&local_80,10,0);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf5fa7;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cf5fa7:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf5fd7;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cf5fd7:
    if (iVar6 == 2) {
      puVar7 = (uint *)*puVar8;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar8 = puVar7;
        }
        else {
          FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar8;
        }
      }
      *(undefined1 *)((long)puVar7 + local_138 + *(long *)(puVar7 + 4)) = 1;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar8 = puVar7;
        }
        else {
          FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar8;
        }
      }
      *(undefined1 *)((long)puVar7 + local_138 + 1 + *(long *)(puVar7 + 4)) = 1;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar8 = puVar7;
        }
        else {
          FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar8;
        }
      }
      *(undefined1 *)((long)puVar7 + local_138 + 2 + *(long *)(puVar7 + 4)) = 1;
      QString::fromUtf8_helper((char *)&local_40,0x1ef68bf);
      QString::operator=(&local_70,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf61c2;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100cf61c2:
      pcVar2 = *(code **)*param_2;
      local_e8 = local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_f0 = (QArrayData *)local_70.field0_0x0;
      if (1 < *(int *)local_70.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
      }
      local_f8 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar2)(&local_e0,param_2,&local_e8,&local_f0,&local_f8);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_31 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf6277;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_100cf6277:
      if (*(int *)local_f0 != -1) {
        if (*(int *)local_f0 != 0) {
          LOCK();
          *(int *)local_f0 = *(int *)local_f0 + -1;
          local_31 = *(int *)local_f0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf62ad;
        }
        QArrayData::deallocate(local_f0,2,8);
      }
LAB_100cf62ad:
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_31 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf62e3;
        }
        QArrayData::deallocate(local_e8,2,8);
      }
LAB_100cf62e3:
      iVar6 = *(int *)(local_e0.field0_0x0 + 4);
      puVar7 = (uint *)*puVar8;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar8 = puVar7;
        }
        else {
          FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar8;
        }
      }
      *(uint *)((long)puVar7 + local_138 + 4 + *(long *)(puVar7 + 4)) = (uint)(iVar6 < 2);
      if (iVar6 < 2) {
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar8 = puVar7;
          }
          else {
            FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar8;
          }
        }
        QString::operator=((QString *)((long)puVar7 + local_138 + 0x10 + *(long *)(puVar7 + 4)),
                           &local_e0);
      }
      else {
        local_100.field0_0x0 = local_e0.field0_0x0;
        if (1 < *(int *)local_e0.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + 1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
        }
        QFileInfo::QFileInfo(local_108,&local_e0);
        cVar5 = QFileInfo::isRelative();
        if (cVar5 != '\0') {
          (**(code **)(*param_2 + 0x50))(&local_110);
          QString::operator=(&local_100,&local_110);
          if (*(int *)local_110.field0_0x0 != -1) {
            if (*(int *)local_110.field0_0x0 != 0) {
              LOCK();
              *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
              local_31 = *(int *)local_110.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf6414;
            }
            QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
          }
LAB_100cf6414:
          QFileInfo::QFileInfo(local_118,&local_100);
          QFileInfo::fileName();
          QString::lastIndexOf(&local_100,&local_120,0xffffffff,1);
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              local_31 = *(int *)local_120 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf6492;
            }
            QArrayData::deallocate(local_120,2,8);
          }
LAB_100cf6492:
          QString::mid((int)&local_128,(int)&local_100);
          QString::operator=(&local_100,&local_128);
          if (*(int *)local_128.field0_0x0 != -1) {
            if (*(int *)local_128.field0_0x0 != 0) {
              LOCK();
              *(int *)local_128.field0_0x0 = *(int *)local_128.field0_0x0 + -1;
              local_31 = *(int *)local_128.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf64f2;
            }
            QArrayData::deallocate((QArrayData *)local_128.field0_0x0,2,8);
          }
LAB_100cf64f2:
          local_130.field0_0x0 = local_100.field0_0x0;
          if (1 < *(int *)local_100.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + 1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_130);
          QString::operator=(&local_100,&local_130);
          if (*(int *)local_130.field0_0x0 != -1) {
            if (*(int *)local_130.field0_0x0 != 0) {
              LOCK();
              *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
              local_31 = *(int *)local_130.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf656c;
            }
            QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
          }
LAB_100cf656c:
          QFileInfo::~QFileInfo(local_118);
        }
        puVar7 = (uint *)*puVar8;
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar8 = puVar7;
          }
          else {
            FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar8;
          }
        }
        QString::operator=((QString *)((long)puVar7 + local_138 + 8 + *(long *)(puVar7 + 4)),
                           &local_100);
        QFileInfo::~QFileInfo(local_108);
        if (*(int *)local_100.field0_0x0 != -1) {
          if (*(int *)local_100.field0_0x0 != 0) {
            LOCK();
            *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
            local_31 = *(int *)local_100.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf6c00;
          }
          QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
        }
      }
LAB_100cf6c00:
      puVar7 = (uint *)*puVar8;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar8 = puVar7;
        }
        else {
          FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar8;
        }
      }
      *(undefined4 *)((long)puVar7 + local_138 + 0x18 + *(long *)(puVar7 + 4)) = 1;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar8 = puVar7;
        }
        else {
          FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar8;
        }
      }
      *(int *)((long)puVar7 + local_138 + 0x1c + *(long *)(puVar7 + 4)) = iVar11;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar8 = puVar7;
        }
        else {
          FUN_100d06780(puVar8,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar8;
        }
      }
      *(int *)((long)puVar7 + local_138 + 0x20 + *(long *)(puVar7 + 4)) = iVar9;
      if (*(int *)local_e0.field0_0x0 != -1) {
        if (*(int *)local_e0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
          local_31 = *(int *)local_e0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf6fb0;
        }
        QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
      }
LAB_100cf6fb0:
      bVar4 = false;
    }
    else {
      if (iVar6 != 1) goto LAB_100cf6fb0;
      puVar7 = (uint *)*puVar1;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar1 = puVar7;
        }
        else {
          FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar1;
        }
      }
      *(undefined1 *)((long)puVar7 + local_138 + *(long *)(puVar7 + 4)) = 1;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar1 = puVar7;
        }
        else {
          FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar1;
        }
      }
      *(undefined1 *)((long)puVar7 + local_138 + 1 + *(long *)(puVar7 + 4)) = 1;
      if (1 < *puVar7) {
        if ((puVar7[2] & 0x7fffffff) == 0) {
          puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar1 = puVar7;
        }
        else {
          FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
          puVar7 = (uint *)*puVar1;
        }
      }
      *(undefined1 *)((long)puVar7 + local_138 + 2 + *(long *)(puVar7 + 4)) = 1;
      QString::fromUtf8_helper((char *)&local_48,0x1ef68bf);
      QString::operator=(&local_70,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf6752;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100cf6752:
      pcVar2 = *(code **)*param_2;
      local_90 = local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_98 = (QArrayData *)local_70.field0_0x0;
      if (1 < *(int *)local_70.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
      }
      local_a0 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar2)(&local_88,param_2,&local_90,&local_98,&local_a0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf6804;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100cf6804:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf683a;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cf683a:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf6870;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100cf6870:
      if (*(int *)(local_88.field0_0x0 + 4) == 0) {
        puVar7 = (uint *)*puVar1;
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar7;
          }
          else {
            FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar1;
          }
        }
        *(undefined1 *)((long)puVar7 + local_138 + *(long *)(puVar7 + 4)) = 0;
        bVar3 = true;
      }
      else {
        QString::replace(&local_88,0x5c,0x2f,1);
        local_a8.field0_0x0 = local_88.field0_0x0;
        if (1 < *(int *)local_88.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
        }
        QFileInfo::QFileInfo(local_b0,&local_88);
        cVar5 = QFileInfo::isRelative();
        if (cVar5 != '\0') {
          (**(code **)(*param_2 + 0x50))(&local_b8);
          QString::operator=(&local_a8,&local_b8);
          if (*(int *)local_b8.field0_0x0 != -1) {
            if (*(int *)local_b8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
              local_31 = *(int *)local_b8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf6935;
            }
            QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
          }
LAB_100cf6935:
          QFileInfo::QFileInfo(local_c0,&local_a8);
          QFileInfo::fileName();
          QString::lastIndexOf(&local_a8,&local_c8,0xffffffff,1);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf69b3;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
LAB_100cf69b3:
          QString::mid((int)&local_d0,(int)&local_a8);
          QString::operator=(&local_a8,&local_d0);
          if (*(int *)local_d0.field0_0x0 != -1) {
            if (*(int *)local_d0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
              local_31 = *(int *)local_d0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf6a13;
            }
            QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
          }
LAB_100cf6a13:
          local_d8.field0_0x0 = local_a8.field0_0x0;
          if (1 < *(int *)local_a8.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_d8);
          QString::operator=(&local_a8,&local_d8);
          if (*(int *)local_d8.field0_0x0 != -1) {
            if (*(int *)local_d8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
              local_31 = *(int *)local_d8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cf6a8a;
            }
            QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
          }
LAB_100cf6a8a:
          QFileInfo::~QFileInfo(local_c0);
        }
        puVar7 = (uint *)*puVar1;
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar7;
          }
          else {
            FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar1;
          }
        }
        QString::operator=((QString *)((long)puVar7 + local_138 + 0x10 + *(long *)(puVar7 + 4)),
                           &local_a8);
        puVar7 = (uint *)*puVar1;
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar7;
          }
          else {
            FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar1;
          }
        }
        *(undefined4 *)((long)puVar7 + local_138 + 0x18 + *(long *)(puVar7 + 4)) = 1;
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar7;
          }
          else {
            FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar1;
          }
        }
        *(int *)((long)puVar7 + local_138 + 0x1c + *(long *)(puVar7 + 4)) = iVar11;
        if (1 < *puVar7) {
          if ((puVar7[2] & 0x7fffffff) == 0) {
            puVar7 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar7;
          }
          else {
            FUN_100d063c0(puVar1,puVar7[1],puVar7[2] & 0x7fffffff,0);
            puVar7 = (uint *)*puVar1;
          }
        }
        *(int *)((long)puVar7 + local_138 + 0x20 + *(long *)(puVar7 + 4)) = iVar9;
        QFileInfo::~QFileInfo(local_b0);
        bVar3 = false;
        if (*(int *)local_a8.field0_0x0 != -1) {
          if (*(int *)local_a8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
            local_31 = *(int *)local_a8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cf6f74;
          }
          QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
        }
      }
LAB_100cf6f74:
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cf6fa4;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_100cf6fa4:
      bVar4 = true;
      if (!bVar3) goto LAB_100cf6fb0;
    }
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf6fe2;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100cf6fe2:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cf7012;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100cf7012:
    if (bVar4) {
      return 0x8117002;
    }
    uVar10 = uVar10 + 1;
    local_138 = local_138 + 0x28;
    if (3 < (long)uVar10) {
      return 0x8000000;
    }
  } while( true );
}

