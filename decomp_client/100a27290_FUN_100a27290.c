
void FUN_100a27290(long param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  QArrayData *pQVar1;
  long ******pppppplVar2;
  long *******ppppppplVar3;
  long *******ppppppplVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  void *pvVar10;
  long ******local_68;
  long ******local_60;
  long local_58;
  QArrayData *local_50;
  undefined1 local_48 [8];
  long *local_40;
  undefined1 local_31;
  
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001548f0(uVar6,param_2);
  if (lVar7 == 0) goto LAB_100a2743e;
  plVar8 = operator_new(0x20);
  pQVar1 = (QArrayData *)*param_2;
  iVar5 = *(int *)pQVar1;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
    iVar5 = *(int *)pQVar1;
  }
  *plVar8 = (long)&PTR_FUN_102280e18;
  plVar8[1] = param_1;
  plVar8[2] = (long)pQVar1;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  *(uint *)(plVar8 + 3) = param_3;
  plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)0x0;
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    plVar9[2] = (long)plVar8;
    *plVar9 = (long)&PTR_FUN_10226ca80;
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a2739b;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a2739b:
  uVar6 = FUN_10018c280(lVar7);
  uVar6 = FUN_100319c30(uVar6);
  if (plVar9 != (long *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_40 = plVar9;
  FUN_100a23d60(local_48,param_4);
  iVar5 = FUN_10032fbd0(uVar6,&local_40,local_48);
  FUN_100039a80(local_48);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (iVar5 == 0) {
    return;
  }
LAB_100a2743e:
  pvVar10 = operator_new(0x88);
  pQVar1 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  local_58 = 0;
  local_68 = (long ******)&local_68;
  local_60 = (long ******)&local_68;
  local_50 = pQVar1;
  FUN_100a2a320(pvVar10,&local_50,param_3 & 0xffffffdf,&local_68);
  FUN_100a2ae40(param_1 + 0x80,pvVar10);
  if (local_58 != 0) {
    pppppplVar2 = (long ******)*local_60;
    pppppplVar2[1] = local_68[1];
    *local_68[1] = (long ****)pppppplVar2;
    local_58 = 0;
    ppppppplVar4 = (long *******)local_60;
    while (ppppppplVar4 != &local_68) {
      ppppppplVar3 = (long *******)ppppppplVar4[1];
      std::string::~string((string *)(ppppppplVar4 + 2));
      operator_delete(ppppppplVar4);
      ppppppplVar4 = ppppppplVar3;
    }
  }
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

