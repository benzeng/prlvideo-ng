
void FUN_1000d9700(QObject *param_1,undefined8 param_2)

{
  QObject *pQVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_30;
  
  local_30 = param_2;
  QMutex::lock();
  puVar2 = *(uint **)(param_1 + 0x238);
  uVar3 = puVar2[2];
  if (puVar2[3] != uVar3) {
    pQVar1 = param_1 + 0x238;
    if (1 < *puVar2) {
      FUN_1000abfa0(pQVar1,puVar2[1]);
      puVar2 = *(uint **)pQVar1;
      uVar3 = puVar2[2];
    }
    lVar4 = (long)(int)uVar3;
    if (((*(int **)(puVar2 + lVar4 * 2 + 4))[1] == (int)((ulong)param_2 >> 0x20)) &&
       (**(int **)(puVar2 + lVar4 * 2 + 4) == (int)param_2)) {
      if (1 < *puVar2) {
        FUN_1000abfa0(pQVar1,puVar2[1]);
        puVar2 = *(uint **)pQVar1;
        if (1 < *puVar2) {
          FUN_1000abfa0(pQVar1,puVar2[1]);
          puVar2 = *(uint **)pQVar1;
        }
        lVar4 = (long)(int)puVar2[2];
      }
      if (*(void **)(puVar2 + lVar4 * 2 + 4) != (void *)0x0) {
        operator_delete(*(void **)(puVar2 + lVar4 * 2 + 4));
      }
      QListData::erase((void **)pQVar1);
      QTimer::singleShot(2000,param_1,"1ProcessNextMetroAppOnCoherenceStartHelper()");
    }
    FUN_1000e4d90(pQVar1,&local_30);
  }
  QMutex::unlock();
  return;
}

