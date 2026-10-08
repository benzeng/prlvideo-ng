
bool FUN_100acb600(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  bVar3 = iVar1 == 1;
  if (bVar3) {
    uVar2 = FUN_100ad4770(*(undefined8 *)(param_1 + 0x78));
    *param_2 = uVar2;
  }
  return bVar3;
}

