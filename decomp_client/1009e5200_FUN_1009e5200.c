
void FUN_1009e5200(long *param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  QFileInfo local_e8 [8];
  QArrayData *local_e0;
  QString local_d8;
  int *local_d0;
  int *local_c8;
  int *local_c0;
  uint local_b8;
  undefined1 local_b0 [8];
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QFileInfo local_80 [8];
  QArrayData *local_78;
  QFileInfo local_70 [8];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  int *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_50 = (int *)PTR_shared_null_1021e15e8;
  FUN_100d8a600(&local_58);
  local_60 = (QArrayData *)QString::fromAscii_helper("-system",7);
  FUN_100a05740(param_1,&local_58,&local_60,2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e5285;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1009e5285:
  cVar3 = FUN_100d80670();
  if (cVar3 == '\0') {
    QString::fromUtf8_helper((char *)&local_48,0x1e3a078);
    QString::operator=(&local_58,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e52e4;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1009e52e4:
    iVar4 = FUN_100d7e9e0();
    pcVar1 = *(code **)(*param_1 + 0x60);
    QFileInfo::QFileInfo(local_70,&local_58);
    QFileInfo::fileName();
    (*pcVar1)(param_1,&local_58,&local_68,(iVar4 == 6) * '\x03' + '\x02');
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e5355;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1009e5355:
    QFileInfo::~QFileInfo(local_70);
    QString::fromUtf8_helper((char *)&local_40,0x1e3a08c);
    QString::operator=(&local_58,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e53b0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1009e53b0:
    pcVar1 = *(code **)(*param_1 + 0x68);
    QFileInfo::QFileInfo(local_80,&local_58);
    QFileInfo::fileName();
    (*pcVar1)(param_1,&local_58,&local_78);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e540e;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1009e540e:
    QFileInfo::~QFileInfo(local_80);
    local_90 = (QArrayData *)QString::fromAscii_helper("/Library/Logs/",0xe);
    FUN_100a03b60(&local_88,&local_90);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e5475;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1009e5475:
    if (*(int *)(local_88 + 4) != 0) {
      pcVar1 = *(code **)(*param_1 + 0x68);
      local_98 = (QArrayData *)QString::fromAscii_helper("panic.log",9);
      (*pcVar1)(param_1,&local_88,&local_98);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009e54e4;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
LAB_1009e54e4:
    FUN_100dc5520(&local_a0);
    if (*(int *)(local_a0 + 4) != 0) {
      local_a8 = (QArrayData *)QString::fromAscii_helper("dmesg.log",9);
      FUN_1009e39c0(param_1,&local_a0,&local_a8);
      if (*(int *)local_a8 != -1) {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_31 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009e5561;
        }
        QArrayData::deallocate(local_a8,2,8);
      }
    }
LAB_1009e5561:
    FUN_100d8f110(local_b0);
    FUN_1001d3590(&local_50,local_b0);
    FUN_100039a80(local_b0);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e55bf;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_1009e55bf:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1009e55ef;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_1009e55ef:
  local_d0 = local_50;
  if (*local_50 != -1) {
    if (*local_50 == 0) {
      QListData::detach((int)&local_d0);
      iVar4 = local_d0[2];
      if (iVar4 != local_d0[3]) {
        piVar7 = local_50 + (long)local_50[2] * 2 + 4;
        piVar8 = local_d0 + (long)iVar4 * 2 + 4;
        lVar6 = (long)local_d0[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = *(int **)piVar7;
          *(int **)piVar8 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar8 = piVar8 + 2;
          piVar7 = piVar7 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_50 = *local_50 + 1;
      local_31 = *local_50 != 0;
      UNLOCK();
    }
  }
  local_c8 = local_d0 + (long)local_d0[2] * 2 + 4;
  local_c0 = local_d0 + (long)local_d0[3] * 2 + 4;
  local_b8 = 1;
  if (local_d0[2] != local_d0[3]) {
    do {
      local_d8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_c8;
      if (1 < *(int *)local_d8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
      }
      if (local_b8 != 0) {
        if (*(int *)(local_d8.field0_0x0 + 4) != 0) {
          pcVar1 = *(code **)(*param_1 + 0x68);
          QFileInfo::QFileInfo(local_e8,&local_d8);
          QFileInfo::fileName();
          (*pcVar1)(param_1,&local_d8,&local_e0);
          if (*(int *)local_e0 != -1) {
            if (*(int *)local_e0 != 0) {
              LOCK();
              *(int *)local_e0 = *(int *)local_e0 + -1;
              local_31 = *(int *)local_e0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1009e5770;
            }
            QArrayData::deallocate(local_e0,2,8);
          }
LAB_1009e5770:
          QFileInfo::~QFileInfo(local_e8);
        }
        local_b8 = 0;
      }
      if (*(int *)local_d8.field0_0x0 != -1) {
        if (*(int *)local_d8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
          local_31 = *(int *)local_d8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1009e57b8;
        }
        QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
      }
LAB_1009e57b8:
      local_c8 = local_c8 + 2;
      uVar5 = local_b8 ^ 1;
      bVar9 = local_b8 != 1;
      local_b8 = uVar5;
    } while ((bVar9) && (local_c8 != local_c0));
  }
  FUN_100039a80(&local_d0);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009e5829;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1009e5829:
  FUN_100039a80(&local_50);
  return;
}

