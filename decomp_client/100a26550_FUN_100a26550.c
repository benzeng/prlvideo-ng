
void FUN_100a26550(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  QArrayData *pQVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint *puVar9;
  bool bVar10;
  Connection local_50 [8];
  QArrayData *local_48;
  long local_40;
  undefined8 local_38;
  
  uVar5 = FUN_100152280();
  uVar5 = FUN_100154930(uVar5,param_2 + 1,param_2);
  puVar2 = (undefined8 *)(param_1 + 0x30);
  puVar9 = *(uint **)(param_1 + 0x30);
  if (1 < *puVar9) {
    FUN_100a2bb10(puVar2);
    puVar9 = (uint *)*puVar2;
  }
  lVar6 = FUN_100a2b8a0(puVar9,param_2);
  if (lVar6 == 0) {
    local_38 = 0;
    lVar6 = FUN_100a2b970(puVar2,param_2,&local_38);
  }
  plVar7 = operator_new(0x40);
  FUN_10018c250(&local_40,uVar5);
  pQVar3 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
    local_38 = CONCAT71(local_38._1_7_,*(int *)pQVar3 != 0);
  }
  local_48 = pQVar3;
  FUN_100a29d70(plVar7,&local_40,param_1,&local_48);
  plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  bVar10 = plVar8 == (long *)0x0;
  if (bVar10) {
    plVar8 = (long *)0x0;
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = (long)plVar7;
    *plVar8 = (long)&PTR_FUN_102280f48;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar7 = *(long **)(lVar6 + 0x28);
  *(long **)(lVar6 + 0x28) = plVar8;
  if (plVar7 != (long *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if (!bVar10) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      local_38 = CONCAT71(local_38._1_7_,*(int *)pQVar3 != 0);
      if (*(int *)pQVar3 != 0) goto LAB_100a266f4;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100a266f4:
  if (local_40 != 0) {
    _PrlHandle_Free();
  }
  QObject::connect(local_50,uVar5,
                   "2vmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",param_1,
                   "1onVmStateChanged(GUI::VmId,VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",0);
  QMetaObject::Connection::~Connection(local_50);
  iVar4 = FUN_10018a9d0(uVar5);
  if (iVar4 == 0x30000004) {
    FUN_100a26810(param_1,param_2,0x30000004);
  }
  return;
}

