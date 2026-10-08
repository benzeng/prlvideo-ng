
undefined4 FUN_1005c2700(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  undefined8 in_R9;
  QArrayData *local_100;
  undefined4 local_f4;
  QArrayData *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  undefined1 local_d8 [12];
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
  undefined1 local_21;
  
  QMetaObject::indexOfEnumerator("");
  local_d8 = QMetaObject::enumerator(0x221f740);
  local_e8 = (QArrayData *)QString::fromAscii_helper("getPrevPageFor%1",0x10);
  pcVar3 = (char *)QMetaEnum::key((int)local_d8);
  iVar5 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar5 = (int)sVar4;
  }
  local_f0 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar5);
  QString::arg(&local_e0,&local_e8,&local_f0,0,0x20);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_21 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c27e9;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005c27e9:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      local_21 = *(int *)local_e8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c281f;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_1005c281f:
  cVar1 = FUN_100a1fa30(param_1,&local_e0);
  if (cVar1 != '\0') {
    local_f4 = 0;
    QString::toUtf8();
    if ((1 < *(uint *)local_100) || (*(long *)(local_100 + 0x10) != 0x18)) {
      QByteArray::reallocData
                (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
    }
    local_48 = 0;
    uStack_40 = 0;
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
    cVar1 = QMetaObject::invokeMethod
                      (param_1,local_100 + *(long *)(local_100 + 0x10),0,&local_f4,"int",in_R9,0,0,0
                       ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_21 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005c29e8;
      }
      QArrayData::deallocate(local_100,1,8);
    }
LAB_1005c29e8:
    uVar2 = local_f4;
    if (cVar1 != '\0') goto LAB_1005c2a02;
  }
  uVar2 = CAbstractWizardPageFlow::getPrevPageId((int)*(undefined8 *)(param_1 + 0x10));
LAB_1005c2a02:
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) {
        return uVar2;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
  return uVar2;
}

