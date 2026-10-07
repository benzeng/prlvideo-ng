
void FUN_1000743b0(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x370) == 0) {
    uVar1 = QObject::startTimer(param_1,30000,1);
    *(undefined4 *)(param_1 + 0x370) = uVar1;
  }
  return;
}

