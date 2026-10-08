
void FUN_100576420(long param_1,char *param_2)

{
  int iVar1;
  QString *pQVar2;
  char *pcVar3;
  undefined *puVar4;
  AnonymousUnion0 AVar5;
  long lVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QVariant local_108;
  QString local_f8;
  QVariant local_f0;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  AnonymousUnion0 local_70;
  QVariant local_68;
  QArrayData *local_58;
  AnonymousUnion0 local_50;
  QVariant local_48;
  undefined1 local_31;
  
  puVar4 = PTR_shared_null_1021e15e8;
  local_50.field1 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_58,"CNetworkOptionsWidget","NetworkConfigStorage",0);
  FUN_1000341d0(&local_50,&local_58);
  QVariant::QVariant(&local_48,(QStringList *)&local_50.field0);
  QObject::setProperty(param_2,(QVariant *)"storages");
  QVariant::~QVariant(&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005764ca;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005764ca:
  AVar5 = local_50;
  local_70 = (AnonymousUnion0)puVar4;
  if (*(int *)local_50.field1 != -1) {
    if (*(int *)local_50.field1 != 0) {
      LOCK();
      *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
      local_31 = *(int *)local_50.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576578;
    }
    iVar1 = *(int *)(local_50.field1 + 0xc);
    if (iVar1 != *(int *)(local_50.field1 + 8)) {
      lVar6 = (long)*(int *)(local_50.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_50.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100576550:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100576550;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
    local_70 = (AnonymousUnion0)PTR_shared_null_1021e15e8;
  }
LAB_100576578:
  QCoreApplication::translate
            ((char *)&local_78,"CNetworkOptionsWidget","DYNAMIC_PART.PortForwarding",0);
  FUN_1000341d0(&local_70,&local_78);
  QCoreApplication::translate
            ((char *)&local_80,"CNetworkOptionsWidget","DYNAMIC_PART.IPv4DHCPScopeInfo",0);
  FUN_1000341d0(&local_70,&local_80);
  QCoreApplication::translate
            ((char *)&local_88,"CNetworkOptionsWidget","DYNAMIC_PART.IPv6DHCPScopeInfo",0);
  FUN_1000341d0(&local_70,&local_88);
  QVariant::QVariant(&local_68,(QStringList *)&local_70.field0);
  QObject::setProperty(param_2,(QVariant *)"NetworkConfigStorage");
  QVariant::~QVariant(&local_68);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576659;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100576659:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576689;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100576689:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005766b9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1005766b9:
  AVar5 = local_70;
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_31 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576751;
    }
    iVar1 = *(int *)(local_70.field1 + 0xc);
    if (iVar1 != *(int *)(local_70.field1 + 8)) {
      lVar6 = (long)*(int *)(local_70.field1 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = (Data *)(local_70.field1 + (long)iVar1 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_100576730:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_100576730;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar6 = lVar6 + 8;
      } while (lVar6 != 0);
    }
    QListData::dispose((Data *)AVar5.field1);
  }
LAB_100576751:
  QCoreApplication::translate((char *)&local_a0,"CNetworkOptionsWidget","Network",0);
  QVariant::QVariant(&local_98,&local_a0);
  QObject::setProperty(param_2,(QVariant *)"pageName");
  QVariant::~QVariant(&local_98);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005767dd;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1005767dd:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_a8,"CNetworkOptionsWidget","Enable IPv4 DHCP",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576847;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100576847:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_b0,"CNetworkOptionsWidget","Prefix Length:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005768b1;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005768b1:
  pQVar2 = *(QString **)(param_1 + 0x28);
  QCoreApplication::translate((char *)&local_b8,"CNetworkOptionsWidget","Subnet:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10057691b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10057691b:
  pQVar2 = *(QString **)(param_1 + 0x30);
  QCoreApplication::translate((char *)&local_c0,"CNetworkOptionsWidget","Enable IPv6 DHCP",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576985;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100576985:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_c8,"CNetworkOptionsWidget","Start Address:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_31 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005769ef;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1005769ef:
  pQVar2 = *(QString **)(param_1 + 0x48);
  QCoreApplication::translate((char *)&local_d0,"CNetworkOptionsWidget","End Address:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576a59;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_100576a59:
  pQVar2 = *(QString **)(param_1 + 0x58);
  QCoreApplication::translate((char *)&local_d8,"CNetworkOptionsWidget","Subnet:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_31 = *(int *)local_d8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576ac3;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100576ac3:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_e0,"CNetworkOptionsWidget","Show in System Preferences",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576b2d;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_100576b2d:
  pcVar3 = *(char **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_f8,"CNetworkOptionsWidget","setShowInSystemPreferences",0);
  QVariant::QVariant(&local_f0,&local_f8);
  QObject::setProperty(pcVar3,(QVariant *)"setter");
  QVariant::~QVariant(&local_f0);
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      local_31 = *(int *)local_f8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576bbd;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
LAB_100576bbd:
  pcVar3 = *(char **)(param_1 + 0x68);
  QCoreApplication::translate
            ((char *)&local_110,"CNetworkOptionsWidget","getShowInSystemPreferences",0);
  QVariant::QVariant(&local_108,&local_110);
  QObject::setProperty(pcVar3,(QVariant *)"getter");
  QVariant::~QVariant(&local_108);
  if (*(int *)local_110.field0_0x0 != -1) {
    if (*(int *)local_110.field0_0x0 != 0) {
      LOCK();
      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
      local_31 = *(int *)local_110.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576c4d;
    }
    QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
  }
LAB_100576c4d:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate((char *)&local_118,"CNetworkOptionsWidget","Subnet Mask:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_31 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576cba;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_100576cba:
  pQVar2 = *(QString **)(param_1 + 0x98);
  QCoreApplication::translate
            ((char *)&local_120,"CNetworkOptionsWidget","Connect Mac to this network",0);
  QAbstractButton::setText(pQVar2);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100576d27;
    }
    QArrayData::deallocate(local_120,2,8);
  }
LAB_100576d27:
  pQVar2 = *(QString **)(param_1 + 0xc0);
  QCoreApplication::translate((char *)&local_128,"CNetworkOptionsWidget","Port forwarding rules:",0)
  ;
  QLabel::setText(pQVar2);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      UNLOCK();
      if (*(int *)local_128 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_128,2,8);
  }
  return;
}

