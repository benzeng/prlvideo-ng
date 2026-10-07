
void FUN_100269b40(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *local_40;
  long *local_38;
  
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","LocalDevices",3,"[CDataSpool] INVALIDATE");
  }
  plVar4 = *(long **)(param_1 + 8);
  if (*(int *)((long)plVar4 + 0x14) != 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      if (1 < *(uint *)(plVar4 + 2)) {
        local_38 = plVar4;
        FUN_10026b030(&local_40,plVar1,&local_38);
        plVar4 = (long *)*plVar1;
      }
      plVar3 = *(long **)(*plVar4 + 0x10);
      if (1 < *(uint *)(plVar4 + 2)) {
        local_38 = plVar4;
        FUN_10026b030(&local_40,plVar1,&local_38);
        plVar4 = (long *)*plVar1;
      }
      plVar6 = (long *)*plVar4;
      if (1 < *(uint *)(plVar4 + 2)) {
        local_40 = (long *)*plVar4;
        FUN_10026b030(&local_38,plVar1,&local_40);
        plVar4 = (long *)*plVar1;
        plVar6 = local_38;
      }
      if (plVar6 != plVar4) {
        lVar5 = *plVar6;
        *(long *)(lVar5 + 8) = plVar6[1];
        *(long *)plVar6[1] = lVar5;
        if (plVar6 != (long *)0x0) {
          operator_delete(plVar6);
        }
        *(int *)(*plVar1 + 0x14) = *(int *)(*plVar1 + 0x14) + -1;
      }
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        if (*(int *)(lVar5 + 0x10) != -1) {
          if (*(int *)(lVar5 + 0x10) != 0) {
            LOCK();
            piVar2 = (int *)(lVar5 + 0x10);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            local_38 = (long *)CONCAT71(local_38._1_7_,*piVar2 != 0);
            if (*piVar2 != 0) goto LAB_100269c56;
            lVar5 = *plVar3;
          }
          FUN_10041f220(plVar3,lVar5);
        }
LAB_100269c56:
        operator_delete(plVar3);
      }
      plVar4 = (long *)*plVar1;
    } while (*(int *)((long)plVar4 + 0x14) != 0);
  }
  QByteArray::clear();
  return;
}

