
void FUN_1001efc90(long *param_1,QString *param_2)

{
  undefined1 uVar1;
  QObject *pQVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  Connection local_30 [13];
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    QString::operator=((QString *)(param_1 + 0xb),param_2);
    *(undefined1 *)(param_1 + 0xc) = 0;
    if (((param_1[7] != 0) && (*(int *)(param_1[7] + 4) != 0)) && (param_1[8] != 0)) {
      uVar1 = CPasswordDialog::isNeedSavePassword();
      *(undefined1 *)(param_1 + 0xc) = uVar1;
    }
    lVar6 = 0;
    if ((param_1[3] != 0) && (lVar6 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar6 = param_1[4];
    }
    pQVar2 = (QObject *)FUN_100197430(lVar6,param_2);
    piVar3 = (int *)0x0;
    if (pQVar2 != (QObject *)0x0) {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar2);
    }
    piVar4 = (int *)param_1[5];
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        local_23 = *piVar3 != 0;
        UNLOCK();
        piVar4 = (int *)param_1[5];
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_22 = *piVar4 != 0;
        UNLOCK();
        if ((!(bool)local_22) && ((void *)param_1[5] != (void *)0x0)) {
          operator_delete((void *)param_1[5]);
        }
      }
      param_1[5] = (long)piVar3;
      param_1[6] = (long)pQVar2;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_21 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_21) {
        operator_delete(piVar3);
      }
    }
    lVar6 = param_1[6];
    *(undefined1 *)(lVar6 + 0x60) = 1;
    lVar5 = 0;
    if ((param_1[5] != 0) && (lVar5 = 0, *(int *)(param_1[5] + 4) != 0)) {
      lVar5 = lVar6;
    }
    QObject::connect(local_30,lVar5,"2jobCompleted(PRL_RESULT)",param_1,
                     "1onCheckPasswordCompleted(PRL_RESULT)",0);
    QMetaObject::Connection::~Connection(local_30);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001efdf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))(param_1,0x80000009);
  return;
}

