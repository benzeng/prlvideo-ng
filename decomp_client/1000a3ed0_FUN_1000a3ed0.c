
void FUN_1000a3ed0(long param_1,int param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  Data *pDVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  Data *pDVar8;
  QArrayData *pQVar9;
  long lVar10;
  QObject *pQVar11;
  long *local_f0;
  Data *local_e8;
  int local_dc;
  long local_d8;
  char *local_d0;
  long local_c8;
  char *local_c0;
  long *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int *local_40;
  char *local_38;
  
  local_dc = param_2;
  if (param_2 != 0) {
    uVar6 = 0;
    if ((*(long *)(param_1 + 8) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 8) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
    }
    local_d8 = param_1 + 0x18;
    local_c8 = param_1 + 0x20;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0 = "QList<TResolvedPath>";
    local_c0 = "QString";
    local_d0 = "QString";
    local_40 = &local_dc;
    local_38 = "PRL_RESULT";
    local_b8 = param_3;
    QMetaObject::invokeMethod
              (uVar6,"onResolvePathes",2,0,0,param_6,local_40,"PRL_RESULT",local_d8,"QString",
               local_c8,"QString",param_3,"QList<TResolvedPath>",0,0,0,0,0,0,0,0,0,0,0,0);
  }
  local_e8 = (Data *)PTR_shared_null_1021e15e8;
  lVar10 = *param_3;
  iVar1 = *(int *)(lVar10 + 8);
  if (iVar1 != *(int *)(lVar10 + 0xc)) {
    puVar7 = (undefined8 *)(lVar10 + 0x10 + (long)iVar1 * 8);
    lVar10 = (long)*(int *)(lVar10 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      FUN_1000341d0(&local_e8,*puVar7);
      puVar7 = puVar7 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  plVar4 = operator_new(0x28);
  if ((*(long *)(param_1 + 8) == 0) || (*(int *)(*(long *)(param_1 + 8) + 4) == 0)) {
    *plVar4 = (long)&PTR_FUN_10226ca38;
    pQVar11 = (QObject *)0x0;
    lVar10 = 0;
  }
  else {
    pQVar11 = *(QObject **)(param_1 + 0x10);
    *plVar4 = (long)&PTR_FUN_10226ca38;
    lVar10 = 0;
    if (pQVar11 == (QObject *)0x0) {
      pQVar11 = (QObject *)0x0;
    }
    else {
      lVar10 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar11);
    }
  }
  plVar4[1] = lVar10;
  plVar4[2] = (long)pQVar11;
  piVar2 = *(int **)(param_1 + 0x18);
  plVar4[3] = (long)piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_40 = (int *)CONCAT71(local_40._1_7_,*piVar2 != 0);
  }
  piVar2 = *(int **)(param_1 + 0x20);
  plVar4[4] = (long)piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    local_40 = (int *)CONCAT71(local_40._1_7_,*piVar2 != 0);
  }
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = (long)plVar4;
    *plVar5 = (long)&PTR_FUN_10226ca80;
  }
  uVar6 = FUN_100152280();
  uVar6 = FUN_1001548f0(uVar6,(undefined8 *)(param_1 + 0x18));
  uVar6 = FUN_10018c280(uVar6);
  uVar6 = FUN_100319c30(uVar6);
  if (plVar5 != (long *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_f0 = plVar5;
  FUN_10032fa90(uVar6,&local_f0,&local_e8);
  if (local_f0 != (long *)0x0) {
    LOCK();
    plVar4 = local_f0 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)(*local_f0 + 0x10))();
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  pDVar3 = local_e8;
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)local_e8 != 0);
      if (*(int *)local_e8 != 0) {
        return;
      }
    }
    iVar1 = *(int *)(local_e8 + 0xc);
    if (iVar1 != *(int *)(local_e8 + 8)) {
      lVar10 = (long)*(int *)(local_e8 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_e8 + (long)iVar1 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar9 == 0) {
LAB_1000a4350:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          UNLOCK();
          local_40 = (int *)CONCAT71(local_40._1_7_,*(int *)pQVar9 != 0);
          if (*(int *)pQVar9 == 0) {
            pQVar9 = *(QArrayData **)pDVar8;
            goto LAB_1000a4350;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar3);
  }
  return;
}

