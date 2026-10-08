
/* WARNING: Removing unreachable block (ram,0x0001001df769) */
/* WARNING: Removing unreachable block (ram,0x0001001df777) */
/* WARNING: Removing unreachable block (ram,0x0001001df783) */

undefined8 FUN_1001df380(long param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  uint in_stack_fffffffffffffebc;
  Data_conflict local_108;
  undefined4 local_100;
  undefined1 local_f8;
  undefined1 local_f0 [24];
  QVariant local_d8;
  QArrayData *local_c8;
  int *local_c0 [4];
  QVariant local_a0 [2];
  QArrayData *local_88;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QString local_60;
  QVariant local_58;
  QVariant local_48;
  undefined1 local_38 [8];
  _func_void_Node_ptr *local_30;
  undefined1 local_21;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) {
    return 1;
  }
  FUN_10016f500(lVar5);
  FUN_10061c2c0(local_38);
  cVar2 = FUN_1001de400(local_38);
  bVar6 = true;
  if (cVar2 != '\0') {
    QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
    QString::number((int)&local_68,0xc);
    QString::fromUtf8_helper((char *)&local_60,0x1dd9771);
    QString::append(&local_60);
    QVariant::QVariant(&local_78,0);
    QSettings::value((QString *)&local_48,&local_58);
    iVar3 = QVariant::toInt((bool *)&local_48);
    bVar6 = iVar3 != 0xb;
    QVariant::~QVariant(&local_48);
    QVariant::~QVariant(&local_78);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        local_21 = *(int *)local_60.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001df48a;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
LAB_1001df48a:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_21 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001df4ba;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1001df4ba:
    QSettings::~QSettings((QSettings *)&local_58);
  }
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001df4f2;
    }
    QHashData::free_helper(local_30);
  }
LAB_1001df4f2:
  if (bVar6) {
    return 1;
  }
  QMetaObject::tr((char *)&local_80,PTR_staticMetaObject_1021e1520,(int)PTR_s_en_102270a70);
  iVar3 = QString::compare_helper
                    (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),"zh_CN",
                     0xffffffff,1);
  bVar6 = true;
  if (iVar3 != 0) {
    QMetaObject::tr((char *)&local_88,PTR_staticMetaObject_1021e1520,(int)PTR_s_en_102270a70);
    iVar3 = QString::compare_helper
                      (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),"zh_TW",
                       0xffffffff,1);
    bVar6 = iVar3 == 0;
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_21 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001df5be;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_1001df5be:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_21 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001df5ee;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001df5ee:
  if (bVar6) {
    return 1;
  }
  FUN_100df99c0("[AppController]","prl_client_app",0,"Failed to load localization");
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  local_c8 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onReportProblemOnStartAppAnswered(PRL_RESULT,Messaging::ButtonID)",0x42);
  local_d8.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_d8.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_c0,uVar4,&local_c8,&local_d8);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_21 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001df6a6;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_1001df6a6:
  iVar3 = CMessageManager::instance();
  local_f0._16_8_ = PTR_shared_null_1021e1288;
  local_f0._8_8_ = PTR_shared_null_1021e15e8;
  local_f0._0_8_ = PTR_shared_null_1021e15e8;
  local_100 = 0x80000000;
  local_108.field7 = 0;
  local_f8 = 1;
  CMessageManager::showMessageBox
            (iVar3,(QString *)0x80015431,(QStringList *)(local_f0 + 0x10),
             (QStringList *)(local_f0 + 8),(CSlotInfo *)local_f0,SUB81(local_c0,0),
             (QWidget *)((ulong)in_stack_fffffffffffffebc << 0x20),(CSlotInfo *)0x0);
  QVariant::~QVariant((QVariant *)&local_108);
  FUN_100039a80(local_f0);
  FUN_100039a80(local_f0 + 8);
  if (*(int *)local_f0._16_8_ != -1) {
    if (*(int *)local_f0._16_8_ != 0) {
      LOCK();
      *(int *)local_f0._16_8_ = *(int *)local_f0._16_8_ + -1;
      local_21 = *(int *)local_f0._16_8_ != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001df7d6;
    }
    QArrayData::deallocate((QArrayData *)local_f0._16_8_,2,8);
  }
LAB_1001df7d6:
  QVariant::~QVariant(local_a0);
  if (local_c0[0] != (int *)0x0) {
    LOCK();
    *local_c0[0] = *local_c0[0] + -1;
    local_21 = *local_c0[0] != 0;
    UNLOCK();
    if ((!(bool)local_21) && (local_c0[0] != (int *)0x0)) {
      operator_delete(local_c0[0]);
    }
  }
  return 0;
}

