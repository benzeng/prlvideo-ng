
void FUN_10049a8e0(long param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  void *pvVar4;
  bool bVar5;
  int *piVar6;
  
  bVar5 = false;
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (bVar5 = false, *(long *)(*(long *)(param_1 + 0x28) + 0x10) != 0)) {
    QMutex::lock();
    bVar5 = true;
  }
  if (param_2 == 0) {
LAB_10049a9e2:
    if (*(long *)(param_1 + 0x30) == 0) {
      pvVar4 = operator_new(0x20);
      FUN_10049bb60(pvVar4,param_1);
      *(void **)(param_1 + 0x30) = pvVar4;
    }
    else {
      QWaitCondition::wakeOne();
    }
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x18);
    puVar3 = *(uint **)(param_1 + 0x18);
    if (1 < *puVar3) {
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x40,8,0,2);
        *puVar1 = puVar3;
      }
      else {
        FUN_10049c090(puVar1,puVar3[1],puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*puVar1;
      }
    }
    piVar6 = (int *)((long)puVar3 + *(long *)(puVar3 + 4));
    do {
      if (1 < *puVar3) {
        if ((puVar3[2] & 0x7fffffff) == 0) {
          puVar3 = (uint *)QArrayData::allocate(0x40,8,0,2);
          *puVar1 = puVar3;
        }
        else {
          FUN_10049c090(puVar1,puVar3[1],puVar3[2] & 0x7fffffff,0);
          puVar3 = (uint *)*puVar1;
        }
      }
      if (piVar6 == (int *)((long)puVar3 + (long)(int)puVar3[1] * 0x40 + *(long *)(puVar3 + 4)))
      goto LAB_10049a9e2;
      iVar2 = *piVar6;
      piVar6 = piVar6 + 0x10;
    } while (iVar2 != param_2);
  }
  if (bVar5) {
    QMutex::unlock();
    return;
  }
  return;
}

