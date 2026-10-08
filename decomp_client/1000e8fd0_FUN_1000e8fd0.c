
undefined1 FUN_1000e8fd0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  void *pvVar3;
  QArrayData *local_458;
  QArrayData *local_450;
  undefined8 local_448;
  undefined4 local_440;
  undefined4 local_438;
  undefined1 local_434 [1051];
  undefined1 local_19;
  
  ___bzero(&local_448,0x428);
  QString::normalized(&local_450,param_2,1,0);
  uVar1 = (long)*(int *)(local_450 + 4) * 2 + 2;
  if (uVar1 < 0x20b) {
    pvVar3 = (void *)QString::utf16();
    _memcpy(local_434,pvVar3,uVar1);
    local_438 = 0x414;
    local_440 = 0;
    local_448 = 0x20000006a;
    uVar2 = FUN_1000e85b0(param_1,&local_448);
  }
  else {
    QString::toUtf8();
    FUN_100df99c0("SGAGC","prl_client_app",0,"Error: guestAppPathN=\"%s\" is too long (%u bytes)",
                  local_458 + *(long *)(local_458 + 0x10),uVar1 & 0xffffffff);
    if (*(int *)local_458 == -1) {
      uVar2 = 0;
    }
    else {
      if (*(int *)local_458 != 0) {
        LOCK();
        *(int *)local_458 = *(int *)local_458 + -1;
        local_19 = *(int *)local_458 != 0;
        UNLOCK();
        if ((bool)local_19) {
          uVar2 = 0;
          goto LAB_1000e90ff;
        }
      }
      QArrayData::deallocate(local_458,1,8);
      uVar2 = 0;
    }
  }
LAB_1000e90ff:
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      UNLOCK();
      if (*(int *)local_450 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_450,2,8);
  }
  return uVar2;
}

