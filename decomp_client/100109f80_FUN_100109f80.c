
undefined8 FUN_100109f80(undefined8 param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  QString local_40;
  undefined1 local_32;
  
  iVar2 = FUN_10015d3a0();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      lVar3 = FUN_10015d330(param_1,iVar4);
      if (lVar3 != 0) {
        FUN_10018c2b0(lVar3);
        CVmConfiguration::getVmIdentification();
        CVmIdentification::getVmName();
        cVar1 = operator==(&local_40,param_2);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_32 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_10010a018;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_10010a018:
        if (cVar1 != '\0') {
          return 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = FUN_10015d3a0(param_1);
    } while (iVar4 < iVar2);
  }
  return 0;
}

