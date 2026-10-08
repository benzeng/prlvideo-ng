
bool FUN_100350160(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = CVmTravelCondition::getEnter();
  if (iVar1 == 1) {
    bVar2 = *(int *)(param_1 + 0x18) == 1;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

