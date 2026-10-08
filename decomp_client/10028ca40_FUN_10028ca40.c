
undefined8 FUN_10028ca40(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  QVariant local_50;
  undefined8 local_40;
  undefined8 local_38;
  QVariant local_30;
  
  FUN_10061abe0(&local_30,*(undefined8 *)(param_1 + 0x18),0);
  iVar2 = QVariant::toInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  if (((*(byte *)(param_1 + 0x20) & 8) == 0) ||
     (cVar1 = FUN_10061c5c0(*(undefined8 *)(param_1 + 0x18)), cVar1 == '\0')) {
    if (iVar2 != 0) {
      if (iVar2 < -0x7ffeefa8) {
        if (iVar2 != -0x7ffeefff) goto LAB_10028cb4c;
      }
      else if ((0x1f < iVar2 + 0x7ffeefa8U) ||
              ((0x90002001U >> (iVar2 + 0x7ffeefa8U & 0x1f) & 1) == 0)) goto LAB_10028cb4c;
    }
    cVar1 = FUN_10061b4d0(*(undefined8 *)(param_1 + 0x18),0x20);
    if (cVar1 == '\0') {
      if ((iVar2 != -0x7ffeefa8) && (iVar2 != 0)) {
LAB_10028cb4c:
        *(undefined1 *)(param_1 + 0x38) = 1;
        return 0;
      }
      cVar1 = FUN_10061c680(*(undefined8 *)(param_1 + 0x18));
      if (cVar1 == '\0') {
        return 0;
      }
      if (DAT_102310958 == (void *)0x0) {
        pvVar4 = operator_new(0x18);
        FUN_100612710(pvVar4);
        DAT_102271170 = 1;
        DAT_102310958 = pvVar4;
      }
      cVar1 = FUN_100612920(DAT_102310958);
      if (cVar1 == '\0') {
        return 0;
      }
    }
    else if ((*(byte *)(param_1 + 0x20) & 4) != 0) {
      local_38 = QDate::currentDate();
      FUN_10061abe0(&local_50,*(undefined8 *)(param_1 + 0x18),6);
      local_40 = QVariant::toDate();
      lVar3 = QDate::daysTo((QDate *)&local_38);
      QVariant::~QVariant(&local_50);
      if (-1 < lVar3) {
        return 0;
      }
    }
  }
  CAbstractTask::appendSubTask((int)param_1);
  return 0;
}

