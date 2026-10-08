
undefined1 FUN_1000b9410(long *param_1,ulong param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_38;
  
  uVar3 = FUN_100370280();
  FUN_1003705c0(uVar3,param_1 + 2,0);
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001548f0(uVar3,param_1 + 2);
  if (lVar4 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAA","prl_client_app",0,"Error: failed to get Vm for vmUuid=\"%s\"",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 == -1) {
      uVar2 = 0;
    }
    else {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return 0;
        }
      }
      QArrayData::deallocate(local_38,1,8);
      uVar2 = 0;
    }
  }
  else {
    if (param_3 != '\0') {
      uVar3 = FUN_10018c280(lVar4);
      uVar3 = FUN_100319c50(uVar3);
      cVar1 = FUN_100331380(uVar3,param_2 & 0xffffffff);
      if (cVar1 != '\0') {
        return 1;
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    uVar2 = FUN_1000e92d0(uVar3,param_2);
  }
  return uVar2;
}

