
void FUN_100595eb0(QWidget *param_1,QHash *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  char *pcVar4;
  size_t sVar5;
  int iVar6;
  QArrayData *local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QString local_110;
  QVariant local_108;
  QString local_f8;
  QVariant local_f0;
  QHash *local_e0;
  undefined8 local_d8;
  char *local_d0;
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
  QHash **local_40;
  char *local_38;
  undefined1 local_29;
  
  local_e0 = param_2;
  CDataProvider::setWidgetValues(param_1,param_2);
  QObject::property((char *)&local_f0);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_f0);
  if (cVar3 == '\0') {
    return;
  }
  QObject::property((char *)&local_108);
  QVariant::toString();
  QVariant::~QVariant(&local_108);
  if (*(int *)(local_f8.field0_0x0 + 4) == 0) {
    local_118 = (QArrayData *)QString::fromAscii_helper("set%1Value",10);
    (*(code *)**(undefined8 **)local_e0)();
    pcVar4 = (char *)QMetaObject::className();
    iVar6 = -1;
    if (pcVar4 != (char *)0x0) {
      sVar5 = _strlen(pcVar4);
      iVar6 = (int)sVar5;
    }
    local_120 = (QArrayData *)QString::fromAscii_helper(pcVar4,iVar6);
    QString::arg(&local_110,&local_118,&local_120,0,0x20);
    QString::operator=(&local_f8,&local_110);
    if (*(int *)local_110.field0_0x0 != -1) {
      if (*(int *)local_110.field0_0x0 != 0) {
        LOCK();
        *(int *)local_110.field0_0x0 = *(int *)local_110.field0_0x0 + -1;
        local_29 = *(int *)local_110.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10059601e;
      }
      QArrayData::deallocate((QArrayData *)local_110.field0_0x0,2,8);
    }
LAB_10059601e:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_29 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100596054;
      }
      QArrayData::deallocate(local_120,2,8);
    }
LAB_100596054:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_29 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10059608a;
      }
      QArrayData::deallocate(local_118,2,8);
    }
  }
LAB_10059608a:
  QObject::blockSignals(SUB81(local_e0,0));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
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
  local_d0 = "Mappings::Values";
  local_40 = &local_e0;
  local_38 = "QWidget*";
  local_d8 = param_3;
  cVar3 = QMetaObject::invokeMethod(uVar1,local_128 + *(long *)(local_128 + 0x10),1,0,0);
  if (*(int *)local_128 != -1) {
    if (*(int *)local_128 != 0) {
      LOCK();
      *(int *)local_128 = *(int *)local_128 + -1;
      local_29 = *(int *)local_128 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100596242;
    }
    QArrayData::deallocate(local_128,1,8);
  }
LAB_100596242:
  if (cVar3 != '\0') goto LAB_100596362;
  QObject::objectName();
  QString::toUtf8();
  lVar2 = *(long *)(local_130 + 0x10);
  QString::toLatin1();
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Control[%s]: failed to invoke method \'%s\'",
                local_130 + lVar2,local_140 + *(long *)(local_140 + 0x10));
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_29 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005962f6;
    }
    QArrayData::deallocate(local_140,1,8);
  }
LAB_1005962f6:
  if (*(int *)local_130 != -1) {
    if (*(int *)local_130 != 0) {
      LOCK();
      *(int *)local_130 = *(int *)local_130 + -1;
      local_29 = *(int *)local_130 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10059632c;
    }
    QArrayData::deallocate(local_130,1,8);
  }
LAB_10059632c:
  if (*(int *)local_138 != -1) {
    if (*(int *)local_138 != 0) {
      LOCK();
      *(int *)local_138 = *(int *)local_138 + -1;
      local_29 = *(int *)local_138 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100596362;
    }
    QArrayData::deallocate(local_138,2,8);
  }
LAB_100596362:
  QObject::blockSignals(SUB81(local_e0,0));
  if (*(int *)local_f8.field0_0x0 != -1) {
    if (*(int *)local_f8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_f8.field0_0x0 = *(int *)local_f8.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_f8.field0_0x0 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_f8.field0_0x0,2,8);
  }
  return;
}

