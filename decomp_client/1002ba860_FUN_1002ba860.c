
void FUN_1002ba860(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar2 = param_1[4];
  }
  uVar1 = FUN_10018c280(lVar2);
  FUN_100321a70(uVar1,0,1);
  if (((param_1[8] != 0) && (*(int *)(param_1[8] + 4) != 0)) && (param_1[9] != 0)) {
    QWidget::hide();
    QObject::deleteLater();
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ba8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,0x80000275);
  return;
}

