
void FUN_100560a10(undefined8 *param_1,QKeySequence *param_2)

{
  QKeySequence *this;
  undefined8 *puVar1;
  undefined8 local_20;
  
  if (*(uint *)*param_1 < 2) {
    QKeySequence::QKeySequence((QKeySequence *)&local_20,param_2);
    puVar1 = (undefined8 *)QListData::append();
    *puVar1 = local_20;
  }
  else {
    this = (QKeySequence *)FUN_100560ac0(param_1,0x7fffffff,1);
    QKeySequence::QKeySequence(this,param_2);
  }
  return;
}

