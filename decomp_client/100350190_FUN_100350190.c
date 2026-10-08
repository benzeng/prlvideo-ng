
byte FUN_100350190(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  
  iVar1 = CVmTravelCondition::getQuit();
  bVar4 = true;
  if (iVar1 != 0) {
    iVar1 = CVmTravelCondition::getQuit();
    if (iVar1 == 1) {
      bVar4 = *(int *)(param_1 + 0x18) == 1;
    }
    else {
      bVar4 = false;
    }
  }
  iVar1 = CVmTravelCondition::getEnter();
  if (iVar1 == 2) {
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = CVmTravelCondition::getEnterBetteryThreshold();
    bVar3 = bVar4 & iVar1 <= iVar2;
  }
  else {
    bVar3 = 0;
  }
  return bVar3;
}

