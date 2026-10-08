
undefined8 FUN_1002ad620(long param_1)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  QString QVar10;
  _func_void_Node_ptr *p_Var11;
  void *pvVar12;
  _func_void_Node_ptr *p_Var13;
  _func_void_Node_ptr *p_Var14;
  _func_void_Node_ptr *p_Var15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long local_90;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  int iStack_81;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 uStack_74;
  undefined2 uStack_73;
  undefined1 uStack_71;
  QString local_70;
  _func_void_Node_ptr *local_68;
  Data_conflict local_60;
  undefined4 local_58;
  QString local_50;
  _func_void_Node_ptr *local_48;
  undefined2 local_3b;
  undefined1 local_39;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_31;
  
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    local_31 = *piVar3 != 0;
    UNLOCK();
  }
  uVar9 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  local_38 = (uint)local_38._2_2_ << 0x10;
  FUN_1002ade30(&local_48,param_1);
  QVar10.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("actionOnClose",0xd);
  uVar2 = *(uint *)(local_48 + 0x20);
  p_Var15 = local_48;
  local_50.field0_0x0 = QVar10.field0_0x0;
  if (uVar2 != 0) {
    uVar7 = qHash(&local_50,*(uint *)(local_48 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar2;
    p_Var13 = *(_func_void_Node_ptr **)(*(long *)(local_48 + 8) + uVar4 * 8);
    if (p_Var13 != local_48) {
      p_Var11 = (_func_void_Node_ptr *)(*(long *)(local_48 + 8) + uVar4 * 8);
      do {
        p_Var14 = p_Var13;
        if (*(uint *)(p_Var13 + 8) == uVar7) {
          cVar6 = operator==(&local_50,(QString *)(p_Var13 + 0x10));
          p_Var14 = *(_func_void_Node_ptr **)p_Var11;
          QVar10.field0_0x0 = local_50.field0_0x0;
          p_Var15 = p_Var14;
          if (cVar6 != '\0') break;
        }
        p_Var13 = *(_func_void_Node_ptr **)p_Var14;
        QVar10.field0_0x0 = local_50.field0_0x0;
        p_Var15 = local_48;
        p_Var11 = p_Var14;
      } while (p_Var13 != local_48);
    }
  }
  if (*(int *)QVar10.field0_0x0 != -1) {
    if (*(int *)QVar10.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar10.field0_0x0 = *(int *)QVar10.field0_0x0 + -1;
      local_31 = *(int *)QVar10.field0_0x0 != 0;
      UNLOCK();
      QVar10.field0_0x0 = local_50.field0_0x0;
      if ((bool)local_31) goto LAB_1002ad76c;
    }
    QArrayData::deallocate((QArrayData *)QVar10.field0_0x0,2,8);
  }
LAB_1002ad76c:
  if (*(int *)(local_48 + 0x10) != -1) {
    if (*(int *)(local_48 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ad798;
    }
    QHashData::free_helper(local_48);
  }
LAB_1002ad798:
  uVar8 = 0xffff;
  if (p_Var15 == local_48) goto LAB_1002ad8d3;
  FUN_1002ade30(&local_68,param_1);
  local_70.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("actionOnClose",0xd);
  if ((*(int *)(local_68 + 0x14) == 0) || (uVar2 = *(uint *)(local_68 + 0x20), uVar2 == 0)) {
LAB_1002ad851:
    local_58 = 0x80000000;
    local_60.field7 = 0;
  }
  else {
    uVar7 = qHash(&local_70,*(uint *)(local_68 + 0x24));
    uVar4 = (ulong)uVar7 % (ulong)uVar2;
    p_Var15 = *(_func_void_Node_ptr **)(*(long *)(local_68 + 8) + uVar4 * 8);
    if (p_Var15 == local_68) goto LAB_1002ad851;
    p_Var13 = (_func_void_Node_ptr *)(*(long *)(local_68 + 8) + uVar4 * 8);
    do {
      if (*(uint *)(p_Var15 + 8) == uVar7) {
        cVar6 = operator==(&local_70,(QString *)(p_Var15 + 0x10));
        p_Var11 = *(_func_void_Node_ptr **)p_Var13;
        p_Var15 = *(_func_void_Node_ptr **)p_Var13;
        if (cVar6 != '\0') break;
      }
      p_Var13 = p_Var15;
      p_Var15 = *(_func_void_Node_ptr **)p_Var13;
      p_Var11 = local_68;
    } while (p_Var15 != local_68);
    if (p_Var11 == local_68) goto LAB_1002ad851;
    QVariant::QVariant((QVariant *)&local_60,(QVariant *)(p_Var11 + 0x18));
  }
  uVar8 = QVariant::toInt((bool *)&local_60.field0);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_31 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ad8a7;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1002ad8a7:
  if (*(int *)(local_68 + 0x10) != -1) {
    if (*(int *)(local_68 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002ad8d3;
    }
    QHashData::free_helper(local_68);
  }
LAB_1002ad8d3:
  pvVar12 = operator_new(0x40);
  local_88 = 3;
  uStack_84 = 0;
  uStack_82 = 1;
  uStack_7d = local_34;
  iStack_81 = local_38;
  iVar5 = iStack_81;
  local_78 = 0;
  uStack_74 = 0;
  uStack_71 = local_39;
  uStack_73 = local_3b;
  lVar18 = (ulong)CONCAT12(local_39,local_3b) << 0x28;
  iStack_81._0_1_ = (undefined1)local_38;
  uVar16 = CONCAT17((undefined1)iStack_81,0x1000000000003);
  iStack_81._1_3_ = (undefined3)((uint)local_38 >> 8);
  uVar17 = CONCAT44(uVar8,CONCAT13(local_34,iStack_81._1_3_));
  iStack_81 = iVar5;
  uStack_7c = uVar8;
  FUN_1002c08d0(pvVar12,uVar9);
  QObject::connect(&local_90,pvVar12,"2taskFinished(PRL_RESULT)",param_1,
                   "1subTaskCompleted(PRL_RESULT)",0,uVar16,uVar17,lVar18);
  if (local_90 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  CAbstractTask::execute();
  return 0;
}

