
void FUN_10056cc00(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    puVar2 = operator_new(0x10);
    *puVar2 = *param_2;
    QKeySequence::QKeySequence((QKeySequence *)(puVar2 + 8),(QKeySequence *)(param_2 + 8));
  }
  else {
    puVar1 = (undefined8 *)FUN_10056ed20(param_1,0x7fffffff,1);
    puVar2 = operator_new(0x10);
    *puVar2 = *param_2;
    QKeySequence::QKeySequence((QKeySequence *)(puVar2 + 8),(QKeySequence *)(param_2 + 8));
  }
  *puVar2 = *param_2;
  *puVar1 = puVar2;
  return;
}

