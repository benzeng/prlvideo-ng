
undefined8 FUN_100d04880(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar3 = *(uint **)(param_1 + 0x2d0);
  uVar2 = 0xffffffff;
  if (param_2 < (int)puVar3[1]) {
    lVar4 = (long)param_2;
    if (1 < *puVar3) {
      puVar5 = (undefined8 *)(param_1 + 0x2d0);
      if ((puVar3[2] & 0x7fffffff) == 0) {
        puVar3 = (uint *)QArrayData::allocate(0x28,8,0,2);
        *puVar5 = puVar3;
      }
      else {
        FUN_100d063c0(puVar5,puVar3[1],puVar3[2] & 0x7fffffff,0);
        puVar3 = (uint *)*puVar5;
      }
    }
    lVar1 = *(long *)(puVar3 + 4);
    uVar2 = *param_3;
    *(undefined8 *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 8) = param_3[1];
    *(undefined8 *)((long)puVar3 + lVar4 * 0x28 + lVar1) = uVar2;
    QString::operator=((QString *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 0x10),
                       (QString *)(param_3 + 2));
    uVar2 = param_3[3];
    *(undefined8 *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 0x20) = param_3[4];
    *(undefined8 *)((long)puVar3 + lVar4 * 0x28 + lVar1 + 0x18) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}

