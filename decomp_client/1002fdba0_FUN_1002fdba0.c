
void FUN_1002fdba0(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  QString *pQVar7;
  long *plVar8;
  QString *pQVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  QArrayData *local_c0;
  QArrayData *local_b8;
  char local_a9;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QString local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if ((DAT_1023121f0 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_1023121f0), iVar5 != 0)) {
    DAT_1023121e8 = QString::fromAscii_helper("INIT_STATE:",0xb);
    ___cxa_atexit(FUN_100054e40,&DAT_1023121e8,0x100000000);
    ___cxa_guard_release(&DAT_1023121f0);
  }
  if ((DAT_102312200 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_102312200), iVar5 != 0)) {
    DAT_1023121f8 = QString::fromAscii_helper("INIT_PROGRESS:",0xe);
    ___cxa_atexit(FUN_100054e40,&DAT_1023121f8,0x100000000);
    ___cxa_guard_release(&DAT_102312200);
  }
  lVar2 = *param_2;
  pcVar11 = (char *)(*(long *)(lVar2 + 0x10) + lVar2);
  if ((pcVar11 != (char *)0x0) && (*(uint *)(lVar2 + 4) != 0)) {
    lVar10 = 0;
    do {
      if (pcVar11[lVar10] == '\0') break;
      lVar10 = lVar10 + 1;
    } while ((uint)lVar10 < *(uint *)(lVar2 + 4));
    if ((int)lVar10 == -1) {
      _strlen(pcVar11);
    }
  }
  QString::fromUtf8_helper((char *)&local_48,(int)pcVar11);
  QString::normalized(&local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fdd1f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002fdd1f:
  FUN_1002fc500(param_1,&local_40);
  iVar5 = QString::indexOf(&local_40,&DAT_1023121e8,0,0);
  if (iVar5 == -1) {
    iVar5 = QString::indexOf(&local_40,&DAT_1023121f8,0,0);
    if (iVar5 == -1) goto LAB_1002fe452;
    QString::right((int)&local_c0);
    QString::trimmed();
    iVar5 = QString::toInt((bool *)&local_b8,(int)&local_a9);
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fe327;
      }
      QArrayData::deallocate(local_b8,2,8);
    }
