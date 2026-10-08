
void FUN_1005da6f0(long param_1)

{
  int iVar1;
  QString *pQVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QString local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  undefined1 local_180 [8];
  QArrayData *local_178;
  QArrayData *local_170;
  int local_164;
  QString local_160;
  QString local_158;
  QString local_150;
  QString local_148;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  undefined1 local_128 [8];
  QString local_120 [10];
  undefined1 local_d0 [40];
  undefined1 local_a8 [88];
  undefined1 local_50 [40];
  QString local_28;
  undefined1 local_19;
  
  lVar4 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
  if (lVar4 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
  if (((*(int *)(lVar4 + 0x50) == 4) ||
      (lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48), *(int *)(lVar4 + 0x50) == 6)) ||
     (lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48), *(int *)(lVar4 + 0x50) == 8)) {
    uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    FUN_1005b69c0(local_a8,uVar5);
    cVar3 = FUN_10073dd70(local_a8);
    FUN_100252c80(local_50);
    FUN_100252e70(local_a8);
    lVar4 = *(long *)(param_1 + 0x10) + 0x48;
    if (cVar3 == '\0') goto LAB_1005da94d;
    uVar5 = FUN_1005ec990(lVar4);
    FUN_1005b69c0(local_128,uVar5);
    QString::operator=(&local_28,local_120);
    FUN_100252c80(local_d0);
    FUN_100252e70(local_128);
    lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
    if (*(int *)(lVar4 + 0x3c) == 1) {
      local_138 = (QArrayData *)QString::fromAscii_helper(" (%1)",5);
      QMetaObject::tr((char *)&local_140,PTR_staticMetaObject_1021e1520,0x1e050ea);
      QString::arg(&local_130,&local_138,&local_140,0,0x20);
      QString::append(&local_28);
      if (*(int *)local_130 != -1) {
        if (*(int *)local_130 != 0) {
          LOCK();
          *(int *)local_130 = *(int *)local_130 + -1;
          local_19 = *(int *)local_130 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1005da8a3;
        }
        QArrayData::deallocate(local_130,2,8);
      }
LAB_1005da8a3:
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_19 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1005da8d9;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1005da8d9:
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_19 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1005dac44;
        }
        QArrayData::deallocate(local_138,2,8);
      }
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10) + 0x48;
LAB_1005da94d:
    lVar4 = FUN_1005ec990(lVar4);
    if (*(int *)(lVar4 + 0x50) == 0) {
      QMetaObject::tr((char *)&local_148,PTR_staticMetaObject_1021e1520,0x1e050f1);
      QString::operator=(&local_28,&local_148);
      if (*(int *)local_148.field0_0x0 != -1) {
        if (*(int *)local_148.field0_0x0 != 0) {
          LOCK();
          *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
          local_19 = *(int *)local_148.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1005dac44;
        }
        QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
      }
    }
    else {
      lVar4 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
      lVar6 = *(long *)(param_1 + 0x10) + 0x48;
      if (*(int *)(lVar4 + 0x50) == 10) {
        lVar4 = FUN_1005ec990(lVar6);
        uVar5 = 0;
        if ((*(long *)(lVar4 + 400) != 0) && (uVar5 = 0, *(int *)(*(long *)(lVar4 + 400) + 4) != 0))
        {
          uVar5 = *(undefined8 *)(lVar4 + 0x198);
        }
        FUN_10018d830(&local_150,uVar5);
        QString::operator=(&local_28,&local_150);
        if (*(int *)local_150.field0_0x0 != -1) {
          if (*(int *)local_150.field0_0x0 != 0) {
            LOCK();
            *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
            local_19 = *(int *)local_150.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_1005dac44;
          }
          QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
        }
      }
      else {
        lVar4 = FUN_1005ec990(lVar6);
        lVar6 = *(long *)(param_1 + 0x10) + 0x48;
        if (*(int *)(lVar4 + 0x50) == 5) {
          lVar4 = FUN_1005ec990(lVar6);
          FUN_1005cf0b0(&local_158,*(undefined8 *)(lVar4 + 0xb0));
          QString::operator=(&local_28,&local_158);
          if (*(int *)local_158.field0_0x0 != -1) {
            if (*(int *)local_158.field0_0x0 != 0) {
              LOCK();
              *(int *)local_158.field0_0x0 = *(int *)local_158.field0_0x0 + -1;
              local_19 = *(int *)local_158.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_1005dac44;
            }
            QArrayData::deallocate((QArrayData *)local_158.field0_0x0,2,8);
          }
        }
        else {
          FUN_1005ec990(lVar6);
          EnumUtils::OsVerToString((uint)&local_160);
          QString::operator=(&local_28,&local_160);
          if (*(int *)local_160.field0_0x0 != -1) {
            if (*(int *)local_160.field0_0x0 != 0) {
              LOCK();
              *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
              local_19 = *(int *)local_160.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_1005dab49;
            }
            QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
          }
LAB_1005dab49:
          uVar5 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x48);
          FUN_1005b98c0(local_180,uVar5);
          if (*(int *)local_170 != -1) {
            if (*(int *)local_170 != 0) {
              LOCK();
              *(int *)local_170 = *(int *)local_170 + -1;
              local_19 = *(int *)local_170 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_1005daba1;
            }
            QArrayData::deallocate(local_170,2,8);
          }
LAB_1005daba1:
          if (*(int *)local_178 != -1) {
            if (*(int *)local_178 != 0) {
              LOCK();
              *(int *)local_178 = *(int *)local_178 + -1;
              local_19 = *(int *)local_178 != 0;
              UNLOCK();
              if ((bool)local_19) goto LAB_1005dabd7;
            }
            QArrayData::deallocate(local_178,2,8);
          }
LAB_1005dabd7:
          if (local_164 == 1) {
            QMetaObject::tr((char *)&local_188,PTR_staticMetaObject_1021e1520,0x1e050fe);
            QString::append(&local_28);
            if (*(int *)local_188 != -1) {
              if (*(int *)local_188 != 0) {
                LOCK();
                *(int *)local_188 = *(int *)local_188 + -1;
                local_19 = *(int *)local_188 != 0;
                UNLOCK();
                if ((bool)local_19) goto LAB_1005dac44;
              }
              QArrayData::deallocate(local_188,2,8);
            }
          }
        }
      }
    }
  }
