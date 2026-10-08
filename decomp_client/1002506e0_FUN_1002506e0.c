
undefined8 * FUN_1002506e0(undefined8 *param_1)

{
  char cVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = PTR_shared_null_1021e15e8;
  cVar1 = FUN_100d80680();
  if (cVar1 != '\0') {
    return param_1;
  }
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Parallels Transporter",0x15);
  local_38 = pQVar2;
  FUN_1000341d0(param_1,&local_38);
  pQVar3 = (QArrayData *)QString::fromAscii_helper("Parallels Image Tool",0x14);
  local_40 = pQVar3;
  FUN_1000341d0(param_1,&local_40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10025077d;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10025077d:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return param_1;
}

