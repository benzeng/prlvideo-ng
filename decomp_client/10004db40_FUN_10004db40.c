
undefined1 FUN_10004db40(QString *param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  undefined1 uVar6;
  QArrayData *local_e8;
  QFileInfo local_e0 [8];
  QArrayData *local_d8;
  QString local_d0;
  QString local_c8;
  QString local_c0;
  QString local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QFile local_a0 [16];
  QTypedArrayData<unsigned_short> *local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QString local_68;
  QTypedArrayData<unsigned_short> *local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar3 = QDir::separator();
  local_60 = param_1->field0_0x0;
  if (1 < *(uint *)local_60 + 1) {
    LOCK();
    *(uint *)local_60 = *(uint *)local_60 + 1;
    local_29 = *(uint *)local_60 != 0;
    UNLOCK();
  }
  uVar5 = *(uint *)(local_60 + 4);
  if ((1 < *(uint *)local_60) || ((*(uint *)(local_60 + 8) & 0x7fffffff) < uVar5 + 2)) {
    QString::reallocData((uint)&local_60,SUB41(uVar5 + 2,0));
    uVar5 = *(uint *)(local_60 + 4);
  }
  *(uint *)(local_60 + 4) = uVar5 + 1;
  *(undefined2 *)(local_60 + (long)(int)uVar5 * 2 + *(long *)(local_60 + 0x10)) = uVar3;
  *(undefined2 *)(local_60 + (long)(int)*(uint *)(local_60 + 4) * 2 + *(long *)(local_60 + 0x10)) =
       0;
  if (1 < *(uint *)local_60 + 1) {
    LOCK();
    *(uint *)local_60 = *(uint *)local_60 + 1;
    local_29 = *(uint *)local_60 != 0;
    UNLOCK();
  }
  local_58.field0_0x0 = local_60;
  QString::fromUtf8_helper((char *)&local_50,0x1db7073);
  QString::append(&local_58);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004dc38;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10004dc38:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004dc68;
    }
    QArrayData::deallocate((QArrayData *)local_60,2,8);
  }
LAB_10004dc68:
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QDir::QDir((QDir *)&local_68,&local_70);
  cVar2 = QDir::mkpath(&local_68);
  QDir::~QDir((QDir *)&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004dcc8;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_10004dcc8:
  if (cVar2 == '\0') {
    if (DAT_10230ffd0 < 1) {
      uVar6 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",1,"Warning: failed to create path \"%s\"",
                    local_78 + *(long *)(local_78 + 0x10));
      if (*(int *)local_78 == -1) {
        uVar6 = 0;
      }
      else {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_29 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_29) {
            uVar6 = 0;
            goto LAB_10004e34d;
          }
        }
        QArrayData::deallocate(local_78,1,8);
        uVar6 = 0;
      }
    }
    goto LAB_10004e34d;
  }
  uVar3 = QDir::separator();
  local_90 = local_58.field0_0x0;
  if (1 < *(uint *)local_58.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_58.field0_0x0 = *(uint *)local_58.field0_0x0 + 1;
    local_29 = *(uint *)local_58.field0_0x0 != 0;
    UNLOCK();
  }
  uVar5 = *(uint *)(local_58.field0_0x0 + 4);
  if ((1 < *(uint *)local_58.field0_0x0) ||
     ((*(uint *)(local_58.field0_0x0 + 8) & 0x7fffffff) < uVar5 + 2)) {
    QString::reallocData((uint)&local_90,SUB41(uVar5 + 2,0));
    uVar5 = *(uint *)(local_90 + 4);
  }
  *(uint *)(local_90 + 4) = uVar5 + 1;
  *(undefined2 *)(local_90 + (long)(int)uVar5 * 2 + *(long *)(local_90 + 0x10)) = uVar3;
  *(undefined2 *)(local_90 + (long)(int)*(uint *)(local_90 + 4) * 2 + *(long *)(local_90 + 0x10)) =
       0;
  if (1 < *(uint *)local_90 + 1) {
    LOCK();
    *(uint *)local_90 = *(uint *)local_90 + 1;
    local_29 = *(uint *)local_90 != 0;
    UNLOCK();
  }
  local_88.field0_0x0 = local_90;
  QString::append(&local_88);
  local_80.field0_0x0 = local_88.field0_0x0;
  if (1 < *(uint *)local_88.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_88.field0_0x0 = *(uint *)local_88.field0_0x0 + 1;
    local_29 = *(uint *)local_88.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1db70a2);
  QString::append(&local_80);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004ddde;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10004ddde:
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_29 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004de0e;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_10004de0e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004de44;
    }
    QArrayData::deallocate((QArrayData *)local_90,2,8);
  }
