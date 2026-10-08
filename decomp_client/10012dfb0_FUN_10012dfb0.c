
undefined8 FUN_10012dfb0(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  QString local_40;
  undefined1 local_32;
  
  iVar2 = FUN_10015d3a0(param_2);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      lVar3 = FUN_10015d330(param_2,iVar5);
      if (lVar3 != 0) {
        FUN_100188480(&local_40,lVar3);
        cVar1 = operator==(&local_40,param_3);
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_32 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_10012e04c;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_10012e04c:
        if (cVar1 == '\0') {
          FUN_10018c2b0(lVar3);
          uVar4 = CVmConfiguration::getVmHardwareList();
          lVar3 = FUN_10012cb20(param_1,uVar4,0,0);
          if (lVar3 != 0) {
            return 1;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_10015d3a0(param_2);
    } while (iVar5 < iVar2);
  }
  return 0;
}

