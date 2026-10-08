
bool FUN_100695bb0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  QArrayData *pQVar5;
  undefined8 in_stack_fffffffffffffd98;
  undefined4 uVar6;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QVariant local_1a0;
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
  undefined1 local_c9;
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
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar6 = (undefined4)((ulong)in_stack_fffffffffffffd98 >> 0x20);
  if (2 < DAT_10230ffd0) {
    FUN_100694760(&local_188,param_2);
    QString::toLocal8Bit();
    pQVar5 = local_180 + *(long *)(local_180 + 0x10);
    (**(code **)*param_3)(param_3);
    uVar2 = QMetaObject::className();
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",3,"Handling action %s with context %s",pQVar5,
                  uVar2);
    if (*(int *)local_180 != -1) {
      if (*(int *)local_180 != 0) {
        LOCK();
        *(int *)local_180 = *(int *)local_180 + -1;
        local_c9 = *(int *)local_180 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_100695c7e;
      }
      QArrayData::deallocate(local_180,1,8);
    }
LAB_100695c7e:
    if (*(int *)local_188 != -1) {
      if (*(int *)local_188 != 0) {
        LOCK();
        *(int *)local_188 = *(int *)local_188 + -1;
        local_c9 = *(int *)local_188 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_100695cba;
      }
      QArrayData::deallocate(local_188,2,8);
    }
  }
LAB_100695cba:
  (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3);
  cVar1 = (**(code **)(*param_1 + 0x68))(param_1);
  if (cVar1 == '\0') {
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","valid",
                  "ActionManager/ActionHandler/CActionHandler.cpp",CONCAT44(uVar6,0x31),
                  "handleAction");
    return false;
  }
  QObject::property((char *)&local_1a0);
  QVariant::toString();
  QVariant::~QVariant(&local_1a0);
  lVar3 = QApplication::activeWindow();
  if (lVar3 != 0) {
    uVar2 = QApplication::activeWindow();
    cVar1 = FUN_100a1fa30(uVar2,&local_190);
    if (cVar1 != '\0') {
      uVar2 = QApplication::activeWindow();
      QString::toLatin1();
      if ((1 < *(uint *)local_1a8) || (*(long *)(local_1a8 + 0x10) != 0x18)) {
        QByteArray::reallocData
                  (&local_1a8,*(uint *)(local_1a8 + 4) + 1,*(uint *)(local_1a8 + 8) >> 0x1f);
      }
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
      local_f8 = 0;
      uStack_f0 = 0;
      cVar1 = QMetaObject::invokeMethod(uVar2,local_1a8 + *(long *)(local_1a8 + 0x10),0,0,0);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_c9 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_100695f20;
        }
        QArrayData::deallocate(local_1a8,1,8);
      }
LAB_100695f20:
      if (cVar1 != '\0') goto LAB_1006962be;
      QString::toLatin1();
      pQVar5 = local_1b0 + *(long *)(local_1b0 + 0x10);
      puVar4 = (undefined8 *)QApplication::activeWindow();
      (**(code **)*puVar4)(puVar4);
      uVar2 = QMetaObject::className();
      FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                    pQVar5,uVar2);
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_c9 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_c9) goto LAB_100695fc2;
        }
        QArrayData::deallocate(local_1b0,1,8);
      }
    }
  }
LAB_100695fc2:
  cVar1 = FUN_100a1fa30(param_1,&local_190);
  if (cVar1 == '\0') {
    cVar1 = '\0';
    goto LAB_1006962be;
  }
  QString::toLatin1();
  if ((1 < *(uint *)local_1b8) || (*(long *)(local_1b8 + 0x10) != 0x18)) {
    QByteArray::reallocData
              (&local_1b8,*(uint *)(local_1b8 + 4) + 1,*(uint *)(local_1b8 + 8) >> 0x1f);
  }
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
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  cVar1 = QMetaObject::invokeMethod(param_1,local_1b8 + *(long *)(local_1b8 + 0x10),0,0,0);
  if (*(int *)local_1b8 != -1) {
    if (*(int *)local_1b8 != 0) {
      LOCK();
      *(int *)local_1b8 = *(int *)local_1b8 + -1;
      local_c9 = *(int *)local_1b8 != 0;
      UNLOCK();
      if ((bool)local_c9) goto LAB_10069617f;
    }
    QArrayData::deallocate(local_1b8,1,8);
  }
LAB_10069617f:
  if (cVar1 == '\0') {
    QString::toLatin1();
    lVar3 = *(long *)(local_1c0 + 0x10);
    (**(code **)*param_1)(param_1);
    uVar2 = QMetaObject::className();
    FUN_100df99c0("[ACTION_MNG]","prl_client_app",0,"Failed to invoke method %s for target %s",
                  local_1c0 + lVar3,uVar2);
    if (*(int *)local_1c0 != -1) {
      if (*(int *)local_1c0 != 0) {
        LOCK();
        *(int *)local_1c0 = *(int *)local_1c0 + -1;
        local_c9 = *(int *)local_1c0 != 0;
        UNLOCK();
        if ((bool)local_c9) goto LAB_1006962be;
      }
      QArrayData::deallocate(local_1c0,1,8);
    }
  }
LAB_1006962be:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      UNLOCK();
      if (*(int *)local_190 != 0) {
        return cVar1 != '\0';
      }
      local_c9 = 0;
    }
    QArrayData::deallocate(local_190,2,8);
  }
  return cVar1 != '\0';
}

