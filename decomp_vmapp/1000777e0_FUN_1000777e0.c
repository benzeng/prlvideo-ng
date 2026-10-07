
byte FUN_1000777e0(long param_1,undefined8 param_2,undefined4 param_3,QString param_4)

{
  uint uVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  void *pvVar4;
  long *plVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  Data *pDVar12;
  undefined8 *puVar13;
  uint *puVar14;
  CVmOpticalDisk *this;
  CVmHardDisk *this_00;
  CVmParallelPort *this_01;
  long lVar15;
  int iVar16;
  uint *puVar17;
  void **ppvVar18;
  long *plVar19;
  byte local_f1;
  QArrayData *local_d0;
  CVmParallelPort *local_c8;
  Data *local_c0;
  Data *local_b8;
  Data *local_b0;
  undefined4 local_a8;
  long *local_a0;
  QArrayData *local_98;
  CVmOpticalDisk *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  undefined4 local_70;
  QArrayData *local_68;
  CVmHardDisk *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  (**(code **)(*(long *)param_4.field0_0x0 + 0x68))(param_4.field0_0x0);
  CVmEventBase::setEventType(param_4.field0_0x0,0x186b5);
  pQVar2 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  CVmEventBase::setEventIssuerId(param_4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007787b;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_10007787b:
  pQVar2 = *(QArrayData **)(*(long *)(param_1 + 0x10) + 0x18);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_31 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  CVmEventBase::setInitRequestId(param_4);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000778e0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1000778e0:
  CVmEventBase::setEventIssuerType(param_4.field0_0x0,0);
  CVmConfiguration::getVmSettings();
  lVar10 = CVmSettings::getVmStartupOptions();
  uVar3 = *(undefined8 *)(lVar10 + 0x100);
  CVmConfiguration::getVmSettings();
  lVar10 = CVmSettings::getVmStartupOptions();
  FUN_100080750(uVar3,*(undefined8 *)(lVar10 + 0x100));
  lVar10 = CVmConfiguration::getVmHardwareList();
  lVar11 = CVmConfiguration::getVmHardwareList();
  local_f1 = 1;
  switch(param_3) {
  case 3:
    local_f1 = 1;
    if (*(int *)(*(long *)(lVar11 + 0x1a0) + 8) < *(int *)(*(long *)(lVar11 + 0x1a0) + 0xc)) {
      plVar19 = (long *)(lVar11 + 0x1a0);
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_100081fb0(lVar10 + 0x1a0,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xb0);
        puVar13 = (undefined8 *)FUN_100081fb0(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_100081fb0(lVar10 + 0x1a0,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_100081fb0(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
    break;
  case 5:
    ppvVar18 = (void **)(lVar10 + 0x1a8);
    puVar14 = *(uint **)(lVar10 + 0x1a8);
    iVar16 = (int)ppvVar18;
    if (1 < *puVar14) {
      uVar1 = puVar14[2];
      pDVar12 = (Data *)QListData::detach(iVar16);
      pvVar4 = *ppvVar18;
      lVar10 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar14 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
         (lVar15 = *(int *)((long)pvVar4 + 0xc) - lVar10,
         lVar15 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar14 + (long)(int)uVar1 * 2 + 4,
                lVar15 * 8);
      }
      if (*(int *)pDVar12 != -1) {
        if (*(int *)pDVar12 != 0) {
          LOCK();
          *(int *)pDVar12 = *(int *)pDVar12 + -1;
          local_31 = *(int *)pDVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100077e55;
        }
        QListData::dispose(pDVar12);
      }
    }
LAB_100077e55:
    plVar19 = (long *)(lVar11 + 0x1a8);
    puVar17 = *ppvVar18;
    puVar14 = puVar17 + (long)(int)puVar17[2] * 2 + 4;
LAB_100077e88:
    if (1 < *puVar17) {
      uVar1 = puVar17[2];
      pDVar12 = (Data *)QListData::detach(iVar16);
      pvVar4 = *ppvVar18;
      lVar10 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar17 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
         (lVar11 = *(int *)((long)pvVar4 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar17 + (long)(int)uVar1 * 2 + 4,
                lVar11 * 8);
      }
      if (*(int *)pDVar12 != -1) {
        if (*(int *)pDVar12 != 0) {
          LOCK();
          *(int *)pDVar12 = *(int *)pDVar12 + -1;
          local_31 = *(int *)pDVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100077f00;
        }
        QListData::dispose(pDVar12);
      }
    }
LAB_100077f00:
    if (puVar14 != (uint *)((long)*ppvVar18 + (long)*(int *)((long)*ppvVar18 + 0xc) * 8 + 0x10)) {
      lVar10 = FUN_100081950(*(undefined8 *)puVar14,plVar19);
      if (lVar10 == 0) {
        if (*(long **)puVar14 != (long *)0x0) {
          (**(code **)(**(long **)puVar14 + 0x20))();
        }
        puVar14 = *ppvVar18;
        if (1 < *puVar14) {
          uVar1 = puVar14[2];
          pDVar12 = (Data *)QListData::detach(iVar16);
          pvVar4 = *ppvVar18;
          lVar10 = (long)*(int *)((long)pvVar4 + 8);
          if ((puVar14 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
             (lVar11 = *(int *)((long)pvVar4 + 0xc) - lVar10,
             lVar11 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
            _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar14 + (long)(int)uVar1 * 2 + 4,
                    lVar11 * 8);
          }
          if (*(int *)pDVar12 != -1) {
            if (*(int *)pDVar12 != 0) {
              LOCK();
              *(int *)pDVar12 = *(int *)pDVar12 + -1;
              local_31 = *(int *)pDVar12 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100077fd1;
            }
            QListData::dispose(pDVar12);
          }
        }
LAB_100077fd1:
        puVar14 = (uint *)QListData::erase(ppvVar18);
        puVar17 = *ppvVar18;
      }
      else {
        puVar14 = puVar14 + 2;
        puVar17 = *ppvVar18;
      }
      goto LAB_100077e88;
    }
    local_88 = (Data *)*plVar19;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 == 0) {
        QListData::detach((int)&local_88);
        lVar11 = (long)*(int *)(local_88 + 8);
        lVar10 = *plVar19;
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_88 + lVar11 * 8) &&
           (lVar15 = *(int *)(local_88 + 0xc) - lVar11,
           lVar15 != 0 && lVar11 <= *(int *)(local_88 + 0xc))) {
          _memcpy(local_88 + lVar11 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar15 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + 1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
      }
    }
    local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
    local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
    if (*(int *)(local_88 + 8) != *(int *)(local_88 + 0xc)) {
      do {
        local_70 = 1;
        uVar3 = *(undefined8 *)local_80;
        lVar10 = FUN_100081950(uVar3,ppvVar18);
        if (lVar10 == 0) {
          this = operator_new(0xf0);
          CVmOpticalDisk::CVmOpticalDisk(this);
          local_90 = this;
          CBaseNode::toString(SUB81((QTypedArrayData<unsigned_short> *)&local_98,0),
                              (bool)((char)uVar3 + '\x10'));
          CBaseNode::fromString
                    ((CBaseNode *)(this + 0x10),(QTypedArrayData<unsigned_short> *)&local_98,false,
                     (QString *)0x0,(int *)0x0,(int *)0x0);
          if (*(int *)local_98 != -1) {
            if (*(int *)local_98 != 0) {
              LOCK();
              *(int *)local_98 = *(int *)local_98 + -1;
              local_31 = *(int *)local_98 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000785b5;
            }
            QArrayData::deallocate(local_98,2,8);
          }
LAB_1000785b5:
          iVar16 = CVmDevice::getConnected();
          if (iVar16 == 1) {
            CVmDevice::setConnected((uint)this);
          }
          FUN_100081a60(ppvVar18,&local_90);
        }
        local_80 = local_80 + 8;
      } while (local_80 != local_78);
    }
    local_70 = 1;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007861d;
      }
      QListData::dispose(local_88);
    }
LAB_10007861d:
    FUN_100081ac0(ppvVar18);
    FUN_100081ac0(plVar19);
    local_f1 = 1;
    if (*(int *)(*plVar19 + 8) < *(int *)(*plVar19 + 0xc)) {
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_100081f00(ppvVar18,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xb8);
        puVar13 = (undefined8 *)FUN_100081f00(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_100081f00(ppvVar18,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_100081f00(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
    break;
  case 6:
    ppvVar18 = (void **)(lVar10 + 0x1b0);
    puVar14 = *(uint **)(lVar10 + 0x1b0);
    iVar16 = (int)ppvVar18;
    if (1 < *puVar14) {
      uVar1 = puVar14[2];
      pDVar12 = (Data *)QListData::detach(iVar16);
      pvVar4 = *ppvVar18;
      lVar10 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar14 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
         (lVar15 = *(int *)((long)pvVar4 + 0xc) - lVar10,
         lVar15 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar14 + (long)(int)uVar1 * 2 + 4,
                lVar15 * 8);
      }
      if (*(int *)pDVar12 != -1) {
        if (*(int *)pDVar12 != 0) {
          LOCK();
          *(int *)pDVar12 = *(int *)pDVar12 + -1;
          local_31 = *(int *)pDVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100078064;
        }
        QListData::dispose(pDVar12);
      }
    }
LAB_100078064:
    plVar19 = (long *)(lVar11 + 0x1b0);
    puVar17 = *ppvVar18;
    puVar14 = puVar17 + (long)(int)puVar17[2] * 2 + 4;
LAB_100078098:
    if (1 < *puVar17) {
      uVar1 = puVar17[2];
      pDVar12 = (Data *)QListData::detach(iVar16);
      pvVar4 = *ppvVar18;
      lVar10 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar17 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
         (lVar11 = *(int *)((long)pvVar4 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar17 + (long)(int)uVar1 * 2 + 4,
                lVar11 * 8);
      }
      if (*(int *)pDVar12 != -1) {
        if (*(int *)pDVar12 != 0) {
          LOCK();
          *(int *)pDVar12 = *(int *)pDVar12 + -1;
          local_31 = *(int *)pDVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100078110;
        }
        QListData::dispose(pDVar12);
      }
    }
LAB_100078110:
    if (puVar14 != (uint *)((long)*ppvVar18 + (long)*(int *)((long)*ppvVar18 + 0xc) * 8 + 0x10)) {
      lVar10 = FUN_100082060(*(undefined8 *)puVar14,plVar19);
      if (lVar10 == 0) {
        if (*(long **)puVar14 != (long *)0x0) {
          (**(code **)(**(long **)puVar14 + 0x20))();
        }
        puVar14 = *ppvVar18;
        if (1 < *puVar14) {
          uVar1 = puVar14[2];
          pDVar12 = (Data *)QListData::detach(iVar16);
          pvVar4 = *ppvVar18;
          lVar10 = (long)*(int *)((long)pvVar4 + 8);
          if ((puVar14 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
             (lVar11 = *(int *)((long)pvVar4 + 0xc) - lVar10,
             lVar11 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
            _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar14 + (long)(int)uVar1 * 2 + 4,
                    lVar11 * 8);
          }
          if (*(int *)pDVar12 != -1) {
            if (*(int *)pDVar12 != 0) {
              LOCK();
              *(int *)pDVar12 = *(int *)pDVar12 + -1;
              local_31 = *(int *)pDVar12 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000781e1;
            }
            QListData::dispose(pDVar12);
          }
        }
LAB_1000781e1:
        puVar14 = (uint *)QListData::erase(ppvVar18);
        puVar17 = *ppvVar18;
      }
      else {
        puVar14 = puVar14 + 2;
        puVar17 = *ppvVar18;
      }
      goto LAB_100078098;
    }
    local_58 = (Data *)*plVar19;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 == 0) {
        QListData::detach((int)&local_58);
        lVar11 = (long)*(int *)(local_58 + 8);
        lVar10 = *plVar19;
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_58 + lVar11 * 8) &&
           (lVar15 = *(int *)(local_58 + 0xc) - lVar11,
           lVar15 != 0 && lVar11 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar11 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar15 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
      do {
        local_40 = 1;
        uVar3 = *(undefined8 *)local_50;
        lVar10 = FUN_100082060(uVar3,ppvVar18);
        if (lVar10 == 0) {
          this_00 = operator_new(0x158);
          CVmHardDisk::CVmHardDisk(this_00);
          local_60 = this_00;
          CBaseNode::toString(SUB81((QTypedArrayData<unsigned_short> *)&local_68,0),
                              (bool)((char)uVar3 + '\x10'));
          CBaseNode::fromString
                    ((CBaseNode *)(this_00 + 0x10),(QTypedArrayData<unsigned_short> *)&local_68,
                     false,(QString *)0x0,(int *)0x0,(int *)0x0);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10007879c;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_10007879c:
          iVar16 = CVmDevice::getConnected();
          if (iVar16 == 1) {
            CVmDevice::setConnected((uint)this_00);
          }
          FUN_100082170(ppvVar18,&local_60);
        }
        local_50 = local_50 + 8;
      } while (local_50 != local_48);
    }
    local_40 = 1;
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100078804;
      }
      QListData::dispose(local_58);
    }
LAB_100078804:
    FUN_1000821d0(ppvVar18);
    FUN_1000821d0(plVar19);
    local_f1 = 1;
    if (*(int *)(*plVar19 + 8) < *(int *)(*plVar19 + 0xc)) {
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_100082610(ppvVar18,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xb8);
        puVar13 = (undefined8 *)FUN_100082610(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_100082610(ppvVar18,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_100082610(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
    break;
  case 8:
    local_f1 = 1;
    if (*(int *)(*(long *)(lVar11 + 0x1d0) + 8) < *(int *)(*(long *)(lVar11 + 0x1d0) + 0xc)) {
      plVar19 = (long *)(lVar11 + 0x1d0);
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_100081190(lVar10 + 0x1d0,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xa8);
        puVar13 = (undefined8 *)FUN_100081190(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_100081190(lVar10 + 0x1d0,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_100081190(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
    break;
  case 10:
    local_f1 = 1;
    if (*(int *)(*(long *)(lVar11 + 0x1b8) + 8) < *(int *)(*(long *)(lVar11 + 0x1b8) + 0xc)) {
      plVar19 = (long *)(lVar11 + 0x1b8);
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_1000818a0(lVar10 + 0x1b8,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xb0);
        puVar13 = (undefined8 *)FUN_1000818a0(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_1000818a0(lVar10 + 0x1b8,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_1000818a0(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
    break;
  case 0xb:
    ppvVar18 = (void **)(lVar10 + 0x1c8);
    puVar14 = *(uint **)(lVar10 + 0x1c8);
    iVar16 = (int)ppvVar18;
    if (1 < *puVar14) {
      uVar1 = puVar14[2];
      pDVar12 = (Data *)QListData::detach(iVar16);
      pvVar4 = *ppvVar18;
      lVar10 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar14 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
         (lVar15 = *(int *)((long)pvVar4 + 0xc) - lVar10,
         lVar15 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar14 + (long)(int)uVar1 * 2 + 4,
                lVar15 * 8);
      }
      if (*(int *)pDVar12 != -1) {
        if (*(int *)pDVar12 != 0) {
          LOCK();
          *(int *)pDVar12 = *(int *)pDVar12 + -1;
          local_31 = *(int *)pDVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100078274;
        }
        QListData::dispose(pDVar12);
      }
    }
LAB_100078274:
    plVar19 = (long *)(lVar11 + 0x1c8);
    puVar17 = *ppvVar18;
    puVar14 = puVar17 + (long)(int)puVar17[2] * 2 + 4;
LAB_1000782a8:
    if (1 < *puVar17) {
      uVar1 = puVar17[2];
      pDVar12 = (Data *)QListData::detach(iVar16);
      pvVar4 = *ppvVar18;
      lVar10 = (long)*(int *)((long)pvVar4 + 8);
      if ((puVar17 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
         (lVar11 = *(int *)((long)pvVar4 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
        _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar17 + (long)(int)uVar1 * 2 + 4,
                lVar11 * 8);
      }
      if (*(int *)pDVar12 != -1) {
        if (*(int *)pDVar12 != 0) {
          LOCK();
          *(int *)pDVar12 = *(int *)pDVar12 + -1;
          local_31 = *(int *)pDVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100078320;
        }
        QListData::dispose(pDVar12);
      }
    }
LAB_100078320:
    if (puVar14 != (uint *)((long)*ppvVar18 + (long)*(int *)((long)*ppvVar18 + 0xc) * 8 + 0x10)) {
      lVar10 = FUN_100081240(*(undefined8 *)puVar14,plVar19);
      if (lVar10 == 0) {
        uVar3 = *(undefined8 *)puVar14;
        iVar9 = CVmParallelPort::getPrinterInterfaceType();
        if (iVar9 == 1) {
          FUN_100258f10(&local_a0,uVar3);
          FUN_10025ab50(*(undefined8 *)(local_a0[2] + 8));
          if (local_a0 != (long *)0x0) {
            LOCK();
            plVar5 = local_a0 + 1;
            lVar10 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)(*local_a0 + 0x10))();
            }
          }
        }
        if (*(long **)puVar14 != (long *)0x0) {
          (**(code **)(**(long **)puVar14 + 0x20))();
        }
        puVar14 = *ppvVar18;
        if (1 < *puVar14) {
          uVar1 = puVar14[2];
          pDVar12 = (Data *)QListData::detach(iVar16);
          pvVar4 = *ppvVar18;
          lVar10 = (long)*(int *)((long)pvVar4 + 8);
          if ((puVar14 + (long)(int)uVar1 * 2 != (uint *)((long)pvVar4 + lVar10 * 8)) &&
             (lVar11 = *(int *)((long)pvVar4 + 0xc) - lVar10,
             lVar11 != 0 && lVar10 <= *(int *)((long)pvVar4 + 0xc))) {
            _memcpy((void *)((long)pvVar4 + lVar10 * 8 + 0x10),puVar14 + (long)(int)uVar1 * 2 + 4,
                    lVar11 * 8);
          }
          if (*(int *)pDVar12 != -1) {
            if (*(int *)pDVar12 != 0) {
              LOCK();
              *(int *)pDVar12 = *(int *)pDVar12 + -1;
              local_31 = *(int *)pDVar12 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10007844a;
            }
            QListData::dispose(pDVar12);
          }
        }
LAB_10007844a:
        puVar14 = (uint *)QListData::erase(ppvVar18);
        puVar17 = *ppvVar18;
      }
      else {
        puVar14 = puVar14 + 2;
        puVar17 = *ppvVar18;
      }
      goto LAB_1000782a8;
    }
    local_c0 = (Data *)*plVar19;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 == 0) {
        QListData::detach((int)&local_c0);
        lVar11 = (long)*(int *)(local_c0 + 8);
        lVar10 = *plVar19;
        if (((Data *)(lVar10 + (long)*(int *)(lVar10 + 8) * 8) != local_c0 + lVar11 * 8) &&
           (lVar15 = *(int *)(local_c0 + 0xc) - lVar11,
           lVar15 != 0 && lVar11 <= *(int *)(local_c0 + 0xc))) {
          _memcpy(local_c0 + lVar11 * 8 + 0x10,
                  (void *)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8),lVar15 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
      }
    }
    local_b8 = local_c0 + (long)*(int *)(local_c0 + 8) * 8 + 0x10;
    local_b0 = local_c0 + (long)*(int *)(local_c0 + 0xc) * 8 + 0x10;
    if (*(int *)(local_c0 + 8) != *(int *)(local_c0 + 0xc)) {
      do {
        local_a8 = 1;
        uVar3 = *(undefined8 *)local_b8;
        lVar10 = FUN_100081240(uVar3,ppvVar18);
        if (lVar10 == 0) {
          this_01 = operator_new(0xf8);
          CVmParallelPort::CVmParallelPort(this_01);
          local_c8 = this_01;
          CBaseNode::toString(SUB81((QTypedArrayData<unsigned_short> *)&local_d0,0),
                              (bool)((char)uVar3 + '\x10'));
          CBaseNode::fromString
                    ((CBaseNode *)(this_01 + 0x10),(QTypedArrayData<unsigned_short> *)&local_d0,
                     false,(QString *)0x0,(int *)0x0,(int *)0x0);
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000789a5;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
LAB_1000789a5:
          iVar16 = CVmDevice::getConnected();
          if (iVar16 == 1) {
            CVmDevice::setConnected((uint)this_01);
          }
          FUN_100081350(ppvVar18,&local_c8);
        }
        local_b8 = local_b8 + 8;
      } while (local_b8 != local_b0);
    }
    local_a8 = 1;
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100078a1f;
      }
      QListData::dispose(local_c0);
    }
LAB_100078a1f:
    FUN_1000813b0(ppvVar18);
    FUN_1000813b0(plVar19);
    local_f1 = 1;
    if (*(int *)(*plVar19 + 8) < *(int *)(*plVar19 + 0xc)) {
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_1000817f0(ppvVar18,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xb0);
        puVar13 = (undefined8 *)FUN_1000817f0(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_1000817f0(ppvVar18,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_1000817f0(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
    break;
  case 0xc:
  case 0xd:
    local_f1 = 1;
    if (*(int *)(*(long *)(lVar11 + 0x1d8) + 8) < *(int *)(*(long *)(lVar11 + 0x1d8) + 0xc)) {
      plVar19 = (long *)(lVar11 + 0x1d8);
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_1000810e0(lVar10 + 0x1d8,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xa0);
        puVar13 = (undefined8 *)FUN_1000810e0(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_1000810e0(lVar10 + 0x1d8,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_1000810e0(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
    break;
  case 0xf:
    local_f1 = 1;
    if (*(int *)(*(long *)(lVar11 + 0x1e0) + 8) < *(int *)(*(long *)(lVar11 + 0x1e0) + 0xc)) {
      plVar19 = (long *)(lVar11 + 0x1e0);
      iVar16 = 0;
      do {
        puVar13 = (undefined8 *)FUN_100081030(lVar10 + 0x1e0,iVar16);
        plVar5 = (long *)*puVar13;
        pcVar6 = *(code **)(*plVar5 + 0xa0);
        puVar13 = (undefined8 *)FUN_100081030(plVar19,iVar16);
        cVar7 = (*pcVar6)(plVar5,*puVar13);
        if (cVar7 == '\0') {
          puVar13 = (undefined8 *)FUN_100081030(lVar10 + 0x1e0,iVar16);
          uVar3 = *puVar13;
          puVar13 = (undefined8 *)FUN_100081030(plVar19,iVar16);
          bVar8 = FUN_10007bf60(uVar3,*puVar13,param_4.field0_0x0);
          local_f1 = local_f1 & bVar8;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < *(int *)(*plVar19 + 0xc) - *(int *)(*plVar19 + 8));
    }
  }
  return local_f1;
}

