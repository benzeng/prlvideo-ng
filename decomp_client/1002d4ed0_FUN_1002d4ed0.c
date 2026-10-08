
void FUN_1002d4ed0(long *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  QStringList *pQVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  long lVar7;
  QString local_a0;
  undefined1 local_98 [40];
  int *local_70 [4];
  QVariant local_50 [2];
  undefined1 local_31;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102202120);
  if (param_2 < 0) {
    local_98._32_8_ =
         QString::fromAscii_helper
                   ("1onVmRegistrationFailureProcessed( PRL_RESULT, Messaging::ButtonID, const QVariant& )"
                    ,0x55);
    QVariant::QVariant((QVariant *)(local_98 + 0x10),param_2);
    FUN_100a1c600(local_70,param_1,local_98 + 0x20,local_98 + 0x10);
    QVariant::~QVariant((QVariant *)(local_98 + 0x10));
    if (*(int *)local_98._32_8_ != -1) {
      if (*(int *)local_98._32_8_ != 0) {
        LOCK();
        *(int *)local_98._32_8_ = *(int *)local_98._32_8_ + -1;
        local_31 = *(int *)local_98._32_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d4f72;
      }
      QArrayData::deallocate((QArrayData *)local_98._32_8_,2,8);
    }
LAB_1002d4f72:
    iVar2 = CMessageManager::instance();
    pQVar4 = (QStringList *)0x0;
    if ((param_1[7] != 0) && (pQVar4 = (QStringList *)0x0, *(int *)(param_1[7] + 4) != 0)) {
      pQVar4 = (QStringList *)param_1[8];
    }
    local_98._8_8_ = PTR_shared_null_1021e15e8;
    local_98._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar2,(QWidget *)0x80015336,pQVar4,(QStringList *)(local_98 + 8),
               (CSlotInfo *)local_98,SUB81(local_70,0));
    uVar1 = local_98._0_8_;
    if (*(int *)local_98._0_8_ != -1) {
      if (*(int *)local_98._0_8_ != 0) {
        LOCK();
        *(int *)local_98._0_8_ = *(int *)local_98._0_8_ + -1;
        local_31 = *(int *)local_98._0_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d5061;
      }
      iVar2 = *(int *)(local_98._0_8_ + 0xc);
      if (iVar2 != *(int *)(local_98._0_8_ + 8)) {
        lVar7 = (long)*(int *)(local_98._0_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar5 = (Data *)(local_98._0_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar6 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar6 == 0) {
LAB_1002d5040:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar6 = *(QArrayData **)pDVar5;
              goto LAB_1002d5040;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar1);
    }
LAB_1002d5061:
    uVar1 = local_98._8_8_;
    if (*(int *)local_98._8_8_ != -1) {
      if (*(int *)local_98._8_8_ != 0) {
        LOCK();
        *(int *)local_98._8_8_ = *(int *)local_98._8_8_ + -1;
        local_31 = *(int *)local_98._8_8_ != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1002d50f1;
      }
      iVar2 = *(int *)(local_98._8_8_ + 0xc);
      if (iVar2 != *(int *)(local_98._8_8_ + 8)) {
        lVar7 = (long)*(int *)(local_98._8_8_ + 8) * 8 + (long)iVar2 * -8;
        pDVar5 = (Data *)(local_98._8_8_ + (long)iVar2 * 8 + 8);
        do {
          pQVar6 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar6 == 0) {
LAB_1002d50d0:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar6 = *(QArrayData **)pDVar5;
              goto LAB_1002d50d0;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar7 = lVar7 + 8;
        } while (lVar7 != 0);
      }
      QListData::dispose((Data *)uVar1);
    }
LAB_1002d50f1:
    QVariant::~QVariant(local_50);
    if (local_70[0] != (int *)0x0) {
      LOCK();
      *local_70[0] = *local_70[0] + -1;
      local_31 = *local_70[0] != 0;
      UNLOCK();
      if ((!(bool)local_31) && (local_70[0] != (int *)0x0)) {
        operator_delete(local_70[0]);
      }
    }
  }
  local_a0.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 0x60);
  if (1 < *(int *)local_a0.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + 1;
    local_31 = *(int *)local_a0.field0_0x0 != 0;
    UNLOCK();
  }
  QString::operator=((QString *)(param_1 + 0xb),&local_a0);
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002d5182;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_1002d5182:
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}

