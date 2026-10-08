
void FUN_1000c6190(undefined8 param_1,long param_2,QString *param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  long local_58;
  QString local_50;
  undefined8 local_48;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_31;
  
  puVar1 = (undefined8 *)(param_2 + 0x38);
  puVar2 = *(uint **)(param_2 + 0x38);
  if (*puVar2 < 2) {
    puVar4 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  }
  else {
    FUN_1000e7430(puVar1,puVar2[1]);
    puVar2 = (uint *)*puVar1;
    puVar4 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
    if (1 < *puVar2) {
      FUN_1000e7430(puVar1,puVar2[1]);
      puVar2 = (uint *)*puVar1;
    }
  }
  if (puVar4 != puVar2 + (long)(int)puVar2[3] * 2 + 4) {
    puVar3 = puVar4 + -4;
    do {
      if (**(long **)puVar4 == param_5) {
        local_58 = 0;
        local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        local_48 = 0;
        local_3e = 0;
        local_3c = 0;
        QString::operator=(&local_50,param_3);
        local_3c = 9;
        local_58 = param_5;
        local_48 = param_4;
        FUN_1000e4c90(puVar1,&local_58);
        FUN_1000d8560(param_1,param_2);
        if (*(int *)local_50.field0_0x0 == -1) {
          return;
        }
        if (*(int *)local_50.field0_0x0 != 0) {
          LOCK();
          *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
          UNLOCK();
          if (*(int *)local_50.field0_0x0 != 0) {
            return;
          }
          local_31 = 0;
        }
        QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
        return;
      }
      puVar4 = puVar3 + 6;
      puVar3 = puVar3 + 2;
    } while (puVar2 + (long)(int)puVar2[3] * 2 != puVar3);
  }
  return;
}

