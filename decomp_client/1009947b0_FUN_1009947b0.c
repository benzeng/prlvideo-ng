
undefined8 * FUN_1009947b0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  QString *pQVar4;
  QArrayData *pQVar5;
  QRegExp *pQVar6;
  uint uVar7;
  QArrayData *local_d8;
  QString local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QString local_b8;
  QDir local_b0 [8];
  QString local_a8;
  QArrayData *local_a0;
  QString local_98;
  QLocale local_90 [8];
  QString local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  uint local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  bool local_21;
  
  local_5c = param_2;
  if ((DAT_10227dda0 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_10227dda0), iVar2 != 0)) {
    DAT_10227dd98 = (undefined8 *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_100995670,&DAT_10227dd98,0x100000000);
    ___cxa_guard_release(&DAT_10227dda0);
  }
  if (*(uint *)(DAT_10227dd98 + 4) != 0) {
    uVar7 = *(uint *)((long)DAT_10227dd98 + 0x24) ^ param_2;
    for (puVar3 = *(undefined8 **)
                   (DAT_10227dd98[1] + ((ulong)uVar7 % (ulong)*(uint *)(DAT_10227dd98 + 4)) * 8);
        puVar3 != DAT_10227dd98; puVar3 = (undefined8 *)*puVar3) {
      if ((*(uint *)(puVar3 + 1) == uVar7) && (*(uint *)((long)puVar3 + 0xc) == param_2)) {
        if (puVar3 != DAT_10227dd98) {
          puVar3 = (undefined8 *)FUN_1009956b0(&DAT_10227dd98,&local_5c);
          piVar1 = (int *)*puVar3;
          *param_1 = piVar1;
          if (*piVar1 + 1U < 2) {
            return param_1;
          }
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          return param_1;
        }
        break;
      }
    }
  }
  switch(param_2) {
  case 0:
    pQVar4 = (QString *)FUN_1009956b0(&DAT_10227dd98,&local_5c);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
    FUN_100993330(&local_70);
    QString::operator=(pQVar4,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_21 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if (local_21) goto LAB_100994919;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100994919:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_21 = *(int *)pQVar5 != 0;
        UNLOCK();
        goto LAB_100994b73;
      }
LAB_100994b79:
      QArrayData::deallocate(pQVar5,2,8);
    }
    break;
  case 1:
    pQVar4 = (QString *)FUN_1009956b0(&DAT_10227dd98,&local_5c);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
    FUN_100993330(&local_78);
    QString::operator=(pQVar4,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_21 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if (local_21) goto LAB_1009949a7;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_1009949a7:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_21 = *(int *)pQVar5 != 0;
        UNLOCK();
        goto LAB_100994b73;
      }
      goto LAB_100994b79;
    }
    break;
  case 2:
    pQVar4 = (QString *)FUN_1009956b0(&DAT_10227dd98,&local_5c);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
    FUN_100993330(&local_58);
    local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
    if (1 < *(int *)local_58 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_50,0x1db946c);
    QString::append(&local_68);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if (local_21) goto LAB_100994a64;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100994a64:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_21 = *(int *)local_58 != 0;
        UNLOCK();
        if (local_21) goto LAB_100994a94;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_100994a94:
    QString::operator=(pQVar4,&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_21 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if (local_21) goto LAB_100994ad0;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100994ad0:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 == 0) goto LAB_100994b79;
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_21 = *(int *)pQVar5 != 0;
      UNLOCK();
LAB_100994b73:
      if (local_21 == false) goto LAB_100994b79;
    }
    break;
  case 3:
    pQVar4 = (QString *)FUN_1009956b0(&DAT_10227dd98,&local_5c);
    pQVar5 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
    FUN_100993330(&local_80);
    QString::operator=(pQVar4,&local_80);
    if (*(int *)local_80.field0_0x0 != -1) {
      if (*(int *)local_80.field0_0x0 != 0) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
        local_21 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
        if (local_21) goto LAB_100994b5e;
      }
      QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    }
LAB_100994b5e:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_21 = *(int *)pQVar5 != 0;
        UNLOCK();
        goto LAB_100994b73;
      }
      goto LAB_100994b79;
    }
    break;
  default:
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  pQVar6 = (QRegExp *)FUN_1009956b0(&DAT_10227dd98,&local_5c);
  QLocale::system();
  QLocale::name();
  QLocale::~QLocale(local_90);
  iVar2 = QString::compare_helper
                    ((QArrayData *)(local_88.field0_0x0 + *(long *)(local_88.field0_0x0 + 0x10)),
                     *(int *)(local_88.field0_0x0 + 4),"en_US",0xffffffff,1);
  if (iVar2 == 0) {
    QString::fromUtf8_helper((char *)&local_48,0x1e32bbf);
    QString::operator=(&local_88,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if (local_21) goto LAB_100994c40;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_100994c40:
  QString::fromUtf8_helper((char *)&local_40,0x1ef7743);
  QString::append(&local_88);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994c92;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100994c92:
  local_a0 = (QArrayData *)QString::fromAscii_helper("\\{locale://([^}]*)\\}",0x14);
  QRegExp::QRegExp((QRegExp *)&local_98,&local_a0,1,0);
  local_a8.field0_0x0 = local_88.field0_0x0;
  if (1 < *(int *)local_88.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + 1;
    local_21 = *(int *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e32bdc);
  QString::append(&local_a8);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994d35;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100994d35:
  QString::replace(pQVar6,&local_98);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_21 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994d81;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_100994d81:
  QRegExp::~QRegExp((QRegExp *)&local_98);
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_21 = *(int *)local_a0 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994dc3;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_100994dc3:
  QCoreApplication::applicationDirPath();
  QDir::QDir(local_b0,&local_b8);
  if (*(int *)local_b8.field0_0x0 != -1) {
    if (*(int *)local_b8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
      local_21 = *(int *)local_b8.field0_0x0 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994e18;
    }
    QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
  }
LAB_100994e18:
  QDir::cdUp();
  QDir::cdUp();
  local_c8 = (QArrayData *)QString::fromAscii_helper("\\{bundle://([^}]*)\\}",0x14);
  QRegExp::QRegExp((QRegExp *)&local_c0,&local_c8,1,0);
  QDir::absolutePath();
  local_d0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_d8;
  if (1 < *(int *)local_d8 + 1U) {
    LOCK();
    *(int *)local_d8 = *(int *)local_d8 + 1;
    local_21 = *(int *)local_d8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e32bdc);
  QString::append(&local_d0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994ee9;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100994ee9:
  QString::replace(pQVar6,&local_c0);
  if (*(int *)local_d0.field0_0x0 != -1) {
    if (*(int *)local_d0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
      local_21 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994f35;
    }
    QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
  }
LAB_100994f35:
  if (*(int *)local_d8 != -1) {
    if (*(int *)local_d8 != 0) {
      LOCK();
      *(int *)local_d8 = *(int *)local_d8 + -1;
      local_21 = *(int *)local_d8 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994f6b;
    }
    QArrayData::deallocate(local_d8,2,8);
  }
LAB_100994f6b:
  QRegExp::~QRegExp((QRegExp *)&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if (local_21) goto LAB_100994fad;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_100994fad:
  piVar1 = *(int **)pQVar6;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_21 = *piVar1 != 0;
    UNLOCK();
  }
  QDir::~QDir(local_b0);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_88.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = false;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
  return param_1;
}

