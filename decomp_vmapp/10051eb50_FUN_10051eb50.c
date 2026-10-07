
void FUN_10051eb50(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  QArrayData *pQVar1;
  long lVar2;
  int *piVar3;
  
  if ((param_3 & 0x10) != 0) {
    piVar3 = (int *)*param_2;
    if (*piVar3 != 1) {
      FUN_100031c40(param_2);
      piVar3 = (int *)*param_2;
    }
    pQVar1 = *(QArrayData **)(piVar3 + 0x12);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
    if (0xf < *(uint *)(pQVar1 + 4)) {
      lVar2 = *(long *)(pQVar1 + 0x10);
      if (3 < DAT_1011b55f8) {
        FUN_1008e3970("","VolumeControllerHost",4,
                      "VolumeControllerHost::onInstallationStageChanged: stage=%d type=%d [%d;%d]",
                      *(undefined4 *)(pQVar1 + lVar2),*(undefined4 *)(pQVar1 + lVar2 + 4),
                      *(undefined4 *)(pQVar1 + lVar2 + 8),*(undefined4 *)(pQVar1 + lVar2 + 0xc));
      }
      if (((*(int *)(pQVar1 + lVar2 + 4) - 2U < 3) && (*(int *)(pQVar1 + lVar2) == 1)) &&
         (*(long **)(DAT_1011c3698 + 0x1a18) != (long *)0x0)) {
        (**(code **)(**(long **)(DAT_1011c3698 + 0x1a18) + 0x30))();
      }
    }
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) {
          return;
        }
      }
      QArrayData::deallocate(pQVar1,1,8);
    }
  }
  return;
}

