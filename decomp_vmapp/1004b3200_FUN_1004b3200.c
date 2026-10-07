
void FUN_1004b3200(long param_1,void **param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  
  QMutex::lock();
  puVar3 = *param_2;
  if (puVar3[3] != puVar3[2]) {
    do {
      uVar4 = *puVar3;
      if (1 < uVar4) {
        FUN_1004b3bc0(param_2,puVar3[1]);
        puVar3 = *param_2;
        uVar4 = *puVar3;
      }
      cVar1 = **(char **)(puVar3 + (long)(int)puVar3[2] * 2 + 4);
      uVar2 = *(undefined8 *)(*(char **)(puVar3 + (long)(int)puVar3[2] * 2 + 4) + 8);
      if (uVar4 < 2) {
        puVar3 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
      }
      else {
        FUN_1004b3bc0(param_2,puVar3[1]);
        puVar3 = *param_2;
        if (1 < *puVar3) {
          FUN_1004b3bc0(param_2,puVar3[1]);
          puVar3 = *param_2;
        }
        puVar3 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
      }
      if (*(void **)puVar3 != (void *)0x0) {
        operator_delete(*(void **)puVar3);
      }
      QListData::erase(param_2);
      switch(cVar1) {
      case '\x01':
        FUN_1004b3380(param_1,uVar2);
        break;
      case '\x02':
        FUN_1004aea80(*(undefined8 *)(param_1 + 0x10),uVar2);
        break;
      case '\x03':
      case '\x04':
        FUN_1004b23b0(*(undefined8 *)(param_1 + 0x10),cVar1 == '\x03');
        break;
      case '\x05':
        FUN_1004b2810(*(undefined8 *)(param_1 + 0x10));
      }
      puVar3 = *param_2;
    } while (puVar3[3] != puVar3[2]);
  }
  QMutex::unlock();
  return;
}

