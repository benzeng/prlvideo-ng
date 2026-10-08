
void FUN_1004e2ec0(long *param_1)

{
  long *plVar1;
  QString *pQVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  bool bVar6;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x1f8))();
  if (plVar4 == (long *)0x0) {
    bVar6 = false;
  }
  else {
    (**(code **)(*plVar4 + 0x1a0))(&local_38,plVar4);
    bVar6 = *(int *)(local_38 + 4) != 0;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004e2f2e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1004e2f2e:
  (**(code **)(**(long **)(param_1[9] + 0x30) + 0x68))(*(long **)(param_1[9] + 0x30),bVar6);
  plVar1 = *(long **)(param_1[9] + 0x48);
  if (bVar6 == false) {
    (**(code **)(*plVar1 + 0x68))(plVar1,0);
    puVar3 = PTR_shared_null_1021e1288;
    QLabel::setText(*(QString **)(param_1[9] + 0x50));
    if (*(int *)puVar3 != -1) {
      if (*(int *)puVar3 != 0) {
        LOCK();
        *(int *)puVar3 = *(int *)puVar3 + -1;
        local_29 = *(int *)puVar3 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004e300d;
      }
      QArrayData::deallocate((QArrayData *)puVar3,2,8);
    }
LAB_1004e300d:
    iVar5 = (int)*(undefined8 *)(param_1[9] + 0x30);
    goto LAB_1004e301a;
  }
  (**(code **)(*plVar1 + 0x68))(plVar1,1);
  pQVar2 = *(QString **)(param_1[9] + 0x50);
  (**(code **)(*plVar4 + 0x1a0))(&local_40,plVar4);
  QLabel::setText(pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004e2fb1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004e2fb1:
  iVar5 = (int)*(undefined8 *)(param_1[9] + 0x30);
LAB_1004e301a:
  QStackedWidget::setCurrentIndex(iVar5);
  return;
}

