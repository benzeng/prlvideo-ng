
undefined8 FUN_100560d70(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  QKeySequence *this;
  undefined8 uVar3;
  long lVar4;
  Data *local_48 [2];
  undefined1 local_31;
  
  if (*param_2 < 0) {
    return 0;
  }
  if (param_2[1] < 0) {
    return 0;
  }
  if (*(long *)(param_2 + 4) == 0) {
    return 0;
  }
  if (param_2[1] != 0) {
    return 0x21;
  }
  uVar3 = 1;
  if (*(char *)(param_1 + 0x20) != '\0') {
    return 1;
  }
  FUN_100560f00(local_48,param_1,param_2);
  uVar2 = FUN_100708300(local_48);
  if (*(int *)local_48[0] != -1) {
    if (*(int *)local_48[0] != 0) {
      LOCK();
      *(int *)local_48[0] = *(int *)local_48[0] + -1;
      UNLOCK();
      if (*(int *)local_48[0] != 0) goto joined_r0x000100560e0f;
      local_31 = 0;
    }
    iVar1 = *(int *)(local_48[0] + 0xc);
    if (iVar1 != *(int *)(local_48[0] + 8)) {
      lVar4 = (long)*(int *)(local_48[0] + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_48[0] + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(local_48[0]);
  }
joined_r0x000100560e0f:
  if (((uVar2 & 8) == 0) && (uVar3 = 0x31, param_2[1] != 0)) {
    uVar3 = 0x21;
  }
  return uVar3;
}

