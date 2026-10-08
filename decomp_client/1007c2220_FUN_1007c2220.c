
QObject * FUN_1007c2220(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  QObject *pQVar2;
  int *piVar3;
  int *local_68;
  QObject *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  if (*(int *)(*param_2 + 0xc) == *(int *)(*param_2 + 8)) {
    return (QObject *)0x0;
  }
  EnumUtils::enumToString(&local_40,*(undefined4 *)(param_1 + 0x40));
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1e184ca);
  QString::insert((int)&local_40,(QChar *)0x0,(int)*(undefined8 *)(local_48 + 0x10) + (int)local_48)
  ;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c22c2;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007c22c2:
  lVar1 = *param_2;
  if (1 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8)) {
    pQVar2 = (QObject *)FUN_1007c1750(param_1,param_2,&local_40,param_3,0);
    goto LAB_1007c23f0;
  }
  pQVar2 = operator_new(0x38);
  (**(code **)(**(long **)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8) + 0xb8))(&local_50);
  (**(code **)(**(long **)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8) + 0xa8))(&local_58);
  FUN_1007b5c60(pQVar2,0,&local_50,&local_58,&local_40,0,param_1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c2382;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007c2382:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007c23b2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007c23b2:
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
  local_68 = piVar3;
  local_60 = pQVar2;
  FUN_1007c57e0(param_1 + 0x38,&local_68);
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
LAB_1007c23f0:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return pQVar2;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return pQVar2;
}

