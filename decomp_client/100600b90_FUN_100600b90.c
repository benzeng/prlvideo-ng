
void FUN_100600b90(CBaseDialog *param_1,QObject *param_2,long *param_3,undefined8 param_4)

{
  QMapNodeBase QVar1;
  void *pvVar2;
  undefined8 uVar3;
  QMapNodeBase *pQVar4;
  ulong *puVar5;
  QMapNodeBase *pQVar6;
  QMapNodeBase *pQVar7;
  long lVar8;
  undefined2 uVar9;
  QMapNodeBase *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CBaseDialog::CBaseDialog(param_1,param_4,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102220880;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102220a70;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102220ac0;
  pvVar2 = operator_new(0x20);
  *(void **)(param_1 + 0x60) = pvVar2;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(QObject **)(param_1 + 0x70) = param_2;
  FUN_100601190(*(undefined8 *)(param_1 + 0x60),param_1);
  FUN_1001c72b0(&local_30);
  QWidget::setWindowTitle((QString *)param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100600c47;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100600c47:
  if (*(int *)(*param_3 + 4) != 0) {
    QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 8));
  }
  FUN_100136990(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),1);
  lVar8 = 0;
  if ((*(long *)(param_1 + 0x68) != 0) && (lVar8 = 0, *(int *)(*(long *)(param_1 + 0x68) + 4) != 0))
  {
    lVar8 = *(long *)(param_1 + 0x70);
  }
  local_38 = *(QMapNodeBase **)(lVar8 + 0x128);
  if (*(int *)local_38 == 0) {
    pQVar4 = (QMapNodeBase *)QMapDataBase::createData();
    lVar8 = *(long *)(*(long *)(lVar8 + 0x128) + 0x10);
    local_38 = pQVar4;
    if (lVar8 != 0) {
      puVar5 = (ulong *)FUN_100137920(lVar8,pQVar4);
      *(ulong **)(pQVar4 + 0x10) = puVar5;
      *puVar5 = *puVar5 & 3 | (ulong)(pQVar4 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)local_38 != -1) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_21 = *(int *)local_38 != 0;
    UNLOCK();
    local_38 = *(QMapNodeBase **)(lVar8 + 0x128);
  }
  uVar9 = 0;
  FUN_1001362b0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),&local_38,0);
  if (*(QMapNodeBase **)(local_38 + 0x10) != (QMapNodeBase *)0x0) {
    pQVar4 = *(QMapNodeBase **)(local_38 + 0x10);
    pQVar7 = (QMapNodeBase *)0x0;
    do {
      while (pQVar6 = pQVar4, QVar1 = pQVar6[0x18], (byte)QVar1 < 8) {
        pQVar4 = *(QMapNodeBase **)(pQVar6 + 0x10);
        if (*(QMapNodeBase **)(pQVar6 + 0x10) == (QMapNodeBase *)0x0) {
          if (pQVar7 == (QMapNodeBase *)0x0) goto LAB_100600d81;
          QVar1 = pQVar7[0x18];
          pQVar6 = pQVar7;
          goto LAB_100600d6a;
        }
      }
      pQVar4 = *(QMapNodeBase **)(pQVar6 + 8);
      pQVar7 = pQVar6;
    } while (*(QMapNodeBase **)(pQVar6 + 8) != (QMapNodeBase *)0x0);
LAB_100600d6a:
    if (((byte)QVar1 < 9) && (uVar9 = 0, pQVar6 != local_38 + 8)) {
      uVar9 = *(undefined2 *)(pQVar6 + 0x28);
    }
  }
LAB_100600d81:
  FUN_100136480(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10),uVar9,0);
  (**(code **)(*(long *)param_1 + 0x70))(param_1);
  QWidget::setFixedSize((int)param_1,400);
  pQVar4 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    if (*(long *)(local_38 + 0x10) != 0) {
      FUN_100137f10();
      QMapDataBase::freeTree(pQVar4,(int)*(undefined8 *)(pQVar4 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar4);
  }
  return;
}

