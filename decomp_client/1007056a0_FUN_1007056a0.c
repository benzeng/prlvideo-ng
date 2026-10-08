
void FUN_1007056a0(long param_1,undefined4 param_2,long param_3,char param_4)

{
  int iVar1;
  char cVar2;
  QKeySequence *this;
  long lVar3;
  QArrayData *local_50;
  Data *local_48 [2];
  undefined1 local_31;
  
  FUN_1007055e0(local_48,param_1,param_2);
  cVar2 = FUN_100708950(local_48,param_3);
  if (*(int *)local_48[0] != -1) {
    if (*(int *)local_48[0] != 0) {
      LOCK();
      *(int *)local_48[0] = *(int *)local_48[0] + -1;
      local_31 = *(int *)local_48[0] != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100705762;
    }
    iVar1 = *(int *)(local_48[0] + 0xc);
    if (iVar1 != *(int *)(local_48[0] + 8)) {
      lVar3 = (long)*(int *)(local_48[0] + 8) * 8 + (long)iVar1 * -8;
      this = (QKeySequence *)(local_48[0] + (long)iVar1 * 8 + 8);
      do {
        QKeySequence::~QKeySequence(this);
        this = this + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_48[0]);
  }
LAB_100705762:
  if (cVar2 != '\0') {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  FUN_1006946e0(&local_50,param_2);
  lVar3 = FUN_100706960(lVar3 + 0x30,&local_50);
  FUN_100707070(lVar3,param_3);
  *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(param_3 + 8);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007057d1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007057d1:
  FUN_100852bb0(param_1,param_2,param_3);
  if (param_4 != '\0') {
    FUN_100704190(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}

