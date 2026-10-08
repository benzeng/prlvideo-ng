
void FUN_100383800(long *param_1,QPixmap *param_2)

{
  long *plVar1;
  char cVar2;
  double dVar3;
  
  plVar1 = (long *)param_1[7];
  QPixmap::operator=((QPixmap *)(plVar1 + 6),param_2);
  (**(code **)(*plVar1 + 0xa8))(plVar1);
  cVar2 = QPixmap::isNull();
  dVar3 = 0.0;
  if (cVar2 == '\0') {
    dVar3 = DAT_100e19928;
  }
  QGraphicsLinearLayout::setSpacing(dVar3);
                    /* WARNING: Could not recover jumptable at 0x00010038385f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

