
void FUN_100479760(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  QDateTime local_28 [8];
  
  piVar1 = (int *)*param_1;
  piVar2 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && (piVar2 = piVar1, *piVar1 != 1)) {
    FUN_100031c40(param_1);
    piVar2 = (int *)*param_1;
  }
  QDateTime::toTimeSpec(local_28,param_2,1);
  QDateTime::operator=((QDateTime *)(piVar2 + 0x14),local_28);
  QDateTime::~QDateTime(local_28);
  return;
}

