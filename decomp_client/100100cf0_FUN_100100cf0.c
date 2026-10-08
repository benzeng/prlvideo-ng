
void FUN_100100cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 local_40 [8];
  uint *local_38;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  puVar4 = *(uint **)(param_1 + 0x20);
  if (*puVar4 < 2) {
    puVar5 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
  }
  else {
    FUN_100101f40(puVar1,puVar4[1]);
    puVar4 = (uint *)*puVar1;
    puVar5 = puVar4 + (long)(int)puVar4[2] * 2 + 4;
    if (1 < *puVar4) {
      FUN_100101f40(puVar1,puVar4[1]);
      puVar4 = (uint *)*puVar1;
    }
  }
  uVar2 = puVar4[3];
  if (puVar5 != puVar4 + (long)(int)uVar2 * 2 + 4) {
    puVar6 = puVar5 + -4;
    do {
      iVar3 = QString::compare(*(long *)puVar5 + 8,param_2,0);
      if (iVar3 == 0) {
        FUN_100100120(param_1,*(undefined8 *)puVar5,param_3,param_4);
        local_38 = puVar5;
        FUN_100101370(local_40,puVar1,&local_38);
        return;
      }
      puVar5 = puVar6 + 6;
      puVar6 = puVar6 + 2;
    } while (puVar4 + (long)(int)uVar2 * 2 != puVar6);
  }
  return;
}

