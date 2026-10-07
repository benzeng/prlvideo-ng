
QString * FUN_1006dc760(QString *param_1,uint param_2,long *param_3,long param_4)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  int *piVar5;
  ulong uVar6;
  char *pcVar7;
  QString local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QString local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QString local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QArrayData *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (1 < param_2) {
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "PAM_SERVER == mode || PAM_DESKTOP_MAC == mode","ParallelsDirs.cpp",0x290,
                  "getDefaultVmCatalogue");
    FUN_1008e3970("","cmn_utils",0,"Wrong mode parameter [=%d]",param_2);
    return param_1;
  }
  if (param_2 != 0) {
    if ((param_2 == 1) && ((param_3 == (long *)0x0 || (*(int *)(*param_3 + 4) == 0)))) {
      FUN_1008e3970("","cmn_utils",0,"Wrong userInfo parameter for desktop mode");
      return param_1;
    }
    QString::toUtf8();
    lVar2 = _getpwnam(local_a0 + *(long *)(local_a0 + 0x10));
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dc812;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_1006dc812:
    if (((lVar2 == 0) || (pcVar7 = *(char **)(lVar2 + 0x30), pcVar7 == (char *)0x0)) ||
       (sVar3 = _strlen(pcVar7), sVar3 == 0)) {
      piVar5 = ___error();
      if (lVar2 == 0) {
        pcVar7 = "null";
      }
      else {
        pcVar7 = *(char **)(lVar2 + 0x30);
      }
      FUN_1008e3970("","cmn_utils",0,"Can\'t get profile by error %d, pswd=%p, pw_dir=%p",*piVar5,
                    lVar2,pcVar7);
      return param_1;
    }
    QString::fromUtf8_helper((char *)&local_b0,(int)pcVar7);
    QString::normalized(&local_a8,&local_b0,1,0);
    QString::operator=(param_1,&local_a8);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_31 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dc8a9;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_1006dc8a9:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dc8df;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_1006dc8df:
    pQVar4 = (QArrayData *)QString::fromAscii_helper("/",1);
    QString::fromUtf8_helper((char *)&local_c8,0x9f6c07);
    QString::normalized(&local_c0,&local_c8,1,0);
    if (1 < *(int *)pQVar4 + 1U) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + 1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
    }
    local_b8.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
    QString::append(&local_b8);
    QString::append(param_1);
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_31 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dc999;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_1006dc999:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dc9cf;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1006dc9cf:
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dca05;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_1006dca05:
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_31 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dca34;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_1006dca34:
    if (param_4 == 0) goto LAB_1006dd163;
    pcVar7 = *(char **)(lVar2 + 0x30);
    if (pcVar7 != (char *)0x0) {
      _strlen(pcVar7);
    }
    QString::fromUtf8_helper((char *)&local_e8,(int)pcVar7);
    QString::normalized(&local_e0,&local_e8,1,0);
    local_f0 = (QArrayData *)QString::fromAscii_helper("/Documents/",0xb);
    local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_e0;
    if (1 < *(int *)local_e0 + 1U) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + 1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
    }
    QString::append(&local_d8);
    QString::fromUtf8_helper((char *)&local_100,0x9f6c07);
    QString::normalized(&local_f8,&local_100,1,0);
    local_d0.field0_0x0 = local_d8.field0_0x0;
    if (1 < *(int *)local_d8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
      local_31 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_d0);
    FUN_10000c490(param_4,&local_d0);
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_31 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dcb72;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_1006dcb72:
    if (*(int *)local_f8 != -1) {
      if (*(int *)local_f8 != 0) {
        LOCK();
        *(int *)local_f8 = *(int *)local_f8 + -1;
        local_31 = *(int *)local_f8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dcba8;
      }
      QArrayData::deallocate(local_f8,2,8);
    }
LAB_1006dcba8:
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dcbde;
      }
      QArrayData::deallocate(local_100,2,8);
    }
LAB_1006dcbde:
    if (*(int *)local_d8.field0_0x0 != -1) {
      if (*(int *)local_d8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
        local_31 = *(int *)local_d8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dcc14;
      }
      QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
    }
LAB_1006dcc14:
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_31 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dcc4a;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1006dcc4a:
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dcc80;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_1006dcc80:
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dd163;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
    goto LAB_1006dd163;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("PARALLELS_CONFIG_DIR",0x14);
  FUN_1007d7c60(&local_40,&local_48);
  QString::operator=(param_1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006dcd89;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1006dcd89:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006dcdb9;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006dcdb9:
  if (*(int *)(param_1->field0_0x0 + 4) != 0) {
    QString::toUtf8();
    FUN_1008e3970("","cmn_utils",0,"PVS_VMCATALOGUE_DIR_ENV: was set from enviroment: \'%s\'",
                  local_50 + *(long *)(local_50 + 0x10));
    if (*(int *)local_50 == -1) {
      return param_1;
    }
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,1,8);
    return param_1;
  }
  local_58.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/Users/Shared",0xd);
  QString::operator=(param_1,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006dcea0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006dcea0:
  cVar1 = FUN_1006d80e0();
  if ((cVar1 != '\0') || (uVar6 = FUN_1006d65b0(), (uVar6 & 2) != 0)) {
    FUN_1006da0c0(&local_60);
    if (*(int *)(local_60 + 4) != 0) {
      local_78 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
      QString::arg(&local_70,&local_78,&local_60,0,0x20);
      local_80 = (QArrayData *)QString::fromAscii_helper("Shared",6);
      QString::arg(&local_68,&local_70,&local_80,0,0x20);
      QString::operator=(param_1,&local_68);
      if (*(int *)local_68.field0_0x0 != -1) {
        if (*(int *)local_68.field0_0x0 != 0) {
          LOCK();
          *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
          local_31 = *(int *)local_68.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006dcf65;
        }
        QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
      }
LAB_1006dcf65:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006dcf95;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1006dcf95:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006dcfc5;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1006dcfc5:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006dcff5;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
LAB_1006dcff5:
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006dd025;
      }
      QArrayData::deallocate(local_60,2,8);
    }
  }
LAB_1006dd025:
  pQVar4 = (QArrayData *)QString::fromAscii_helper("/",1);
  QString::fromUtf8_helper((char *)&local_98,0x9f6c07);
  QString::normalized(&local_90,&local_98,1,0);
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_31 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  local_88.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar4;
  QString::append(&local_88);
  QString::append(param_1);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006dd0cc;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1006dd0cc:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006dd102;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1006dd102:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006dd138;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_1006dd138:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006dd163;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006dd163:
  QDir::fromNativeSeparators(&local_108);
  QString::operator=(param_1,&local_108);
  if (*(int *)local_108.field0_0x0 != -1) {
    if (*(int *)local_108.field0_0x0 != 0) {
      LOCK();
      *(int *)local_108.field0_0x0 = *(int *)local_108.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_108.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_108.field0_0x0,2,8);
  }
  return param_1;
}

