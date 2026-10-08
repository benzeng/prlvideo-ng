
void FUN_10063a630(long param_1,undefined8 param_2,QString *param_3)

{
  undefined *puVar1;
  char cVar2;
  size_t sVar3;
  void *pvVar4;
  int iVar5;
  QString local_80;
  int *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  Data_conflict local_58;
  undefined4 local_50;
  undefined1 local_48;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  puVar1 = PTR_s_FakeUUID4Trial_102274af8;
  if (*(long *)(param_1 + 0xa8) == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    QDialog::reject();
    return;
  }
  iVar5 = -1;
  if (PTR_s_FakeUUID4Trial_102274af8 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_FakeUUID4Trial_102274af8);
    iVar5 = (int)sVar3;
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar1,iVar5);
  cVar2 = operator==(param_3,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10063a6b9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10063a6b9:
  if (cVar2 != '\0') {
    if (DAT_102310958 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_100612710(pvVar4);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar4;
    }
    pvVar4 = DAT_102310958;
    FUN_10015a2b0(&local_40,*(undefined8 *)(param_1 + 0xa8));
    local_78 = (int *)0x0;
    uStack_70 = 0;
    local_60 = 0;
    local_68 = 0;
    local_50 = 0x80000000;
    local_58.field7 = 0;
    local_48 = 1;
    FUN_10060b2b0(pvVar4,0,&local_40,&local_78,0);
    QVariant::~QVariant((QVariant *)&local_58);
    if (local_78 != (int *)0x0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_29 = *local_78 != 0;
      UNLOCK();
      if ((!(bool)local_29) && (local_78 != (int *)0x0)) {
        operator_delete(local_78);
      }
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10063a833;
      }
      QArrayData::deallocate(local_40,2,8);
    }
    goto LAB_10063a833;
  }
  FUN_10015a2b0(&local_80,*(undefined8 *)(param_1 + 0xa8));
  cVar2 = operator==(&local_80,param_3);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10063a82f;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10063a82f:
  if (cVar2 == '\0') {
    return;
  }
LAB_10063a833:
  QDialog::accept();
  return;
}

