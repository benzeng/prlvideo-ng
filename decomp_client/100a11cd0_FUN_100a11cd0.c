
void FUN_100a11cd0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  QVariant *this;
  int iVar4;
  QString local_98;
  QVariant local_90;
  QArrayData *local_80;
  QString local_78;
  QString local_70;
  QString local_68;
  QString local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 local_29;
  
  if (param_2 < 0) {
    FUN_100a11b20(param_1);
    return;
  }
  uVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022377f0);
  if (*(long *)(param_1 + 0x88) != 0) {
    local_58._8_4_ = (int)PTR_shared_null_1021e1288;
    local_58._0_8_ = PTR_shared_null_1021e1288;
    local_58._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
    local_38 = 0;
    local_48 = local_58;
    FUN_100a18830(&local_60,uVar2);
    QString::operator=((QString *)local_58,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_29 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a11d73;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_100a11d73:
    FUN_100a18860(&local_68,uVar2);
    QString::operator=((QString *)(local_58 + 8),&local_68);
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_29 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a11dbc;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_100a11dbc:
    FUN_100a18890(&local_70,uVar2);
    QString::operator=((QString *)local_48,&local_70);
    if (*(int *)local_70.field0_0x0 != -1) {
      if (*(int *)local_70.field0_0x0 != 0) {
        LOCK();
        *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
        local_29 = *(int *)local_70.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a11e05;
      }
      QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
    }
LAB_100a11e05:
    FUN_100a188c0(&local_78,uVar2);
    QString::operator=((QString *)(local_48 + 8),&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_29 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100a11e4e;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
LAB_100a11e4e:
    local_38 = FUN_100a188f0(uVar2);
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))(*(long **)(param_1 + 0x88),local_58);
    FUN_100a12140(local_58);
  }
  puVar1 = PTR_s_AuthorizationToken_102280ac0;
  iVar4 = -1;
  if (PTR_s_AuthorizationToken_102280ac0 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_AuthorizationToken_102280ac0);
    iVar4 = (int)sVar3;
  }
  local_80 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  this = (QVariant *)FUN_1002edf40(param_1 + 0x28,&local_80);
  FUN_100a188c0(&local_98,uVar2);
  QVariant::QVariant(&local_90,&local_98);
  QVariant::operator=(this,&local_90);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a11f2a;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_100a11f2a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a11f5a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100a11f5a:
  FUN_100a0c410(*(undefined4 *)(param_1 + 0x20),param_1 + 0x28,param_1 + 0x30,0);
  QObject::deleteLater();
  return;
}

