
QObject * FUN_10033fcf0(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  QObject *pQVar9;
  QArrayData *pQVar10;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if ((((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
      (*(long *)(param_1 + 0x28) != 0)) && (cVar2 = CAbstractTask::isFinished(), cVar2 == '\0')) {
    if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
       ((pQVar4 = *(QObject **)(param_1 + 0x38), pQVar4 != (QObject *)0x0 &&
        (pQVar4[0x30] != (QObject)0x0)))) {
      if (*(int *)(pQVar4 + 0x10) == param_2) {
        pQVar4[0x28] = *(QObject *)((long)param_3 + 0x14);
        *(undefined4 *)(pQVar4 + 0x24) = *(undefined4 *)(param_3 + 2);
        uVar8 = *param_3;
        *(undefined8 *)(pQVar4 + 0x1c) = param_3[1];
        *(undefined8 *)(pQVar4 + 0x14) = uVar8;
        goto LAB_10033ffc0;
      }
      pQVar9 = (QObject *)0x0;
      if ((*(long *)(pQVar4 + 0x38) != 0) &&
         (pQVar9 = (QObject *)0x0, *(int *)(*(long *)(pQVar4 + 0x38) + 4) != 0)) {
        pQVar9 = *(QObject **)(pQVar4 + 0x40);
      }
      QObject::disconnect(pQVar9,"2taskFinished(PRL_RESULT)",pQVar4,"1setResult(PRL_RESULT)");
      *(undefined4 *)(pQVar4 + 0x2c) = 0x80015412;
      pQVar4[0x30] = (QObject)0x0;
      FUN_10082f2d0(pQVar4);
      QObject::deleteLater();
    }
    pQVar4 = operator_new(0x48);
    local_40 = param_3[2];
    local_50 = *param_3;
    local_48 = param_3[1];
    QObject::QObject(pQVar4,(QObject *)0x0);
    *(undefined ***)pQVar4 = &PTR_FUN_10220c9c0;
    *(int *)(pQVar4 + 0x10) = param_2;
    *(undefined8 *)(pQVar4 + 0x24) = local_40;
    *(undefined8 *)(pQVar4 + 0x1c) = local_48;
    *(undefined8 *)(pQVar4 + 0x14) = local_50;
    *(undefined4 *)(pQVar4 + 0x2c) = 0;
    pQVar4[0x30] = (QObject)0x1;
    *(undefined8 *)(pQVar4 + 0x40) = 0;
    *(undefined8 *)(pQVar4 + 0x38) = 0;
    piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
    piVar6 = *(int **)(param_1 + 0x30);
    if (piVar6 != piVar5) {
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        local_51 = *piVar5 != 0;
        UNLOCK();
        piVar6 = *(int **)(param_1 + 0x30);
      }
      if (piVar6 != (int *)0x0) {
        LOCK();
        *piVar6 = *piVar6 + -1;
        local_51 = *piVar6 != 0;
        UNLOCK();
        if ((!(bool)local_51) && (*(void **)(param_1 + 0x30) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x30));
        }
      }
      *(int **)(param_1 + 0x30) = piVar5;
      *(QObject **)(param_1 + 0x38) = pQVar4;
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_51 = *piVar5 != 0;
      UNLOCK();
      if (!(bool)local_51) {
        operator_delete(piVar5);
      }
    }
    pQVar4 = (QObject *)0x0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (pQVar4 = (QObject *)0x0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      pQVar4 = *(QObject **)(param_1 + 0x38);
    }
    goto LAB_10033ffc0;
  }
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  FUN_1003193e0(&local_68,uVar8);
  QString::toLocal8Bit();
  pQVar10 = local_60 + *(long *)(local_60 + 0x10);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319ae0(uVar8);
  EnumUtils::enumToString(&local_80,uVar3,1);
  QString::toUpper();
  QString::toLocal8Bit();
  pQVar7 = local_70 + *(long *)(local_70 + 0x10);
  EnumUtils::enumToString(&local_98,param_2,1);
  QString::toUpper();
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",0,
                "Failed to set pending switch view mode for VM\'s [%s] desktop. Current view mode %s, pending view mode %s"
                ,pQVar10,pQVar7,local_88 + *(long *)(local_88 + 0x10));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_51 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10033fe5e;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_10033fe5e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_51 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10033fe94;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_10033fe94:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_51 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10033feca;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10033feca:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_51 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10033fefa;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_10033fefa:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_51 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10033ff2a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10033ff2a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_51 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10033ff5a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_10033ff5a:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_51 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_51) goto LAB_10033ff8a;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_10033ff8a:
  pQVar4 = (QObject *)0x0;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_51 = *(int *)local_68 != 0;
      UNLOCK();
      pQVar4 = (QObject *)0x0;
      if ((bool)local_51) goto LAB_10033ffc0;
    }
    QArrayData::deallocate(local_68,2,8);
    pQVar4 = (QObject *)0x0;
  }
LAB_10033ffc0:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pQVar4;
}

