
void FUN_1001247a0(undefined8 *param_1,undefined4 param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  FUN_10011c900(param_1,0,0);
  *(undefined4 *)(param_1 + 2) = 0x1389;
  *param_1 = &PTR_FUN_10110d320;
  pQVar1 = (QArrayData *)QString::fromAscii_helper("proto_request_op_code",0x15);
  local_38 = pQVar1;
  FUN_10011cae0(param_1,param_2,&local_38);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_2a = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100124825;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100124825:
  iVar2 = 0;
  if (param_1[1] != 0) {
    iVar2 = (int)*(undefined8 *)(param_1[1] + 0x10);
  }
  CVmEventBase::setEventCode(iVar2);
  return;
}

