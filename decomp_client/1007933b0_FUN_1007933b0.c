
void FUN_1007933b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  QKeySequence local_28 [8];
  QKeySequence local_20 [8];
  
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_10018c280(uVar1);
  uVar2 = FUN_100319d40(uVar1);
  QKeySequence::QKeySequence(local_28,9);
  uVar1 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar1 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10071a6e0(local_20,local_28,uVar1);
  FUN_10035c150(uVar2,local_20);
  QKeySequence::~QKeySequence(local_20);
  QKeySequence::~QKeySequence(local_28);
  return;
}

