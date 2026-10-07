
undefined8 FUN_10011ebf0(undefined8 param_1)

{
  QArrayData *pQVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  undefined1 local_22;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("login_local_cmd_process_id",0x1a);
  local_30 = pQVar1;
  uVar2 = FUN_10011d800(param_1,&local_30);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_22 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_22) {
        return uVar2;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return uVar2;
}

