
void FUN_1002d7ad0(long *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  long lVar2;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  int *local_50 [4];
  QVariant local_30 [2];
  undefined1 local_11;
  
  if (param_3 != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001002d7bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  local_58 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onQuestionAnswered( PRL_RESULT, Messaging::ButtonID )",0x36);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  FUN_100a1c600(local_50,param_1,&local_58,&local_68);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_11 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002d7b56;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1002d7b56:
  if (*(char *)((long)param_1 + 0x2c) == '\0') {
    lVar2 = 0;
    if ((param_1[3] != 0) && (lVar2 = 0, *(int *)(param_1[3] + 4) != 0)) {
      lVar2 = param_1[4];
    }
    cVar1 = FUN_1002d6640(lVar2,local_50);
    if (cVar1 == '\0') goto LAB_1002d7b91;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
LAB_1002d7b91:
  QVariant::~QVariant(local_30);
  if (local_50[0] != (int *)0x0) {
    LOCK();
    *local_50[0] = *local_50[0] + -1;
    local_11 = *local_50[0] != 0;
    UNLOCK();
    if ((!(bool)local_11) && (local_50[0] != (int *)0x0)) {
      operator_delete(local_50[0]);
    }
  }
  return;
}

