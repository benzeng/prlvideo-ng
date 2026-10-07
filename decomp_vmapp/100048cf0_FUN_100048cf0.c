
undefined4 FUN_100048cf0(long param_1,uint param_2,QByteArray *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  QMutex::lock();
  puVar1 = (undefined8 *)(param_1 + 0x138);
  puVar4 = *(uint **)(param_1 + 0x138);
  if (1 < *puVar4) {
    FUN_10004e550(puVar1);
    puVar4 = (uint *)*puVar1;
  }
  puVar3 = *(uint **)(puVar4 + 4);
  puVar5 = (uint *)0x0;
  if (*(uint **)(puVar4 + 4) != (uint *)0x0) {
    do {
      while (puVar7 = puVar3, uVar6 = puVar7[6], param_2 <= uVar6) {
        puVar3 = *(uint **)(puVar7 + 2);
        puVar5 = puVar7;
        if (*(uint **)(puVar7 + 2) == (uint *)0x0) goto LAB_100048d89;
      }
      puVar3 = *(uint **)(puVar7 + 4);
    } while (*(uint **)(puVar7 + 4) != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
      uVar6 = puVar5[6];
      puVar7 = puVar5;
LAB_100048d89:
      if (uVar6 <= param_2) goto LAB_100048d94;
    }
  }
  puVar7 = puVar4 + 2;
LAB_100048d94:
  if (1 < *puVar4) {
    FUN_10004e550(puVar1);
    puVar4 = (uint *)*puVar1;
  }
  if (puVar7 == puVar4 + 2) {
    QByteArray::clear();
  }
  else {
    QByteArray::operator=(param_3,(QByteArray *)(puVar7 + 8));
  }
  uVar2 = *(undefined4 *)(param_1 + 0x130);
  QMutex::unlock();
  return uVar2;
}

