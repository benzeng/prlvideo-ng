
void FUN_100abd460(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  QIcon *pQVar3;
  long *plVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  CSystemStatusBarItem *pCVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined1 uVar13;
  uint uVar14;
  uint *puVar15;
  double dVar16;
  QArrayData *local_c8;
  Connection local_c0 [8];
  QString local_b8;
  QIcon local_b0 [8];
  QString local_a8;
  QIcon local_a0 [8];
  QString local_98;
  QIcon local_90 [8];
  QIcon local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  iVar7 = *(int *)((long)param_2 + 0xc);
  if (0x100 < iVar7) {
    if (iVar7 != 0x101) {
      return;
    }
    if (((((*(byte *)((long)param_2 + 0x24) & 1) == 0) || (*(long *)(param_1 + 0x20) == 0)) ||
        (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0)) || (*(long *)(param_1 + 0x28) == 0))
    goto LAB_100abda73;
    uVar8 = FUN_100319390();
    FUN_10018c2b0(uVar8);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar6 = CVmCommonOptions::getOsVersion();
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar8 = FUN_100319c50(uVar8);
    dVar16 = (double)FUN_100331180(uVar8);
    cVar5 = '\x02';
    if ((uVar6 & 0xffffff00) != 0x800) {
      cVar5 = DAT_100e12b90 <= dVar16;
    }
    if (uVar6 < 0x80f) {
      cVar5 = DAT_100e12b90 <= dVar16;
    }
    QIcon::QIcon(local_88);
    if (cVar5 == '\x02') {
      local_b8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper(":/pixmaps/tray_customize_win10.png",0x22);
      QIcon::QIcon(local_b0,&local_b8);
      QIcon::operator=(local_88,local_b0);
      QIcon::~QIcon(local_b0);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100abd979;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
    }
    else if (cVar5 == '\x01') {
      local_a8.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper(":/pixmaps/tray_customize.png",0x1c);
      QIcon::QIcon(local_a0,&local_a8);
      QIcon::operator=(local_88,local_a0);
      QIcon::~QIcon(local_a0);
      if (*(int *)local_a8.field0_0x0 != -1) {
        if (*(int *)local_a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
          local_31 = *(int *)local_a8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100abd979;
        }
        QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
      }
    }
    else if (cVar5 == '\0') {
      local_98.field0_0x0 =
           (QTypedArrayData<unsigned_short> *)
           QString::fromAscii_helper(":/pixmaps/tray_customize_old.png",0x20);
      QIcon::QIcon(local_90,&local_98);
      QIcon::operator=(local_88,local_90);
      QIcon::~QIcon(local_90);
      if (*(int *)local_98.field0_0x0 != -1) {
        if (*(int *)local_98.field0_0x0 != 0) {
          LOCK();
          *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
          local_31 = *(int *)local_98.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100abd979;
        }
        QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
      }
    }
LAB_100abd979:
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (pQVar3 = *(QIcon **)(*(long *)(param_1 + 0x48) + 0x10), pQVar3 == (QIcon *)0x0)) {
      pCVar10 = operator_new(0x18);
      CSystemStatusBarItem::CSystemStatusBarItem(pCVar10,0,local_88,0);
      puVar11 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)0x0;
        (**(code **)(*(long *)pCVar10 + 0x20))(pCVar10);
      }
      else {
        *(undefined4 *)(puVar11 + 1) = 1;
        puVar11[2] = pCVar10;
        *puVar11 = &PTR_FUN_102282888;
      }
      plVar4 = *(long **)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar11;
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)(*plVar4 + 0x10))();
        }
        puVar11 = *(undefined8 **)(param_1 + 0x48);
      }
      uVar13 = false;
      if (puVar11 != (undefined8 *)0x0) {
        uVar13 = (undefined1)puVar11[2];
      }
      CSystemStatusBarItem::setHideOnDeactivate((bool)uVar13);
      uVar8 = 0;
      if (*(long *)(param_1 + 0x48) != 0) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
      }
      QObject::connect(local_c0,uVar8,"2pressed()",param_1,"1onTrayCfgPressed()",0);
      QMetaObject::Connection::~Connection(local_c0);
    }
    else {
      CSystemStatusBarItem::setIcon(pQVar3);
    }
    QIcon::~QIcon(local_88);
LAB_100abda73:
    FUN_100abd0c0(param_1);
    return;
  }
  switch(iVar7) {
  case 0:
    uVar8 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    local_50 = *param_2;
    local_48 = *(undefined4 *)(param_2 + 1);
    break;
  case 1:
  case 4:
    uVar8 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    local_60 = *param_2;
    local_58 = *(undefined4 *)(param_2 + 1);
    cVar5 = FUN_100abf810(uVar8,&local_60);
    if (cVar5 == '\0') {
      return;
    }
    uVar8 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    local_70 = *param_2;
    local_68 = *(undefined4 *)(param_2 + 1);
    break;
  case 2:
    uVar8 = 0;
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    }
    local_80 = *param_2;
    local_78 = *(undefined4 *)(param_2 + 1);
    FUN_100abf8a0(uVar8,&local_80);
  default:
    goto switchD_100abd49d_caseD_3;
  }
  lVar9 = FUN_100abf620(uVar8);
  uVar6 = *(uint *)(param_2 + 3);
  if (uVar6 != 0) {
    puVar15 = (uint *)((long)param_2 + 0x1c);
    puVar12 = (uint *)0x0;
    uVar14 = 0;
    do {
      uVar2 = puVar15[1];
      if (*(int *)((long)param_2 + 0xc) == 4) {
        if (uVar2 == 6) {
          *(uint *)(lVar9 + 0x40) = puVar15[2];
          return;
        }
      }
      else {
        switch(uVar2) {
        case 0:
          QString::fromUtf16((ushort *)&local_40,(int)puVar15 + 0xc);
          QString::normalized(&local_c8,&local_40,0,0);
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100abd74e;
            }
            QArrayData::deallocate(local_40,2,8);
          }
LAB_100abd74e:
          FUN_100ac0850(lVar9,&local_c8);
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              local_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)local_31) break;
            }
            QArrayData::deallocate(local_c8,2,8);
          }
          break;
        case 2:
          *(uint *)(lVar9 + 0x3c) = puVar15[2];
          break;
        case 3:
          if ((puVar15[3] & 1) != 0) {
            *(byte *)(lVar9 + 0x44) = (byte)puVar15[2] & 1;
          }
          break;
        case 4:
        case 5:
          if ((puVar12 == (uint *)0x0) && (uVar2 == 4)) goto switchD_100abd6d2_caseD_8;
          break;
        case 8:
switchD_100abd6d2_caseD_8:
          puVar12 = puVar15 + 2;
          break;
        case 9:
          iVar7 = _memcmp(puVar15 + 2,&DAT_101cd7064,0x10);
          if (iVar7 == 0) {
            *(undefined1 *)(lVar9 + 0x45) = 1;
          }
        }
        puVar15 = (uint *)((long)puVar15 + (ulong)*puVar15);
        uVar6 = *(uint *)(param_2 + 3);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar6);
    if (puVar12 != (uint *)0x0) {
      FUN_100ac0440(lVar9,puVar12 + 2,*puVar12,puVar12[1]);
    }
  }
  FUN_100abfb70(lVar9);
switchD_100abd49d_caseD_3:
  return;
}

