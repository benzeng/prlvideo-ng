
void FUN_100286fa0(undefined8 *param_1)

{
  int *piVar1;
  QArrayData *pQVar2;
  
  *param_1 = &PTR_FUN_102272208;
  param_1[2] = &PTR_FUN_102272238;
  pQVar2 = (QArrayData *)param_1[0x3f];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100286ff9;
      pQVar2 = (QArrayData *)param_1[0x3f];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100286ff9:
  CHostHardwareInfo::~CHostHardwareInfo((CHostHardwareInfo *)(param_1 + 6));
  *param_1 = &PTR_FUN_1022722d8;
  param_1[2] = &PTR_FUN_102272308;
  piVar1 = (int *)param_1[4];
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100287040;
      piVar1 = (int *)param_1[4];
    }
    FUN_100286360(param_1 + 4,piVar1);
  }
LAB_100287040:
  FUN_100286650(param_1);
  return;
}

