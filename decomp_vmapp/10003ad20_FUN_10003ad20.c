
undefined8 FUN_10003ad20(long param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long local_38;
  
  local_38 = param_2;
  QMutex::lock();
  iVar1 = FUN_100036ff0(param_1 + 0x48,&local_38);
  uVar6 = 0xf0000000;
  if (iVar1 == 0) {
    iVar1 = FUN_100036ff0(param_1 + 0x50,&local_38);
    if (iVar1 == 0) {
      puVar2 = *(uint **)(param_1 + 0x40);
      uVar3 = puVar2[2];
      lVar4 = (long)(int)puVar2[3] - (long)(int)uVar3;
      iVar1 = (int)lVar4;
      if (0 < iVar1) {
        puVar7 = (undefined8 *)(param_1 + 0x40);
        lVar5 = 0;
        do {
          if (**(long **)(puVar2 + (long)(int)uVar3 * 2 + lVar5 * 2 + 4) == param_2) {
            if ((-1 < (int)lVar5) && ((int)lVar5 < iVar1)) {
              if (1 < *puVar2) {
                FUN_10003b450(puVar7,puVar2[1]);
                puVar2 = (uint *)*puVar7;
                uVar3 = puVar2[2];
              }
              if (*(void **)(puVar2 + ((int)uVar3 + lVar5) * 2 + 4) != (void *)0x0) {
                operator_delete(*(void **)(puVar2 + ((int)uVar3 + lVar5) * 2 + 4));
              }
              QListData::remove((int)puVar7);
            }
            goto LAB_10003ada7;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < lVar4);
      }
      uVar6 = 0xffffffff;
    }
  }
LAB_10003ada7:
  QMutex::unlock();
  return uVar6;
}

