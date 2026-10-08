
undefined8 FUN_100100c40(long param_1,undefined8 param_2,QString *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  
  puVar3 = *(uint **)(param_1 + 0x20);
  if (*puVar3 < 2) {
    puVar4 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
  }
  else {
    puVar5 = (undefined8 *)(param_1 + 0x20);
    FUN_100101f40(puVar5,puVar3[1]);
    puVar3 = (uint *)*puVar5;
    puVar4 = puVar3 + (long)(int)puVar3[2] * 2 + 4;
    if (1 < *puVar3) {
      FUN_100101f40(puVar5,puVar3[1]);
      puVar3 = (uint *)*puVar5;
    }
  }
  uVar1 = puVar3[3];
  while( true ) {
    if (puVar4 == puVar3 + (long)(int)uVar1 * 2 + 4) {
      return 0;
    }
    iVar2 = QString::compare(*(undefined8 *)puVar4,param_2,0);
    if (iVar2 == 0) break;
    puVar4 = puVar4 + 2;
  }
  QString::operator=((QString *)(*(long *)puVar4 + 8),param_3);
  return 1;
}

