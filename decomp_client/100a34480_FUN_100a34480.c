
void FUN_100a34480(QObject *param_1)

{
  undefined4 *puVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102238230;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_1022382b0;
  puVar1 = operator_new(4);
  *puVar1 = 0x2002;
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}

