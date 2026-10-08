
long * FUN_100d2b900(long param_1,QString *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  QString local_40;
  undefined1 local_33;
  undefined1 local_32;
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  plVar4 = (long *)0x0;
  if (lVar2 != 0) {
    plVar6 = (long *)(param_1 + 8);
    lVar5 = 0;
    do {
      while (lVar3 = lVar2, cVar1 = operator<((QString *)(lVar3 + 0x18),param_2), cVar1 == '\0') {
        lVar2 = *(long *)(lVar3 + 8);
        lVar5 = lVar3;
        if (*(long *)(lVar3 + 8) == 0) goto LAB_100d2b97d;
      }
      lVar2 = *(long *)(lVar3 + 0x10);
    } while (*(long *)(lVar3 + 0x10) != 0);
    lVar3 = lVar5;
    if (lVar5 == 0) {
      return (long *)0x0;
    }
LAB_100d2b97d:
    cVar1 = operator<(param_2,(QString *)(lVar3 + 0x18));
    plVar4 = (long *)0x0;
    if (cVar1 == '\0') {
      local_40.field0_0x0 = param_2->field0_0x0;
      if (1 < *(int *)local_40.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
        local_33 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
      }
      lVar2 = FUN_100d2bde0(plVar6,&local_40);
      if (*(int *)(*(long *)(lVar2 + 8) + 4) == 0) {
        plVar4 = operator_new(0x10);
        FUN_100d2f980(plVar4,lVar2);
      }
      else {
        plVar4 = operator_new(0x10);
        FUN_100d30050(plVar4);
        do {
          lVar2 = *(long *)(*plVar6 + 0x10);
          lVar5 = 0;
          if (*(long *)(*plVar6 + 0x10) == 0) {
LAB_100d2ba99:
            (**(code **)(*plVar4 + 8))(plVar4);
            plVar4 = (long *)0x0;
            break;
          }
          do {
            while (lVar3 = lVar2, cVar1 = operator<((QString *)(lVar3 + 0x18),&local_40),
                  cVar1 == '\0') {
              lVar2 = *(long *)(lVar3 + 8);
              lVar5 = lVar3;
              if (*(long *)(lVar3 + 8) == 0) goto LAB_100d2ba48;
            }
            lVar2 = *(long *)(lVar3 + 0x10);
          } while (*(long *)(lVar3 + 0x10) != 0);
          lVar3 = lVar5;
          if (lVar5 == 0) goto LAB_100d2ba99;
LAB_100d2ba48:
          cVar1 = operator<(&local_40,(QString *)(lVar3 + 0x18));
          if (cVar1 != '\0') goto LAB_100d2ba99;
          lVar2 = FUN_100d2bde0(plVar6,&local_40);
          FUN_100d30070(plVar4,&local_40,lVar2);
          QString::operator=(&local_40,(QString *)(lVar2 + 8));
        } while (*(int *)(local_40.field0_0x0 + 4) != 0);
      }
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_40.field0_0x0 != 0) {
            return plVar4;
          }
          local_32 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
    }
  }
  return plVar4;
}

