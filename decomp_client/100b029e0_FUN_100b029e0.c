
void FUN_100b029e0(undefined8 param_1,CHwOsInfo *param_2)

{
  long lVar1;
  long *plVar2;
  CHwOsInfo *this;
  CHwOsDistrInfo *this_00;
  QArrayData *local_38;
  undefined1 local_2a;
  
  CHwHddPartition::getSystemName();
  plVar2 = (long *)FUN_100b04f40(param_1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100b02a3f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b02a3f:
  lVar1 = plVar2[1];
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    this = operator_new(0xa0);
    CHwOsInfo::CHwOsInfo(this,*(CHwOsInfo **)(lVar1 + 0x10));
  }
  CHwHddPartition::setOsInfo(param_2);
  lVar1 = *plVar2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    this_00 = operator_new(0xa8);
    CHwOsDistrInfo::CHwOsDistrInfo(this_00,*(CHwOsDistrInfo **)(lVar1 + 0x10));
  }
  CHwHddPartition::setOsDistrInfo((CHwOsDistrInfo *)param_2);
  return;
}

