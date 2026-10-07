
void FUN_1006ac080(QRegExp *param_1,undefined8 param_2,int param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6,undefined8 *param_7,undefined8 param_8)

{
  Node *pNVar1;
  int *piVar2;
  Node *pNVar3;
  Node *pNVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined1 local_31;
  
  QRegExp::QRegExp(param_1,param_2,1,0);
  *(int *)(param_1 + 8) = param_3;
  *(undefined **)(param_1 + 0x10) = PTR_shared_null_100ba2188;
  piVar2 = (int *)*param_5;
  *(int **)(param_1 + 0x18) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  *(int *)(param_1 + 0x20) = param_6;
  auVar7._8_4_ = (int)PTR_shared_null_100ba2188;
  auVar7._0_8_ = PTR_shared_null_100ba2188;
  auVar7._12_4_ = (int)((ulong)PTR_shared_null_100ba2188 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar7;
  if (param_3 < 0) {
    param_3 = 0;
  }
  *(int *)(param_1 + 0x38) = param_3;
  if (param_6 < 0) {
    param_6 = 0;
  }
  *(int *)(param_1 + 0x3c) = param_6;
  FUN_1006b13d0(&local_40,param_4);
  FUN_1006b1310(param_1 + 0x10,&local_40);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ac155;
    }
    QListData::dispose(local_40);
  }
LAB_1006ac155:
  FUN_1006b1510(param_1 + 0x10);
  FUN_1006b13d0(&local_48,param_7);
  FUN_1006b1310(param_1 + 0x28,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ac1a0;
    }
    QListData::dispose(local_48);
  }
LAB_1006ac1a0:
  FUN_1006b1510(param_1 + 0x28);
  FUN_1006b13d0(&local_50,param_8);
  FUN_1006b1310(param_1 + 0x30,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ac1e9;
    }
    QListData::dispose(local_50);
  }
LAB_1006ac1e9:
  FUN_1006b1510(param_1 + 0x30);
  pNVar4 = (Node *)*param_7;
  if (1 < *(int *)(pNVar4 + 0x10) + 1U) {
    LOCK();
    pNVar3 = pNVar4 + 0x10;
    *(int *)pNVar3 = *(int *)pNVar3 + 1;
    local_31 = *(int *)pNVar3 != 0;
    UNLOCK();
  }
  pNVar3 = pNVar4;
  if ((((byte)pNVar4[0x28] & 1) == 0) && (1 < *(uint *)(pNVar4 + 0x10))) {
    pNVar3 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_1006a6ac0,0x6a6260,0x10);
    if (*(int *)(pNVar4 + 0x10) != -1) {
      if (*(int *)(pNVar4 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar4 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        local_31 = *(int *)pNVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006ac26b;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
    }
  }
LAB_1006ac26b:
  iVar5 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar5 != 0) {
    puVar6 = *(undefined8 **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*puVar6;
      if ((Node *)*puVar6 != pNVar3) break;
      iVar5 = iVar5 + -1;
      puVar6 = puVar6 + 1;
      pNVar4 = pNVar3;
    } while (iVar5 != 0);
  }
  for (; pNVar4 != pNVar3; pNVar4 = (Node *)QHashData::nextNode(pNVar4)) {
    iVar5 = *(int *)(pNVar4 + 0xc);
    if (*(int *)(pNVar4 + 0xc) <= *(int *)(param_1 + 0x3c)) {
      iVar5 = *(int *)(param_1 + 0x3c);
    }
    *(int *)(param_1 + 0x3c) = iVar5;
  }
  if (*(int *)(pNVar3 + 0x10) != -1) {
    if (*(int *)(pNVar3 + 0x10) != 0) {
      LOCK();
      pNVar4 = pNVar3 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + -1;
      local_31 = *(int *)pNVar4 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006ac32a;
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar3);
  }
LAB_1006ac32a:
  pNVar4 = (Node *)*param_4;
  if (1 < *(int *)(pNVar4 + 0x10) + 1U) {
    LOCK();
    pNVar3 = pNVar4 + 0x10;
    *(int *)pNVar3 = *(int *)pNVar3 + 1;
    local_31 = *(int *)pNVar3 != 0;
    UNLOCK();
  }
  pNVar3 = pNVar4;
  if ((((byte)pNVar4[0x28] & 1) == 0) && (1 < *(uint *)(pNVar4 + 0x10))) {
    pNVar3 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)pNVar4,FUN_1006a6ac0,0x6a6260,0x10);
    if (*(int *)(pNVar4 + 0x10) != -1) {
      if (*(int *)(pNVar4 + 0x10) != 0) {
        LOCK();
        pNVar1 = pNVar4 + 0x10;
        *(int *)pNVar1 = *(int *)pNVar1 + -1;
        local_31 = *(int *)pNVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006ac39e;
      }
      QHashData::free_helper((_func_void_Node_ptr *)pNVar4);
    }
  }
LAB_1006ac39e:
  iVar5 = *(int *)(pNVar3 + 0x20);
  pNVar4 = pNVar3;
  if (iVar5 != 0) {
    puVar6 = *(undefined8 **)(pNVar3 + 8);
    do {
      pNVar4 = (Node *)*puVar6;
      if ((Node *)*puVar6 != pNVar3) break;
      iVar5 = iVar5 + -1;
      puVar6 = puVar6 + 1;
      pNVar4 = pNVar3;
    } while (iVar5 != 0);
  }
  for (; pNVar4 != pNVar3; pNVar4 = (Node *)QHashData::nextNode(pNVar4)) {
    iVar5 = *(int *)(pNVar4 + 0xc);
    if (*(int *)(pNVar4 + 0xc) <= *(int *)(param_1 + 0x38)) {
      iVar5 = *(int *)(param_1 + 0x38);
    }
    *(int *)(param_1 + 0x38) = iVar5;
  }
  if (*(int *)(pNVar3 + 0x10) != -1) {
    if (*(int *)(pNVar3 + 0x10) != 0) {
      LOCK();
      pNVar4 = pNVar3 + 0x10;
      *(int *)pNVar4 = *(int *)pNVar4 + -1;
      local_31 = *(int *)pNVar4 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QHashData::free_helper((_func_void_Node_ptr *)pNVar3);
  }
  return;
}

