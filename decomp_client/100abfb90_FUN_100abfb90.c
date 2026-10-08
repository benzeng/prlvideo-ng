
void FUN_100abfb90(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  bool bVar5;
  
  puVar4 = (uint *)*param_1;
  if (1 < *puVar4) {
    FUN_100abfda0(param_1);
    puVar4 = (uint *)*param_1;
  }
  if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
    puVar4 = puVar4 + 2;
  }
  else {
    puVar2 = *(uint **)(puVar4 + 4);
    puVar3 = (uint *)0x0;
    do {
      while( true ) {
        puVar4 = puVar2;
        bVar5 = *(ulong *)(puVar4 + 6) < *param_2;
        if (*(ulong *)(puVar4 + 6) == *param_2) {
          bVar5 = puVar4[8] < (uint)param_2[1];
        }
        if (!bVar5) break;
        puVar2 = *(uint **)(puVar4 + 4);
        if (*(uint **)(puVar4 + 4) == (uint *)0x0) {
          if (puVar3 == (uint *)0x0) goto LAB_100abfc23;
          goto LAB_100abfc07;
        }
      }
      puVar3 = puVar4;
      puVar2 = *(uint **)(puVar4 + 2);
    } while (*(uint **)(puVar4 + 2) != (uint *)0x0);
LAB_100abfc07:
    bVar5 = *param_2 < *(ulong *)(puVar3 + 6);
    if (*param_2 == *(ulong *)(puVar3 + 6)) {
      bVar5 = (uint)param_2[1] < puVar3[8];
    }
    if (!bVar5) goto LAB_100abfc4a;
  }
LAB_100abfc23:
  puVar3 = (uint *)QMapDataBase::createNode((int)*param_1,0x30,(QMapNodeBase *)0x8,SUB81(puVar4,0));
  uVar1 = *param_2;
  *(ulong *)(puVar3 + 8) = param_2[1];
  *(ulong *)(puVar3 + 6) = uVar1;
LAB_100abfc4a:
  *(undefined8 *)(puVar3 + 10) = *param_3;
  return;
}

