
undefined1 FUN_1003dc3f0(QWidget *param_1,QHash *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_80;
  _func_void_Node_ptr *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QString local_48;
  QVariant local_40;
  QHash *local_30;
  undefined1 local_21;
  
  local_30 = param_2;
  QObject::property((char *)&local_40);
  cVar4 = QVariant::toBool();
  QVariant::~QVariant(&local_40);
  if (cVar4 == '\0') {
    uVar5 = CDataProvider::getWidgetValues(param_1,local_30);
    return uVar5;
  }
  QObject::property((char *)&local_58);
  QVariant::toString();
  QVariant::~QVariant(&local_58);
  if (*(int *)(local_48.field0_0x0 + 4) == 0) {
    local_68 = (QArrayData *)QString::fromAscii_helper("get%1Value",10);
    (*(code *)**(undefined8 **)local_30)();
    pcVar6 = (char *)QMetaObject::className();
    iVar8 = -1;
    if (pcVar6 != (char *)0x0) {
      sVar7 = _strlen(pcVar6);
      iVar8 = (int)sVar7;
    }
    local_70 = (QArrayData *)QString::fromAscii_helper(pcVar6,iVar8);
    QString::arg(&local_60,&local_68,&local_70,0,0x20);
    QString::operator=(&local_48,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003dc51b;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1003dc51b:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_21 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003dc54b;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1003dc54b:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003dc57b;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_1003dc57b:
  local_78 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  QString::toLatin1();
  cVar4 = QMetaObject::invokeMethod(uVar2,local_80 + *(long *)(local_80 + 0x10),1,&local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003dc740;
    }
    QArrayData::deallocate(local_80,1,8);
  }
LAB_1003dc740:
  if (cVar4 == '\0') {
    QString::toLatin1();
    lVar3 = *(long *)(local_130 + 0x10);
    QObject::objectName();
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Failed to invoke %s for control[%s]",
                  local_130 + lVar3,local_138 + *(long *)(local_138 + 0x10));
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_21 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003dc7eb;
      }
      QArrayData::deallocate(local_138,1,8);
    }
LAB_1003dc7eb:
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_21 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003dc821;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1003dc821:
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_21 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003dc857;
      }
      QArrayData::deallocate(local_130,1,8);
    }
  }
LAB_1003dc857:
  FUN_1003ded90(param_3,&local_78);
  if (*(int *)(local_78 + 0x10) != -1) {
    if (*(int *)(local_78 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_78 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003dc892;
    }
    QHashData::free_helper(local_78);
  }
LAB_1003dc892:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 1;
}

