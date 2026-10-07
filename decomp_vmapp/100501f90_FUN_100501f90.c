
void FUN_100501f90(undefined8 *param_1,char *param_2,undefined2 param_3)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  QArrayData *local_38;
  undefined1 local_2d;
  undefined1 local_2c;
  
  *param_1 = &PTR_FUN_100bc3c10;
  iVar3 = -1;
  if (param_2 != (char *)0x0) {
    sVar1 = _strlen(param_2);
    iVar3 = (int)sVar1;
  }
  piVar2 = (int *)QString::fromAscii_helper(param_2,iVar3);
  param_1[1] = piVar2;
  param_1[2] = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_2d = *piVar2 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0xa3b754);
  QString::append((QString *)(param_1 + 2));
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100502045;
      local_2c = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100502045:
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = param_3;
  return;
}

