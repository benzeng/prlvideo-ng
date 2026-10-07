
bool FUN_1000e8080(char *param_1)

{
  int iVar1;
  size_t sVar2;
  QArrayData *pQVar3;
  QArrayData *local_28;
  undefined4 local_20;
  undefined1 local_1a;
  
  local_20 = 0;
  iVar1 = -1;
  if (param_1 != (char *)0x0) {
    sVar2 = _strlen(param_1);
    iVar1 = (int)sVar2;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper(param_1,iVar1);
  local_28 = pQVar3;
  iVar1 = FUN_1000e3350(&local_28,&DAT_1011b6cd0,0,0,&local_20);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_1a = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1000e80ff;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1000e80ff:
  return iVar1 == -0x7ffffffa;
}

