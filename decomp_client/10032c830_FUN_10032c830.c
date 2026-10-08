
undefined4 FUN_10032c830(long param_1)

{
  QArrayData *pQVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  QArrayData *local_48;
  undefined4 local_3c;
  long local_38;
  undefined1 local_29;
  
  FUN_10032ca00(&local_38,param_1);
  if (local_38 == 0) {
    return 0;
  }
  iVar3 = _PrlTisRecord_GetState(local_38,&local_3c);
  if ((-1 < iVar3) || (local_3c = 0, DAT_10230ffd0 < 3)) goto LAB_10032c955;
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_29 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  lVar2 = *(long *)(local_48 + 0x10);
  uVar4 = FUN_100dddcf0(iVar3);
  FUN_100df99c0("","prl_client_app",3,
                "PrlTisRecord_GetState call error: record [%s], RC = %.8X [%s]",local_48 + lVar2,
                iVar3,uVar4);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10032c922;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_10032c922:
  local_3c = 0;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_29 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10032c955;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10032c955:
  _PrlHandle_Free(local_38);
  return local_3c;
}

