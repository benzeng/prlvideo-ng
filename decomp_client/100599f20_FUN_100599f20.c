
undefined1 FUN_100599f20(long param_1,QString *param_2,QString *param_3,QVariant *param_4)

{
  long *plVar1;
  QTypedArrayData<unsigned_short> *pQVar2;
  int *piVar3;
  undefined *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  QArrayData *pQVar9;
  QArrayData *pQVar10;
  QArrayData *pQVar11;
  QArrayData *pQVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  undefined1 uVar16;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  int *local_70;
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar1 + 0x60))(&local_68,plVar1,param_2,param_3,0);
  QString::operator=((QString *)(param_1 + 0x18),param_2);
  QString::operator=((QString *)(param_1 + 0x20),param_3);
  QVariant::operator=((QVariant *)(param_1 + 0x28),param_4);
  pQVar2 = param_2->field0_0x0;
  iVar7 = QString::compare_helper
                    (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                     PTR_s_UserPreferences_102274480,0xffffffff,1);
  if (iVar7 == 0) {
    if ((DAT_1023122e0 == '\0') && (iVar7 = ___cxa_guard_acquire(&DAT_1023122e0), iVar7 != 0)) {
      DAT_1023122d8 = (int *)PTR_shared_null_1021e15e8;
      ___cxa_atexit(FUN_1002b5b40,&DAT_1023122d8,0x100000000);
      ___cxa_guard_release(&DAT_1023122e0);
    }
    if (DAT_1023122d8[3] == DAT_1023122d8[2]) {
      pQVar9 = (QArrayData *)QString::fromAscii_helper("ProxySettings.UseProxy",0x16);
      local_40 = pQVar9;
      FUN_1000341d0(&DAT_1023122d8,&local_40);
      pQVar10 = (QArrayData *)QString::fromAscii_helper("ProxySettings.UserSettings.Enabled",0x22);
      local_48 = pQVar10;
      FUN_1000341d0(&DAT_1023122d8,&local_48);
      pQVar11 = (QArrayData *)QString::fromAscii_helper("ProxySettings.SystemSettings.Enabled",0x24)
      ;
      local_50 = pQVar11;
      FUN_1000341d0(&DAT_1023122d8,&local_50);
      pQVar12 = (QArrayData *)QString::fromAscii_helper("ProxySettings.UseAutoPacScript",0x1e);
      local_58 = pQVar12;
      FUN_1000341d0(&DAT_1023122d8,&local_58);
      if (*(int *)pQVar12 != -1) {
        if (*(int *)pQVar12 != 0) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059a221;
        }
        QArrayData::deallocate(pQVar12,2,8);
      }
LAB_10059a221:
      if (*(int *)pQVar11 != -1) {
        if (*(int *)pQVar11 != 0) {
          LOCK();
          *(int *)pQVar11 = *(int *)pQVar11 + -1;
          local_31 = *(int *)pQVar11 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059a250;
        }
        QArrayData::deallocate(pQVar11,2,8);
      }
LAB_10059a250:
      if (*(int *)pQVar10 != -1) {
        if (*(int *)pQVar10 != 0) {
          LOCK();
          *(int *)pQVar10 = *(int *)pQVar10 + -1;
          local_31 = *(int *)pQVar10 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059a27f;
        }
        QArrayData::deallocate(pQVar10,2,8);
      }
LAB_10059a27f:
      if (*(int *)pQVar9 != -1) {
        if (*(int *)pQVar9 != 0) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10059a2b5;
        }
        QArrayData::deallocate(pQVar9,2,8);
      }
    }
