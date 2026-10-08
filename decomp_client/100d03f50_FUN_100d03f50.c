
undefined8 FUN_100d03f50(long param_1,int param_2,undefined8 *param_3)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar1 = *(uint **)(param_1 + 0x118);
  puVar5 = (undefined8 *)(param_1 + 0x118);
  lVar4 = 0;
  lVar2 = 0;
  iVar3 = 0;
  while( true ) {
    if (1 < *puVar1) {
      if ((puVar1[2] & 0x7fffffff) == 0) {
        puVar1 = (uint *)QArrayData::allocate(0x28,8,0,2);
        *puVar5 = puVar1;
      }
      else {
        FUN_100d06780(puVar5,puVar1[1],puVar1[2] & 0x7fffffff,0);
        puVar1 = (uint *)*puVar5;
      }
    }
    if (*(char *)((long)puVar1 + lVar4 + *(long *)(puVar1 + 4)) != '\0') {
      if (1 < *puVar1) {
        if ((puVar1[2] & 0x7fffffff) == 0) {
          puVar1 = (uint *)QArrayData::allocate(0x28,8,0);
          *puVar5 = puVar1;
        }
        else {
          FUN_100d06780(puVar5,puVar1[1],puVar1[2] & 0x7fffffff,0);
          puVar1 = (uint *)*puVar5;
        }
      }
      iVar3 = iVar3 + (uint)*(byte *)((long)puVar1 + lVar4 + 1 + *(long *)(puVar1 + 4));
    }
    if (iVar3 == param_2 + 1) break;
    lVar2 = lVar2 + 1;
    lVar4 = lVar4 + 0x28;
    if (3 < lVar2) {
      return 0xffffffff;
    }
  }
  if (1 < *puVar1) {
    if ((puVar1[2] & 0x7fffffff) == 0) {
      puVar1 = (uint *)QArrayData::allocate(0x28,8,0,2);
      *puVar5 = puVar1;
    }
    else {
      FUN_100d06780(puVar5,puVar1[1],puVar1[2] & 0x7fffffff,0);
      puVar1 = (uint *)*puVar5;
    }
  }
  lVar4 = *(long *)(puVar1 + 4);
  *(undefined8 *)((long)puVar1 + lVar2 * 0x28 + lVar4) = *param_3;
  QString::operator=((QString *)((long)puVar1 + lVar2 * 0x28 + lVar4 + 8),(QString *)(param_3 + 1));
  QString::operator=((QString *)((long)puVar1 + lVar2 * 0x28 + lVar4 + 0x10),
                     (QString *)(param_3 + 2));
  *(undefined4 *)((long)puVar1 + lVar2 * 0x28 + lVar4 + 0x20) = *(undefined4 *)(param_3 + 4);
  *(undefined8 *)((long)puVar1 + lVar2 * 0x28 + lVar4 + 0x18) = param_3[3];
  return 0;
}

