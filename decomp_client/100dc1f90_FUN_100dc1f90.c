
undefined8 * FUN_100dc1f90(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  int *piVar5;
  undefined8 in_R9;
  long *plVar6;
  undefined **ppuVar7;
  QArrayData *local_e8;
  long local_e0 [2];
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  int *local_88;
  long *local_80;
  long *local_78;
  undefined4 local_70;
  undefined *local_68;
  int *local_60;
  QString local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100dc0780(&local_60);
  local_68 = PTR_shared_null_1021e15e8;
  local_88 = local_60;
  if (*local_60 != -1) {
    if (*local_60 == 0) {
      QListData::detach((int)&local_88);
      iVar1 = local_88[2];
      if (iVar1 != local_88[3]) {
        local_60 = local_60 + (long)local_60[2] * 2 + 4;
        piVar5 = local_88 + (long)iVar1 * 2 + 4;
        lVar4 = (long)local_88[3] * 8 + (long)iVar1 * -8;
        do {
          piVar2 = *(int **)local_60;
          *(int **)piVar5 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_49 = *piVar2 != 0;
            UNLOCK();
          }
          piVar5 = piVar5 + 2;
          local_60 = local_60 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
    }
    else {
      LOCK();
      *local_60 = *local_60 + 1;
      local_49 = *local_60 != 0;
      UNLOCK();
    }
  }
  plVar6 = (long *)(local_88 + (long)local_88[2] * 2 + 4);
  local_78 = (long *)(local_88 + (long)local_88[3] * 2 + 4);
  local_80 = plVar6;
  if (local_88[2] != local_88[3]) {
    do {
      local_70 = 1;
      local_80 = plVar6;
      if (*(int *)(*plVar6 + 4) != 0) {
        local_98 = (QArrayData *)QString::fromAscii_helper("sample %1 1 10",0xe);
        QString::arg(&local_90,&local_98,plVar6,0,0x20);
        FUN_1000341d0(&local_68,&local_90);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_49 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100dc2129;
          }
          QArrayData::deallocate(local_90,2,8);
        }
LAB_100dc2129:
        if (*(int *)local_98 != -1) {
          if (*(int *)local_98 != 0) {
            LOCK();
            *(int *)local_98 = *(int *)local_98 + -1;
            local_49 = *(int *)local_98 != 0;
            UNLOCK();
            if ((bool)local_49) goto LAB_100dc215f;
          }
          QArrayData::deallocate(local_98,2,8);
        }
      }
LAB_100dc215f:
      plVar6 = local_80 + 1;
      local_80 = plVar6;
    } while (plVar6 != local_78);
  }
  local_70 = 1;
  FUN_100039a80(&local_88);
  ppuVar7 = &local_68;
  FUN_100dc0360(&local_a0);
  if (*(int *)(local_a0 + 4) != 0) {
    local_c0 = (QArrayData *)QString::fromAscii_helper("%1/sample.%2-%3.txt",0x13);
    QDir::tempPath();
    QString::arg(&local_b8,&local_c0,&local_c8,0,0x20,in_R9,ppuVar7);
    QString::arg(&local_b0,&local_b8,param_2,0,0x20);
    FUN_100dda3c0(local_48);
    FUN_100dda260(&local_d0,local_48);
    QString::arg(&local_a8,&local_b0,&local_d0,0,0x20);
    QString::operator=(&local_58,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_49 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc2296;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_100dc2296:
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_49 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc22cc;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100dc22cc:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_49 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc2302;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100dc2302:
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_49 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc2338;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_100dc2338:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_49 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc236e;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_100dc236e:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_49 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100dc23a4;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_100dc23a4:
    QFile::QFile((QFile *)local_e0,&local_58);
    cVar3 = QFile::open(local_e0,0x1a);
    if (cVar3 != '\0') {
      QString::toUtf8();
      QIODevice::write((char *)local_e0);
      if (*(int *)local_e8 != -1) {
        if (*(int *)local_e8 != 0) {
          LOCK();
          *(int *)local_e8 = *(int *)local_e8 + -1;
          local_49 = *(int *)local_e8 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100dc2429;
        }
        QArrayData::deallocate(local_e8,1,8);
      }
LAB_100dc2429:
      (**(code **)(local_e0[0] + 0x70))(local_e0);
    }
    QFile::~QFile((QFile *)local_e0);
  }
  if ((*(int *)(local_58.field0_0x0 + 4) == 0) || (cVar3 = QFile::exists(&local_58), cVar3 == '\0'))
  {
    *param_1 = PTR_shared_null_1021e1288;
  }
  else {
    *param_1 = local_58.field0_0x0;
    if (1 < *(int *)local_58.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
    }
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_49 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100dc24bc;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100dc24bc:
  FUN_100039a80(&local_68);
  FUN_100039a80(&local_60);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_49 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100dc24fe;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100dc24fe:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

