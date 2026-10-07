
void FUN_10008f640(long param_1,int param_2,char param_3)

{
  int *piVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  
  QMutex::lock();
  plVar6 = *(long **)(param_1 + 0xc0);
  do {
    if (plVar6 == (long *)(param_1 + 0xc0)) {
LAB_10008f73f:
      QMutex::unlock();
      return;
    }
    if ((int)plVar6[-1] == param_2) {
      iVar4 = FUN_1007d8850();
      *(int *)((long)plVar6 + -4) = *(int *)((long)plVar6 + -4) + (*(int *)(param_1 + 0x58) - iVar4)
      ;
      *(int *)(param_1 + 0x58) = iVar4;
      if ((0 < *(int *)((long)plVar6 + -4)) && ((long *)*plVar6 != (long *)(param_1 + 0xc0))) {
        piVar1 = (int *)(*plVar6 + -4);
        *piVar1 = *piVar1 + *(int *)((long)plVar6 + -4);
      }
      if (param_3 != '\0') {
        iVar4 = *(int *)(*(undefined8 **)(param_1 + 0xa8) + 6);
        iVar5 = iVar4 % 0x10;
        if ((iVar5 < 1) || (iVar5 <= DAT_1011b55f8)) {
          FUN_1008e3970("","vm",iVar4,"%s state(%s): cancelled \'%s\' timer",param_1 + 0x81,
                        **(undefined8 **)(param_1 + 0xa8),plVar6[-2]);
        }
      }
      lVar2 = *plVar6;
      plVar3 = (long *)plVar6[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      *plVar6 = 0x112233;
      plVar6[1] = (long)&DAT_00445566;
      *(undefined4 *)(plVar6 + 2) = 0;
      goto LAB_10008f73f;
    }
    plVar6 = (long *)*plVar6;
  } while( true );
}

