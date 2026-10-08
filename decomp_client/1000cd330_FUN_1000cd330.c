
void FUN_1000cd330(long param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  long lVar1;
  char cVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x106) == '\0') {
    return;
  }
  QMutex::lock();
  puVar3 = *(uint **)(param_1 + 0x58);
  if ((int)puVar3[2] < (int)puVar3[3]) {
    puVar4 = (undefined8 *)(param_1 + 0x58);
    lVar5 = 0;
    do {
      if (1 < *puVar3) {
        FUN_1000e6e10(puVar4,puVar3[1]);
        puVar3 = (uint *)*puVar4;
      }
      lVar1 = *(long *)(puVar3 + ((int)puVar3[2] + lVar5) * 2 + 4);
      cVar2 = FUN_1000b95b0(lVar1,param_2);
      if (cVar2 != '\0') {
        if (param_4 == '\0') {
          param_3 = 0;
        }
        *(undefined8 *)(lVar1 + 0x68) = param_3;
        FUN_1000c4970(lVar1 + 0x30,param_4 == '\0' | 0x8a,0,0);
        break;
      }
      lVar5 = lVar5 + 1;
      puVar3 = (uint *)*puVar4;
    } while (lVar5 < (long)(int)puVar3[3] - (long)(int)puVar3[2]);
  }
  QMutex::unlock();
  return;
}

