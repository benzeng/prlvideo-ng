
void FUN_1001084f0(long param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *local_30;
  undefined1 local_21;
  
  QMutex::lock();
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_100108610(&local_30,param_1);
  uVar1 = *local_30;
  puVar3 = local_30;
  if (0 < (int)(local_30[3] - local_30[2])) {
    lVar2 = (long)(int)(local_30[3] - local_30[2]) + 1;
    do {
      if (1 < uVar1) {
        FUN_100108df0(&local_30,puVar3[1]);
        puVar3 = local_30;
      }
      if (*(char *)(*(long *)(*(long *)(**(long **)(puVar3 + ((int)puVar3[2] + lVar2) * 2) + 0x10) +
                             8) + 0x15) == '\0') {
        FUN_100107a70();
        puVar3 = local_30;
      }
      uVar1 = *puVar3;
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
  }
  if (uVar1 != 0xffffffff) {
    if (uVar1 != 0) {
      LOCK();
      *puVar3 = *puVar3 - 1;
      local_21 = *puVar3 != 0;
      UNLOCK();
      puVar3 = local_30;
      if ((bool)local_21) goto LAB_1001085a8;
    }
    FUN_100108d60(&local_30,puVar3);
  }
LAB_1001085a8:
  QMutex::unlock();
  return;
}

