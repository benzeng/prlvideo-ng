
int FUN_100b51230(QString *param_1,QString *param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  bool bVar16;
  byte bVar17;
  long lVar18;
  long local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  long local_40;
  undefined1 local_31;
  
  QString::operator=(param_2,param_1);
  lVar8 = _SCPreferencesCreate(0,&cf_com_parallels_prl_net_library,0);
  if (lVar8 == 0) {
    QString::toLatin1();
    FUN_100df99c0("","prl_net",0,"[Mac_GetAdapterName %s] Cannot open System Preferences.",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 == -1) {
      return -1;
    }
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return -1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
    return -1;
  }
  lVar9 = _SCNetworkSetCopyCurrent();
  if (lVar9 == 0) {
    local_78 = _SCNetworkServiceCopyAll(lVar8);
  }
  else {
    local_78 = _SCNetworkSetCopyServices(lVar9);
  }
  if (local_78 == 0) {
    iVar7 = -1;
    if (lVar9 != 0) {
      _CFRelease(lVar9);
    }
    goto LAB_100b51773;
  }
  QString::toLatin1();
  uVar10 = _CFStringCreateWithCString(0,local_50 + *(long *)(local_50 + 0x10),0x600);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b5138e;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100b5138e:
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar7 = _CFArrayGetCount(local_78);
  bVar17 = 1;
  if (iVar7 < 1) {
    bVar16 = true;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kSCPropNetInterfaceDeviceName_1021e1a78;
    lVar2 = *(long *)PTR__kSCEntNetInterface_1021e1a30;
    uVar3 = *(undefined8 *)PTR__kSCPrefNetworkServices_1021e1a38;
    uVar4 = *(undefined8 *)PTR__kSCPropNetInterfaceType_1021e1a80;
    uVar5 = *(undefined8 *)PTR__kSCValNetInterfaceTypeEthernet_1021e1ae8;
    uVar6 = *(undefined8 *)PTR__kSCPropUserDefinedName_1021e1ac0;
    lVar18 = 0;
    bVar16 = false;
    do {
      lVar11 = _CFArrayGetValueAtIndex(local_78,lVar18);
      if (((lVar11 != 0) && (lVar12 = FUN_100b526f0(lVar8,lVar11,uVar1), lVar12 != 0)) &&
         (lVar12 = _CFStringCompare(lVar12,uVar10,0), lVar12 == 0)) {
        if (param_3 == 0) {
          uVar13 = _SCNetworkServiceGetServiceID(lVar11);
          if (lVar2 == 0) {
            lVar12 = _CFStringCreateWithFormat(0,0,&cf_______,uVar3,uVar13);
          }
          else {
            lVar12 = _CFStringCreateWithFormat(0,0,&cf__________,uVar3,uVar13,lVar2);
          }
        }
        else {
          uVar13 = _SCNetworkServiceGetServiceID(lVar11);
          lVar12 = _CFStringCreateWithFormat(0,0,&cf_______,uVar3,uVar13);
        }
        lVar15 = 0;
        if (lVar12 != 0) {
          uVar13 = _SCPreferencesPathGetValue(lVar8,lVar12);
          local_40 = 0;
          _CFDictionaryGetValueIfPresent(uVar13,uVar6,&local_40);
          lVar15 = local_40;
          if (local_40 == 0) {
LAB_100b5156d:
            local_40 = 0;
          }
          else {
            lVar14 = _CFStringGetTypeID();
            lVar15 = _CFGetTypeID(lVar15);
            if (lVar15 != lVar14) goto LAB_100b5156d;
          }
          _CFRelease(lVar12);
          lVar15 = local_40;
        }
        lVar11 = FUN_100b526f0(lVar8,lVar11,uVar4);
        if ((lVar11 != 0) && (lVar11 = _CFStringCompare(lVar11,uVar5,0), lVar11 == 0)) {
          FUN_100b51990(&local_60,lVar15);
          QString::operator=(param_2,&local_60);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100b517ed;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
LAB_100b517ed:
          bVar16 = !bVar16;
          bVar17 = 0;
          goto LAB_100b51701;
        }
        FUN_100b51990(&local_68,lVar15);
        QString::operator=(&local_58,&local_68);
        if (*(int *)local_68.field0_0x0 == -1) {
LAB_100b515f4:
          bVar16 = true;
        }
        else {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b515f4;
          }
          bVar16 = true;
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar7);
    if (bVar16) {
      QString::toUtf8();
      bVar17 = 1;
      FUN_100df99c0("","prl_net",0,"Only potential name for iface %s was found (wrong IfType)",
                    local_70 + *(long *)(local_70 + 0x10));
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b516f3;
        }
        QArrayData::deallocate(local_70,1,8);
      }
LAB_100b516f3:
      QString::operator=(param_2,&local_58);
      bVar16 = false;
    }
    else {
      bVar16 = true;
      bVar17 = 1;
    }
  }
LAB_100b51701:
  _CFRelease(uVar10);
  _CFRelease(local_78);
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    QString::operator=(param_2,param_1);
  }
  iVar7 = (int)((uint)(bVar16 & bVar17) << 0x1f) >> 0x1f;
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b51773;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100b51773:
  _CFRelease(lVar8);
  return iVar7;
}

