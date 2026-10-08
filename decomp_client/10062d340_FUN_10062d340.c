
QString * FUN_10062d340(QString *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  bool *pbVar5;
  undefined1 auVar6 [16];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  undefined1 local_29;
  
  auVar6._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar6._0_8_ = PTR_shared_null_1021e1288;
  auVar6._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar6;
  pbVar5 = (bool *)FUN_1002c6ac0(param_2);
  if (pbVar5 == (bool *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t getGet subscriptions to extend request");
    return param_1;
  }
  cVar2 = CSdkRequest::isCompleted(pbVar5,(int *)0x0);
  if (cVar2 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Get subscriptions to extend request isn\'t completed");
    return param_1;
  }
  iVar3 = CSdkRequest::getResultParamCount();
  if (iVar3 != 2) {
    uVar4 = CSdkRequest::getResultParamCount();
    FUN_100df99c0("","prl_client_app",0,
                  "Get subscriptions to extend request: wrong results count %d",uVar4);
    return param_1;
  }
  CSdkRequest::getResultAsString((int)&local_38);
  QString::operator=(param_1,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10062d3e7;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10062d3e7:
  CSdkRequest::getResultAsString((int)&local_40);
  QString::operator=(param_1 + 1,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10062d438;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10062d438:
  if (DAT_10230ffd0 < 3) {
    return param_1;
  }
  QString::toUtf8();
  lVar1 = *(long *)(local_48 + 0x10);
  QString::toUtf8();
  FUN_100df99c0("","prl_client_app",3,
                "Get subscriptions to extend:\nExtendable Keys[%s]\nLic Key[%s]",local_48 + lVar1,
                local_50 + *(long *)(local_50 + 0x10));
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10062d4c7;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_10062d4c7:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_48,1,8);
  }
  return param_1;
}

