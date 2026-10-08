
long FUN_100b57f50(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar2 = (uint *)*param_1;
  uVar4 = (ulong)puVar2[1];
  if (0 < (int)puVar2[1]) {
    lVar5 = 0;
    lVar3 = 0;
    do {
      if (1 < *puVar2) {
        if ((puVar2[2] & 0x7fffffff) == 0) {
          puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *param_1 = puVar2;
        }
        else {
          FUN_100b588e0(param_1,uVar4,puVar2[2] & 0x7fffffff,0);
          puVar2 = (uint *)*param_1;
        }
      }
      cVar1 = operator==((QString *)((long)puVar2 + lVar5 + *(long *)(puVar2 + 4)),param_2);
      puVar2 = (uint *)*param_1;
      if (cVar1 != '\0') {
        if (1 < *puVar2) {
          if ((puVar2[2] & 0x7fffffff) == 0) {
            puVar2 = (uint *)QArrayData::allocate(0x10,8,0,2);
            *param_1 = puVar2;
          }
          else {
            FUN_100b588e0(param_1,puVar2[1],puVar2[2] & 0x7fffffff,0);
            puVar2 = (uint *)*param_1;
          }
        }
        return (long)puVar2 + lVar3 * 0x10 + *(long *)(puVar2 + 4);
      }
      lVar3 = lVar3 + 1;
      uVar4 = (ulong)(int)puVar2[1];
      lVar5 = lVar5 + 0x10;
    } while (lVar3 < (long)uVar4);
  }
  return 0;
}

