
QIcon * FUN_10069fa10(QIcon *param_1,long *param_2,char *param_3,QIcon *param_4,char *param_5)

{
  QArrayData *pQVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QVariant local_1b8;
  QIcon local_1a8 [8];
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
  
  if (param_5 != (char *)0x0) {
    *param_5 = '\0';
  }
  cVar2 = (**(code **)(*param_2 + 0x80))(param_2);
  if (cVar2 == '\0') {
    QIcon::QIcon(param_1,param_4);
    return param_1;
  }
  iVar8 = -1;
  if (param_3 != (char *)0x0) {
    sVar3 = _strlen(param_3);
    iVar8 = (int)sVar3;
  }
  local_198 = (QArrayData *)QString::fromAscii_helper(param_3,iVar8);
  FUN_100694760(&local_1a0,param_2[2]);
  QString::arg(&local_190,&local_198,&local_1a0,0,0x20);
  if (*(int *)local_1a0 != -1) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      local_d9 = *(int *)local_1a0 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_10069fae4;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_10069fae4:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      local_d9 = *(int *)local_198 != 0;
      UNLOCK();
      if ((bool)local_d9) goto LAB_10069fb20;
    }
    QArrayData::deallocate(local_198,2,8);
  }
LAB_10069fb20:
  if (*(int *)(local_190 + 4) == 0) {
    QIcon::QIcon(param_1,param_4);
    goto LAB_1006a0145;
  }
  QIcon::QIcon(local_1a8,param_4);
  QVariant::QVariant(&local_1b8,0x45,local_1a8,0);
  uVar4 = QVariant::typeName();
  QVariant::~QVariant(&local_1b8);
  lVar5 = QApplication::activeWindow();
  if (lVar5 == 0) {
LAB_10069fe64:
    cVar2 = FUN_100a1fa30(param_2,&local_190);
    if (cVar2 == '\0') {
      cVar2 = '\0';
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
      cVar2 = QMetaObject::invokeMethod
                        (param_2,local_1d8 + *(long *)(local_1d8 + 0x10),0,local_1a8,uVar4);
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_d9 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_1006a0007;
        }
        QArrayData::deallocate(local_1d8,1,8);
      }
LAB_1006a0007:
      pQVar1 = local_190;
      if (cVar2 == '\0') {
        if (1 < *(int *)local_190 + 1U) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + 1;
          local_d9 = *(int *)local_190 != 0;
          UNLOCK();
        }
        QString::toLocal8Bit();
        lVar5 = *(long *)(local_1e0 + 0x10);
        (**(code **)*param_2)(param_2);
        uVar4 = QMetaObject::className();
        FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                      local_1e0 + lVar5,uVar4);
        if (*(int *)local_1e0 != -1) {
          if (*(int *)local_1e0 != 0) {
            LOCK();
            *(int *)local_1e0 = *(int *)local_1e0 + -1;
            local_d9 = *(int *)local_1e0 != 0;
            UNLOCK();
            if ((bool)local_d9) goto LAB_1006a00c7;
          }
          QArrayData::deallocate(local_1e0,1,8);
        }
LAB_1006a00c7:
        if (*(int *)pQVar1 != -1) {
          if (*(int *)pQVar1 != 0) {
            LOCK();
            *(int *)pQVar1 = *(int *)pQVar1 + -1;
            local_d9 = *(int *)pQVar1 != 0;
            UNLOCK();
            if ((bool)local_d9) goto LAB_1006a0122;
          }
          QArrayData::deallocate(pQVar1,2,8);
        }
      }
    }
  }
  else {
    uVar6 = QApplication::activeWindow();
    cVar2 = FUN_100a1fa30(uVar6,&local_190);
    if (cVar2 == '\0') goto LAB_10069fe64;
    uVar6 = QApplication::activeWindow();
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
    cVar2 = QMetaObject::invokeMethod
                      (uVar6,local_1c0 + *(long *)(local_1c0 + 0x10),0,local_1a8,uVar4);
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_d9 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_d9) goto LAB_10069fd64;
      }
      QArrayData::deallocate(local_1c0,1,8);
    }
LAB_10069fd64:
    pQVar1 = local_190;
    if (cVar2 == '\0') {
      if (1 < *(int *)local_190 + 1U) {
        LOCK();
        *(int *)local_190 = *(int *)local_190 + 1;
        local_d9 = *(int *)local_190 != 0;
        UNLOCK();
      }
      QString::toLocal8Bit();
      lVar5 = *(long *)(local_1c8 + 0x10);
      puVar7 = (undefined8 *)QApplication::activeWindow();
      (**(code **)*puVar7)(puVar7);
      uVar6 = QMetaObject::className();
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                    local_1c8 + lVar5,uVar6);
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_d9 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_10069fe28;
        }
        QArrayData::deallocate(local_1c8,1,8);
      }
LAB_10069fe28:
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_d9 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_d9) goto LAB_10069fe64;
        }
        QArrayData::deallocate(pQVar1,2,8);
      }
      goto LAB_10069fe64;
    }
  }
LAB_1006a0122:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar2;
  }
  QIcon::QIcon(param_1,local_1a8);
  QIcon::~QIcon(local_1a8);
LAB_1006a0145:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      UNLOCK();
      if (*(int *)local_190 != 0) {
        return param_1;
      }
      local_d9 = 0;
    }
    QArrayData::deallocate(local_190,2,8);
  }
  return param_1;
}

