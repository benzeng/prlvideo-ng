
undefined8 FUN_100cfc200(long param_1,long *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  QString local_100;
  QString local_f8;
  QArrayData *local_f0;
  QFileInfo local_e8 [8];
  QString local_e0;
  QFileInfo local_d8 [8];
  QString local_d0;
  QFileInfo local_c8 [8];
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
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
  puVar9 = (undefined8 *)(param_1 + 0x118);
  lVar12 = 0;
  uVar11 = 0;
  do {
    local_68 = (QArrayData *)QString::fromAscii_helper("IDE%1:%2",8);
    iVar10 = (int)uVar11;
    iVar13 = (int)(((uint)(uVar11 >> 0x1f) & 1) + iVar10) >> 1;
    QString::arg(&local_60,&local_68,(long)iVar13,0,10,0x20);
    iVar10 = iVar10 - (((uint)(uVar11 >> 0x1f) & 1) + iVar10 & 0xfffffffe);
    QString::arg(&local_58,&local_60,(long)iVar10,0,10,0x20);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfc2ee;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100cfc2ee:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfc31e;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_100cfc31e:
    local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::fromUtf8_helper((char *)&local_50,0x1e28e7e);
    QString::operator=(&local_70,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfc382;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100cfc382:
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
    iVar7 = (*pcVar2)(param_2,&local_78,&local_80,10,0);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfc40e;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100cfc40e:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfc43e;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100cfc43e:
    if (iVar7 == 2) {
      puVar8 = (uint *)*puVar9;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar9 = puVar8;
        }
        else {
          FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar9;
        }
      }
      *(undefined1 *)((long)puVar8 + lVar12 + *(long *)(puVar8 + 4)) = 1;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar9 = puVar8;
        }
        else {
          FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar9;
        }
      }
      *(undefined1 *)((long)puVar8 + lVar12 + 1 + *(long *)(puVar8 + 4)) = 1;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar9 = puVar8;
        }
        else {
          FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar9;
        }
      }
      *(undefined1 *)((long)puVar8 + lVar12 + 2 + *(long *)(puVar8 + 4)) = 1;
      QString::fromUtf8_helper((char *)&local_40,0x1ef68bf);
      QString::operator=(&local_70,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfc60c;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_100cfc60c:
      pcVar2 = *(code **)*param_2;
      local_b0 = local_58;
      if (1 < *(int *)local_58 + 1U) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
      local_b8 = (QArrayData *)local_70.field0_0x0;
      if (1 < *(int *)local_70.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
      }
      local_c0 = (QArrayData *)QString::fromAscii_helper("",0);
      (*pcVar2)(&local_a8,param_2,&local_b0,&local_b8,&local_c0);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfc6c1;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_100cfc6c1:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfc6f7;
        }
        QArrayData::deallocate(local_b8,2,8);
      }
LAB_100cfc6f7:
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfc72d;
        }
        QArrayData::deallocate(local_b0,2,8);
      }
LAB_100cfc72d:
      QFileInfo::QFileInfo(local_c8,&local_a8);
      bVar5 = QFileInfo::isFile();
      puVar8 = (uint *)*puVar9;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar9 = puVar8;
        }
        else {
          FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar9;
        }
      }
      *(uint *)((long)puVar8 + lVar12 + 4 + *(long *)(puVar8 + 4)) = bVar5 ^ 1;
      if (*(int *)(local_a8.field0_0x0 + 4) == 0) {
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar9 = puVar8;
          }
          else {
            FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
            puVar8 = (uint *)*puVar9;
          }
        }
        *(undefined1 *)((long)puVar8 + lVar12 + 2 + *(long *)(puVar8 + 4)) = 0;
      }
      else if (bVar5 == 0) {
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar9 = puVar8;
          }
          else {
            FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
            puVar8 = (uint *)*puVar9;
          }
        }
        QString::operator=((QString *)((long)puVar8 + lVar12 + 0x10 + *(long *)(puVar8 + 4)),
                           &local_a8);
      }
      else {
        local_d0.field0_0x0 = local_a8.field0_0x0;
        if (1 < *(int *)local_a8.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + 1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
        }
        QFileInfo::QFileInfo(local_d8,&local_a8);
        cVar6 = QFileInfo::isRelative();
        if (cVar6 != '\0') {
          (**(code **)(*param_2 + 0x50))(&local_e0);
          QString::operator=(&local_d0,&local_e0);
          if (*(int *)local_e0.field0_0x0 != -1) {
            if (*(int *)local_e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
              local_31 = *(int *)local_e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cfc879;
            }
            QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
          }
LAB_100cfc879:
          QFileInfo::QFileInfo(local_e8,&local_d0);
          QFileInfo::fileName();
          QString::lastIndexOf(&local_d0,&local_f0,0xffffffff,1);
          if (*(int *)local_f0 != -1) {
            if (*(int *)local_f0 != 0) {
              LOCK();
              *(int *)local_f0 = *(int *)local_f0 + -1;
              local_31 = *(int *)local_f0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cfc8f4;
            }
            QArrayData::deallocate(local_f0,2,8);
          }
LAB_100cfc8f4:
          QString::mid((int)&local_f8,(int)&local_d0);
          QString::operator=(&local_d0,&local_f8);
          if (*(int *)local_f8.field0_0x0 != -1) {
            if (*(int *)local_f8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
              local_31 = *(int *)local_f8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cfc954;
            }
            QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
          }
LAB_100cfc954:
          local_100.field0_0x0 = local_d0.field0_0x0;
          if (1 < *(int *)local_d0.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
            local_31 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
          }
          QString::append(&local_100);
          QString::operator=(&local_d0,&local_100);
          if (*(int *)local_100.field0_0x0 != -1) {
            if (*(int *)local_100.field0_0x0 != 0) {
              LOCK();
              *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
              local_31 = *(int *)local_100.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100cfc9ce;
            }
            QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
          }
LAB_100cfc9ce:
          QFileInfo::~QFileInfo(local_e8);
        }
        puVar8 = (uint *)*puVar9;
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar9 = puVar8;
          }
          else {
            FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
            puVar8 = (uint *)*puVar9;
          }
        }
        QString::operator=((QString *)((long)puVar8 + lVar12 + 8 + *(long *)(puVar8 + 4)),&local_d0)
        ;
        QFileInfo::~QFileInfo(local_d8);
        if (*(int *)local_d0.field0_0x0 != -1) {
          if (*(int *)local_d0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
            local_31 = *(int *)local_d0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100cfcf70;
          }
          QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
        }
      }
