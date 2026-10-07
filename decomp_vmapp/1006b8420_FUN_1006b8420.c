
int FUN_1006b8420(undefined8 *param_1,long param_2,QString *param_3)

{
  short sVar1;
  QString *pQVar2;
  QArrayData *pQVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
  QArrayData *pQVar12;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined1 local_6e [6];
  undefined8 *local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","pNetwork","netconfig.cpp",
                  0x3b6,"GetAdapterForNetwork");
    return -0x7fffbfe7;
  }
  iVar7 = CVirtualNetwork::getNetworkType();
  if (iVar7 != 0) {
    lVar9 = CVirtualNetwork::getHostOnlyNetwork();
    if (lVar9 != 0) {
      lVar9 = CHostOnlyNetwork::getParallelsAdapter();
      if (lVar9 != 0) {
        uVar8 = CParallelsAdapter::getPrlAdapterIndex();
        cVar4 = CParallelsAdapter::isEnabled();
        if (cVar4 != '\0') {
          puVar10 = (uint *)*param_1;
          if (1 < *puVar10) {
            FUN_10027ab40(param_1,puVar10[1]);
            puVar10 = (uint *)*param_1;
          }
          puVar11 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
          while( true ) {
            if (1 < *puVar10) {
              FUN_10027ab40(param_1,puVar10[1]);
              puVar10 = (uint *)*param_1;
            }
            if (puVar11 == puVar10 + (long)(int)puVar10[3] * 2 + 4) break;
            pQVar2 = *(QString **)puVar11;
            if ((*(char *)((long)&pQVar2[3].field0_0x0 + 4) != '\0') &&
               (((*(uint *)&pQVar2[3].field0_0x0 ^ uVar8) & 0xfffffff) == 0)) {
              QString::operator=(param_3,pQVar2);
              QString::operator=(param_3 + 1,pQVar2 + 1);
              QString::operator=(param_3 + 2,pQVar2 + 2);
              *(undefined1 *)((long)&param_3[3].field0_0x0 + 4) =
                   *(undefined1 *)((long)&pQVar2[3].field0_0x0 + 4);
              *(undefined4 *)&param_3[3].field0_0x0 = *(undefined4 *)&pQVar2[3].field0_0x0;
              QString::operator=(param_3 + 4,pQVar2 + 4);
              *(undefined2 *)&param_3[6].field0_0x0 = *(undefined2 *)&pQVar2[6].field0_0x0;
              param_3[5].field0_0x0 = pQVar2[5].field0_0x0;
              return 0;
            }
            puVar11 = puVar11 + 2;
          }
          CVirtualNetwork::getNetworkID();
          QString::toLatin1();
          FUN_1008e3970("","prl_net",0,
                        "Parallels Adapter (%d) for virtual network %s doesn\'t exist or it is disabled."
                        ,uVar8 & 0xfffffff,local_d0 + *(long *)(local_d0 + 0x10));
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b8b0c;
            }
            QArrayData::deallocate(local_d0,1,8);
          }
LAB_1006b8b0c:
          iVar7 = -0x7fffbfe7;
          if (*(int *)local_d8 == -1) {
            return -0x7fffbfe7;
          }
          if (*(int *)local_d8 != 0) {
            LOCK();
            *(int *)local_d8 = *(int *)local_d8 + -1;
            UNLOCK();
            if (*(int *)local_d8 != 0) {
              return -0x7fffbfe7;
            }
            local_31 = 0;
          }
          goto LAB_1006b8b41;
        }
        CVirtualNetwork::getNetworkID();
        if (*(int *)(local_c8 + 4) < 0x10) {
          local_c0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c8;
          if (1 < *(int *)local_c8 + 1U) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + 1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
          }
        }
        else {
          QString::toUtf8();
          QCryptographicHash::hash(&local_40,&local_48,1);
          if (*(int *)local_48 != -1) {
            if (*(int *)local_48 != 0) {
              LOCK();
              *(int *)local_48 = *(int *)local_48 + -1;
              local_31 = *(int *)local_48 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b8ba7;
            }
            QArrayData::deallocate(local_48,1,8);
          }
LAB_1006b8ba7:
          if (*(int *)(local_40 + 4) != 0x10) {
            FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","r.length() == 16",
                          "netconfig.cpp",0x3a3,"netid_to_name");
          }
          lVar9 = *(long *)(local_40 + 0x10);
          local_50 = (QArrayData *)PTR_shared_null_100ba20d0;
          QString::sprintf((char *)&local_50,"%08x",
                           (ulong)(*(uint *)(local_40 + lVar9 + 4) ^ *(uint *)(local_40 + lVar9) ^
                                   *(uint *)(local_40 + lVar9 + 8) ^
                                  *(uint *)(local_40 + lVar9 + 0xc)));
          local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c8;
          if (1 < *(int *)local_c8 + 1U) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + 1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
          }
          QString::truncate((int)&local_58);
          QString::fromUtf8_helper((char *)&local_60,0x9e35e4);
          QString::append(&local_60);
          QString::append(&local_58);
          if (*(int *)local_60.field0_0x0 != -1) {
            if (*(int *)local_60.field0_0x0 != 0) {
              LOCK();
              *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
              local_31 = *(int *)local_60.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b8cb0;
            }
            QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
          }
