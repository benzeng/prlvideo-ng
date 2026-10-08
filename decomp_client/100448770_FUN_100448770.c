
void FUN_100448770(long param_1)

{
  int iVar1;
  QString *pQVar2;
  undefined8 uVar3;
  undefined *puVar4;
  Data *pDVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  long lVar8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  Data *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar2 = *(QString **)(param_1 + 8);
  QCoreApplication::translate((char *)&local_40,"CVmEdNetworkRateLimitDialog","Inbound",0);
  QGroupBox::setTitle(pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004487e8;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004487e8:
  pQVar2 = *(QString **)(param_1 + 0x18);
  QCoreApplication::translate((char *)&local_48,"CVmEdNetworkRateLimitDialog","Packet Loss (%):",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448849;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_100448849:
  pQVar2 = *(QString **)(param_1 + 0x20);
  QCoreApplication::translate((char *)&local_50,"CVmEdNetworkRateLimitDialog","Bandwidth:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004488aa;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004488aa:
  QComboBox::clear();
  puVar4 = PTR_shared_null_1021e15e8;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  QCoreApplication::translate((char *)&local_60,"CVmEdNetworkRateLimitDialog","bps",0);
  FUN_1000341d0(&local_58,&local_60);
  QCoreApplication::translate((char *)&local_68,"CVmEdNetworkRateLimitDialog","kbps",0);
  FUN_1000341d0(&local_58,&local_68);
  QCoreApplication::translate((char *)&local_70,"CVmEdNetworkRateLimitDialog","mbps",0);
  FUN_1000341d0(&local_58);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448984;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100448984:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004489b4;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004489b4:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004489e4;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1004489e4:
  pDVar5 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448a71;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar8 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100448a50:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100448a50;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100448a71:
  pQVar2 = *(QString **)(param_1 + 0x38);
  QCoreApplication::translate((char *)&local_78,"CVmEdNetworkRateLimitDialog","unlimited",0);
  QAbstractSpinBox::setSpecialValueText(pQVar2);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448ad2;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_100448ad2:
  pQVar2 = *(QString **)(param_1 + 0x40);
  QCoreApplication::translate((char *)&local_80,"CVmEdNetworkRateLimitDialog","Delay (ms):",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448b33;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100448b33:
  pQVar2 = *(QString **)(param_1 + 0x50);
  QCoreApplication::translate((char *)&local_88,"CVmEdNetworkRateLimitDialog","Outbound",0);
  QGroupBox::setTitle(pQVar2);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_31 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448b94;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100448b94:
  pQVar2 = *(QString **)(param_1 + 0x60);
  QCoreApplication::translate((char *)&local_90,"CVmEdNetworkRateLimitDialog","Packet Loss (%):",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448bfe;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100448bfe:
  pQVar2 = *(QString **)(param_1 + 0x68);
  QCoreApplication::translate((char *)&local_98,"CVmEdNetworkRateLimitDialog","unlimited",0);
  QAbstractSpinBox::setSpecialValueText(pQVar2);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448c68;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100448c68:
  pQVar2 = *(QString **)(param_1 + 0x70);
  QCoreApplication::translate((char *)&local_a0,"CVmEdNetworkRateLimitDialog","Bandwidth:",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448cd2;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100448cd2:
  QComboBox::clear();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  local_a8 = (Data *)puVar4;
  QCoreApplication::translate((char *)&local_b0,"CVmEdNetworkRateLimitDialog","bps",0);
  FUN_1000341d0(&local_a8,&local_b0);
  QCoreApplication::translate((char *)&local_b8,"CVmEdNetworkRateLimitDialog","kbps",0);
  FUN_1000341d0(&local_a8,&local_b8);
  QCoreApplication::translate((char *)&local_c0,"CVmEdNetworkRateLimitDialog","mbps",0);
  FUN_1000341d0(&local_a8);
  QComboBox::insertItems((int)uVar3,(QStringList *)0x0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448dcc;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100448dcc:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448e02;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_100448e02:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_31 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448e38;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_100448e38:
  pDVar5 = local_a8;
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100448ed1;
    }
    iVar1 = *(int *)(local_a8 + 0xc);
    if (iVar1 != *(int *)(local_a8 + 8)) {
      lVar8 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar1 * -8;
      pDVar6 = local_a8 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_100448eb0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_100448eb0;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100448ed1:
  pQVar2 = *(QString **)(param_1 + 0x88);
  QCoreApplication::translate((char *)&local_c8,"CVmEdNetworkRateLimitDialog","Delay (ms):",0);
  QLabel::setText(pQVar2);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      if (*(int *)local_c8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
  return;
}

