
void FUN_10055d240(QObject *param_1,undefined8 param_2,undefined8 param_3,QObject *param_4)

{
  int iVar1;
  Data *pDVar2;
  void *pvVar3;
  QKeySequence *this;
  long lVar4;
  Data *local_40;
  undefined1 local_31;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021f3150;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar3 = operator_new(0x78);
  *(void **)(param_1 + 0x18) = pvVar3;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(param_1 + 0x28,&local_40,2);
  pDVar2 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar4 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_40 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

