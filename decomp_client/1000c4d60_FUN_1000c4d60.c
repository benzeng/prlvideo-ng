
void FUN_1000c4d60(long param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  undefined8 in_R8;
  undefined8 in_R9;
  uint *puVar4;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar3 = *(long *)(param_1 + 0xf0) + 0x50;
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0x138);
  puVar4 = *(uint **)(param_1 + 0x138);
  if (1 < *puVar4) {
    FUN_1000e6b10(puVar1);
    puVar4 = (uint *)*puVar1;
  }
  if (*(long *)(puVar4 + 4) == 0) {
    puVar2 = puVar4 + 2;
  }
  else {
    puVar2 = *(uint **)(puVar4 + 8);
  }
  if (1 < *puVar4) {
    FUN_1000e6b10(puVar1);
    puVar4 = (uint *)*puVar1;
  }
  if (puVar2 != puVar4 + 2) {
    do {
      local_40 = (QArrayData *)PTR_shared_null_1021e1288;
      FUN_1000fce80(param_1 + 0x118,puVar2 + 6,&local_40);
      FUN_1000c4970(puVar2 + 6,0x8d,local_40 + *(long *)(local_40 + 0x10),
                    *(undefined4 *)(local_40 + 4),in_R8,in_R9,lVar3);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000c4e58;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1000c4e58:
      puVar2 = (uint *)QMapNodeBase::nextNode();
    } while (puVar2 != puVar4 + 2);
  }
  QMutex::unlock();
  return;
}

