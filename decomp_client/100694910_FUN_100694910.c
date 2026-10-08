
void FUN_100694910(undefined8 *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  QTextStream *pQVar7;
  long lVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  QArrayData *pQVar12;
  bool bVar13;
  undefined1 local_180 [12];
  undefined1 local_170 [12];
  undefined1 local_160 [12];
  undefined1 local_150 [12];
  undefined1 local_140 [12];
  undefined1 local_130 [12];
  QArrayData *local_120;
  QObject local_118 [16];
  QTextStream *local_108;
  QDebug local_100 [8];
  undefined1 local_f8 [32];
  QVariant local_d8;
  QTextStream *local_c8;
  QDebug local_c0 [8];
  int *local_b8;
  int *local_b0;
  int *local_a8;
  uint local_a0;
  int *local_98;
  QTextStream *local_90;
  QArrayData *local_88;
  QString local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  puVar3 = PTR_shared_null_1021e1288;
  local_88 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar7 = operator_new(0x50);
  QTextStream::QTextStream(pQVar7,&local_88,2);
  *(undefined **)(pQVar7 + 0x10) = puVar3;
  *(undefined4 *)(pQVar7 + 0x18) = 1;
  *(undefined4 *)(pQVar7 + 0x1c) = 0;
  pQVar7[0x20] = (QTextStream)0x1;
  pQVar7[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar7 + 0x28) = 2;
  *(undefined8 *)(pQVar7 + 0x44) = 0;
  *(undefined8 *)(pQVar7 + 0x3c) = 0;
  *(undefined8 *)(pQVar7 + 0x34) = 0;
  *(undefined8 *)(pQVar7 + 0x2c) = 0;
  local_90 = pQVar7;
  QString::fromUtf8_helper((char *)&local_80,0x1e0e5b4);
  QTextStream::operator<<(pQVar7,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006949ed;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1006949ed:
  if (local_90[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_90,' ');
  }
  QObject::dynamicPropertyNames();
  local_b8 = local_98;
  if (*local_98 != -1) {
    if (*local_98 == 0) {
      QListData::detach((int)&local_b8);
      iVar5 = local_b8[2];
      if (iVar5 != local_b8[3]) {
        local_98 = local_98 + (long)local_98[2] * 2 + 4;
        piVar10 = local_b8 + (long)iVar5 * 2 + 4;
        lVar8 = (long)local_b8[3] * 8 + (long)iVar5 * -8;
        do {
          piVar1 = *(int **)local_98;
          *(int **)piVar10 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar10 = piVar10 + 2;
          local_98 = local_98 + 2;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *local_98 = *local_98 + 1;
      local_31 = *local_98 != 0;
      UNLOCK();
    }
  }
  local_b0 = local_b8 + (long)local_b8[2] * 2 + 4;
  local_a8 = local_b8 + (long)local_b8[3] * 2 + 4;
  local_a0 = 1;
  if (local_b8[2] != local_b8[3]) {
    do {
      pQVar7 = local_90;
      pQVar2 = *(QArrayData **)local_b0;
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      if (local_a0 != 0) {
        QString::fromUtf8_helper((char *)&local_78,0x1eeaa60);
        QTextStream::operator<<(pQVar7,&local_78);
        if (*(int *)local_78.field0_0x0 != -1) {
          if (*(int *)local_78.field0_0x0 != 0) {
            LOCK();
            *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
            local_31 = *(int *)local_78.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100694b7f;
          }
          QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
        }
LAB_100694b7f:
        if (local_90[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<(local_90,' ');
        }
        pQVar7 = local_90;
        pQVar12 = pQVar2 + *(long *)(pQVar2 + 0x10);
        if (pQVar12 != (QArrayData *)0x0) {
          _strlen((char *)pQVar12);
        }
        QString::fromUtf8_helper((char *)&local_70,(int)pQVar12);
        QTextStream::operator<<(pQVar7,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100694c2b;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_100694c2b:
        if (local_90[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<(local_90,' ');
        }
        pQVar7 = local_90;
        QString::fromUtf8_helper((char *)&local_68,0x1e31af0);
        QTextStream::operator<<(pQVar7,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100694c9b;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100694c9b:
        if (local_90[0x20] != (QTextStream)0x0) {
          QTextStream::operator<<(local_90,' ');
        }
        local_c8 = local_90;
        *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + 1;
        QObject::property((char *)&local_d8);
        operator<<(local_c0,&local_c8,&local_d8);
        QDebug::~QDebug(local_c0);
        QVariant::~QVariant(&local_d8);
        QDebug::~QDebug((QDebug *)&local_c8);
        local_a0 = 0;
      }
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100694d55;
        }
        QArrayData::deallocate(pQVar2,1,8);
      }
LAB_100694d55:
      local_b0 = local_b0 + 2;
      uVar9 = local_a0 ^ 1;
      bVar13 = local_a0 != 1;
      local_a0 = uVar9;
    } while ((bVar13) && (local_b0 != local_a8));
  }
  FUN_1000ee530(&local_b8);
  pQVar7 = local_90;
  QString::fromUtf8_helper((char *)&local_60,0x1eeaa60);
  QTextStream::operator<<(pQVar7,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100694dee;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100694dee:
  if (local_90[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_90,' ');
  }
  pQVar7 = local_90;
  QString::fromUtf8_helper((char *)&local_58,0x1e0e5d1);
  QTextStream::operator<<(pQVar7,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100694e60;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_100694e60:
  if (local_90[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_90,' ');
  }
  cVar4 = QAction::isSeparator();
  pcVar11 = "false";
  if (cVar4 != '\0') {
    pcVar11 = "true";
  }
  QTextStream::operator<<(local_90,pcVar11);
  if (local_90[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(local_90,' ');
  }
  (**(code **)*param_1)();
  iVar5 = QMetaObject::propertyOffset();
  for (; iVar6 = QMetaObject::propertyCount(), iVar5 < iVar6; iVar5 = iVar5 + 1) {
    QMetaObject::property((int)local_f8);
    cVar4 = QMetaProperty::isReadable();
    pQVar7 = local_90;
    if (cVar4 != '\0') {
      QString::fromUtf8_helper((char *)&local_50,0x1eeaa60);
      QTextStream::operator<<(pQVar7,&local_50);
      if (*(int *)local_50.field0_0x0 != -1) {
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          local_31 = *(int *)local_50.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100694f6e;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
      }
LAB_100694f6e:
      if (local_90[0x20] != (QTextStream)0x0) {
        QTextStream::operator<<(local_90,' ');
      }
      pcVar11 = (char *)QMetaProperty::name();
      pQVar7 = local_90;
      if (pcVar11 != (char *)0x0) {
        _strlen(pcVar11);
      }
      QString::fromUtf8_helper((char *)&local_48,(int)pcVar11);
      QTextStream::operator<<(pQVar7,&local_48);
      if (*(int *)local_48.field0_0x0 != -1) {
        if (*(int *)local_48.field0_0x0 != 0) {
          LOCK();
          *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
          local_31 = *(int *)local_48.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100694ff8;
        }
        QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
      }
LAB_100694ff8:
      if (local_90[0x20] != (QTextStream)0x0) {
        QTextStream::operator<<(local_90,' ');
      }
      pQVar7 = local_90;
      QString::fromUtf8_helper((char *)&local_40,0x1e31af0);
      QTextStream::operator<<(pQVar7,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10069506a;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_10069506a:
      if (local_90[0x20] != (QTextStream)0x0) {
        QTextStream::operator<<(local_90,' ');
      }
      local_108 = local_90;
      *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + 1;
      QMetaProperty::read(local_118);
      operator<<(local_100,&local_108,local_118);
      QDebug::~QDebug(local_100);
      QVariant::~QVariant((QVariant *)local_118);
      QDebug::~QDebug((QDebug *)&local_108);
    }
  }
  QString::toUtf8();
  FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"%s",local_120 + *(long *)(local_120 + 0x10));
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100695165;
    }
    QArrayData::deallocate(local_120,1,8);
  }
LAB_100695165:
  QMetaObject::indexOfEnumerator("");
  local_130 = QMetaObject::enumerator(0x22247e8);
  QMetaObject::indexOfEnumerator("");
  local_140 = QMetaObject::enumerator(0x22247e8);
  QMetaObject::indexOfEnumerator("");
  local_150 = QMetaObject::enumerator(0x22247e8);
  QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1498);
  local_160 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  QMetaObject::indexOfEnumerator("");
  local_170 = QMetaObject::enumerator(0x22247e8);
  QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1498);
  local_180 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1498);
  FUN_1006957f0(param_1,"enabledForStates",local_130);
  FUN_1006957f0(param_1,"visibleForStates",local_130);
  FUN_1006957f0(param_1,"checkedForStates",local_130);
  FUN_1006957f0(param_1,"enabledForAdditionStates",local_140);
  FUN_1006957f0(param_1,"enabledForView",local_180);
  FUN_1006957f0(param_1,"visibleForView",local_180);
  FUN_1006957f0(param_1,"checkedForView",local_180);
  FUN_1006957f0(param_1,"enabledWithAttributes",local_150);
  FUN_1006957f0(param_1,"visibleWithAttributes",local_150);
  FUN_1006957f0(param_1,"checkedWithAttributes",local_150);
  FUN_1006957f0(param_1,"enabledForServerStates",local_160);
  FUN_1006957f0(param_1,"product",local_170);
  FUN_1006957f0(param_1,"platform",local_170);
  FUN_1000ee530(&local_98);
  QDebug::~QDebug((QDebug *)&local_90);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_88,2,8);
  }
  return;
}

