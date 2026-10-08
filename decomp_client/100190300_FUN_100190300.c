
void FUN_100190300(undefined8 param_1,bool *param_2)

{
  QArrayData *pQVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_5c;
  QVariant local_38;
  undefined1 local_21;
  
  if (3 < DAT_10230ffd0) {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    pQVar1 = *(QArrayData **)(param_2 + 0x20);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    piVar2 = *(int **)(param_2 + 0x30);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      local_21 = *piVar2 != 0;
      UNLOCK();
    }
    QVariant::QVariant(&local_38,(QVariant *)(param_2 + 0x40));
    uStack_5c = (undefined4)((ulong)uVar4 >> 0x20);
    uVar4 = FUN_100dd9170(uStack_5c);
    uVar3 = CSdkRequest::getResultCode(param_2);
    uVar5 = FUN_100dddcf0(uVar3);
    FUN_100df99c0("","prl_client_app",4,"received result for [%s]. RC = [%s]",uVar4,uVar5);
    QVariant::~QVariant(&local_38);
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_21 = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_21) && (piVar2 != (int *)0x0)) {
        operator_delete(piVar2);
      }
    }
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) {
          return;
        }
        local_21 = 0;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  return;
}

