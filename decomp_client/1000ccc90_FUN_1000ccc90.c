
long FUN_1000ccc90(long param_1,QString *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar4 = *(uint **)(param_1 + 0x58);
  uVar1 = puVar4[3];
  uVar2 = puVar4[2];
  lVar5 = 0;
  if (0 < (int)((long)(int)uVar1 - (long)(int)uVar2)) {
    puVar7 = (undefined8 *)(param_1 + 0x58);
    lVar6 = 0;
    while( true ) {
      if (1 < *puVar4) {
        FUN_1000e6e10(puVar7,puVar4[1]);
        puVar4 = (uint *)*puVar7;
      }
      lVar5 = *(long *)(puVar4 + ((int)puVar4[2] + lVar6) * 2 + 4);
      cVar3 = operator==((QString *)(lVar5 + 8),param_2);
      if (cVar3 != '\0') break;
      lVar6 = lVar6 + 1;
      if ((long)(int)uVar1 - (long)(int)uVar2 <= lVar6) {
        return 0;
      }
      puVar4 = (uint *)*puVar7;
    }
  }
  return lVar5;
}

