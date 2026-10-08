
undefined8 FUN_100d04110(long param_1,uint param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar2 = 0xffffffff;
  if (param_2 < 4) {
    *(undefined4 *)(param_3 + 3) = 1;
    *(int *)((long)param_3 + 0x1c) = (int)param_2 / 2;
    lVar4 = (long)(int)param_2;
    *(int *)(param_3 + 4) = (int)param_2 % 2;
    puVar3 = *(uint **)(param_1 + 0x118);
    if (1 < *puVar3) {
      puVar5 = (undefined8 *)(param_1 + 0x118);
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x28,8,0,2);
        *puVar5 = puVar3;
      }
      else {
        FUN_100d06780(puVar5,puVar3[1],puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*puVar5;
      }
    }
    lVar1 = *(long *)(puVar3 + 4);
    *(undefined8 *)((long)puVar3 + lVar4 * 0x28 + lVar1) = *param_3;
    QString::operator=((QString *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 8),(QString *)(param_3 + 1)
                      );
    QString::operator=((QString *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 0x10),
                       (QString *)(param_3 + 2));
    *(undefined4 *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 0x20) = *(undefined4 *)(param_3 + 4);
    *(undefined8 *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 0x18) = param_3[3];
    uVar2 = 0;
  }
  return uVar2;
}

