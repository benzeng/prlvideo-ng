
undefined8 FUN_100506be0(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  QArrayData *local_40;
  undefined1 local_32;
  
  uVar3 = *(uint *)(param_2 + 1);
  if (3 < uVar3) {
    do {
      puVar2 = (uint *)*param_2;
      uVar1 = *puVar2;
      if (uVar3 < uVar1) {
        return 1;
      }
      if (uVar1 < 4) {
        *(uint *)(param_2 + 1) = uVar3 - 4;
        *param_2 = (long)(puVar2 + 1);
        return 0;
      }
      *(uint *)(param_2 + 1) = uVar3 - uVar1;
      uVar3 = *puVar2;
      *param_2 = (long)puVar2 + (ulong)uVar3;
      if (7 < (ulong)uVar3) {
        QByteArray::QByteArray((QByteArray *)&local_40,(char *)(puVar2 + 2),uVar3 - 8);
        FUN_10004de00(param_1 + 0x10,puVar2 + 1,(QByteArray *)&local_40);
        if (*(int *)local_40 != -1) {
          if (*(int *)local_40 != 0) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_32 = *(int *)local_40 != 0;
            UNLOCK();
            if ((bool)local_32) goto LAB_100506ca0;
          }
          QArrayData::deallocate(local_40,1,8);
        }
      }
LAB_100506ca0:
      uVar3 = *(uint *)(param_2 + 1);
    } while (3 < uVar3);
  }
  return 1;
}