LAB_1002fe327:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fe35d;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1002fe35d:
    if (local_a9 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"Can\'t parse progress from [%s]",
                    *param_2 + *(long *)(*param_2 + 0x10));
    }
    else if (iVar5 + 1U < 0x66) {
      lVar2 = *(long *)(param_1 + 0x28);
      iVar15 = 0;
      if (iVar5 == -1) {
        if ((lVar2 != 0) && (iVar15 = 0, *(int *)(lVar2 + 4) != 0)) {
          iVar15 = (int)*(undefined8 *)(param_1 + 0x30);
        }
        CProgressDialog::setRange(iVar15,0);
        iVar5 = 0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          iVar5 = (int)*(undefined8 *)(param_1 + 0x30);
        }
        CProgressDialog::setValue(iVar5);
      }
      else {
        if ((lVar2 != 0) && (iVar15 = 0, *(int *)(lVar2 + 4) != 0)) {
          iVar15 = (int)*(undefined8 *)(param_1 + 0x30);
        }
        CProgressDialog::setRange(iVar15,0);
        iVar5 = 0;
        if ((*(long *)(param_1 + 0x28) != 0) &&
           (iVar5 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
          iVar5 = (int)*(undefined8 *)(param_1 + 0x30);
        }
        CProgressDialog::setValue(iVar5);
      }
    }
    else {
      FUN_100df99c0("","prl_client_app",0,"Progress=%i, must be from -1 to 100, output [%s]",iVar5,
                    *param_2 + *(long *)(*param_2 + 0x10));
    }
    goto LAB_1002fe452;
  }
  QString::right((int)&local_58);
  QString::trimmed();
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fdda5;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002fdda5:
  if ((DAT_102312210 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_102312210), iVar5 != 0)) {
    DAT_102312208 = (long *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_1002ffd10,&DAT_102312208,0x100000000);
    ___cxa_guard_release(&DAT_102312210);
  }
  if (*(int *)((long)DAT_102312208 + 0x14) == 0) {
    local_60 = (QArrayData *)QString::fromAscii_helper("STATE_INIT",10);
    pQVar7 = (QString *)FUN_10002c250(&DAT_102312208,&local_60);
    QMetaObject::tr((char *)&local_70,PTR_staticMetaObject_1021e1520,0x1de7226);
    FUN_1001c72b0(&local_78);
    QString::arg(&local_68,&local_70,&local_78,0,0x20);
    QString::operator=(pQVar7,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fdea9;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_1002fdea9:
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fded9;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_1002fded9:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fdf09;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1002fdf09:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fdf39;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1002fdf39:
    local_80 = (QArrayData *)QString::fromAscii_helper("STATE_UNINSTALL",0xf);
    pQVar7 = (QString *)FUN_10002c250(&DAT_102312208,&local_80);
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,0x1de726f);
    QString::operator=(pQVar7,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fdfbc;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1002fdfbc:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fdfec;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_1002fdfec:
    local_90 = (QArrayData *)QString::fromAscii_helper("STATE_COPY",10);
    pQVar7 = (QString *)FUN_10002c250(&DAT_102312208,&local_90);
    QMetaObject::tr((char *)&local_98,PTR_staticMetaObject_1021e1520,0x1de729b);
    QString::operator=(pQVar7,&local_98);
    if (*(int *)local_98.field0_0x0 != -1) {
      if (*(int *)local_98.field0_0x0 != 0) {
        LOCK();
        *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
        local_31 = *(int *)local_98.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fe081;
      }
      QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
    }
LAB_1002fe081:
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fe0b7;
      }
      QArrayData::deallocate(local_90,2,8);
    }
  }
LAB_1002fe0b7:
  plVar8 = DAT_102312208;
  uVar1 = *(uint *)(DAT_102312208 + 4);
  if (uVar1 == 0) {
LAB_1002fe1c6:
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Unknown state [%s], output [%s]",
                  local_a8 + *(long *)(local_a8 + 0x10),*param_2 + *(long *)(*param_2 + 0x10));
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fe246;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
  }
  else {
    uVar6 = qHash(&local_50,*(uint *)((long)DAT_102312208 + 0x24));
    uVar3 = (ulong)uVar6 % (ulong)uVar1;
    plVar13 = *(long **)(plVar8[1] + uVar3 * 8);
    if (plVar13 == plVar8) goto LAB_1002fe1c6;
    plVar16 = (long *)(plVar8[1] + uVar3 * 8);
    do {
      plVar12 = plVar8;
      plVar14 = plVar13;
      if (*(uint *)(plVar13 + 1) == uVar6) {
        cVar4 = operator==(&local_50,(QString *)(plVar13 + 2));
        plVar8 = (long *)*plVar16;
        plVar12 = DAT_102312208;
        plVar14 = plVar8;
        if (cVar4 != '\0') break;
      }
      plVar8 = plVar12;
      plVar13 = (long *)*plVar14;
      plVar12 = plVar8;
      plVar16 = plVar14;
    } while (plVar13 != plVar8);
    if (plVar8 == plVar12) goto LAB_1002fe1c6;
    pQVar7 = (QString *)0x0;
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (pQVar7 = (QString *)0x0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0)) {
      pQVar7 = *(QString **)(param_1 + 0x30);
    }
    pQVar9 = (QString *)FUN_10002c250(&DAT_102312208,&local_50);
    local_a0 = (QArrayData *)PTR_shared_null_1021e1288;
    CProgressDialog::setText(pQVar7,pQVar9);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002fe246;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
  }
LAB_1002fe246:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002fe452;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1002fe452:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

