
long * FUN_1004cf2b0(long *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  QMutex::lock();
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  if (*(uint *)(puVar1 + 4) == 0) {
    puVar7 = (undefined8 *)(param_2 + 0x30);
  }
  else {
    uVar6 = *(uint *)((long)puVar1 + 0x24) ^ param_3;
    uVar3 = (ulong)uVar6 % (ulong)*(uint *)(puVar1 + 4);
    puVar4 = *(undefined8 **)(puVar1[1] + uVar3 * 8);
    puVar7 = (undefined8 *)(puVar1[1] + uVar3 * 8);
    while ((puVar5 = puVar4, puVar5 != puVar1 &&
           ((*(uint *)(puVar5 + 1) != uVar6 || (*(uint *)((long)puVar5 + 0xc) != param_3))))) {
      puVar7 = puVar5;
      puVar4 = (undefined8 *)*puVar5;
    }
  }
  if ((undefined8 *)*puVar7 == puVar1) {
    *param_1 = 0;
  }
  else {
    lVar2 = ((undefined8 *)*puVar7)[2];
    *param_1 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
  }
  QMutex::unlock();
  return param_1;
}

