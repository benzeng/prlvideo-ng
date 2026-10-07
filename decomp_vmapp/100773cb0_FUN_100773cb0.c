
undefined8 FUN_100773cb0(undefined8 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uid_t uVar4;
  QArrayData *pQVar5;
  long lVar6;
  int *piVar7;
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
  QDir local_a8 [8];
  QArrayData *local_a0;
  QString local_98;
  QString local_90;
  QDir local_88 [8];
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined *local_48;
  undefined *local_40;
  char local_32;
  undefined1 local_31;
  
  local_40 = PTR_shared_null_100ba2188;
  local_48 = PTR_shared_null_100ba2188;
  pQVar5 = (QArrayData *)QString::fromAscii_helper("/Library/LaunchDaemons",0x16);
  local_50 = pQVar5;
  FUN_10000c490(&local_48,&local_50);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100773d29;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100773d29:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("/Library/LaunchAgents",0x15);
  local_58 = pQVar5;
  FUN_10000c490(&local_48,&local_58);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100773d79;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_100773d79:
  local_32 = '\0';
  iVar3 = FUN_1008e49a0(&local_32);
  if ((iVar3 != 0) || (local_32 == '\0')) {
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/Users",6);
    QDir::QDir(local_88,&local_90);
    QDir::entryList(&local_80,local_88,0x6001,0xffffffff);
    local_78 = local_80;
    if (*local_80 != -1) {
      if (*local_80 == 0) {
        QListData::detach((int)&local_78);
        iVar3 = local_78[2];
        if (iVar3 != local_78[3]) {
          local_80 = local_80 + (long)local_80[2] * 2 + 4;
          piVar7 = local_78 + (long)iVar3 * 2 + 4;
          lVar6 = (long)local_78[3] * 8 + (long)iVar3 * -8;
          do {
            piVar1 = *(int **)local_80;
            *(int **)piVar7 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar7 = piVar7 + 2;
            local_80 = local_80 + 2;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      else {
        LOCK();
        *local_80 = *local_80 + 1;
        local_31 = *local_80 != 0;
        UNLOCK();
      }
    }
    local_70 = local_78 + (long)local_78[2] * 2 + 4;
    local_68 = local_78 + (long)local_78[3] * 2 + 4;
    local_60 = 1;
    FUN_100013180(&local_80);
    QDir::~QDir(local_88);
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_31 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100773ebc;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_100773ebc:
    if ((local_60 != 0) && (local_70 != local_68)) {
      do {
        piVar7 = local_70;
        local_a0 = (QArrayData *)QString::fromAscii_helper("/Users/%1/Library/LaunchAgents",0x1e);
        QString::arg(&local_98,&local_a0,piVar7,0,0x20);
        if (*(int *)local_a0 != -1) {
          if (*(int *)local_a0 != 0) {
            LOCK();
            *(int *)local_a0 = *(int *)local_a0 + -1;
            local_31 = *(int *)local_a0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100773f64;
          }
          QArrayData::deallocate(local_a0,2,8);
        }
LAB_100773f64:
        QDir::QDir(local_a8,&local_98);
        cVar2 = QDir::exists();
        QDir::~QDir(local_a8);
        if (cVar2 != '\0') {
          FUN_10000c490(&local_48,&local_98);
        }
        if (*(int *)local_98.field0_0x0 != -1) {
          if (*(int *)local_98.field0_0x0 != 0) {
            LOCK();
            *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
            local_31 = *(int *)local_98.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100773fc7;
          }
          QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
        }
LAB_100773fc7:
        local_70 = local_70 + 2;
        local_60 = 1;
      } while (local_70 != local_68);
    }
    FUN_100013180(&local_78);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("launchctl list",0xe);
    local_b0 = pQVar5;
    FUN_10000c490(&local_40,&local_b0);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10077404a;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_10077404a:
  local_c0 = (QArrayData *)QString::fromAscii_helper("ls -laeTO -@ %1",0xf);
  pQVar5 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_c8,(QChar *)&local_48,
             (int)*(undefined8 *)(pQVar5 + 0x10) + (int)pQVar5);
  QString::arg(&local_b8,&local_c0,&local_c8,0,0x20);
  FUN_10000c490(&local_40,&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007740fb;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1007740fb:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100774131;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100774131:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10077415c;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10077415c:
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100774192;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100774192:
  local_d8 = (QArrayData *)
             QString::fromAscii_helper
                       ("find %1 -name com.parallels.* -type f -exec echo == {} == ; -exec cat {} ;"
                        ,0x4a);
  pQVar5 = (QArrayData *)QString::fromAscii_helper(" ",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_e0,(QChar *)&local_48,
             (int)*(undefined8 *)(pQVar5 + 0x10) + (int)pQVar5);
  QString::arg(&local_d0,&local_d8,&local_e0,0,0x20);
  FUN_10000c490(&local_40,&local_d0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100774243;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100774243:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100774279;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100774279:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007742a4;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1007742a4:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007742da;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_1007742da:
  if (*(int *)PTR_MacintoshVersion_100ba2170 < 0xc) {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("launchctl bstree -j",0x13);
    local_e8 = pQVar5;
    FUN_10000c490(&local_40,&local_e8);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10077445b;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
  else {
    pQVar5 = (QArrayData *)QString::fromAscii_helper("launchctl print system",0x16);
    local_f0 = pQVar5;
    FUN_10000c490(&local_40,&local_f0);
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10077439f;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_10077439f:
    local_100 = (QArrayData *)QString::fromAscii_helper("launchctl print user/%1",0x17);
    uVar4 = _geteuid();
    QString::arg(&local_f8,&local_100,uVar4,0,10,0x20);
    FUN_10000c490(&local_40,&local_f8);
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100774425;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_100774425:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10077445b;
      }
      QArrayData::deallocate(local_100,2,8);
    }
  }
LAB_10077445b:
  pQVar5 = (QArrayData *)QString::fromAscii_helper("launchctl limit",0xf);
  local_108 = pQVar5;
  FUN_10000c490(&local_40,&local_108);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007744b1;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1007744b1:
  FUN_10076fbf0(param_1,&local_40);
  FUN_100013180(&local_48);
  FUN_100013180(&local_40);
  return param_1;
}

