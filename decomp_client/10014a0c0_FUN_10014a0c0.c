
void FUN_10014a0c0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_40;
  long local_38;
  undefined1 local_29;
  
  if (param_2 != 0) {
    FUN_100146b90(&local_38,param_1);
    FUN_1001478b0(&local_38,param_2);
    if (local_38 != 0) {
      _PrlHandle_Free();
    }
    uVar4 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
    }
    uVar4 = FUN_10018c2b0(uVar4);
    lVar5 = FUN_10010dec0(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    if (lVar5 != 0) {
      iVar1 = CVmDevice::getConnected();
      iVar2 = CVmDevice::getConnected();
      if (iVar1 != iVar2) {
        uVar3 = CVmDevice::getConnected();
        FUN_1007fd240(param_1,uVar3);
      }
      CBaseNode::toString(SUB81(&local_40,0),(bool)((char)param_2 + '\x10'));
      CBaseNode::fromString
                ((QTypedArrayData<unsigned_short> *)(lVar5 + 0x10),SUB81(&local_40,0),(QString *)0x0
                 ,(int *)0x0,(int *)0x0);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return;
          }
          local_29 = 0;
        }
        QArrayData::deallocate(local_40,2,8);
      }
    }
  }
  return;
}