LAB_1006b8cb0:
          local_c0.field0_0x0 = local_58.field0_0x0;
          if (1 < *(int *)local_58.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
            local_31 = *(int *)local_58.field0_0x0 != 0;
            UNLOCK();
          }
          if (*(int *)local_58.field0_0x0 != -1) {
            if (*(int *)local_58.field0_0x0 != 0) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
              local_31 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b8cfc;
            }
            QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          }
LAB_1006b8cfc:
          if (*(int *)local_50 != -1) {
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              local_31 = *(int *)local_50 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b8d2c;
            }
            QArrayData::deallocate(local_50,2,8);
          }
LAB_1006b8d2c:
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_31 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006b8d5c;
            }
            QArrayData::deallocate(local_40,1,8);
          }
        }
LAB_1006b8d5c:
        QString::operator=(param_3,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b8da1;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
LAB_1006b8da1:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006b8dd7;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_1006b8dd7:
        QString::operator=(param_3 + 1,param_3);
        QString::operator=(param_3 + 2,param_3);
        *(uint *)&param_3[3].field0_0x0 = uVar8 | 0x10000000;
        *(undefined1 *)((long)&param_3[3].field0_0x0 + 4) = 1;
        *(undefined1 *)((long)&param_3[6].field0_0x0 + 1) = 1;
        *(undefined1 *)((long)&param_3[5].field0_0x0 + 6) = 0;
        *(undefined4 *)((long)&param_3[5].field0_0x0 + 2) = 0x421c00;
        *(char *)((long)&param_3[5].field0_0x0 + 7) = (char)uVar8 + '\b';
        return 0;
      }
      CVirtualNetwork::getNetworkID();
      QString::toUtf8();
      FUN_1008e3970("","prl_net",0,"Parallels Adapter for network %s are not configured.",
                    local_b0 + *(long *)(local_b0 + 0x10));
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b8810;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_1006b8810:
      iVar7 = -0x7fffbfe0;
      if (*(int *)local_b8 == -1) {
        return -0x7fffbfe0;
      }
      local_d8 = local_b8;
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        UNLOCK();
        if (*(int *)local_b8 != 0) {
          return -0x7fffbfe0;
        }
        local_31 = 0;
      }
      goto LAB_1006b8b41;
    }
    CVirtualNetwork::getNetworkID();
    QString::toUtf8();
    FUN_1008e3970("","prl_net",0,
                  "Host only network params for virtual network %s are not configured.",
                  local_a0 + *(long *)(local_a0 + 0x10));
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006b86d6;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_1006b86d6:
    iVar7 = -0x7fffbfe0;
    if (*(int *)local_a8 == -1) {
      return -0x7fffbfe0;
    }
    local_d8 = local_a8;
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      UNLOCK();
      if (*(int *)local_a8 != 0) {
        return -0x7fffbfe0;
      }
      local_31 = 0;
    }
    goto LAB_1006b8b41;
  }
  cVar4 = FUN_1006bc730(param_2);
  if (cVar4 != '\0') {
    local_68 = (undefined8 *)0x0;
    iVar7 = FUN_1006b3b90(param_1,&local_68);
    if ((iVar7 < 0) && (iVar7 = FUN_1006b3b00(param_1,&local_68), iVar7 < 0)) {
      return iVar7;
    }
    pQVar2 = (QString *)*local_68;
    QString::operator=(param_3,pQVar2);
    QString::operator=(param_3 + 1,pQVar2 + 1);
    QString::operator=(param_3 + 2,pQVar2 + 2);
    *(undefined1 *)((long)&param_3[3].field0_0x0 + 4) =
         *(undefined1 *)((long)&pQVar2[3].field0_0x0 + 4);
    *(undefined4 *)&param_3[3].field0_0x0 = *(undefined4 *)&pQVar2[3].field0_0x0;
    QString::operator=(param_3 + 4,pQVar2 + 4);
    *(undefined2 *)&param_3[6].field0_0x0 = *(undefined2 *)&pQVar2[6].field0_0x0;
    param_3[5].field0_0x0 = pQVar2[5].field0_0x0;
    return iVar7;
  }
  CVirtualNetwork::getBoundCardMac();
  FUN_1006b6c60(&local_78,local_6e);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b875f;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1006b875f:
  puVar10 = (uint *)*param_1;
  if (1 < *puVar10) {
    FUN_10027ab40(param_1,puVar10[1]);
    puVar10 = (uint *)*param_1;
  }
  puVar11 = puVar10 + (long)(int)puVar10[2] * 2 + 4;
  while( true ) {
    if (1 < *puVar10) {
      FUN_10027ab40(param_1,puVar10[1]);
      puVar10 = (uint *)*param_1;
    }
    if (puVar11 == puVar10 + (long)(int)puVar10[3] * 2 + 4) break;
    lVar9 = *(long *)puVar11;
    iVar7 = _memcmp((void *)(lVar9 + 0x2a),local_6e,6);
    if (iVar7 == 0) {
      sVar1 = *(short *)(lVar9 + 0x28);
      sVar5 = CVirtualNetwork::getVLANTag();
      if (sVar1 == sVar5) {
        pQVar2 = *(QString **)puVar11;
        QString::operator=(param_3,pQVar2);
        QString::operator=(param_3 + 1,pQVar2 + 1);
        QString::operator=(param_3 + 2,pQVar2 + 2);
        *(undefined1 *)((long)&param_3[3].field0_0x0 + 4) =
             *(undefined1 *)((long)&pQVar2[3].field0_0x0 + 4);
        *(undefined4 *)&param_3[3].field0_0x0 = *(undefined4 *)&pQVar2[3].field0_0x0;
        QString::operator=(param_3 + 4,pQVar2 + 4);
        *(undefined2 *)&param_3[6].field0_0x0 = *(undefined2 *)&pQVar2[6].field0_0x0;
        param_3[5].field0_0x0 = pQVar2[5].field0_0x0;
        return 0;
      }
      puVar10 = (uint *)*param_1;
    }
    puVar11 = puVar11 + 2;
  }
  CVirtualNetwork::getNetworkID();
  QString::toUtf8();
  pQVar12 = local_80 + *(long *)(local_80 + 0x10);
  CVirtualNetwork::getBoundCardMac();
  QString::toUtf8();
  pQVar3 = local_90;
  lVar9 = *(long *)(local_90 + 0x10);
  uVar6 = CVirtualNetwork::getVLANTag();
  FUN_1008e3970("","prl_net",0,
                "Adapter for virtual network %s with MacAddress %s(VLAN=0x%04x) doesn\'t exist.",
                pQVar12,pQVar3 + lVar9,uVar6);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b89dd;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1006b89dd:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b8a13;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1006b8a13:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b8a43;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1006b8a43:
  iVar7 = -0x7fffbfe7;
  if (*(int *)local_88 == -1) {
    return -0x7fffbfe7;
  }
  local_d8 = local_88;
  if (*(int *)local_88 != 0) {
    LOCK();
    *(int *)local_88 = *(int *)local_88 + -1;
    UNLOCK();
    if (*(int *)local_88 != 0) {
      return -0x7fffbfe7;
    }
    local_31 = 0;
  }
LAB_1006b8b41:
  QArrayData::deallocate(local_d8,2,8);
  return iVar7;
}

