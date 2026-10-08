
bool FUN_100acb4b0(long param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x58);
  QMutex::unlock();
  bVar2 = iVar1 == 1;
  if (bVar2) {
    auVar3 = FUN_100ad42f0(*(undefined8 *)(param_1 + 0x78));
    *param_2 = auVar3;
  }
  return bVar2;
}

