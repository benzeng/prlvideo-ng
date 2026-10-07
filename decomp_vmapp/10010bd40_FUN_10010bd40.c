
void FUN_10010bd40(long param_1,QString *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  iVar2 = *(int *)(*(long *)(param_1 + 0x18) + 8);
  iVar3 = *(int *)(*(long *)(param_1 + 0x18) + 0xc);
  uVar7 = (ulong)(iVar3 - iVar2);
  lVar9 = (long)((iVar3 + -1) - iVar2);
  do {
    if ((long)uVar7 < 1) goto LAB_10010bdf9;
    puVar5 = (uint *)*puVar1;
    if (1 < *puVar5) {
      FUN_10010d310(puVar1,puVar5[1]);
      puVar5 = (uint *)*puVar1;
    }
    lVar8 = 0;
    if (**(long **)(puVar5 + ((int)puVar5[2] + lVar9) * 2 + 4) != 0) {
      lVar8 = *(long *)(**(long **)(puVar5 + ((int)puVar5[2] + lVar9) * 2 + 4) + 0x10);
    }
    cVar4 = operator==((QString *)(lVar8 + 8),param_2);
    uVar7 = uVar7 - 1;
    lVar9 = lVar9 + -1;
  } while (cVar4 == '\0');
  uVar6 = FUN_100097990(DAT_1011c3698);
  FUN_100108390(uVar6,lVar8 + 0x10);
  FUN_10010cbb0(puVar1,uVar7 & 0xffffffff);
LAB_10010bdf9:
  FUN_10010cc60(param_1 + 0x10,param_2);
  return;
}

