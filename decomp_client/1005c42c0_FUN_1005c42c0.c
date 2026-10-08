
undefined8
FUN_1005c42c0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined1 local_e0 [12];
  undefined4 local_cc;
  undefined4 *local_c8;
  char *local_c0;
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
  char *local_30;
  undefined1 local_21;
  
  local_cc = param_4;
  (**(code **)(**(long **)(param_2 + 0x10) + 0x60))();
  QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1320);
  local_e0 = QMetaObject::enumerator((int)PTR_staticMetaObject_1021e1320);
  local_f0 = (QArrayData *)QString::fromAscii_helper("get%1StateForPage",0x11);
  pcVar3 = (char *)QMetaEnum::key((int)local_e0);
  iVar5 = -1;
  if (pcVar3 != (char *)0x0) {
    sVar4 = _strlen(pcVar3);
    iVar5 = (int)sVar4;
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper(pcVar3,iVar5);
  QString::arg(&local_e8,&local_f0,&local_f8,0,0x20);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c43bb;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1005c43bb:
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      local_21 = *(int *)local_f0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005c43f1;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_1005c43f1:
  cVar2 = FUN_100a1fa30(*(undefined8 *)(param_2 + 0x18),&local_e8);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
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
    local_c8 = &local_cc;
    local_c0 = "int";
    local_30 = "Wizard::ActionState";
    local_38 = param_1;
    QMetaObject::invokeMethod
              (uVar1,local_100 + *(long *)(local_100 + 0x10),0,param_1,"Wizard::ActionState",param_6
               ,param_1,"Wizard::ActionState",local_c8,"int",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_21 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1005c45c8;
      }
      QArrayData::deallocate(local_100,1,8);
    }
  }
LAB_1005c45c8:
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      if (*(int *)local_e8 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
  return param_1;
}

