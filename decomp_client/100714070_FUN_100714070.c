
void FUN_100714070(undefined8 *param_1,int param_2)

{
  QKeySequence *this;
  uint *puVar1;
  uint uVar2;
  
  if (-1 < param_2) {
    puVar1 = (uint *)*param_1;
    uVar2 = puVar1[2];
    if (param_2 < (int)(puVar1[3] - uVar2)) {
      if (1 < *puVar1) {
        FUN_100559bb0(param_1,puVar1[1]);
        puVar1 = (uint *)*param_1;
        uVar2 = puVar1[2];
      }
      this = *(QKeySequence **)(puVar1 + ((long)param_2 + (long)(int)uVar2) * 2 + 4);
      if (this != (QKeySequence *)0x0) {
        QKeySequence::~QKeySequence(this + 8);
        QKeySequence::~QKeySequence(this);
        operator_delete(this);
      }
      QListData::remove((int)param_1);
      return;
    }
  }
  return;
}