LAB_10059a2b5:
    piVar14 = DAT_1023122d8;
    local_70 = DAT_1023122d8;
    if (*DAT_1023122d8 != -1) {
      if (*DAT_1023122d8 == 0) {
        QListData::detach((int)&local_70);
        iVar7 = local_70[2];
        if (iVar7 != local_70[3]) {
          piVar14 = DAT_1023122d8 + (long)DAT_1023122d8[2] * 2 + 4;
          piVar15 = local_70 + (long)iVar7 * 2 + 4;
          lVar13 = (long)local_70[3] * 8 + (long)iVar7 * -8;
          do {
            piVar3 = *(int **)piVar14;
            *(int **)piVar15 = piVar3;
            if (1 < *piVar3 + 1U) {
              LOCK();
              *piVar3 = *piVar3 + 1;
              local_31 = *piVar3 != 0;
              UNLOCK();
            }
            piVar15 = piVar15 + 2;
            piVar14 = piVar14 + 2;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
      else {
        LOCK();
        *DAT_1023122d8 = *DAT_1023122d8 + 1;
        local_31 = *piVar14 != 0;
        UNLOCK();
      }
    }
    cVar5 = QtPrivate::QStringList_contains(&local_70,param_3,1);
    if (cVar5 != '\0') {
      bVar6 = QVariant::toBool();
      pQVar2 = param_3->field0_0x0;
      iVar7 = QString::compare_helper
                        (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                         "ProxySettings.UseProxy",0xffffffff,1);
      if ((bVar6 ^ iVar7 == 0) == 1) {
        FUN_1000e5580(&local_70,param_3);
        puVar4 = PTR_s_UserPreferences_102274480;
        iVar7 = -1;
        if (PTR_s_UserPreferences_102274480 != (undefined *)0x0) {
          sVar8 = _strlen(PTR_s_UserPreferences_102274480);
          iVar7 = (int)sVar8;
        }
        local_78 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
        FUN_10059a790(param_1,&local_78,&local_70);
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10059a4c8;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
    }
LAB_10059a4c8:
    FUN_100039a80(&local_70);
  }
  else {
    pQVar2 = param_2->field0_0x0;
    iVar7 = QString::compare_helper
                      (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                       PTR_s_DispPreferences_102274488,0xffffffff,1);
    if (iVar7 == 0) {
      pQVar2 = param_3->field0_0x0;
      iVar7 = QString::compare_helper
                        (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                         "WorkspacePreferences.AllowMultiplePMC",0xffffffff,1);
      if (iVar7 == 0) {
        cVar5 = FUN_10059a9c0(param_1);
      }
      else {
        pQVar2 = param_3->field0_0x0;
        iVar7 = QString::compare_helper
                          (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                           "PasswordProtectedOperations.LockedOperation",0xffffffff,1);
        if (iVar7 != 0) goto LAB_10059a560;
        cVar5 = FUN_10059acc0(param_1);
      }
LAB_10059a55a:
      uVar16 = 1;
      if (cVar5 != '\0') goto LAB_10059a56c;
    }
    else {
      pQVar2 = param_2->field0_0x0;
      iVar7 = QString::compare_helper
                        (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                         PTR_s_ShortcutsStorage_102274490,0xffffffff,1);
      if (iVar7 == 0) {
        pQVar2 = param_3->field0_0x0;
        iVar7 = QString::compare_helper
                          (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                           PTR_s_GrabHostShortcutsType_1022744c8,0xffffffff,1);
        if (iVar7 == 0) {
          FUN_10059aed0();
        }
      }
      else {
        pQVar2 = param_2->field0_0x0;
        iVar7 = QString::compare_helper
                          (pQVar2 + *(long *)(pQVar2 + 0x10),*(undefined4 *)(pQVar2 + 4),
                           PTR_s_NetworkConfigStorage_1022744a0,0xffffffff,1);
        puVar4 = PTR_s_IPv4DHCPScopeInfo_1022744e8;
        if (iVar7 == 0) {
          iVar7 = -1;
          if (PTR_s_IPv4DHCPScopeInfo_1022744e8 != (undefined *)0x0) {
            sVar8 = _strlen(PTR_s_IPv4DHCPScopeInfo_1022744e8);
            iVar7 = (int)sVar8;
          }
          local_80 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
          cVar5 = QString::endsWith(param_3,&local_80,1);
          if (*(int *)local_80 != -1) {
            if (*(int *)local_80 != 0) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + -1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10059a0c3;
            }
            QArrayData::deallocate(local_80,2,8);
          }
LAB_10059a0c3:
          puVar4 = PTR_s_IPv6DHCPScopeInfo_1022744f0;
          if (cVar5 != '\0') {
            cVar5 = FUN_10059afc0(param_1);
            goto LAB_10059a55a;
          }
          iVar7 = -1;
          if (PTR_s_IPv6DHCPScopeInfo_1022744f0 != (undefined *)0x0) {
            sVar8 = _strlen(PTR_s_IPv6DHCPScopeInfo_1022744f0);
            iVar7 = (int)sVar8;
          }
          local_88 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar7);
          cVar5 = QString::endsWith(param_3,&local_88,1);
          if (*(int *)local_88 != -1) {
            if (*(int *)local_88 != 0) {
              LOCK();
              *(int *)local_88 = *(int *)local_88 + -1;
              local_31 = *(int *)local_88 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10059a54e;
            }
            QArrayData::deallocate(local_88,2,8);
          }
LAB_10059a54e:
          if (cVar5 != '\0') {
            cVar5 = FUN_10059bad0(param_1);
            goto LAB_10059a55a;
          }
        }
      }
    }
  }
LAB_10059a560:
  uVar16 = 0;
  FUN_10059bee0(param_1,0);
LAB_10059a56c:
  QVariant::~QVariant(&local_68);
  return uVar16;
}

