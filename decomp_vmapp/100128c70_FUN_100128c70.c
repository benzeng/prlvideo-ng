
undefined8 FUN_100128c70(long param_1)

{
  char cVar1;
  int iVar2;
  QArrayData *pQVar3;
  long *plVar4;
  undefined8 uVar5;
  QString QVar6;
  
  QVar6.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (*(long *)(param_1 + 8) != 0) {
    QVar6.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(*(long *)(param_1 + 8) + 0x10);
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper("convert_old_hdd_paths_list",0x1a);
  plVar4 = (long *)CVmEvent::getEventParameter(QVar6);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100128ce1;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100128ce1:
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4);
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      iVar2 = CVmEventParameter::getParamType();
      if (iVar2 == 1) {
        uVar5 = FUN_10011ed70(param_1);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

