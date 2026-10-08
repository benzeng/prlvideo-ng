
undefined8 * FUN_100629700(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  bool *pbVar3;
  QArrayData *pQVar4;
  uint uVar5;
  AnonymousUnion0 local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  pbVar3 = (bool *)FUN_1002c6ac0(param_2);
  if (pbVar3 == (bool *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t get AppStore Products Store Front request");
    return param_1;
  }
  cVar1 = CSdkRequest::isCompleted(pbVar3,(int *)0x0);
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"AppStore Products Store Front request isn\'t completed");
    return param_1;
  }
  uVar2 = CSdkRequest::getResultParamCount();
  if (uVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Empty AppStore Products Store Front");
    return param_1;
  }
  uVar5 = 0;
  do {
    CSdkRequest::getResultAsString((int)&local_40);
    FUN_1000341d0(param_1,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006297b8;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1006297b8:
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar2);
  if (DAT_10230ffd0 < 3) {
    return param_1;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(", ",2);
  QtPrivate::QStringList_join
            ((QStringList *)&local_50.field0,(QChar *)param_1,
             (int)*(undefined8 *)(pQVar4 + 0x10) + (int)pQVar4);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,"AppStore Products Store Front [%s]",
                local_48 + *(long *)(local_48 + 0x10));
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100629860;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100629860:
  if (*(int *)local_50.field1 != -1) {
    if (*(int *)local_50.field1 != 0) {
      LOCK();
      *(int *)local_50.field1 = *(int *)local_50.field1 + -1;
      local_31 = *(int *)local_50.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100629890;
    }
    QArrayData::deallocate((QArrayData *)local_50.field1,2,8);
  }
LAB_100629890:
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_31 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return param_1;
}

