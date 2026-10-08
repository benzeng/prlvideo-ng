
void FUN_100856230(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  QMapNodeBase *pQVar4;
  undefined8 uVar5;
  QMapNodeBase *pQVar6;
  ulong *puVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  QMapNodeBase *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (1 < param_2) {
    if (param_2 == 2) {
      if (param_3 == 1) {
        param_4 = (undefined8 *)*param_4;
        goto LAB_10085634f;
      }
    }
    else if (param_2 == 10) {
      puVar2 = (undefined4 *)*param_4;
      plVar3 = (long *)param_4[1];
      pcVar8 = (code *)*plVar3;
      lVar10 = plVar3[1];
      if ((pcVar8 == FUN_100856530) && (lVar10 == 0)) {
        *puVar2 = 0;
        pcVar8 = (code *)*plVar3;
        lVar10 = plVar3[1];
      }
      if ((pcVar8 == FUN_100856580) && (lVar10 == 0)) {
        *puVar2 = 1;
      }
    }
    goto LAB_1008564b2;
  }
  if (param_2 == 0) {
    if (param_3 == 2) {
      param_4 = (undefined8 *)param_4[1];
LAB_10085634f:
      FUN_1007334c0(param_1,*param_4);
      return;
    }
    if (param_3 == 1) {
      local_50 = *(undefined8 *)param_4[1];
      local_40 = &local_50;
      iVar9 = 1;
    }
    else {
      if (param_3 != 0) goto LAB_1008564b2;
      local_40 = (undefined8 *)param_4[1];
      iVar9 = 0;
    }
    local_48 = (void *)0x0;
    QMetaObject::activate(param_1,(QMetaObject *)&PTR_staticMetaObject_1022273e0,iVar9,&local_48);
    goto LAB_1008564b2;
  }
  if (param_2 != 1) goto LAB_1008564b2;
  param_4 = (undefined8 *)*param_4;
  if (param_3 == 1) {
    uVar5 = FUN_100733490(param_1);
    *param_4 = uVar5;
    goto LAB_1008564b2;
  }
  if (param_3 != 0) goto LAB_1008564b2;
  FUN_100733400(&local_58,param_1);
  if ((QMapNodeBase *)*param_4 != local_58) {
    if (*(int *)local_58 == 0) {
      pQVar6 = (QMapNodeBase *)QMapDataBase::createData();
      if (*(long *)(local_58 + 0x10) != 0) {
        puVar7 = (ulong *)FUN_10008d330(*(long *)(local_58 + 0x10),pQVar6);
        *(ulong **)(pQVar6 + 0x10) = puVar7;
        *puVar7 = *puVar7 & 3 | (ulong)(pQVar6 + 8);
        QMapDataBase::recalcMostLeftNode();
      }
    }
    else {
      pQVar6 = local_58;
      if (*(int *)local_58 != -1) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + 1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58 != 0);
      }
    }
    pQVar4 = (QMapNodeBase *)*param_4;
    *param_4 = pQVar6;
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        UNLOCK();
        local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)pQVar4 != 0);
        if (*(int *)pQVar4 != 0) goto LAB_100856468;
      }
      if (*(long *)(pQVar4 + 0x10) != 0) {
        FUN_100037d60();
        QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar4);
    }
  }
LAB_100856468:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      local_48 = (void *)CONCAT71(local_48._1_7_,*(int *)local_58 != 0);
      if (*(int *)local_58 != 0) goto LAB_1008564b2;
    }
    if (*(long *)(local_58 + 0x10) != 0) {
      FUN_100037d60();
      QMapDataBase::freeTree(local_58,(int)*(undefined8 *)(local_58 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)local_58);
  }
LAB_1008564b2:
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

