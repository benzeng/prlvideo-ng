
void FUN_100acc060(long *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  QArrayData *local_70;
  
  iVar2 = 5;
  switch(param_2) {
  case 0:
  case 1:
  case 4:
    if ((int)param_1[0xb] == 1) {
      (**(code **)(*param_1 + 0xb8))(param_1,0);
    }
    iVar2 = *(int *)(&DAT_101cd77f0 + (long)param_2 * 4);
    break;
  case 2:
    break;
  case 3:
    iVar2 = 2;
    break;
  case 5:
    iVar2 = 9;
    break;
  default:
    iVar2 = 1;
  }
  puVar1 = PTR_shared_null_1021e1288;
  if (*(char *)((long)param_1 + 0x81) != '\0') {
    return;
  }
  if (DAT_10230ffd0 < 1) goto LAB_100acc489;
  if (iVar2 - 1U < 8) {
                    /* WARNING: Could not recover jumptable at 0x000100acc10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)&switchD_100acc10e::switchdataD_100acc7a8 +
              (long)(int)(&switchD_100acc10e::switchdataD_100acc7a8)[iVar2 - 1U]))();
    return;
  }
  QString::toUtf8();
  FUN_100df99c0("CHRCLIENT","ChrToolClient",1,
                "CoherenceToolClient: OnCoherenceStopped (vmReason = %d; clientReason = %s)",param_2
                ,local_70 + *(long *)(local_70 + 0x10));
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) goto LAB_100acc459;
    }
    QArrayData::deallocate(local_70,1,8);
  }
LAB_100acc459:
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (*(int *)puVar1 != 0) goto LAB_100acc489;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100acc489:
  FUN_100acb0d0(param_1,1,iVar2);
  return;
}

