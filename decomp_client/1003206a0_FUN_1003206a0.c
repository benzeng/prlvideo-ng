
void FUN_1003206a0(long param_1,QString *param_2,int param_3)

{
  char cVar1;
  QKeySequence *pQVar2;
  QKeySequence local_50 [8];
  QKeySequence local_48 [8];
  QKeySequence local_40 [8];
  QKeySequence local_38 [8];
  QString local_30;
  undefined1 local_21;
  
  local_30.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x28);
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  cVar1 = operator==(&local_30,param_2);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100320707;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100320707:
  if (cVar1 != '\0') {
    if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
       (*(long *)(param_1 + 0x18) == 0)) {
      FUN_100df99c0("","prl_client_app",0,
                    "(!)Error: processing desktop utilities state change, VM object does not exist."
                   );
    }
    else {
      pQVar2 = (QKeySequence *)(param_1 + 0x178);
      if (param_3 == 4) {
        QKeySequence::QKeySequence(local_48,0x27,0,0,0);
        QKeySequence::operator=(pQVar2,local_48);
        pQVar2 = local_48;
      }
      else if (param_3 == 2) {
        QKeySequence::QKeySequence(local_40,0x12000000,0,0,0);
        QKeySequence::operator=(pQVar2,local_40);
        pQVar2 = local_40;
      }
      else if (param_3 == 1) {
        QKeySequence::QKeySequence(local_38,0xa000000,0,0,0);
        QKeySequence::operator=(pQVar2,local_38);
        pQVar2 = local_38;
      }
      else {
        QKeySequence::QKeySequence(local_50);
        QKeySequence::operator=(pQVar2,local_50);
        pQVar2 = local_50;
      }
      QKeySequence::~QKeySequence(pQVar2);
    }
  }
  return;
}

