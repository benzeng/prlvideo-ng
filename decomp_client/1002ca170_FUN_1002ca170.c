
QString * FUN_1002ca170(QString *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  bool *pbVar3;
  QString local_30;
  undefined1 local_23;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  pbVar3 = (bool *)FUN_1002c6ac0(param_2);
  if (pbVar3 == (bool *)0x0) {
    FUN_100df99c0("","prl_client_app",0,"Can\'t get Download Keys request");
  }
  else {
    cVar1 = CSdkRequest::isCompleted(pbVar3,(int *)0x0);
    if (cVar1 == '\0') {
      FUN_100df99c0("","prl_client_app",0,"Download Keys request isn\'t completed");
    }
    else {
      iVar2 = CSdkRequest::getResultParamCount();
      if (iVar2 == 0) {
        FUN_100df99c0("","prl_client_app",0,"No keys dowloaded");
      }
      else {
        CSdkRequest::getResultAsString((int)&local_30);
        QString::operator=(param_1,&local_30);
        if (*(int *)local_30.field0_0x0 != -1) {
          if (*(int *)local_30.field0_0x0 != 0) {
            LOCK();
            *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
            UNLOCK();
            if (*(int *)local_30.field0_0x0 != 0) {
              return param_1;
            }
            local_23 = 0;
          }
          QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
        }
      }
    }
  }
  return param_1;
}

