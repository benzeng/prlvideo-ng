
void FUN_1003a5b50(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  QStringList *pQVar8;
  int *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  Data_conflict local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined1 local_98 [40];
  QArrayData *local_70;
  QString local_68;
  QVariant local_60;
  QVariant local_50;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QObject::sender();
  QObject::property((char *)&local_50);
  QVariant::toString();
  QVariant::~QVariant(&local_50);
  if (*(int *)(local_40 + 4) == 0) goto LAB_1003a5f19;
  puVar4 = (undefined8 *)FUN_1003ae230(param_1 + 0x28,&local_40);
  piVar1 = (int *)*puVar4;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && ((void *)*puVar4 != (void *)0x0)) {
      operator_delete((void *)*puVar4);
    }
    puVar4[1] = 0;
    *puVar4 = 0;
  }
  if (param_2 < 0) goto LAB_1003a5f19;
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1df16ca);
  QString::append(&local_68);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003a5c66;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1003a5c66:
  FUN_1003e1800(&local_60,uVar5,&local_68,0);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_21 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003a5cbc;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1003a5cbc:
  if (cVar2 != '\0') {
    lVar6 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    if (lVar6 == 0) goto LAB_1003a5f19;
    uVar5 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
    cVar2 = FUN_10011cdc0(uVar5);
    if (cVar2 == '\0') {
      iVar3 = CMessageManager::instance();
      pQVar8 = (QStringList *)FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
      local_98._8_8_ = PTR_shared_null_1021e15e8;
      local_98._0_8_ = PTR_shared_null_1021e15e8;
      local_d8 = (int *)0x0;
      uStack_d0 = 0;
      local_c0 = 0;
      local_c8 = 0;
      local_b0 = 0x80000000;
      local_b8.field7 = 0;
      local_a8 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x80015290,pQVar8,(QStringList *)(local_98 + 8),
                 (CSlotInfo *)local_98,SUB81(&local_d8,0));
      QVariant::~QVariant((QVariant *)&local_b8);
      if (local_d8 != (int *)0x0) {
        LOCK();
        *local_d8 = *local_d8 + -1;
        local_21 = *local_d8 != 0;
        UNLOCK();
        if ((!(bool)local_21) && (local_d8 != (int *)0x0)) {
          operator_delete(local_d8);
        }
      }
      FUN_100039a80(local_98);
      FUN_100039a80(local_98 + 8);
    }
    else {
      lVar6 = FUN_1003a5510(param_1);
      if (lVar6 != 0) {
        uVar5 = FUN_1003a5510(param_1);
        uVar7 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
        local_98._16_8_ = local_40;
        if (1 < *(int *)local_40 + 1U) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_21 = *(int *)local_40 != 0;
          UNLOCK();
        }
        QString::fromUtf8_helper((char *)&local_30,0x1df16d5);
        QString::append((QString *)(local_98 + 0x10));
        if (*(int *)local_30 != -1) {
          if (*(int *)local_30 != 0) {
            LOCK();
            *(int *)local_30 = *(int *)local_30 + -1;
            local_21 = *(int *)local_30 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1003a5d82;
          }
          QArrayData::deallocate(local_30,2,8);
        }
LAB_1003a5d82:
        FUN_1003e1800(local_98 + 0x18,uVar7,local_98 + 0x10,0);
        QVariant::toString();
        cVar2 = FUN_1001b6730(uVar5,&local_70);
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_21 = *(int *)local_70 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1003a5ddf;
          }
          QArrayData::deallocate(local_70,2,8);
        }
LAB_1003a5ddf:
        QVariant::~QVariant((QVariant *)(local_98 + 0x18));
        if (*(int *)local_98._16_8_ != -1) {
          if (*(int *)local_98._16_8_ != 0) {
            LOCK();
            *(int *)local_98._16_8_ = *(int *)local_98._16_8_ + -1;
            local_21 = *(int *)local_98._16_8_ != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_1003a5e18;
          }
          QArrayData::deallocate((QArrayData *)local_98._16_8_,2,8);
        }
LAB_1003a5e18:
        if (cVar2 == '\0') {
          FUN_1003a6220(param_1,&local_40);
        }
      }
    }
  }
  FUN_100836790(*(undefined8 *)(param_1 + 0x10));
LAB_1003a5f19:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

