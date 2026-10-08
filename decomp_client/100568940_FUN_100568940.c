
ulong FUN_100568940(long param_1,QKeySequence *param_2,int param_3)

{
  char cVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar2 = *(uint **)(param_1 + 0x10);
  if (param_3 < (int)(puVar2[3] - puVar2[2])) {
    puVar4 = (undefined8 *)(param_1 + 0x10);
    uVar3 = (ulong)param_3;
    do {
      if (1 < *puVar2) {
        FUN_10056ea70(puVar4,puVar2[1]);
        puVar2 = (uint *)*puVar4;
      }
      cVar1 = QKeySequence::operator==
                        (param_2,(QKeySequence *)
                                 (*(long *)(puVar2 + ((long)(int)puVar2[2] + uVar3) * 2 + 4) + 8));
      if (cVar1 != '\0') {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      puVar2 = (uint *)*puVar4;
    } while ((long)uVar3 < (long)(int)puVar2[3] - (long)(int)puVar2[2]);
  }
  return 0xffffffff;
}

