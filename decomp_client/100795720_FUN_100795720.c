
QObject * FUN_100795720(long param_1,long param_2,undefined8 param_3)

{
  QObject *pQVar1;
  undefined8 uVar2;
  int *piVar3;
  int *local_50;
  QObject *local_48;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  local_38 = param_2;
  if (param_2 == 0) {
    pQVar1 = (QObject *)0x0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server object is null");
  }
  else {
    CAppliance::getApplianceId();
    if (*(int *)(local_40 + 4) == 0) {
      pQVar1 = (QObject *)0x0;
      FUN_100df99c0("","prl_client_app",0,"(!)Error: appliance id is not set");
    }
    else {
      pQVar1 = (QObject *)FUN_100795470(param_1,param_2,&local_40);
      if (pQVar1 == (QObject *)0x0) {
        pQVar1 = operator_new(400);
        FUN_10079d590(pQVar1,param_3);
        uVar2 = FUN_1007974d0(param_1 + 0x10,&local_38);
        piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar1);
        local_50 = piVar3;
        local_48 = pQVar1;
        FUN_100797700(uVar2,&local_50);
        if (piVar3 != (int *)0x0) {
          LOCK();
          *piVar3 = *piVar3 + -1;
          local_29 = *piVar3 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            operator_delete(piVar3);
          }
        }
        FUN_100860d30(param_1,pQVar1);
      }
    }
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return pQVar1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
  return pQVar1;
}

