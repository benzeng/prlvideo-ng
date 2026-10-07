
void FUN_100544590(undefined8 *param_1)

{
  undefined4 *puVar1;
  
  QFileInfo::QFileInfo((QFileInfo *)(param_1 + 1));
  puVar1 = operator_new(8);
  *param_1 = puVar1;
  *puVar1 = 0xffffffff;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}

