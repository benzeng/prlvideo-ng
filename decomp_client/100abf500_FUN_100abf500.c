
void FUN_100abf500(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  
  puVar7 = *(uint **)(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 8);
  if (1 < *puVar7) {
    FUN_100abfda0(puVar8);
    puVar7 = (uint *)*puVar8;
  }
  if (*(long *)(puVar7 + 4) == 0) {
    puVar6 = puVar7 + 2;
  }
  else {
    puVar6 = *(uint **)(puVar7 + 8);
  }
  while( true ) {
    if (1 < *puVar7) {
      FUN_100abfda0(puVar8);
      puVar7 = (uint *)*puVar8;
    }
    if (puVar6 == puVar7 + 2) break;
    lVar2 = *(long *)(puVar6 + 10);
    lVar1 = lVar2 + 0x60;
    uVar5 = FUN_100ac1fb0(lVar1);
    uVar3 = FUN_100ac1f90(lVar1);
    uVar4 = FUN_100ac1fa0(lVar1);
    FUN_100ac0440(lVar2,uVar5,uVar3,uVar4);
    puVar6 = (uint *)QMapNodeBase::nextNode();
    puVar7 = (uint *)*puVar8;
  }
  return;
}

