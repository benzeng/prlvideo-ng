
undefined1 FUN_1004fe770(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  undefined1 uVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_28 = (QArrayData *)QString::fromAscii_helper("/",1);
  iVar2 = QString::indexOf(param_2,&local_28,0,1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1004fe7d8;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1004fe7d8:
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    QString::right((int)&local_30);
    pQVar1 = (QArrayData *)*param_2;
    *param_2 = local_30;
    uVar3 = 1;
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) {
          return 1;
        }
        local_19 = 0;
      }
      local_30 = pQVar1;
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return uVar3;
}

