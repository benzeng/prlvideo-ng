
void FUN_100777ef0(undefined8 *param_1,undefined8 param_2)

{
  QArrayData *pQVar1;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("AcronisOnlineStore",0x12);
  local_30 = pQVar1;
  FUN_100773750(param_1,&local_30,param_2);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100777f57;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100777f57:
  *param_1 = &PTR_FUN_1021f6cd8;
  return;
}

