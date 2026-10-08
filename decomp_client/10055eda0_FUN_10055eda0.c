
void FUN_10055eda0(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  Data *pDVar2;
  QKeySequence *this;
  long lVar3;
  QKeySequence local_40 [8];
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  QKeySequence::QKeySequence(local_40,param_2 | param_3,0,0,0);
  FUN_100560a10(&local_38,local_40);
  FUN_100708260(param_1 + 0x28,&local_38);
  QKeySequence::~QKeySequence(local_40);
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10055ee5a;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar3 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_38 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10055ee5a:
  FUN_10083d580(*(undefined8 *)(param_1 + 0x10));
  return;
}

