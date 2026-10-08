
void FUN_10054e290(long param_1,int param_2)

{
  QString *pQVar1;
  QSize *pQVar2;
  QPoint *pQVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  QArrayData *local_40;
  QArrayData *local_38;
  ulong local_30;
  undefined8 local_28;
  
  if (param_2 == 1) {
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 200);
    QMetaObject::tr((char *)&local_38,"",0x1dd1ed6);
    QLabel::setText(pQVar1);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        local_28 = CONCAT71(local_28._1_7_,*(int *)local_38 != 0);
        if (*(int *)local_38 != 0) goto LAB_10054e30d;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_10054e30d:
    iVar7 = (int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8);
  }
  else {
    if (param_2 != 2) goto LAB_10054e39e;
    pQVar1 = *(QString **)(*(long *)(param_1 + 0x18) + 200);
    QMetaObject::tr((char *)&local_40,"",0x1e00bae);
    QLabel::setText(pQVar1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        local_28 = CONCAT71(local_28._1_7_,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_10054e38c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10054e38c:
    iVar7 = (int)*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xb8);
  }
  QProgressBar::setMaximum(iVar7);
LAB_10054e39e:
  pQVar2 = *(QSize **)(*(long *)(param_1 + 0x18) + 200);
  local_28 = (**(code **)((long)*pQVar2 + 0x70))(pQVar2);
  QWidget::setFixedSize(pQVar2);
  pQVar3 = *(QPoint **)(*(long *)(param_1 + 0x18) + 200);
  uVar6 = QWidget::pos();
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 200) + 0x28);
  local_30 = uVar6 & 0xffffffff |
             (ulong)(uint)((((int)(uVar6 >> 0x20) + -6) - *(int *)(lVar4 + 0x20)) +
                          *(int *)(lVar4 + 0x18)) << 0x20;
  QWidget::move(pQVar3);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xc0);
  CAbstractTask::canBeTerminated();
  QWidget::setEnabled(SUB81(uVar5,0));
  return;
}

