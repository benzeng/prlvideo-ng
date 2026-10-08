
void FUN_100418460(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  QVariant local_f0;
  long local_e0;
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
  long *local_48;
  char *local_40;
  undefined1 local_31;
  
  if (param_2 == 0) {
    return;
  }
  local_e0 = param_2;
  QObject::property((char *)&local_f0);
  QVariant::~QVariant(&local_f0);
  if ((local_f0.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
    return;
  }
  QObject::property((char *)&local_108);
  QVariant::toString();
  QVariant::~QVariant(&local_108);
  if (*(int *)(local_f8 + 4) == 0) goto LAB_1004187f0;
  QObject::blockSignals(SUB81(local_e0,0));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
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
  local_d0 = "QVariant";
  local_48 = &local_e0;
  local_40 = "QWidget*";
  local_d8 = param_3;
  cVar3 = QMetaObject::invokeMethod(uVar1,local_110 + *(long *)(local_110 + 0x10),1,0,0);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_31 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004186b9;
    }
    QArrayData::deallocate(local_110,1,8);
  }
LAB_1004186b9:
  if (cVar3 == '\0') {
    QObject::objectName();
    QString::toLocal8Bit();
    lVar2 = *(long *)(local_118 + 0x10);
    QString::toLatin1();
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Control[%s]: failed to invoke method \'%s\'",
                  local_118 + lVar2,local_128 + *(long *)(local_128 + 0x10));
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10041876d;
      }
      QArrayData::deallocate(local_128,1,8);
    }
LAB_10041876d:
    if (*(int *)local_118 != -1) {
      if (*(int *)local_118 != 0) {
        LOCK();
        *(int *)local_118 = *(int *)local_118 + -1;
        local_31 = *(int *)local_118 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004187a3;
      }
      QArrayData::deallocate(local_118,1,8);
    }
LAB_1004187a3:
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_31 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1004187d9;
      }
      QArrayData::deallocate(local_120,2,8);
    }
  }
LAB_1004187d9:
  QObject::blockSignals(SUB81(local_e0,0));
LAB_1004187f0:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      UNLOCK();
      if (*(int *)local_f8 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
  return;
}

