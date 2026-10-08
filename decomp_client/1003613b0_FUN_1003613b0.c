
void FUN_1003613b0(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  void *pvVar3;
  void *pvVar4;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
  }
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 8))();
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("Debug Mouse Coordinates",0x17);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_40,&local_50);
  uVar2 = QVariant::toBool();
  FUN_10035dda0(uVar1,2,uVar2);
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100361499;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100361499:
  QSettings::~QSettings((QSettings *)&local_50);
  if (param_2 == 1) {
    pvVar3 = operator_new(0x10);
    FUN_1003628a0(pvVar3,*(undefined8 *)(param_1 + 0x18));
    *(void **)(param_1 + 0x20) = pvVar3;
    pvVar4 = operator_new(0x28);
    FUN_100364620(pvVar4,*(undefined8 *)(param_1 + 0x18),pvVar3);
    *(void **)(param_1 + 0x28) = pvVar4;
    pvVar3 = operator_new(0x20);
    FUN_100366590(pvVar3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),pvVar4);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    pvVar3 = operator_new(0x10);
    FUN_100362450(pvVar3,*(undefined8 *)(param_1 + 0x18));
    *(void **)(param_1 + 0x20) = pvVar3;
    pvVar4 = operator_new(0x18);
    FUN_100363d00(pvVar4,*(undefined8 *)(param_1 + 0x18),pvVar3);
    *(void **)(param_1 + 0x28) = pvVar4;
    pvVar3 = operator_new(0x20);
    FUN_100366070(pvVar3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),pvVar4);
  }
  *(void **)(param_1 + 0x30) = pvVar3;
  return;
}

