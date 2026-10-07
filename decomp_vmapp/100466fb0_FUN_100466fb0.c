
undefined1
FUN_100466fb0(undefined8 param_1,undefined4 param_2,void *param_3,int param_4,long *param_5)

{
  Node *pNVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  Node *pNVar5;
  Node *pNVar6;
  long *plVar7;
  undefined1 uVar8;
  QArrayData *local_60;
  undefined4 local_54;
  Node *local_50;
  long *local_48;
  long *local_40;
  undefined1 local_31;
  
  puVar4 = operator_new__((ulong)(param_4 + 0xcU));
  local_40 = operator_new(0x18);
  *(undefined4 *)(local_40 + 1) = 1;
  local_40[2] = (long)puVar4;
  *local_40 = (long)&PTR_FUN_100bef320;
  *puVar4 = param_2;
  puVar4[1] = 0;
  puVar4[2] = param_4;
  _memcpy(puVar4 + 3,param_3,(long)param_4);
  FUN_100791610(&local_48,0x1896b,0,&local_40,param_4 + 0xcU,&DAT_1011ccb98,1);
  local_50 = (Node *)PTR_shared_null_100ba2180;
  if (*(int *)(*param_5 + 4) == 0) {
    FUN_1004348e0(*(undefined8 *)(DAT_1011c3698 + 0xf0),&local_48,&local_50);
  }
  else {
    local_54 = FUN_100433970(*(undefined8 *)(DAT_1011c3698 + 0xf0),param_5,&local_48,1);
    FUN_100469110(&local_50,param_5,&local_54);
  }
  pNVar5 = local_50;
  if (1 < *(uint *)(local_50 + 0x10)) {
    pNVar5 = (Node *)QHashData::detach_helper
                               ((_func_void_Node_ptr_void_ptr *)local_50,FUN_100469400,0x4693b0,0x20
                               );
    if (*(int *)(local_50 + 0x10) != -1) {
      if (*(int *)(local_50 + 0x10) != 0) {
        LOCK();
        pNVar6 = local_50 + 0x10;
        *(int *)pNVar6 = *(int *)pNVar6 + -1;
        local_31 = *(int *)pNVar6 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100467103;
      }
      QHashData::free_helper((_func_void_Node_ptr *)local_50);
    }
  }
LAB_100467103:
  local_50 = pNVar5;
  iVar3 = *(int *)(local_50 + 0x20);
  pNVar5 = local_50;
  if (iVar3 != 0) {
    plVar7 = *(long **)(local_50 + 8);
    do {
      pNVar5 = (Node *)*plVar7;
      if ((Node *)*plVar7 != local_50) break;
      iVar3 = iVar3 + -1;
      plVar7 = plVar7 + 1;
      pNVar5 = local_50;
    } while (iVar3 != 0);
  }
  do {
    pNVar6 = local_50;
    if (1 < *(uint *)(local_50 + 0x10)) {
      pNVar6 = (Node *)QHashData::detach_helper
                                 ((_func_void_Node_ptr_void_ptr *)local_50,FUN_100469400,0x4693b0,
                                  0x20);
      if (*(int *)(local_50 + 0x10) != -1) {
        if (*(int *)(local_50 + 0x10) != 0) {
          LOCK();
          pNVar1 = local_50 + 0x10;
          *(int *)pNVar1 = *(int *)pNVar1 + -1;
          local_31 = *(int *)pNVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100467192;
        }
        QHashData::free_helper((_func_void_Node_ptr *)local_50);
      }
    }
LAB_100467192:
    local_50 = pNVar6;
    uVar8 = 1;
    if (local_50 == pNVar5) goto LAB_10046726c;
    if ((*(uint *)(pNVar5 + 0x18) | 2) != 2) break;
    pNVar5 = (Node *)QHashData::nextNode(pNVar5);
  } while( true );
  QString::toUtf8();
  FUN_1008e3970("CPTOOL","CPToolHost",0,"sendPackageToClients failed cmd = %d, vm = %s, code=%d",
                param_2,local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(pNVar5 + 0x18));
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100467269;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_100467269:
  uVar8 = 0;
LAB_10046726c:
  if (*(int *)(local_50 + 0x10) != -1) {
    if (*(int *)(local_50 + 0x10) != 0) {
      LOCK();
      pNVar5 = local_50 + 0x10;
      *(int *)pNVar5 = *(int *)pNVar5 + -1;
      local_31 = *(int *)pNVar5 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10046729b;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_50);
  }
LAB_10046729b:
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    lVar2 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  return uVar8;
}

