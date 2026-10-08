
void FUN_10018c2c0(QObject *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  piVar2 = (int *)0x0;
  if (param_1 != (QObject *)0x0) {
    piVar2 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
  }
  FUN_10018d260(param_1);
  FUN_10018a9e0(param_1);
  FUN_10018b760(param_1);
  FUN_10018b8f0(param_1);
  if (piVar2 == (int *)0x0) {
    return;
  }
  if ((param_1 == (QObject *)0x0) || (piVar2[1] == 0)) goto LAB_10018c45c;
  if (param_1[0x98] != (QObject)0x0) {
    param_1[0x98] = (QObject)0x0;
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    uVar1 = CVmCommonOptions::isTemplate();
    FUN_1008052a0(param_1,uVar1);
  }
  FUN_100804a00(param_1,*(undefined8 *)(param_1 + 0x80));
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_100804a50(param_1,&local_38,*(undefined8 *)(param_1 + 0x80));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018c3cb;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10018c3cb:
  FUN_10018c650(&local_48,param_1);
  FUN_100804aa0(param_1,&local_48,*(undefined8 *)(param_1 + 0x80));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018c41a;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10018c41a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10018c44a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10018c44a:
  FUN_100804af0(param_1,*(undefined8 *)(param_1 + 0x80),param_2);
LAB_10018c45c:
  LOCK();
  *piVar2 = *piVar2 + -1;
  local_29 = *piVar2 != 0;
  UNLOCK();
  if (!(bool)local_29) {
    operator_delete(piVar2);
  }
  return;
}

