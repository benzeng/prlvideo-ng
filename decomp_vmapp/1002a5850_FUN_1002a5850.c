
void FUN_1002a5850(undefined8 *param_1,uint *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  int local_3c;
  
  lVar2 = *(long *)param_2;
  uVar5 = (*param_2 ^ param_2[1]) >> 0x10 ^ *param_2 ^ param_2[1];
  uVar6 = (ulong)((uVar5 >> 8 ^ uVar5) & 0xff);
  QMutex::lock();
  QMutex::lock();
  if ((long *)param_1[uVar6 + 8] != (long *)0x0) {
    plVar7 = param_1 + uVar6 + 8;
    plVar8 = (long *)param_1[uVar6 + 8];
    do {
      if (*plVar8 == lVar2) {
        local_3c = -1;
        iVar4 = (**(code **)(*(long *)plVar8[5] + 0x18))((long *)plVar8[5],plVar8);
        if (iVar4 != -1) {
          *plVar7 = plVar8[4];
          local_3c = iVar4;
        }
        goto LAB_1002a58f4;
      }
      plVar1 = plVar8 + 4;
      plVar7 = plVar8 + 4;
      plVar8 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
  }
  local_3c = -1;
  plVar8 = (long *)0x0;
LAB_1002a58f4:
  QMutex::unlock();
  QMutex::unlock();
  if (plVar8 == (long *)0x0) {
    cVar3 = FUN_1002a6870(lVar2);
    if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001002a595a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1);
      return;
    }
  }
  else if (local_3c != -1) {
    FUN_1002a69c0(plVar8);
    return;
  }
  return;
}

