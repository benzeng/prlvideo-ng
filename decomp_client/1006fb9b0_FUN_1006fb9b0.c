
void FUN_1006fb9b0(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  int iVar1;
  Data *pDVar2;
  QKeySequence *this;
  long lVar3;
  Data *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f5b00;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(param_1 + 0x20,&local_40,2);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1006fba5a;
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar3 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_1006fba5a:
  *(undefined **)(param_1 + 0x30) = PTR_shared_null_1021e15d0;
  return;
}

