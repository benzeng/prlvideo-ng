
void FUN_1002b6ff0(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::hide();
    QObject::deleteLater();
  }
  if (((param_2 < 0) && (*(long *)(param_1 + 0x18) != 0)) &&
     ((*(int *)(*(long *)(param_1 + 0x18) + 4) != 0 && (*(long *)(param_1 + 0x20) != 0)))) {
    uVar1 = FUN_10018c280();
    FUN_100321a70(uVar1,0,1);
  }
  CAbstractTask::finish((int)param_1);
  return;
}

