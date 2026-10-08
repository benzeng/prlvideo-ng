
void FUN_100723a30(undefined8 *param_1,QObject *param_2,undefined8 param_3,undefined4 param_4,
                  QKeySequence *param_5,undefined8 *param_6,undefined1 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_1021f5d38;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  param_1[1] = uVar2;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_102274b70;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[5] = param_3;
  FUN_100724ca0("CAppShortcutData*",0,0);
  *param_1 = &PTR_FUN_102274b90;
  QKeySequence::QKeySequence((QKeySequence *)(param_1 + 6),param_5);
  piVar1 = (int *)*param_6;
  uVar2 = param_6[1];
  param_1[7] = piVar1;
  param_1[8] = uVar2;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = param_6[2];
  param_1[10] = param_6[3];
  param_1[9] = uVar2;
  QVariant::QVariant((QVariant *)(param_1 + 0xb),(QVariant *)(param_6 + 4));
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_6 + 6);
  *(undefined1 *)(param_1 + 0xe) = param_7;
  return;
}

