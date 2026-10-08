
void FUN_1002d1600(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 local_29;
  QArrayData *local_28;
  undefined1 local_19;
  
  lVar2 = FUN_1002c6ac0();
  if (lVar2 == 0) {
    local_28 = (QArrayData *)QString::fromAscii_helper("",0);
  }
  else {
    FUN_1002c6ac0(param_1);
    CSdkRequest::getResultAsString((int)&local_28);
  }
  if ((-1 < param_2) && (*(int *)(local_28 + 4) != 0)) {
    local_29 = 0;
    iVar1 = QString::toInt((bool *)&local_28,(int)&local_29);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = local_29;
    }
    *(undefined1 *)(param_1 + 0x48) = uVar3;
    FUN_100df99c0("","prl_client_app",0,"Recieved account confirmation result %d",uVar3);
  }
  CAbstractTask::finish((int)param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return;
}

