
undefined1 FUN_1007271a0(QString *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  QString local_40;
  undefined1 local_32;
  
  if (param_2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Error: can\'t get server instance");
  }
  else {
    iVar2 = FUN_10015d3a0(param_2);
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        lVar3 = FUN_10015d330(param_2,iVar4);
        if (lVar3 != 0) {
          FUN_10018c2b0(lVar3);
          CVmConfiguration::getVmIdentification();
          CVmIdentification::getVmName();
          cVar1 = operator==(&local_40,param_1);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_32 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_10072724a;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
LAB_10072724a:
          if (cVar1 != '\0') {
            return 1;
          }
        }
        iVar4 = iVar4 + 1;
        iVar2 = FUN_10015d3a0(param_2);
      } while (iVar4 < iVar2);
    }
  }
  return 0;
}

