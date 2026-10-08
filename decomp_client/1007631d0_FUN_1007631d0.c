
void FUN_1007631d0(QObject *param_1,QObject *param_2)

{
  QObject *pQVar1;
  undefined *puVar2;
  int iVar3;
  QObject *pQVar4;
  Node *pNVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_c0;
  long local_a8;
  Node *local_a0;
  Node *local_98;
  Node *local_90;
  undefined4 local_88;
  QObject *local_80;
  undefined4 local_74;
  QObject *local_70;
  undefined4 local_64;
  QObject *local_60;
  undefined4 local_54;
  QObject *local_50;
  undefined4 local_44;
  QObject *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1022292f8;
  pQVar1 = param_1 + 0x10;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_1021e15d0;
  param_1[0x18] = (QObject)0x0;
  local_38 = 0;
  pQVar4 = operator_new(0x48);
  QObject::QObject(pQVar4,param_1);
  *(undefined ***)pQVar4 = &PTR_FUN_102229270;
  *(undefined4 *)(pQVar4 + 0x10) = 0;
  puVar2 = PTR_shared_null_1021e1288;
  auVar7._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar7._0_8_ = PTR_shared_null_1021e1288;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])(pQVar4 + 0x18) = auVar7;
  *(undefined **)(pQVar4 + 0x28) = puVar2;
  pQVar4[0x30] = (QObject)0x0;
  *(undefined8 *)(pQVar4 + 0x40) = 0;
  *(undefined8 *)(pQVar4 + 0x38) = 0;
  local_40 = pQVar4;
  FUN_100763820(pQVar1,&local_38,&local_40);
  local_44 = 1;
  pQVar4 = operator_new(0x48);
  QObject::QObject(pQVar4,param_1);
  *(undefined ***)pQVar4 = &PTR_FUN_102229270;
  *(undefined4 *)(pQVar4 + 0x10) = 1;
  uStack_c0 = auVar7._8_8_;
  *(undefined **)(pQVar4 + 0x18) = puVar2;
  *(undefined8 *)(pQVar4 + 0x20) = uStack_c0;
  *(undefined **)(pQVar4 + 0x28) = puVar2;
  pQVar4[0x30] = (QObject)0x0;
  *(undefined8 *)(pQVar4 + 0x40) = 0;
  *(undefined8 *)(pQVar4 + 0x38) = 0;
  local_50 = pQVar4;
  FUN_100763820(pQVar1,&local_44,&local_50);
  local_54 = 2;
  pQVar4 = operator_new(0x48);
  QObject::QObject(pQVar4,param_1);
  *(undefined ***)pQVar4 = &PTR_FUN_102229270;
  *(undefined4 *)(pQVar4 + 0x10) = 2;
  *(undefined **)(pQVar4 + 0x18) = puVar2;
  *(undefined8 *)(pQVar4 + 0x20) = uStack_c0;
  *(undefined **)(pQVar4 + 0x28) = puVar2;
  pQVar4[0x30] = (QObject)0x0;
  *(undefined8 *)(pQVar4 + 0x40) = 0;
  *(undefined8 *)(pQVar4 + 0x38) = 0;
  local_60 = pQVar4;
  FUN_100763820(pQVar1,&local_54,&local_60);
  local_64 = 3;
  pQVar4 = operator_new(0x48);
  QObject::QObject(pQVar4,param_1);
  *(undefined ***)pQVar4 = &PTR_FUN_102229270;
  *(undefined4 *)(pQVar4 + 0x10) = 3;
  *(undefined **)(pQVar4 + 0x18) = puVar2;
  *(undefined8 *)(pQVar4 + 0x20) = uStack_c0;
  *(undefined **)(pQVar4 + 0x28) = puVar2;
  pQVar4[0x30] = (QObject)0x0;
  *(undefined8 *)(pQVar4 + 0x40) = 0;
  *(undefined8 *)(pQVar4 + 0x38) = 0;
  local_70 = pQVar4;
  FUN_100763820(pQVar1,&local_64,&local_70);
  local_74 = 4;
  pQVar4 = operator_new(0x48);
  QObject::QObject(pQVar4,param_1);
  *(undefined ***)pQVar4 = &PTR_FUN_102229270;
  *(undefined4 *)(pQVar4 + 0x10) = 4;
  *(undefined **)(pQVar4 + 0x18) = puVar2;
  *(undefined8 *)(pQVar4 + 0x20) = uStack_c0;
  *(undefined **)(pQVar4 + 0x28) = puVar2;
  pQVar4[0x30] = (QObject)0x0;
  *(undefined8 *)(pQVar4 + 0x40) = 0;
  *(undefined8 *)(pQVar4 + 0x38) = 0;
  local_80 = pQVar4;
  FUN_100763820(pQVar1,&local_74,&local_80);
  FUN_1007639c0(&local_a0,pQVar1);
  iVar3 = *(int *)(local_a0 + 0x20);
  pNVar5 = local_a0;
  if (iVar3 != 0) {
    plVar6 = *(long **)(local_a0 + 8);
    do {
      pNVar5 = (Node *)*plVar6;
      if ((Node *)*plVar6 != local_a0) break;
      iVar3 = iVar3 + -1;
      plVar6 = plVar6 + 1;
      pNVar5 = local_a0;
    } while (iVar3 != 0);
  }
  local_90 = local_a0;
  local_98 = pNVar5;
  if (pNVar5 != local_a0) {
    do {
      local_88 = 1;
      local_98 = pNVar5;
      QObject::connect((Connection *)&local_a8,*(undefined8 *)(pNVar5 + 0x10),
                       "2actionEnabledChanged(bool)",param_1,"1onSectionActionEnabledChanged()",0);
      if (local_a8 != 0) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_a8);
      local_88 = 0;
      pNVar5 = (Node *)QHashData::nextNode(pNVar5);
      local_98 = pNVar5;
    } while (pNVar5 != local_a0);
  }
  local_88 = 1;
  if (*(int *)(local_a0 + 0x10) != -1) {
    if (*(int *)(local_a0 + 0x10) != 0) {
      LOCK();
      pNVar5 = local_a0 + 0x10;
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      local_31 = *(int *)pNVar5 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_a0);
  }
  return;
}

