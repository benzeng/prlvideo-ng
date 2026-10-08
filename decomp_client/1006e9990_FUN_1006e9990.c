
undefined4 FUN_1006e9990(long param_1,bool param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  undefined4 uVar4;
  CProductUpdateInfo *this;
  QArrayData *local_130;
  QArrayData *local_128;
  QString local_120;
  QString local_118;
  undefined8 local_110;
  QString local_108;
  QString local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  undefined8 local_e0;
  QString local_d8;
  QString local_d0;
  QString local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [56];
  QString local_80 [4];
  undefined1 local_60 [47];
  undefined1 local_31;
  
  cVar3 = FUN_100d80630(1);
  if (cVar3 != '\0') {
    if (DAT_10230ffd0 < 2) {
      return 0x80000009;
    }
    FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",2,
                  "In current application mode product upgrade not available.");
    return 0x80000009;
  }
  FUN_1006e89e0(local_b8);
  cVar3 = FUN_10073dd70(local_b8);
  if (cVar3 == '\0') {
    uVar4 = 0x80000001;
    FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",0,"No valid free/purchased upgrade found!")
    ;
    goto LAB_1006e9ce0;
  }
  local_d8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x40);
  if (1 < *(int *)local_d8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + 1;
    local_31 = *(int *)local_d8.field0_0x0 != 0;
    UNLOCK();
  }
  local_d0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x48);
  if (1 < *(int *)local_d0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_d0.field0_0x0 = *(int *)local_d0.field0_0x0 + 1;
    local_31 = *(int *)local_d0.field0_0x0 != 0;
    UNLOCK();
  }
  local_c8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x50);
  if (1 < *(int *)local_c8.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + 1;
    local_31 = *(int *)local_c8.field0_0x0 != 0;
    UNLOCK();
  }
  local_c0 = *(undefined8 *)(param_1 + 0x58);
  FUN_1006e9e20(&local_120,local_b8);
  QString::operator=((QString *)(param_1 + 0x18),&local_120);
  QString::operator=((QString *)(param_1 + 0x20),&local_118);
  *(undefined8 *)(param_1 + 0x28) = local_110;
  QString::operator=((QString *)(param_1 + 0x30),&local_108);
  QString::operator=((QString *)(param_1 + 0x38),&local_100);
  QString::operator=((QString *)(param_1 + 0x40),&local_f8);
  QString::operator=((QString *)(param_1 + 0x48),&local_f0);
  QString::operator=((QString *)(param_1 + 0x50),&local_e8);
  *(undefined8 *)(param_1 + 0x58) = local_e0;
  FUN_10024f950(&local_120);
  cVar3 = operator==(&local_d8,local_80);
  if (cVar3 != '\0') {
    QString::operator=((QString *)(param_1 + 0x40),&local_d8);
    QString::operator=((QString *)(param_1 + 0x48),&local_d0);
    QString::operator=((QString *)(param_1 + 0x50),&local_c8);
    *(undefined8 *)(param_1 + 0x58) = local_c0;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  CProductUpdateInfo::store();
  if (1 < DAT_10230ffd0) {
    QString::toUtf8();
    lVar1 = *(long *)(local_128 + 0x10);
    QString::toUtf8();
    FUN_100df99c0("[APP_UPGRADE_PROMO]","prl_client_app",2,
                  "About to install the latest upgrade from order [%s], URL [%s]",local_128 + lVar1,
                  local_130 + *(long *)(local_130 + 0x10));
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_31 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e9c2f;
      }
      QArrayData::deallocate(local_130,1,8);
    }
LAB_1006e9c2f:
    if (*(int *)local_128 != -1) {
      if (*(int *)local_128 != 0) {
        LOCK();
        *(int *)local_128 = *(int *)local_128 + -1;
        local_31 = *(int *)local_128 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006e9c65;
      }
      QArrayData::deallocate(local_128,1,8);
    }
  }
LAB_1006e9c65:
  puVar2 = PTR_m_instance_1021e1340;
  this = *(CProductUpdateInfo **)PTR_m_instance_1021e1340;
  if (this == (CProductUpdateInfo *)0x0) {
    this = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic((CAppUpdateLogic *)this);
    *(CProductUpdateInfo **)puVar2 = this;
    DAT_102274b28 = 1;
  }
  uVar4 = CAppUpdateLogic::installUpdate(this,SUB81((QString *)(param_1 + 0x18),0),param_2);
  FUN_1001b8da0(&local_d8);
LAB_1006e9ce0:
  FUN_100252c80(local_60);
  FUN_100252e70(local_b8);
  return uVar4;
}

