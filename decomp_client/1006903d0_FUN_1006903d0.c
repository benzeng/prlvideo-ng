
bool FUN_1006903d0(undefined4 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = FUN_10018d470(param_2);
  switch(param_1) {
  case 0:
    bVar2 = uVar1 == 1;
    break;
  case 1:
    bVar2 = SUB41((uVar1 & 2) >> 1,0);
    break;
  case 2:
    bVar2 = SUB41((uVar1 & 4) >> 2,0);
    break;
  case 3:
    bVar2 = SUB41((uVar1 & 8) >> 3,0);
    break;
  case 4:
    bVar2 = SUB41((uVar1 & 0x10) >> 4,0);
    break;
  case 5:
    bVar2 = SUB41((uVar1 & 0x20) >> 5,0);
    break;
  case 6:
    bVar2 = SUB41((uVar1 & 0x80) >> 7,0);
    break;
  case 7:
    bVar2 = (bool)((byte)(uVar1 >> 8) & 1);
    break;
  default:
    EnumUtils::enumToString(&local_30,param_1);
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",0,"Unsupported VM addition state: %s",
                  local_28 + *(long *)(local_28 + 0x10));
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_19 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100690463;
      }
      QArrayData::deallocate(local_28,1,8);
    }
LAB_100690463:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100690493;
      }
      QArrayData::deallocate(local_30,2,8);
    }
LAB_100690493:
    bVar2 = false;
    FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                  "ActionManager/ActionHelpersPrivate.cpp",0x39,"testVmAdditionState");
  }
  return bVar2;
}

