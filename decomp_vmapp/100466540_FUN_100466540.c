
undefined8 FUN_100466540(long param_1,uint param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  QMutex::lock();
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(uint *)(puVar1 + 4) == 0) {
    puVar6 = (undefined8 *)(param_1 + 8);
  }
  else {
    uVar5 = *(uint *)((long)puVar1 + 0x24) ^ param_2;
    uVar2 = (ulong)uVar5 % (ulong)*(uint *)(puVar1 + 4);
    puVar3 = *(undefined8 **)(puVar1[1] + uVar2 * 8);
    puVar6 = (undefined8 *)(puVar1[1] + uVar2 * 8);
    while ((puVar4 = puVar3, puVar4 != puVar1 &&
           ((*(uint *)(puVar4 + 1) != uVar5 || (*(uint *)((long)puVar4 + 0xc) != param_2))))) {
      puVar6 = puVar4;
      puVar3 = (undefined8 *)*puVar4;
    }
  }
  uVar7 = 0;
  if (puVar1 != (undefined8 *)*puVar6) {
    uVar7 = ((undefined8 *)*puVar6)[2];
  }
  QMutex::unlock();
  return uVar7;
}

