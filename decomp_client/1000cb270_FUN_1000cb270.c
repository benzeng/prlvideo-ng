
void FUN_1000cb270(long param_1,undefined8 param_2)

{
  char cVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  QMutex::lock();
  puVar2 = *(uint **)(param_1 + 0x58);
  lVar4 = 0;
  if ((int)puVar2[2] < (int)puVar2[3]) {
    puVar3 = (undefined8 *)(param_1 + 0x58);
    do {
      if (1 < *puVar2) {
        FUN_1000e6e10(puVar3,puVar2[1]);
        puVar2 = (uint *)*puVar3;
      }
      cVar1 = FUN_1000b95b0(*(undefined8 *)(puVar2 + ((int)puVar2[2] + lVar4) * 2 + 4),param_2);
      if (cVar1 != '\0') {
        FUN_1000cb0b0();
        break;
      }
      lVar4 = lVar4 + 1;
      puVar2 = (uint *)*puVar3;
    } while (lVar4 < (long)(int)puVar2[3] - (long)(int)puVar2[2]);
  }
  QMutex::unlock();
  return;
}

