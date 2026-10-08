
void FUN_1007af340(QStringList *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  Data *pDVar5;
  AnonymousUnion0 AVar6;
  QArrayData *pQVar7;
  QWidget *pQVar8;
  long lVar9;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined4 local_160;
  Data_conflict local_158;
  undefined4 local_150;
  undefined1 local_148;
  undefined1 local_138 [48];
  undefined8 local_108;
  int local_100;
  QString local_f8;
  QString local_f0;
  QString local_e8;
  QString local_e0;
  QString local_d8;
  int local_d0;
  QString local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  QMetaObject *local_a8;
  undefined5 local_a0;
  undefined3 uStack_9b;
  undefined5 local_98;
  undefined3 uStack_93;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  QString local_58;
  int local_50;
  QString local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  if (param_1[0x23].field0_0x0.field1 == (Data *)0x0) {
    return;
  }
  if (*(int *)((long)param_1[0x23].field0_0x0.field1 + 4) == 0) {
    return;
  }
  if (param_1[0x24].field0_0x0.field1 == (Data *)0x0) {
    return;
  }
  cVar2 = FUN_10011a820();
  if (cVar2 != '\0') {
    AVar6.field1 = (Data *)0x0;
    if ((param_1[0x23].field0_0x0.field1 != (Data *)0x0) &&
       (AVar6.field1 = (Data *)0x0, *(int *)((long)param_1[0x23].field0_0x0.field1 + 4) != 0)) {
      AVar6 = (AnonymousUnion0)param_1[0x24].field0_0x0.field1;
    }
    FUN_10011a850(AVar6.field1);
    return;
  }
  local_a0 = 3;
  local_98 = 3;
  local_90 = CONCAT35(local_90._5_3_,3);
  local_88 = CONCAT35(local_88._5_3_,3);
  local_78._8_4_ = (int)PTR_shared_null_1021e1288;
  local_78._0_8_ = PTR_shared_null_1021e1288;
  local_78._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_80 = 0;
  local_40 = 0xff000000ff;
  local_ac = 0;
  local_b0 = 0;
  local_68 = local_78;
  cVar2 = FUN_1007a7bb0(param_1[0x20].field0_0x0.field1,&local_ac,&local_b0);
  if (cVar2 != '\0') {
    FUN_1007a7870(local_138 + 0x10,param_1[0x20].field0_0x0.field1,local_ac,local_b0);
    local_80 = local_100;
    local_88 = local_108;
    local_90 = local_138._40_8_;
    _local_98 = local_138._32_8_;
    _local_a0 = local_138._24_8_;
    local_a8 = (QMetaObject *)local_138._16_8_;
    QString::operator=((QString *)local_78,&local_f8);
    QString::operator=((QString *)(local_78 + 8),&local_f0);
    QString::operator=((QString *)local_68,&local_e8);
    QString::operator=((QString *)(local_68 + 8),&local_e0);
    QString::operator=(&local_58,&local_d8);
    local_50 = local_d0;
    QString::operator=(&local_48,&local_c8);
    local_38 = local_b8;
    local_40 = local_c0;
    FUN_1007a1cf0(&local_f8);
  }
  if ((local_80 != 2) || (pQVar8 = (QWidget *)0x80015465, local_50 == 0)) {
    AVar6.field1 = (Data *)0x0;
    if ((param_1[0x23].field0_0x0.field1 != (Data *)0x0) &&
       (AVar6.field1 = (Data *)0x0, *(int *)((long)param_1[0x23].field0_0x0.field1 + 4) != 0)) {
      AVar6 = (AnonymousUnion0)param_1[0x24].field0_0x0.field1;
    }
    iVar3 = FUN_10018a9d0(AVar6.field1);
    pQVar8 = (QWidget *)0x80015469;
    if (iVar3 == 0x30000001) {
      pvVar4 = operator_new(0x80);
      AVar6.field1 = (Data *)0x0;
      if ((param_1[0x23].field0_0x0.field1 != (Data *)0x0) &&
         (AVar6.field1 = (Data *)0x0, *(int *)((long)param_1[0x23].field0_0x0.field1 + 4) != 0)) {
        AVar6 = (AnonymousUnion0)param_1[0x24].field0_0x0.field1;
      }
      FUN_10026b390(pvVar4,AVar6.field1,3,&local_58);
      FUN_1007b1cd0(pvVar4,param_1);
      CAbstractTask::execute();
      goto LAB_1007af7d1;
    }
  }
  iVar3 = CMessageManager::instance();
  local_138._8_8_ = PTR_shared_null_1021e15e8;
  local_138._0_8_ = PTR_shared_null_1021e15e8;
  local_178 = (undefined1  [16])0x0;
  local_160 = 0;
  local_168 = 0;
  local_150 = 0x80000000;
  local_158.field7 = 0;
  local_148 = 1;
  CMessageManager::showMessageBox
            (iVar3,pQVar8,param_1,(QStringList *)(local_138 + 8),(CSlotInfo *)local_138,
             SUB81(local_178,0));
  QVariant::~QVariant((QVariant *)&local_158);
  if ((int *)local_178._0_8_ != (int *)0x0) {
    LOCK();
    *(int *)local_178._0_8_ = *(int *)local_178._0_8_ + -1;
    local_29 = *(int *)local_178._0_8_ != 0;
    UNLOCK();
    if ((!(bool)local_29) && ((int *)local_178._0_8_ != (int *)0x0)) {
      operator_delete((void *)local_178._0_8_);
    }
  }
  uVar1 = local_138._0_8_;
  if (*(int *)local_138._0_8_ != -1) {
    if (*(int *)local_138._0_8_ != 0) {
      LOCK();
      *(int *)local_138._0_8_ = *(int *)local_138._0_8_ + -1;
      local_29 = *(int *)local_138._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007af740;
    }
    iVar3 = *(int *)(local_138._0_8_ + 0xc);
    if (iVar3 != *(int *)(local_138._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_138._0_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_138._0_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1007af71f:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1007af71f;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1007af740:
  uVar1 = local_138._8_8_;
  if (*(int *)local_138._8_8_ != -1) {
    if (*(int *)local_138._8_8_ != 0) {
      LOCK();
      *(int *)local_138._8_8_ = *(int *)local_138._8_8_ + -1;
      local_29 = *(int *)local_138._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007af7d1;
    }
    iVar3 = *(int *)(local_138._8_8_ + 0xc);
    if (iVar3 != *(int *)(local_138._8_8_ + 8)) {
      lVar9 = (long)*(int *)(local_138._8_8_ + 8) * 8 + (long)iVar3 * -8;
      pDVar5 = (Data *)(local_138._8_8_ + (long)iVar3 * 8 + 8);
      do {
        pQVar7 = *(QArrayData **)pDVar5;
        if (*(int *)pQVar7 == 0) {
LAB_1007af7b0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_29 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar7 = *(QArrayData **)pDVar5;
            goto LAB_1007af7b0;
          }
        }
        pDVar5 = pDVar5 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar1);
  }
LAB_1007af7d1:
  FUN_1007a1cf0(local_78);
  return;
}

