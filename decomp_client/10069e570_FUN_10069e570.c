
undefined1 FUN_10069e570(long *param_1,char *param_2,undefined1 *param_3,char *param_4)

{
  undefined1 uVar1;
  QArrayData *pQVar2;
  char cVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QVariant local_1b8;
  undefined1 local_1a1;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
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
  undefined1 local_d9;
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
  
  if (param_4 != (char *)0x0) {
    *param_4 = '\0';
  }
  cVar3 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar3 == '\0') {
    return *param_3;
  }
  iVar9 = -1;
  if (param_2 != (char *)0x0) {
    sVar4 = _strlen(param_2);
    iVar9 = (int)sVar4;
  }
  local_198 = (QArrayData *)QString::fromAscii_helper(param_2,iVar9);
  FUN_100694760(&local_1a0,param_1[2]);
  QString::arg(&local_190,&local_198,&local_1a0,0,0x20);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_d9 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_10069e640;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10069e640:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_d9 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_10069e67c;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10069e67c:
  uVar1 = *param_3;
  if (*(int *)(local_190 + 4) == 0) goto LAB_10069ecbc;
  local_1a1 = *param_3;
  QVariant::QVariant(&local_1b8,1,&local_1a1,0);
  uVar5 = QVariant::typeName();
  QVariant::~QVariant(&local_1b8);
  lVar6 = QApplication::activeWindow();
  if (lVar6 == 0) {
LAB_10069e9b2:
    cVar3 = FUN_100a1fa30(param_1,&local_190);
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
                        (param_1,local_1d8 + *(long *)(local_1d8 + 0x10),0,&local_1a1,uVar5);
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_d9 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_10069eb51;
        }
        QArrayData::deallocate(local_1d8,1,8);
      }
LAB_10069eb51:
      pQVar2 = local_190;
      if (cVar3 == '\0') {
        if (1 < *(int *)local_190 + 1U) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + 1;
          local_d9 = *(int *)local_190 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        lVar6 = *(long *)(local_1e0 + 0x10);
        (**(code **)*param_1)(param_1);
        uVar5 = QMetaObject::className();
        FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                      local_1e0 + lVar6,uVar5);
        if (*(int *)local_1e0 != -1) {
          if (*(int *)local_1e0 != 0) {
            LOCK();
            *(int *)local_1e0 = *(int *)local_1e0 + -1;
            local_d9 = *(int *)local_1e0 != 0;
            UNLOCK();
            if ((bool)local_d9) goto LAB_10069ec11;
          }
          QArrayData::deallocate(local_1e0,1,8);
        }
LAB_10069ec11:
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_d9 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_d9) goto LAB_10069eca7;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
      }
    }
  }
  else {
    uVar7 = QApplication::activeWindow();
    cVar3 = FUN_100a1fa30(uVar7,&local_190);
    if (cVar3 == '\0') goto LAB_10069e9b2;
    uVar7 = QApplication::activeWindow();
    QString::toLatin1();
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
    local_188 = 0;
    uStack_180 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    cVar3 = QMetaObject::invokeMethod
                      (uVar7,local_1c0 + *(long *)(local_1c0 + 0x10),0,&local_1a1,uVar5);
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_d9 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_10069e8b2;
      }
      QArrayData::deallocate(local_1c0,1,8);
    }
LAB_10069e8b2:
    pQVar2 = local_190;
    if (cVar3 == '\0') {
      if (1 < *(int *)local_190 + 1U) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + 1;
        local_d9 = *(int *)local_190 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      lVar6 = *(long *)(local_1c8 + 0x10);
      puVar8 = (undefined8 *)QApplication::activeWindow();
      (**(code **)*puVar8)(puVar8);
      uVar7 = QMetaObject::className();
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                    local_1c8 + lVar6,uVar7);
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_d9 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_10069e976;
        }
        QArrayData::deallocate(local_1c8,1,8);
      }
LAB_10069e976:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_d9 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_10069e9b2;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
      goto LAB_10069e9b2;
    }
  }
LAB_10069eca7:
  uVar1 = local_1a1;
  if (param_4 != (char *)0x0) {
    *param_4 = cVar3;
  }
LAB_10069ecbc:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      UNLOCK();
      if (*(int *)local_190 != 0) {
        return uVar1;
      }
      local_d9 = 0;
    }
    QArrayData::deallocate(local_190,2,8);
  }
  return uVar1;
}

