
void FUN_100b4d7e0(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  QArrayData *local_40;
  int local_38 [2];
  long local_30;
  undefined1 local_21;
  
  lVar3 = FUN_100b4d990();
  local_38[0] = 0;
  cVar1 = FUN_100b49e80(local_38);
  if (cVar1 != '\0') {
    local_30 = param_1;
    iVar2 = _IOConnectCallScalarMethod(local_38[0],2,&local_30,1,0,0);
    if (iVar2 == 0) {
      FUN_100df99c0("","prl_net",0,"0x%llx features set on prl_networking",local_30);
    }
    else {
      FUN_100df99c0("","prl_net",0,"[CPrlVnicMacDriver::setFeatures()] ioctl returned 0x%08x",iVar2)
      ;
    }
    if (lVar3 != param_1) {
      FUN_100d86030(&local_40);
      FUN_100b4a490(&local_40,2);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_21 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100b4d8c7;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
  }
LAB_100b4d8c7:
  if ((local_38[0] != 0) && (iVar2 = _IOServiceClose(), iVar2 != 0)) {
    FUN_100df99c0("","prl_net",0,"[CPrlVnicMacDriver::closeDriver()] IOServiceClose returned 0x%08x"
                  ,iVar2);
  }
  return;
}

