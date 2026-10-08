
void FUN_100583760(QObject *param_1,undefined8 param_2,QObject *param_3)

{
  int iVar1;
  Data *pDVar2;
  void *pvVar3;
  QKeySequence *this;
  long lVar4;
  undefined1 auVar5 [16];
  Data *local_50;
  QKeySequence local_48 [8];
  QKeySequence local_40 [15];
  undefined1 local_31;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f3b10;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  pvVar3 = operator_new(0xd0);
  *(void **)(param_1 + 0x18) = pvVar3;
  *(undefined4 *)(param_1 + 0x20) = 1;
  QKeySequence::QKeySequence(local_40);
  QKeySequence::QKeySequence(local_48);
  FUN_100714b00(param_1 + 0x28,local_40,local_48,2);
  QKeySequence::~QKeySequence(local_48);
  QKeySequence::~QKeySequence(local_40);
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e1288;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100708220(param_1 + 0x48,&local_50,2);
  pDVar2 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10058387e;
    }
    iVar1 = *(int *)(local_50 + 0xc);
    if (iVar1 != *(int *)(local_50 + 8)) {
      lVar4 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_50 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10058387e:
  QKeySequence::QKeySequence((QKeySequence *)(param_1 + 0x68));
  auVar5._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar5._0_8_ = PTR_shared_null_1021e15d0;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x70) = auVar5;
  return;
}

