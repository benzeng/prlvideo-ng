
void FUN_100399d90(long param_1)

{
  QString *pQVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_38;
  
  uVar3 = FUN_1006915d0();
  uVar4 = FUN_100152280();
  uVar4 = FUN_1001554a0(uVar4);
  lVar5 = FUN_100691620(uVar3,0x4f,uVar4);
  if ((lVar5 == 0) || (cVar2 = FUN_100d80630(1), cVar2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000100399df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x68))(*(long **)(param_1 + 0x38),0);
    return;
  }
  pQVar1 = *(QString **)(param_1 + 0x38);
  QAction::text();
  QAbstractButton::setText(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100399e46;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100399e46:
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  QAction::isEnabled();
  QWidget::setEnabled(SUB81(uVar3,0));
  return;
}

