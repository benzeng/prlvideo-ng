
undefined8 * FUN_1003bb600(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  QString *pQVar7;
  undefined8 uVar8;
  QVariant *this;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  Data_conflict local_148;
  undefined4 local_140;
  QArrayData *local_138;
  QVariant local_130;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  int *local_108;
  int *local_100;
  int *local_f8;
  undefined4 local_f0;
  int *local_e8;
  QArrayData *local_e0;
  QVariant local_d8;
  int *local_c8;
  int *local_c0;
  int *local_b8;
  undefined4 local_b0;
  int *local_a8;
  QVariant local_a0;
  QVariant local_90;
  undefined1 local_80 [8];
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15d0;
  local_58 = (Data *)*param_2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar9 = (long)*(int *)(local_58 + 8);
      lVar5 = *param_2;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar9 * 8) &&
         (lVar12 = *(int *)(local_58 + 0xc) - lVar9,
         lVar12 != 0 && lVar9 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar9 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      QObject::objectName();
      local_68 = (QArrayData *)QString::fromAscii_helper("qt_",3);
      cVar3 = QString::startsWith(&local_60,&local_68,1);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003bb73b;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1003bb73b:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003bb76b;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1003bb76b:
      if (cVar3 == '\0') {
        QObject::property((char *)&local_78);
        cVar3 = QVariant::toBool();
        QVariant::~QVariant(&local_78);
        if (cVar3 == '\0') {
          QObject::property((char *)&local_90);
          QVariant::toStringList();
          cVar3 = FUN_1003bc0b0(local_80);
          FUN_100039a80(local_80);
          QVariant::~QVariant(&local_90);
          if (cVar3 != '\0') {
            QObject::property((char *)&local_a0);
            QVariant::toStringList();
            local_c8 = local_a8;
            if (*local_a8 != -1) {
              if (*local_a8 == 0) {
                QListData::detach((int)&local_c8);
                iVar4 = local_c8[2];
                if (iVar4 != local_c8[3]) {
                  piVar10 = local_a8 + (long)local_a8[2] * 2 + 4;
                  piVar11 = local_c8 + (long)iVar4 * 2 + 4;
                  lVar5 = (long)local_c8[3] * 8 + (long)iVar4 * -8;
                  do {
                    piVar13 = *(int **)piVar10;
                    *(int **)piVar11 = piVar13;
                    if (1 < *piVar13 + 1U) {
                      LOCK();
                      *piVar13 = *piVar13 + 1;
                      local_31 = *piVar13 != 0;
                      UNLOCK();
                    }
                    piVar11 = piVar11 + 2;
                    piVar10 = piVar10 + 2;
                    lVar5 = lVar5 + -8;
                  } while (lVar5 != 0);
                }
              }
              else {
                LOCK();
                *local_a8 = *local_a8 + 1;
                local_31 = *local_a8 != 0;
                UNLOCK();
              }
            }
            piVar10 = local_c8 + (long)local_c8[2] * 2 + 4;
            local_b8 = local_c8 + (long)local_c8[3] * 2 + 4;
            local_c0 = piVar10;
            if (local_c8[2] != local_c8[3]) {
              do {
                local_b0 = 1;
                local_c0 = piVar10;
                QString::toLatin1();
                QObject::property((char *)&local_d8);
                if (*(int *)local_e0 != -1) {
                  if (*(int *)local_e0 != 0) {
                    LOCK();
                    *(int *)local_e0 = *(int *)local_e0 + -1;
                    local_31 = *(int *)local_e0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_1003bb963;
                  }
                  QArrayData::deallocate(local_e0,1,8);
                }
LAB_1003bb963:
                QVariant::toStringList();
                local_108 = local_e8;
                if (*local_e8 != -1) {
                  if (*local_e8 == 0) {
                    QListData::detach((int)&local_108);
                    iVar4 = local_108[2];
                    if (iVar4 != local_108[3]) {
                      piVar11 = local_e8 + (long)local_e8[2] * 2 + 4;
                      piVar13 = local_108 + (long)iVar4 * 2 + 4;
                      lVar5 = (long)local_108[3] * 8 + (long)iVar4 * -8;
                      do {
                        piVar1 = *(int **)piVar11;
                        *(int **)piVar13 = piVar1;
                        if (1 < *piVar1 + 1U) {
                          LOCK();
                          *piVar1 = *piVar1 + 1;
                          local_31 = *piVar1 != 0;
                          UNLOCK();
                        }
                        piVar13 = piVar13 + 2;
                        piVar11 = piVar11 + 2;
                        lVar5 = lVar5 + -8;
                      } while (lVar5 != 0);
                    }
                  }
                  else {
                    LOCK();
                    *local_e8 = *local_e8 + 1;
                    local_31 = *local_e8 != 0;
                    UNLOCK();
                  }
                }
                local_100 = local_108 + (long)local_108[2] * 2 + 4;
                local_f8 = local_108 + (long)local_108[3] * 2 + 4;
                if (local_108[2] != local_108[3]) {
                  do {
                    local_f0 = 1;
                    local_110.field0_0x0 = *(QTypedArrayData<unsigned_short> **)local_100;
                    if (1 < *(int *)local_110.field0_0x0 + 1U) {
                      LOCK();
                      *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + 1;
                      local_31 = *(int *)local_110.field0_0x0 != 0;
                      UNLOCK();
                    }
                    pcVar2 = *(char **)PTR_DynamicPathPart_1021e1568;
                    iVar4 = -1;
                    if (pcVar2 != (char *)0x0) {
                      sVar6 = _strlen(pcVar2);
                      iVar4 = (int)sVar6;
                    }
                    local_118 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar4);
                    iVar4 = QString::indexOf(&local_110,&local_118,0,1);
                    if (*(int *)local_118 != -1) {
                      if (*(int *)local_118 != 0) {
                        LOCK();
                        *(int *)local_118 = *(int *)local_118 + -1;
                        local_31 = *(int *)local_118 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1003bbafb;
                      }
                      QArrayData::deallocate(local_118,2,8);
                    }
LAB_1003bbafb:
                    if (iVar4 == -1) {
LAB_1003bbc3d:
                      uVar8 = FUN_1003ae480(param_1,piVar10);
                      this = (QVariant *)FUN_1002edf40(uVar8,&local_110);
                      local_140 = 0x80000000;
                      local_148.field7 = 0;
                      QVariant::operator=(this,(QVariant *)&local_148);
                      QVariant::~QVariant((QVariant *)&local_148);
                    }
                    else {
                      QObject::property((char *)&local_130);
                      QVariant::toString();
                      QVariant::~QVariant(&local_130);
                      if (*(int *)(local_120 + 4) == 0) {
                        iVar4 = 0x1b;
                        FUN_100df99c0("","prl_client_app",0,
                                      "(!)Error: Failed to init widget value path. Dynamic part of path absent."
                                     );
                      }
                      else {
                        pcVar2 = *(char **)PTR_DynamicPathPart_1021e1568;
                        iVar4 = -1;
                        if (pcVar2 != (char *)0x0) {
                          sVar6 = _strlen(pcVar2);
                          iVar4 = (int)sVar6;
                        }
                        local_138 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar4);
                        pQVar7 = (QString *)QString::replace(&local_110,&local_138,&local_120,1);
                        QString::operator=(&local_110,pQVar7);
                        iVar4 = 0;
                        if (*(int *)local_138 != -1) {
                          if (*(int *)local_138 != 0) {
                            LOCK();
                            *(int *)local_138 = *(int *)local_138 + -1;
                            local_31 = *(int *)local_138 != 0;
                            UNLOCK();
                            iVar4 = 0;
                            if ((bool)local_31) goto LAB_1003bbc03;
                          }
                          QArrayData::deallocate(local_138,2,8);
                          iVar4 = 0;
                        }
                      }
LAB_1003bbc03:
                      if (*(int *)local_120 != -1) {
                        if (*(int *)local_120 != 0) {
                          LOCK();
                          *(int *)local_120 = *(int *)local_120 + -1;
                          local_31 = *(int *)local_120 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_1003bbc39;
                        }
                        QArrayData::deallocate(local_120,2,8);
                      }
LAB_1003bbc39:
                      if (iVar4 == 0) goto LAB_1003bbc3d;
                    }
                    if (*(int *)local_110.field0_0x0 != -1) {
                      if (*(int *)local_110.field0_0x0 != 0) {
                        LOCK();
                        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
                        local_31 = *(int *)local_110.field0_0x0 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1003bbcbf;
                      }
                      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
                    }
LAB_1003bbcbf:
                    local_100 = local_100 + 2;
                  } while (local_100 != local_f8);
                }
                local_f0 = 1;
                FUN_100039a80(&local_108);
                FUN_100039a80(&local_e8);
                QVariant::~QVariant(&local_d8);
                piVar10 = local_c0 + 2;
                local_c0 = piVar10;
              } while (piVar10 != local_b8);
            }
            local_b0 = 1;
            FUN_100039a80(&local_c8);
            FUN_100039a80(&local_a8);
            QVariant::~QVariant(&local_a0);
          }
        }
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return param_1;
}

