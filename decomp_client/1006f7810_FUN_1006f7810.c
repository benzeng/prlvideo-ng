
undefined8 * FUN_1006f7810(undefined8 *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  Data_conflict local_100;
  undefined4 local_f8;
  QArrayData *local_f0;
  QVariant local_e8;
  QVariant local_d8;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QVariant local_a8;
  QArrayData *local_98;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("RequestType",0xb);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("technical",9);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_29 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_29 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_40 = pQVar3;
  local_38 = pQVar4;
  FUN_1001c44c0(param_1,&local_40);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f78bf;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006f78bf:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f78ee;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006f78ee:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7919;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006f7919:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7948;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006f7948:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("Build",5);
  QString::number((int)&local_58,0xa28f);
  pQVar3 = local_58;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_29 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_48 = local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_29 = *(int *)local_58 != 0;
    UNLOCK();
  }
  local_50 = pQVar4;
  FUN_1001c44c0(param_1,&local_50);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f79d8;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006f79d8:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7a07;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006f7a07:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7a37;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006f7a37:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7a66;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006f7a66:
  uVar5 = FUN_100df2630();
  local_70 = (QArrayData *)QString::fromAscii_helper("Mac OS X %1.%2.x",0x10);
  QString::arg(&local_68,&local_70,uVar5 & 0xffffffff,0,10,0x20);
  QString::arg(&local_60,&local_68,uVar5 >> 0x20,0,10,0x20);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7af2;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1006f7af2:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7b22;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1006f7b22:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("PDfM_HostOS",0xb);
  pQVar3 = local_60;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_29 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_78 = local_60;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_29 = *(int *)local_60 != 0;
    UNLOCK();
  }
  local_80 = pQVar4;
  FUN_1001c44c0(param_1);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7b9f;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006f7b9f:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 == 0) {
LAB_1006f7bbc:
      QArrayData::deallocate(pQVar4,2,8);
    }
    else {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
      if (!(bool)local_29) goto LAB_1006f7bbc;
    }
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006f7bfd;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
LAB_1006f7bfd:
  if (param_2 != 0) {
    QObject::property((char *)&local_90);
    QVariant::~QVariant(&local_90);
    if ((local_90.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
      uVar6 = FUN_100152280();
      QObject::property((char *)&local_a8);
      QVariant::toString();
      lVar7 = FUN_1001548f0(uVar6);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_29 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006f7cb0;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1006f7cb0:
      QVariant::~QVariant(&local_a8);
      if (lVar7 != 0) {
        pQVar4 = (QArrayData *)QString::fromAscii_helper("PDfM_GuestOS",0xc);
        iVar2 = FUN_10018f890(lVar7);
        QString::number((uint)&local_c0,iVar2);
        pQVar3 = local_c0;
        if (1 < *(int *)pQVar4 + 1U) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + 1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
        }
        local_b0 = local_c0;
        if (1 < *(int *)local_c0 + 1U) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + 1;
          local_29 = *(int *)local_c0 != 0;
          UNLOCK();
        }
        local_b8 = pQVar4;
        FUN_1001c44c0(param_1);
        if (*(int *)pQVar3 != -1) {
          if (*(int *)pQVar3 != 0) {
            LOCK();
            *(int *)pQVar3 = *(int *)pQVar3 + -1;
            local_29 = *(int *)pQVar3 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006f7d69;
          }
          QArrayData::deallocate(pQVar3,2,8);
        }
LAB_1006f7d69:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_29 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006f7d98;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
LAB_1006f7d98:
        if (*(int *)local_c0 != -1) {
          if (*(int *)local_c0 != 0) {
            LOCK();
            *(int *)local_c0 = *(int *)local_c0 + -1;
            local_29 = *(int *)local_c0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006f7dce;
          }
          QArrayData::deallocate(local_c0,2,8);
        }
LAB_1006f7dce:
        if (*(int *)pQVar4 != -1) {
          if (*(int *)pQVar4 != 0) {
            LOCK();
            *(int *)pQVar4 = *(int *)pQVar4 + -1;
            local_29 = *(int *)pQVar4 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1006f7dfd;
          }
          QArrayData::deallocate(pQVar4,2,8);
        }
      }
    }
  }
