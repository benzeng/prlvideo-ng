
void FUN_100b89670(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  QArrayData *pQVar2;
  bool *pbVar3;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("max_cpus",8);
  pbVar3 = (bool *)FUN_1006f3180(param_1 + 0x10);
  uVar1 = QString::toUInt(pbVar3,0);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  if (*(int *)pQVar2 == -1) goto LAB_100b896ef;
  if (*(int *)pQVar2 == 0) {
LAB_100b896dc:
    QArrayData::deallocate(pQVar2,2,8);
  }
  else {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + -1;
    UNLOCK();
    if (*(int *)pQVar2 == 0) goto LAB_100b896dc;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x48);
LAB_100b896ef:
  switch(uVar1) {
  case 0:
    *(undefined4 *)(param_1 + 0x48) = 1;
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x48) = 2;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x48) = 4;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x48) = param_2;
  }
  return;
}