LAB_1005dac44:
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  iVar1 = *(int *)(local_190 + 4);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_19 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005dac91;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_1005dac91:
  if (iVar1 != 0) {
    uVar5 = FUN_1005ec9b0(*(long *)(param_1 + 0x10) + 0x48);
    CPrlFileDevSelectorWidget::getCurrentSystemName();
    FUN_1005cb9c0(&local_198,uVar5,&local_28,&local_1a0);
    QString::operator=(&local_28,&local_198);
    if (*(int *)local_198.field0_0x0 != -1) {
      if (*(int *)local_198.field0_0x0 != 0) {
        LOCK();
        *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
        local_19 = *(int *)local_198.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005dad1d;
      }
      QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
    }
LAB_1005dad1d:
    if (*(int *)local_1a0 != -1) {
      if (*(int *)local_1a0 != 0) {
        LOCK();
        *(int *)local_1a0 = *(int *)local_1a0 + -1;
        local_19 = *(int *)local_1a0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1005dad53;
      }
      QArrayData::deallocate(local_1a0,2,8);
    }
  }
LAB_1005dad53:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x18) + 0x58);
  FUN_1005dca60(&local_1a8);
  QLineEdit::setText(pQVar2);
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      local_19 = *(int *)local_1a8 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1005dadb0;
    }
    QArrayData::deallocate(local_1a8,2,8);
  }
LAB_1005dadb0:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}

