
QDataStream * FUN_1007063b0(QDataStream *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  QKeySequence *this;
  long lVar4;
  uint uVar5;
  QKeySequence local_50 [12];
  uint local_44;
  undefined *local_40;
  undefined1 local_31;
  
  puVar2 = PTR_shared_null_1021e15e8;
  local_40 = PTR_shared_null_1021e15e8;
  FUN_100707070(param_2,&local_40);
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_31 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10070643e;
    }
    iVar1 = *(int *)(puVar2 + 0xc);
    if (iVar1 != *(int *)(puVar2 + 8)) {
      lVar4 = (long)*(int *)(puVar2 + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(puVar2 + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose((Data *)PTR_shared_null_1021e15e8);
  }
LAB_10070643e:
  QDataStream::operator>>(param_1,(int *)&local_44);
  if ((int)((uint *)*param_2)[1] < (int)local_44) {
    if (*(uint *)*param_2 < 2) {
      QListData::realloc((int)param_2);
    }
    else {
      FUN_100560930(param_2);
    }
  }
  if (local_44 != 0) {
    uVar5 = 1;
    do {
      QKeySequence::QKeySequence(local_50);
      operator>>(param_1,local_50);
      FUN_100560a10(param_2,local_50);
      cVar3 = QDataStream::atEnd();
      QKeySequence::~QKeySequence(local_50);
      if (local_44 <= uVar5) {
        return param_1;
      }
      uVar5 = uVar5 + 1;
    } while (cVar3 != '\x01');
  }
  return param_1;
}

