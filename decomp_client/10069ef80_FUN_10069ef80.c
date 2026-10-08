
undefined8 *
FUN_10069ef80(undefined8 *param_1,long *param_2,char *param_3,undefined8 *param_4,char *param_5)

{
  int *piVar1;
  QArrayData *pQVar2;
  char cVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QVariant local_1a8;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  if (param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  cVar3 = (**(code **)(*param_2 + 0x80))(param_2);
  if (cVar3 == '\0') {
    piVar1 = (int *)*param_4;
    *param_1 = piVar1;
    if (*piVar1 + 1U < 2) {
      return param_1;
    }
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return param_1;
  }
  iVar9 = -1;
  if (param_3 != (char *)0x0) {
    sVar4 = _strlen(param_3);
    iVar9 = (int)sVar4;
  }
  local_188 = (QArrayData *)QString::fromAscii_helper(param_3,iVar9);
  FUN_100694760(&local_190,param_2[2]);
  QString::arg(&local_180,&local_188,&local_190,0,0x20);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      local_31 = *(int *)local_190 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10069f04e;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_10069f04e:
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      local_31 = *(int *)local_188 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10069f084;
    }
    QArrayData::deallocate(local_188,2,8);
  }
LAB_10069f084:
  if (*(int *)(local_180 + 4) == 0) {
    piVar1 = (int *)*param_4;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_31 = *piVar1 != 0;
      UNLOCK();
    }
    goto LAB_10069f734;
  }
  local_198 = (QArrayData *)*param_4;
  if (1 < *(int *)local_198 + 1U) {
    LOCK();
    *(int *)local_198 = *(int *)local_198 + 1;
    local_31 = *(int *)local_198 != 0;
    UNLOCK();
  }
  QVariant::QVariant(&local_1a8,10,&local_198,0);
  uVar5 = QVariant::typeName();
  QVariant::~QVariant(&local_1a8);
  lVar6 = QApplication::activeWindow();
  if (lVar6 == 0) {
LAB_10069f3c0:
    cVar3 = FUN_100a1fa30(param_2,&local_180);
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else {
      QString::toLatin1();
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_48 = 0;
      uStack_40 = 0;
      cVar3 = QMetaObject::invokeMethod
                        (param_2,local_1c8 + *(long *)(local_1c8 + 0x10),0,&local_198,uVar5);
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10069f55d;
        }
        QArrayData::deallocate(local_1c8,1,8);
      }
LAB_10069f55d:
      pQVar2 = local_180;
      if (cVar3 == '\0') {
        if (1 < *(int *)local_180 + 1U) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + 1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        lVar6 = *(long *)(local_1d0 + 0x10);
        (**(code **)*param_2)(param_2);
        uVar5 = QMetaObject::className();
        FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                      local_1d0 + lVar6,uVar5);
        if (*(int *)local_1d0 != -1) {
          if (*(int *)local_1d0 != 0) {
            LOCK();
            *(int *)local_1d0 = *(int *)local_1d0 + -1;
            local_31 = *(int *)local_1d0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10069f614;
          }
          QArrayData::deallocate(local_1d0,1,8);
        }
LAB_10069f614:
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_31 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10069f6db;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
      }
    }
  }
  else {
    uVar7 = QApplication::activeWindow();
    cVar3 = FUN_100a1fa30(uVar7,&local_180);
    if (cVar3 == '\0') goto LAB_10069f3c0;
    uVar7 = QApplication::activeWindow();
    QString::toLatin1();
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    cVar3 = QMetaObject::invokeMethod
                      (uVar7,local_1b0 + *(long *)(local_1b0 + 0x10),0,&local_198,uVar5);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_31 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10069f2cf;
      }
      QArrayData::deallocate(local_1b0,1,8);
    }
LAB_10069f2cf:
    pQVar2 = local_180;
    if (cVar3 == '\0') {
      if (1 < *(int *)local_180 + 1U) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + 1;
        local_31 = *(int *)local_180 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      lVar6 = *(long *)(local_1b8 + 0x10);
      puVar8 = (undefined8 *)QApplication::activeWindow();
      (**(code **)*puVar8)(puVar8);
      uVar7 = QMetaObject::className();
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                    local_1b8 + lVar6,uVar7);
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10069f38a;
        }
        QArrayData::deallocate(local_1b8,1,8);
      }
LAB_10069f38a:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10069f3c0;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
      goto LAB_10069f3c0;
    }
  }
LAB_10069f6db:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar3;
  }
  *param_1 = local_198;
  if (1 < *(int *)local_198 + 1U) {
    LOCK();
    *(int *)local_198 = *(int *)local_198 + 1;
    local_31 = *(int *)local_198 != 0;
    UNLOCK();
  }
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_31 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10069f734;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10069f734:
  if (*(int *)local_180 != -1) {
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      UNLOCK();
      if (*(int *)local_180 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_180,2,8);
  }
  return param_1;
}

