
void FUN_1001fecd0(long *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  QStringList *pQVar8;
  long lVar9;
  long lVar10;
  undefined1 local_1a8 [40];
  int *local_180 [4];
  QVariant local_160 [2];
  int *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  Data_conflict local_128;
  undefined4 local_120;
  undefined1 local_118;
  undefined1 local_110 [24];
  AnonymousUnion0 local_f8;
  undefined1 local_f0 [40];
  int *local_c8 [4];
  QVariant local_a8 [2];
  QArrayData *local_90;
  _func_void_Node_ptr *local_88;
  undefined1 local_80 [48];
  QArrayData *local_50;
  QArrayData *local_40;
  bool local_31;
  
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_1 + 7);
  if (lVar7 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to open converted VM. Converted VM is NULL!");
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000009);
  }
  uVar6 = FUN_100370280();
  uVar4 = DAT_100e152b8;
  pQVar8 = (QStringList *)FUN_1003704b0(uVar6,param_1 + 7,DAT_100e152b8);
  uVar6 = FUN_100370280();
  if (((param_1[5] == 0) || (*(int *)(param_1[5] + 4) == 0)) || (param_1[6] == 0)) {
    local_40 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_100188480(&local_40);
  }
  lVar9 = FUN_1003704b0(uVar6,&local_40,uVar4);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if (local_31) goto LAB_1001fedd5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1001fedd5:
  if ((pQVar8 == (QStringList *)0x0) || (lVar9 == 0)) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get VM window.");
  }
  else {
    FUN_10036e360(local_80,lVar9);
    FUN_10036bfc0(pQVar8,local_80);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if (local_31) goto LAB_1001fee49;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1001fee49:
  if (((param_1[5] != 0) && (*(int *)(param_1[5] + 4) != 0)) &&
     ((param_1[6] != 0 && (iVar3 = FUN_10018bce0(), iVar3 == 2)))) {
    lVar9 = 0;
    if ((param_1[5] != 0) && (lVar9 = 0, *(int *)(param_1[5] + 4) != 0)) {
      lVar9 = param_1[6];
    }
    lVar10 = 0;
    FUN_10018ff30(lVar9,0);
    if ((param_1[5] != 0) && (lVar10 = 0, *(int *)(param_1[5] + 4) != 0)) {
      lVar10 = param_1[6];
    }
    local_88 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
    FUN_1002ad220(lVar10,&local_88);
    if (*(int *)(local_88 + 0x10) != -1) {
      if (*(int *)(local_88 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_88 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if (local_31) goto LAB_1001feeff;
      }
      QHashData::free_helper(local_88);
    }
LAB_1001feeff:
    CAbstractTask::execute();
  }
  if (pQVar8 == (QStringList *)0x0) goto LAB_1001ff2b3;
  FUN_100116020(&local_90);
  uVar4 = FUN_10018f860(lVar7);
  uVar5 = FUN_10018f890(lVar7);
  cVar2 = FUN_100110a10(uVar4,uVar5);
  if (cVar2 == '\0') {
    if (*(int *)(param_1[9] + 4) == 0) {
      iVar3 = CMessageManager::instance();
      local_110._8_8_ = PTR_shared_null_1021e15e8;
      local_110._0_8_ = PTR_shared_null_1021e15e8;
      local_148 = (int *)0x0;
      uStack_140 = 0;
      local_130 = 0;
      local_138 = 0;
      local_120 = 0x80000000;
      local_128.field7 = 0;
      local_118 = 1;
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x3b70,pQVar8,(QStringList *)(local_110 + 8),
                 (CSlotInfo *)local_110,SUB81(&local_148,0));
      QVariant::~QVariant((QVariant *)&local_128);
      if (local_148 != (int *)0x0) {
        LOCK();
        *local_148 = *local_148 + -1;
        local_31 = *local_148 != 0;
        UNLOCK();
        if ((!local_31) && (local_148 != (int *)0x0)) {
          operator_delete(local_148);
        }
      }
      FUN_100039a80(local_110);
      FUN_100039a80(local_110 + 8);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if (local_31) goto LAB_1001ff2b3;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1001ff2b3:
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
    local_1a8._32_8_ =
         QString::fromAscii_helper
                   ("1onShowVmBackupOnConvertCompletionAnswered(PRL_RESULT, Messaging::ButtonID)",
                    0x4b);
    local_1a8._24_4_ = 0x80000000;
    local_1a8._16_8_ = (QMetaObject *)0x0;
    FUN_100a1c600(local_180,param_1,local_1a8 + 0x20,local_1a8 + 0x10);
    QVariant::~QVariant((QVariant *)(local_1a8 + 0x10));
    if (*(int *)local_1a8._32_8_ != -1) {
      if (*(int *)local_1a8._32_8_ != 0) {
        LOCK();
        *(int *)local_1a8._32_8_ = *(int *)local_1a8._32_8_ + -1;
        local_31 = *(int *)local_1a8._32_8_ != 0;
        UNLOCK();
        if (local_31) goto LAB_1001ff0ee;
      }
      QArrayData::deallocate((QArrayData *)local_1a8._32_8_,2,8);
    }
LAB_1001ff0ee:
    iVar3 = CMessageManager::instance();
    local_1a8._8_8_ = PTR_shared_null_1021e15e8;
    local_1a8._0_8_ = PTR_shared_null_1021e15e8;
    CMessageManager::showMessageBox
              (iVar3,(QWidget *)0x3b71,pQVar8,(QStringList *)(local_1a8 + 8),(CSlotInfo *)local_1a8,
               SUB81(local_180,0));
    FUN_100039a80(local_1a8);
    FUN_100039a80(local_1a8 + 8);
    QVariant::~QVariant(local_160);
    if (local_180[0] != (int *)0x0) {
      LOCK();
      *local_180[0] = *local_180[0] + -1;
      local_31 = *local_180[0] != 0;
      UNLOCK();
      if ((!local_31) && (local_180[0] != (int *)0x0)) {
        operator_delete(local_180[0]);
      }
    }
    if (*(int *)local_90 == -1) {
      return;
    }
    if (*(int *)local_90 == 0) goto LAB_1001ff399;
    LOCK();
    *(int *)local_90 = *(int *)local_90 + -1;
    iVar3 = *(int *)local_90;
    UNLOCK();
  }
  else {
    local_f0._32_8_ =
         QString::fromAscii_helper
                   ("1onStartVmOnConvertCompletionAnswered(PRL_RESULT, Messaging::ButtonID)",0x46);
    local_f0._24_4_ = 0x80000000;
    local_f0._16_8_ = (QMetaObject *)0x0;
    FUN_100a1c600(local_c8,param_1,local_f0 + 0x20,local_f0 + 0x10);
    QVariant::~QVariant((QVariant *)(local_f0 + 0x10));
    if (*(int *)local_f0._32_8_ != -1) {
      if (*(int *)local_f0._32_8_ != 0) {
        LOCK();
        *(int *)local_f0._32_8_ = *(int *)local_f0._32_8_ + -1;
        local_31 = *(int *)local_f0._32_8_ != 0;
        UNLOCK();
        if (local_31) goto LAB_1001fefcb;
      }
      QArrayData::deallocate((QArrayData *)local_f0._32_8_,2,8);
    }
LAB_1001fefcb:
    if (*(int *)(param_1[9] + 4) == 0) {
      iVar3 = CMessageManager::instance();
      local_f0._8_8_ = PTR_shared_null_1021e15e8;
      local_f0._0_8_ = PTR_shared_null_1021e15e8;
      FUN_1000341d0(local_f0,&local_90);
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x3b6c,pQVar8,(QStringList *)(local_f0 + 8),(CSlotInfo *)local_f0,
                 SUB81(local_c8,0));
      FUN_100039a80(local_f0);
      FUN_100039a80(local_f0 + 8);
    }
    else {
      iVar3 = CMessageManager::instance();
      local_f8.field1 = (Data *)PTR_shared_null_1021e15e8;
      local_110._16_8_ = PTR_shared_null_1021e15e8;
      FUN_1000341d0(local_110 + 0x10,&local_90);
      CMessageManager::showMessageBox
                (iVar3,(QWidget *)0x3b6f,pQVar8,(QStringList *)&local_f8.field0,
                 (CSlotInfo *)(local_110 + 0x10),SUB81(local_c8,0));
      FUN_100039a80(local_110 + 0x10);
      FUN_100039a80(&local_f8);
    }
    QVariant::~QVariant(local_a8);
    if (local_c8[0] != (int *)0x0) {
      LOCK();
      *local_c8[0] = *local_c8[0] + -1;
      local_31 = *local_c8[0] != 0;
      UNLOCK();
      if ((!local_31) && (local_c8[0] != (int *)0x0)) {
        operator_delete(local_c8[0]);
      }
    }
    if (*(int *)local_90 == -1) {
      return;
    }
    if (*(int *)local_90 == 0) goto LAB_1001ff399;
    LOCK();
    *(int *)local_90 = *(int *)local_90 + -1;
    iVar3 = *(int *)local_90;
    UNLOCK();
  }
  local_31 = iVar3 != 0;
  if (local_31) {
    return;
  }
LAB_1001ff399:
  QArrayData::deallocate(local_90,2,8);
  return;
}

