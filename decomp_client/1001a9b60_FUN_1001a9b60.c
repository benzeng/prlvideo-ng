
uint FUN_1001a9b60(long param_1,char param_2,int param_3)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_10015a340(uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x48) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_100382700(&local_38,uVar4);
  bVar1 = FUN_100122870(uVar2,&local_38,7);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_1001a9bfc;
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001a9bfc:
  if (param_2 == '\0') {
    uVar3 = (uint)(param_3 == 8 & bVar1);
  }
  else {
    uVar3 = (uint)bVar1 * 2;
  }
  return uVar3;
}

