
undefined8 * FUN_1005e60e0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  QString *pQVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  QArrayData *local_78;
  QString local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  if ((DAT_1023122f0 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_1023122f0), iVar5 != 0)) {
    DAT_1023122e8 = (long *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_1002ffd10,&DAT_1023122e8,0x100000000);
    ___cxa_guard_release(&DAT_1023122f0);
  }
  if (*(int *)((long)DAT_1023122e8 + 0x14) == 0) {
    local_58 = (QArrayData *)QString::fromAscii_helper("win_7_homepremium",0x11);
    pQVar7 = (QString *)FUN_10002c250(&DAT_1023122e8,&local_58);
    QString::fromUtf8_helper((char *)&local_50,0x1e0579d);
    QString::operator=(pQVar7,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e61cf;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_1005e61cf:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e61ff;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_1005e61ff:
    local_60 = (QArrayData *)QString::fromAscii_helper("win_7_pro",9);
    pQVar7 = (QString *)FUN_10002c250(&DAT_1023122e8,&local_60);
    QString::fromUtf8_helper((char *)&local_48,0x1e057c6);
    QString::operator=(pQVar7,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e6278;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1005e6278:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e62a8;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1005e62a8:
    local_68 = (QArrayData *)QString::fromAscii_helper("win_7_ultimate",0xe);
    pQVar7 = (QString *)FUN_10002c250(&DAT_1023122e8,&local_68);
    QString::fromUtf8_helper((char *)&local_40,0x1e057ec);
    QString::operator=(pQVar7,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e6321;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1005e6321:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005e6351;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1005e6351:
  FUN_10073dd90(&local_70);
  plVar10 = DAT_1023122e8;
  uVar1 = *(uint *)(DAT_1023122e8 + 4);
  plVar13 = plVar10;
  if (uVar1 != 0) {
    uVar6 = qHash(&local_70,*(uint *)((long)DAT_1023122e8 + 0x24));
    uVar3 = (ulong)uVar6 % (ulong)uVar1;
    plVar11 = *(long **)(plVar10[1] + uVar3 * 8);
    if (plVar11 != plVar10) {
      plVar14 = (long *)(plVar10[1] + uVar3 * 8);
      do {
        plVar12 = plVar11;
        plVar13 = plVar10;
        if (*(uint *)(plVar11 + 1) == uVar6) {
          cVar4 = operator==(&local_70,(QString *)(plVar11 + 2));
          plVar10 = (long *)*plVar14;
          plVar12 = plVar10;
          plVar13 = DAT_1023122e8;
          if (cVar4 != '\0') break;
        }
        plVar10 = plVar13;
        plVar11 = (long *)*plVar12;
        plVar13 = plVar10;
        plVar14 = plVar12;
      } while (plVar11 != plVar10);
    }
  }
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005e6423;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1005e6423:
  if (plVar10 == plVar13) {
    uVar9 = QString::fromAscii_helper("",0);
    *param_1 = uVar9;
  }
  else {
    FUN_10073dd90(&local_78,param_2 + 0x10);
    puVar8 = (undefined8 *)FUN_10002c250(&DAT_1023122e8,&local_78);
    piVar2 = (int *)*puVar8;
    *param_1 = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_31 = *piVar2 != 0;
      UNLOCK();
    }
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if (*(int *)local_78 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
  return param_1;
}

