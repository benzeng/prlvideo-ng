
/* CBaseNode::fromString(QString, QString, bool, QFile*, QString*, int*, int*) */

undefined8 __thiscall
CBaseNode::fromString
          (CBaseNode *this,QString param_1,QString param_2,bool param_3,QFile *param_4,
          QString *param_5,int *param_6,int *param_7)

{
  code *pcVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 uVar11;
  QArrayData *pQVar12;
  bool bVar13;
  QDomNode local_110 [8];
  QArrayData *local_108;
  QVariant local_100 [16];
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  int *local_d0;
  int *local_c8;
  int *local_c0;
  uint local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  int local_60;
  int local_5c;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  QDomDocument::QDomDocument((QDomDocument *)&local_50);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_5c = 0;
  local_60 = 0;
  if (*(undefined **)(this + 0x30) != PTR_shared_null_100ba20d0) {
    local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(this + 0x30),&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10000e981;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
  }
LAB_10000e981:
  if (*(undefined **)(this + 0x10) != PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(this + 0x10),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10000e9e4;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_10000e9e4:
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 8) = 0x80000036;
  *(undefined4 *)(this + 0x20) = 0x80000036;
  if (param_4 == (QFile *)0x0) {
    cVar4 = QDomDocument::setContent
                      (&local_50,SUB81(param_1.field0_0x0,0),(QString *)0x0,(int *)&local_58,
                       &local_5c);
  }
  else {
    cVar4 = QDomDocument::setContent
                      ((QIODevice *)&local_50,SUB81(param_4,0),(QString *)0x0,(int *)&local_58,
                       &local_5c);
  }
  if (cVar4 != '\0') {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x20) = 0;
    local_90 = (QArrayData *)PTR_shared_null_100ba20d0;
    QDomNode::firstChildElement(&local_88);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10000eaac;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_10000eaac:
LAB_10000eac0:
    do {
      cVar4 = QDomNode::isNull();
      if (cVar4 != '\0') goto LAB_10000ed60;
      pcVar1 = *(code **)(*(long *)this + 8);
      local_98 = *(QArrayData **)param_2.field0_0x0;
      if (1 < *(int *)local_98 + 1U) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + 1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
      }
      iVar5 = (*pcVar1)(this,(QDomElement *)&local_88,&local_98,param_3);
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_31 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10000eb45;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_10000eb45:
      puVar3 = PTR_shared_null_100ba20d0;
      if (iVar5 == 0) {
        local_a8 = (QArrayData *)QString::fromAscii_helper("id",2);
        local_b0 = (QArrayData *)QString::fromAscii_helper("-1",2);
        QDomElement::attribute(&local_a0,&local_88);
        uVar6 = QString::toInt((bool *)&local_a0,0);
        *(undefined4 *)(this + 0x58) = uVar6;
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_31 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10000ee15;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10000ee15:
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            local_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10000ee4b;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_10000ee4b:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10000ee81;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
LAB_10000ee81:
        local_d0 = *(int **)(this + 0x78);
        if (*local_d0 != -1) {
          if (*local_d0 == 0) {
            QListData::detach((int)&local_d0);
            iVar5 = local_d0[2];
            if (iVar5 != local_d0[3]) {
              puVar9 = (undefined8 *)
                       (*(long *)(this + 0x78) + 0x10 +
                       (long)*(int *)(*(long *)(this + 0x78) + 8) * 8);
              piVar10 = local_d0 + (long)iVar5 * 2 + 4;
              lVar7 = (long)local_d0[3] * 8 + (long)iVar5 * -8;
              do {
                piVar2 = (int *)*puVar9;
                *(int **)piVar10 = piVar2;
                if (1 < *piVar2 + 1U) {
                  LOCK();
                  *piVar2 = *piVar2 + 1;
                  local_31 = *piVar2 != 0;
                  UNLOCK();
                }
                piVar10 = piVar10 + 2;
                puVar9 = puVar9 + 1;
                lVar7 = lVar7 + -8;
              } while (lVar7 != 0);
            }
          }
          else {
            LOCK();
            *local_d0 = *local_d0 + 1;
            local_31 = *local_d0 != 0;
            UNLOCK();
          }
        }
        local_c8 = local_d0 + (long)local_d0[2] * 2 + 4;
        local_c0 = local_d0 + (long)local_d0[3] * 2 + 4;
        local_b8 = 1;
        if (local_d0[2] != local_d0[3]) {
          do {
            local_d8 = *(QArrayData **)local_c8;
            if (1 < *(int *)local_d8 + 1U) {
              LOCK();
              *(int *)local_d8 = *(int *)local_d8 + 1;
              local_31 = *(int *)local_d8 != 0;
              UNLOCK();
            }
            if (local_b8 != 0) {
              if (0 < DAT_1011b55f8) {
                QString::toUtf8();
                pQVar12 = local_e0 + *(long *)(local_e0 + 0x10);
                pcVar1 = *(code **)(*(long *)this + 0x40);
                local_108 = local_d8;
                if (1 < *(int *)local_d8 + 1U) {
                  LOCK();
                  *(int *)local_d8 = *(int *)local_d8 + 1;
                  local_31 = *(int *)local_d8 != 0;
                  UNLOCK();
                }
                (*pcVar1)(local_100,this,&local_108);
                QVariant::toString();
                QString::toUtf8();
                FUN_1008e3970("","vm",1,"LoadedDoc: path: \'%s\', value: \'%s\'",pQVar12,
                              local_e8 + *(long *)(local_e8 + 0x10));
                if (*(int *)local_e8 != -1) {
                  if (*(int *)local_e8 != 0) {
                    LOCK();
                    *(int *)local_e8 = *(int *)local_e8 + -1;
                    local_31 = *(int *)local_e8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10000f076;
                  }
                  QArrayData::deallocate(local_e8,1,8);
                }
LAB_10000f076:
                if (*(int *)local_f0 != -1) {
                  if (*(int *)local_f0 != 0) {
                    LOCK();
                    *(int *)local_f0 = *(int *)local_f0 + -1;
                    local_31 = *(int *)local_f0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10000f0ac;
                  }
                  QArrayData::deallocate(local_f0,2,8);
                }
LAB_10000f0ac:
                QVariant::~QVariant(local_100);
                if (*(int *)local_108 != -1) {
                  if (*(int *)local_108 != 0) {
                    LOCK();
                    *(int *)local_108 = *(int *)local_108 + -1;
                    local_31 = *(int *)local_108 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10000f0ea;
                  }
                  QArrayData::deallocate(local_108,2,8);
                }
LAB_10000f0ea:
                if (*(int *)local_e0 != -1) {
                  if (*(int *)local_e0 != 0) {
                    LOCK();
                    *(int *)local_e0 = *(int *)local_e0 + -1;
                    local_31 = *(int *)local_e0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_10000f120;
                  }
                  QArrayData::deallocate(local_e0,1,8);
                }
              }
LAB_10000f120:
              local_b8 = 0;
            }
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_10000f160;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
LAB_10000f160:
            local_c8 = local_c8 + 2;
            uVar8 = local_b8 ^ 1;
            bVar13 = local_b8 != 1;
            local_b8 = uVar8;
          } while ((bVar13) && (local_c8 != local_c0));
        }
        uVar11 = 0;
        FUN_100013180(&local_d0);
        goto LAB_10000f1a3;
      }
      QDomNode::nextSiblingElement((QString *)local_110);
      QDomElement::operator=((QDomElement *)&local_88,(QDomElement *)local_110);
      QDomNode::~QDomNode(local_110);
      if (*(int *)puVar3 != -1) {
        if (*(int *)puVar3 != 0) {
          LOCK();
          *(int *)puVar3 = *(int *)puVar3 + -1;
          local_31 = *(int *)puVar3 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10000eac0;
        }
        QArrayData::deallocate((QArrayData *)puVar3,2,8);
      }
    } while( true );
  }
  local_80 = (QArrayData *)QString::fromAscii_helper("Error: %1, line: %2, column: %3.\n",0x21);
  QString::arg(&local_78,&local_80,&local_58,0,0x20);
  QString::arg(&local_70,&local_78,(long)local_5c,0,10,0x20);
  QString::arg(&local_68,&local_70,(long)local_60,0,10,0x20);
  QString::operator=((QString *)(this + 0x30),&local_68);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_31 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10000ec74;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_10000ec74:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10000eca4;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10000eca4:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10000ecd4;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10000ecd4:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10000ed04;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10000ed04:
  if (param_5 != (QString *)0x0) {
    QString::operator=(param_5,&local_58);
  }
  if (param_6 != (int *)0x0) {
    *param_6 = local_5c;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_60;
  }
  QString::operator=((QString *)(this + 0x10),&local_58);
  *(int *)(this + 0x18) = local_5c;
  *(int *)(this + 0x1c) = local_60;
  uVar11 = 0x80000036;
  goto LAB_10000f1ac;
LAB_10000ed60:
  *(undefined4 *)(this + 8) = 0x80000036;
  *(undefined4 *)(this + 0x20) = 0x80000036;
  uVar11 = 0x80000036;
LAB_10000f1a3:
  QDomNode::~QDomNode((QDomNode *)&local_88);
LAB_10000f1ac:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10000f1dc;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10000f1dc:
  QDomDocument::~QDomDocument((QDomDocument *)&local_50);
  return uVar11;
}