LAB_100cfcf70:
      puVar8 = (uint *)*puVar9;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar9 = puVar8;
        }
        else {
          FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar9;
        }
      }
      *(undefined4 *)((long)puVar8 + lVar12 + 0x18 + *(long *)(puVar8 + 4)) = 1;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar9 = puVar8;
        }
        else {
          FUN_100d06780(puVar9,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar9;
        }
      }
      *(int *)((long)puVar8 + lVar12 + 0x1c + *(long *)(puVar8 + 4)) = iVar13;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar9 = puVar8;
        }
        else {
          FUN_100d06780(puVar9,puVar8[1]);
          puVar8 = (uint *)*puVar9;
        }
      }
      *(int *)((long)puVar8 + lVar12 + 0x20 + *(long *)(puVar8 + 4)) = iVar10;
      QFileInfo::~QFileInfo(local_c8);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfd160;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
LAB_100cfd160:
      bVar4 = false;
    }
    else {
      if (iVar7 != 1) goto LAB_100cfd160;
      puVar8 = (uint *)*puVar1;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar1 = puVar8;
        }
        else {
          FUN_100d063c0(puVar1,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar1;
        }
      }
      *(undefined1 *)((long)puVar8 + lVar12 + *(long *)(puVar8 + 4)) = 1;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar1 = puVar8;
        }
        else {
          FUN_100d063c0(puVar1,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar1;
        }
      }
      *(undefined1 *)((long)puVar8 + lVar12 + 1 + *(long *)(puVar8 + 4)) = 1;
      if (1 < *puVar8) {
        if ((puVar8[2] & 0x7fffffff) == 0) {
          puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
          *puVar1 = puVar8;
        }
        else {
          FUN_100d063c0(puVar1,puVar8[1],puVar8[2] & 0x7fffffff,0);
          puVar8 = (uint *)*puVar1;
        }
      }
      *(undefined1 *)((long)puVar8 + lVar12 + 2 + *(long *)(puVar8 + 4)) = 1;
      QString::fromUtf8_helper((char *)&local_48,0x1ef68bf);
      QString::operator=(&local_70,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfcbcf;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100cfcbcf:
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
          if ((bool)local_31) goto LAB_100cfcc81;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_100cfcc81:
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfccb7;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_100cfccb7:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfcced;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_100cfcced:
      if (*(int *)(local_88.field0_0x0 + 4) == 0) {
        puVar8 = (uint *)*puVar1;
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0);
            *puVar1 = puVar8;
          }
          else {
            FUN_100d063c0(puVar1,puVar8[1]);
            puVar8 = (uint *)*puVar1;
          }
        }
        *(undefined1 *)((long)puVar8 + lVar12 + *(long *)(puVar8 + 4)) = 0;
        bVar3 = true;
      }
      else {
        QString::replace(&local_88,0x5c,0x2f,1);
        puVar8 = (uint *)*puVar1;
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar8;
          }
          else {
            FUN_100d063c0(puVar1,puVar8[1],puVar8[2] & 0x7fffffff,0);
            puVar8 = (uint *)*puVar1;
          }
        }
        QString::operator=((QString *)((long)puVar8 + lVar12 + 0x10 + *(long *)(puVar8 + 4)),
                           &local_88);
        puVar8 = (uint *)*puVar1;
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar8;
          }
          else {
            FUN_100d063c0(puVar1,puVar8[1],puVar8[2] & 0x7fffffff,0);
            puVar8 = (uint *)*puVar1;
          }
        }
        *(undefined4 *)((long)puVar8 + lVar12 + 0x18 + *(long *)(puVar8 + 4)) = 1;
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0,2);
            *puVar1 = puVar8;
          }
          else {
            FUN_100d063c0(puVar1,puVar8[1],puVar8[2] & 0x7fffffff,0);
            puVar8 = (uint *)*puVar1;
          }
        }
        *(int *)((long)puVar8 + lVar12 + 0x1c + *(long *)(puVar8 + 4)) = iVar13;
        if (1 < *puVar8) {
          if ((puVar8[2] & 0x7fffffff) == 0) {
            puVar8 = (uint *)QArrayData::allocate(0x28,8,0);
            *puVar1 = puVar8;
          }
          else {
            FUN_100d063c0(puVar1,puVar8[1]);
            puVar8 = (uint *)*puVar1;
          }
        }
        *(int *)((long)puVar8 + lVar12 + 0x20 + *(long *)(puVar8 + 4)) = iVar10;
        bVar3 = false;
      }
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_31 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100cfd14b;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_100cfd14b:
      bVar4 = true;
      if (!bVar3) goto LAB_100cfd160;
    }
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_31 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfd192;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100cfd192:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100cfd1c9;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100cfd1c9:
    if (bVar4) {
      return 0x8117002;
    }
    uVar11 = uVar11 + 1;
    lVar12 = lVar12 + 0x28;
    if (3 < (long)uVar11) {
      return 0x8000000;
    }
  } while( true );
}

