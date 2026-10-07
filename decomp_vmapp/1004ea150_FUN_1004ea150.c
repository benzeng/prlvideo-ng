
/* WARNING: Removing unreachable block (ram,0x0001004ea4e0) */
/* WARNING: Removing unreachable block (ram,0x0001004ea4ef) */

undefined4 FUN_1004ea150(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint *puVar5;
  char cVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 local_9c;
  QArrayData *local_98;
  long *local_90;
  QFile local_88 [16];
  QString local_78;
  long *local_70;
  QArrayData *local_68;
  QString local_60;
  QString local_58;
  long *local_50;
  long *local_48;
  undefined4 local_3c;
  QString local_38;
  undefined1 local_29;
  
  local_3c = 0xf0000022;
  local_48 = (long *)0x0;
  uVar2 = *(uint *)(param_2 + 1);
  uVar8 = 0;
  if ((uVar2 & 2) != 0) {
    uVar8 = (uVar2 & 1) + 1;
  }
  uVar9 = (uVar2 & 8) << 7 | uVar2 * 2 & 8 | uVar8;
  uVar8 = uVar9 | 0x100000;
  if ((uVar2 & 0xf) != 0) {
    uVar8 = uVar9;
  }
  if ((uVar2 & 0x60) == 0) {
    FUN_1004e0410(&local_50,param_2,param_1,uVar8,0,&local_3c,*(undefined4 *)((long)param_2 + 0xc));
    if (local_50 == (long *)0x0) {
      local_48 = local_50;
      goto LAB_1004ea48a;
    }
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    local_48 = local_50;
    plVar12 = local_50;
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  else {
    QString::QString(&local_38,0x2f);
    QString::section(&local_58,param_2,&local_38,0,0xfffffffe,0);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_29 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004ea20b;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1004ea20b:
    FUN_1004e6910(&local_68,param_2);
    QString::fromUtf8_helper((char *)&local_60,0xa02eac);
    QString::append(&local_60);
    QString::append(&local_58);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004ea279;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1004ea279:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004ea2a9;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1004ea2a9:
    FUN_1004e0410(&local_70,&local_58,param_1,uVar8,0,&local_3c,*(undefined4 *)((long)param_2 + 0xc)
                 );
    if (local_70 == (long *)0x0) {
      local_48 = local_70;
      local_78.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
      if (1 < *(int *)local_78.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + 1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
      }
      cVar6 = QString::endsWith(&local_78,0x2f,1);
      if (cVar6 == '\0') {
        QString::append(&local_78,0x2f);
      }
      QString::append(&local_78);
      QFile::QFile(local_88,&local_78);
      QFile::remove();
      QFile::~QFile(local_88);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004ea445;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      local_48 = local_70;
      if (local_70 != (long *)0x0) {
        LOCK();
        plVar12 = local_70 + 1;
        lVar3 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      FUN_1004e1cb0(local_70,param_2);
      *(byte *)(local_70 + 7) = *(byte *)(local_70 + 7) | 0x20;
      QFile::remove();
    }
LAB_1004ea445:
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004ea475;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_1004ea475:
    plVar12 = local_70;
    if (local_70 == (long *)0x0) {
LAB_1004ea48a:
      local_98 = (QArrayData *)*param_2;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_29 = *(int *)local_98 != 0;
        UNLOCK();
      }
      FUN_1004e25e0(&local_90,&local_98,param_1,*(undefined4 *)((long)param_2 + 0xc));
      if (local_90 != (long *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      local_48 = local_90;
      if (local_90 != (long *)0x0) {
        LOCK();
        plVar12 = local_90 + 1;
        lVar3 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      plVar12 = local_90;
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_29 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004ea555;
        }
        QArrayData::deallocate(local_98,2,8);
      }
    }
  }
LAB_1004ea555:
  uVar2 = *(uint *)((long)plVar12 + 0x3c);
  puVar7 = *(uint **)(param_1 + 0x40);
  puVar13 = (undefined8 *)(param_1 + 0x40);
  if (1 < *puVar7) {
    FUN_1004ebd10(puVar13);
    puVar7 = (uint *)*puVar13;
  }
  puVar5 = *(uint **)(puVar7 + 4);
  puVar10 = (uint *)0x0;
  if (*(uint **)(puVar7 + 4) != (uint *)0x0) {
    do {
      while (puVar11 = puVar5, uVar8 = puVar11[6], uVar2 <= uVar8) {
        puVar5 = *(uint **)(puVar11 + 2);
        puVar10 = puVar11;
        if (*(uint **)(puVar11 + 2) == (uint *)0x0) goto LAB_1004ea5c9;
      }
      puVar5 = *(uint **)(puVar11 + 4);
    } while (*(uint **)(puVar11 + 4) != (uint *)0x0);
    if (puVar10 != (uint *)0x0) {
      uVar8 = puVar10[6];
      puVar11 = puVar10;
LAB_1004ea5c9:
      if (uVar8 <= uVar2) goto LAB_1004ea5d5;
    }
  }
  puVar11 = puVar7 + 2;
LAB_1004ea5d5:
  if (1 < *puVar7) {
    FUN_1004ebd10(puVar13);
    puVar7 = (uint *)*puVar13;
  }
  if (puVar11 == puVar7 + 2) {
    local_9c = *(undefined4 *)((long)plVar12 + 0x3c);
    FUN_1004eb720(puVar13,&local_9c,&local_48);
  }
  else {
    local_3c = 0xf0000012;
  }
  uVar4 = local_3c;
  if (plVar12 != (long *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return uVar4;
}

