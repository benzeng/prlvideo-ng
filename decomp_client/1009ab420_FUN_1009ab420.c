
void FUN_1009ab420(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  int local_30;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (((*(long *)(param_1 + 0x58) != 0) && (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) &&
     (*(long *)(param_1 + 0x60) != 0)) goto LAB_1009ab59c;
  lVar2 = FUN_1009983c0(param_1);
  lVar2 = *(long *)(lVar2 + 0x30);
  lVar7 = 0;
  if (lVar2 != 0) {
    (*DAT_102310a48)(lVar2);
    lVar7 = lVar2;
  }
  uVar3 = FUN_1009983a0(param_1);
  lVar2 = FUN_100990b00(uVar3);
  if ((*(byte *)(lVar2 + 0x20) & 8) == 0) {
LAB_1009ab4fe:
    uVar3 = 100;
  }
  else {
    local_30 = 1;
    iVar1 = (*DAT_102310d30)(lVar7,&local_30);
    if (iVar1 < 0) {
      FUN_100df99c0("","TransporterWizardModel",0,
                    "PTA_CHECKED_CALL_ASSERT( %s %s ) occured in %s:%d [%s]","pFunc",
                    "(hHandle, &val)","../Includes/AgentAPIWrap/PTACallUtils.h",0x61,"GetVal");
    }
    uVar3 = 0x32;
    if (local_30 == 0) goto LAB_1009ab4fe;
  }
  pQVar4 = operator_new(0x58);
  FUN_1009aacd0(pQVar4,param_1,uVar3);
  piVar5 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar4);
  piVar6 = *(int **)(param_1 + 0x58);
  if (piVar6 != piVar5) {
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_2b = *piVar5 != 0;
      UNLOCK();
      piVar6 = *(int **)(param_1 + 0x58);
    }
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + -1;
      local_2a = *piVar6 != 0;
      UNLOCK();
      if ((!(bool)local_2a) && (*(void **)(param_1 + 0x58) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x58));
      }
    }
    *(int **)(param_1 + 0x58) = piVar5;
    *(QObject **)(param_1 + 0x60) = pQVar4;
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    local_29 = *piVar5 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar5);
    }
  }
  if (lVar7 != 0) {
    (*DAT_102310a50)(lVar7);
  }
LAB_1009ab59c:
  (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
  FUN_1009a7c00(param_1);
  return;
}