LAB_1006f7dfd:
  QSettings::QSettings((QSettings *)&local_e8,(QObject *)0x0);
  local_f0 = (QArrayData *)QString::fromAscii_helper("SupportCode",0xb);
  local_f8 = 0x80000000;
  local_100.field7 = 0;
  QSettings::value((QString *)&local_d8,&local_e8);
  QVariant::toString();
  QVariant::~QVariant(&local_d8);
  QVariant::~QVariant((QVariant *)&local_100);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_29 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f7eba;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1006f7eba:
  QSettings::~QSettings((QSettings *)&local_e8);
  if (*(int *)(local_c8 + 4) != 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("SupportCode",0xb);
    pQVar3 = local_c8;
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_108 = local_c8;
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
    }
    local_110 = pQVar4;
    FUN_1001c44c0(param_1,&local_110);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006f7f60;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1006f7f60:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 == 0) {
LAB_1006f7f7d:
        QArrayData::deallocate(pQVar4,2,8);
      }
      else {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) goto LAB_1006f7f7d;
      }
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006f7fbe;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_1006f7fbe:
  if (DAT_102310a08 == (void *)0x0) {
    pvVar8 = operator_new(0x220);
    FUN_1007cc3f0(pvVar8);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar8;
  }
  FUN_1007d6630(&local_118,DAT_102310a08,1);
  if (*(int *)(local_118 + 4) != 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("ProblemReportID",0xf);
    pQVar3 = local_118;
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_29 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_120 = local_118;
    if (1 < *(int *)local_118 + 1U) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + 1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
    }
    local_128 = pQVar4;
    FUN_1001c44c0(param_1,&local_128);
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_29 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1006f809a;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_1006f809a:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 == 0) {
LAB_1006f80b7:
        QArrayData::deallocate(pQVar4,2,8);
      }
      else {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
        if (!(bool)local_29) goto LAB_1006f80b7;
      }
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006f80f8;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_1006f80f8:
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    uVar6 = FUN_100152280();
    lVar7 = FUN_1001554a0(uVar6);
    if (lVar7 != 0) {
      pQVar4 = (QArrayData *)QString::fromAscii_helper("PDLLicense",10);
      uVar6 = FUN_10016f500(lVar7);
      iVar2 = FUN_1006271d0(uVar6);
      QString::number((int)&local_140,iVar2);
      pQVar3 = local_140;
      if (1 < *(int *)pQVar4 + 1U) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + 1;
        local_29 = *(int *)pQVar4 != 0;
        UNLOCK();
      }
      local_130 = local_140;
      if (1 < *(int *)local_140 + 1U) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + 1;
        local_29 = *(int *)local_140 != 0;
        UNLOCK();
      }
      local_138 = pQVar4;
      FUN_1001c44c0(param_1,&local_138);
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          local_29 = *(int *)pQVar3 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006f81cf;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_1006f81cf:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006f81fe;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
LAB_1006f81fe:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_29 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006f8234;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1006f8234:
      if (*(int *)pQVar4 != -1) {
        if (*(int *)pQVar4 != 0) {
          LOCK();
          *(int *)pQVar4 = *(int *)pQVar4 + -1;
          local_29 = *(int *)pQVar4 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1006f8263;
        }
        QArrayData::deallocate(pQVar4,2,8);
      }
    }
  }
LAB_1006f8263:
  if (*(int *)local_118 != -1) {
    if (*(int *)local_118 != 0) {
      LOCK();
      *(int *)local_118 = *(int *)local_118 + -1;
      local_29 = *(int *)local_118 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f8299;
    }
    QArrayData::deallocate(local_118,2,8);
  }
LAB_1006f8299:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1006f82cf;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1006f82cf:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return param_1;
}

