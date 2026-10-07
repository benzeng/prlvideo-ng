
void FUN_100651ad0(undefined8 *param_1)

{
  QMapNodeBase *pQVar1;
  
  FUN_100644130();
  CDispUsbPreferences::~CDispUsbPreferences((CDispUsbPreferences *)(param_1 + 8));
  FUN_1006500f0(param_1 + 5,param_1[6]);
  FUN_100013180(param_1 + 1);
  pQVar1 = (QMapNodeBase *)*param_1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QMapNodeBase *)*param_1;
    }
    if (*(long *)(pQVar1 + 0x10) != 0) {
      FUN_10065ccd0();
      QMapDataBase::freeTree(pQVar1,(int)*(undefined8 *)(pQVar1 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar1);
  }
  return;
}

