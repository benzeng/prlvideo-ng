
void FUN_1001d08c0(char *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  size_t sVar2;
  int iVar3;
  QArrayData *local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_28 = param_2;
  uVar1 = FUN_100a205d0();
  iVar3 = -1;
  if (param_1 != (char *)0x0) {
    sVar2 = _strlen(param_1);
    iVar3 = (int)sVar2;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(param_1,iVar3);
  FUN_1001d0200(uVar1,&local_30,&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

