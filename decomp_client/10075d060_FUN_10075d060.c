
undefined8 FUN_10075d060(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("m_%1SectionButton",0x11);
  FUN_10075dfd0(&local_38,param_2);
  QString::arg(&local_28,&local_30,&local_38,0,0x20);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10075d0d9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10075d0d9:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10075d109;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10075d109:
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x180) + 4) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x188);
  }
  uVar1 = qt_qFindChild_helper(uVar1,&local_28,PTR_staticMetaObject_1021e12c0,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return uVar1;
}

