
bool FUN_100723b90(long param_1)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 in_R9;
  undefined8 uVar5;
  QArrayData *pQVar6;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  long local_180 [19];
  long *local_e8;
  char *local_e0;
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
  
  if (param_1 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    local_180[0x11] = 0;
    local_180[0x12] = 0;
    local_180[0xf] = 0;
    local_180[0x10] = 0;
    local_180[0xd] = 0;
    local_180[0xe] = 0;
    local_180[0xb] = 0;
    local_180[0xc] = 0;
    local_180[9] = 0;
    local_180[10] = 0;
    local_180[7] = 0;
    local_180[8] = 0;
    local_180[5] = 0;
    local_180[6] = 0;
    local_180[3] = 0;
    local_180[4] = 0;
    local_180[1] = 0;
    local_180[2] = 0;
    local_e8 = local_180;
    local_e0 = "CAppShortcutData*";
    local_180[0] = param_1;
    QMetaObject::invokeMethod
              (*(undefined8 *)(param_1 + 0x28),"onAppKeyActionTriggered",2,0,0,in_R9,local_e8,
               "CAppShortcutData*",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    goto LAB_100724125;
  }
  plVar1 = (long *)(param_1 + 0x38);
  uVar5 = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 0x38) + 4) != 0))
  {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
  }
  FUN_100a1c6c0(&local_190,plVar1);
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
  cVar4 = QMetaObject::invokeMethod(uVar5,local_188 + *(long *)(local_188 + 0x10),2,0,0);
  if (*(int *)local_188 != -1) {
    if (*(int *)local_188 != 0) {
      LOCK();
      *(int *)local_188 = *(int *)local_188 + -1;
      UNLOCK();
      local_e8 = (long *)CONCAT71(local_e8._1_7_,*(int *)local_188 != 0);
      if (*(int *)local_188 != 0) goto LAB_100723ef7;
    }
    QArrayData::deallocate(local_188,1,8);
  }
LAB_100723ef7:
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      UNLOCK();
      local_e8 = (long *)CONCAT71(local_e8._1_7_,*(int *)local_190 != 0);
      if (*(int *)local_190 != 0) goto LAB_100723f33;
    }
    QArrayData::deallocate(local_190,2,8);
  }
LAB_100723f33:
  if (cVar4 != '\0') goto LAB_100724125;
  if (((*plVar1 == 0) || (*(int *)(*plVar1 + 4) == 0)) || (*(long *)(param_1 + 0x40) == 0)) {
    local_1a0 = (QArrayData *)QString::fromAscii_helper("",0);
    bVar2 = true;
    bVar3 = false;
  }
  else {
    QObject::objectName();
    bVar3 = true;
    bVar2 = false;
  }
  QString::toUtf8();
  pQVar6 = local_198 + *(long *)(local_198 + 0x10);
  FUN_100a1c6c0(&local_1b0,plVar1);
  QString::toLatin1();
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Failed to invoke method \'%s\' for object \'%s\'.",
                pQVar6,local_1a8 + *(long *)(local_1a8 + 0x10));
  if (*(int *)local_1a8 != -1) {
    if (*(int *)local_1a8 != 0) {
      LOCK();
      *(int *)local_1a8 = *(int *)local_1a8 + -1;
      UNLOCK();
      local_e8 = (long *)CONCAT71(local_e8._1_7_,*(int *)local_1a8 != 0);
      if (*(int *)local_1a8 != 0) goto LAB_10072402c;
    }
    QArrayData::deallocate(local_1a8,1,8);
  }
LAB_10072402c:
  if (*(int *)local_1b0 != -1) {
    if (*(int *)local_1b0 != 0) {
      LOCK();
      *(int *)local_1b0 = *(int *)local_1b0 + -1;
      UNLOCK();
      local_e8 = (long *)CONCAT71(local_e8._1_7_,*(int *)local_1b0 != 0);
      if (*(int *)local_1b0 != 0) goto LAB_100724068;
    }
    QArrayData::deallocate(local_1b0,2,8);
  }
LAB_100724068:
  if (*(int *)local_198 != -1) {
    if (*(int *)local_198 != 0) {
      LOCK();
      *(int *)local_198 = *(int *)local_198 + -1;
      UNLOCK();
      local_e8 = (long *)CONCAT71(local_e8._1_7_,*(int *)local_198 != 0);
      if (*(int *)local_198 != 0) goto LAB_1007240a4;
    }
    QArrayData::deallocate(local_198,1,8);
  }
LAB_1007240a4:
  if ((bVar2) && (*(int *)local_1a0 != -1)) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      UNLOCK();
      local_e8 = (long *)CONCAT71(local_e8._1_7_,*(int *)local_1a0 != 0);
      if (*(int *)local_1a0 != 0) goto LAB_1007240e4;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_1007240e4:
  if ((bVar3) && (*(int *)local_1a0 != -1)) {
    if (*(int *)local_1a0 != 0) {
      LOCK();
      *(int *)local_1a0 = *(int *)local_1a0 + -1;
      UNLOCK();
      local_e8 = (long *)CONCAT71(local_e8._1_7_,*(int *)local_1a0 != 0);
      if (*(int *)local_1a0 != 0) goto LAB_100724125;
    }
    QArrayData::deallocate(local_1a0,2,8);
  }
LAB_100724125:
  return *(char *)(param_1 + 0x70) == '\0';
}