LAB_10004de44:
  QFile::QFile(local_a0,&local_80);
  cVar2 = QFile::open(local_a0,0x1a);
  if (cVar2 == '\0') {
    if (DAT_10230ffd0 < 1) {
      uVar6 = 0;
    }
    else {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",1,"Warning: failed to open file \"%s\"",
                    local_a8 + *(long *)(local_a8 + 0x10));
      if (*(int *)local_a8 == -1) {
        uVar6 = 0;
      }
      else {
        if (*(int *)local_a8 != 0) {
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          local_29 = *(int *)local_a8 != 0;
          UNLOCK();
          if ((bool)local_29) {
            uVar6 = 0;
            goto LAB_10004e311;
          }
        }
        QArrayData::deallocate(local_a8,1,8);
        uVar6 = 0;
      }
    }
  }
  else {
    QFileInfo::QFileInfo(local_e0,param_1);
    QFileInfo::completeBaseName();
    QString::fromUtf8_helper((char *)&local_d0,0x1db6743);
    QString::append(&local_d0);
    local_c8.field0_0x0 = local_d0.field0_0x0;
    if (1 < *(int *)local_d0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
      local_29 = *(int *)local_d0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_40,0x1db70cd);
    QString::append(&local_c8);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004df2e;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10004df2e:
    local_c0.field0_0x0 = local_c8.field0_0x0;
    if (1 < *(int *)local_c8.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
      local_29 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_c0);
    local_b8.field0_0x0 = local_c0.field0_0x0;
    if (1 < *(int *)local_c0.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
      local_29 = *(int *)local_c0.field0_0x0 != 0;
      UNLOCK();
    }
    QString::fromUtf8_helper((char *)&local_38,0x1db70d3);
    QString::append(&local_b8);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004dfd0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10004dfd0:
    QString::toUtf8();
    if (*(int *)local_b8.field0_0x0 != -1) {
      if (*(int *)local_b8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
        local_29 = *(int *)local_b8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004e019;
      }
      QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
    }
LAB_10004e019:
    if (*(int *)local_c0.field0_0x0 != -1) {
      if (*(int *)local_c0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
        local_29 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004e04f;
      }
      QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
    }
LAB_10004e04f:
    if (*(int *)local_c8.field0_0x0 != -1) {
      if (*(int *)local_c8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
        local_29 = *(int *)local_c8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004e085;
      }
      QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
    }
LAB_10004e085:
    if (*(int *)local_d0.field0_0x0 != -1) {
      if (*(int *)local_d0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + -1;
        local_29 = *(int *)local_d0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004e0bb;
      }
      QArrayData::deallocate((QArrayData *)local_d0.field0_0x0,2,8);
    }
LAB_10004e0bb:
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_29 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004e0f1;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10004e0f1:
    QFileInfo::~QFileInfo(local_e0);
    iVar1 = *(int *)(local_b0 + 4);
    lVar4 = QIODevice::write((char *)local_a0,(longlong)(local_b0 + *(long *)(local_b0 + 0x10)));
    uVar6 = 1;
    if (iVar1 != lVar4) {
      if (0 < DAT_10230ffd0) {
        QString::toUtf8();
        FUN_100df99c0("SGASMGMT","prl_client_app",1,"Warning: file \"%s\" write failed",
                      local_e8 + *(long *)(local_e8 + 0x10));
        if (*(int *)local_e8 != -1) {
          if (*(int *)local_e8 != 0) {
            LOCK();
            *(int *)local_e8 = *(int *)local_e8 + -1;
            local_29 = *(int *)local_e8 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_10004e1a8;
          }
          QArrayData::deallocate(local_e8,1,8);
        }
      }
LAB_10004e1a8:
      uVar6 = 0;
    }
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_29 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10004e311;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
  }
LAB_10004e311:
  QFile::~QFile(local_a0);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10004e34d;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10004e34d:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return uVar6;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return uVar6;
}

