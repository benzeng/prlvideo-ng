
void FUN_1003041d0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  uint local_34;
  
  if (param_2 < 1) {
    return;
  }
  lVar4 = FUN_100303740(param_1);
  lVar10 = 0;
  do {
    uVar1 = *(uint *)(param_3 + lVar10 * 4);
    lVar2 = *(long *)(param_1 + 0x30);
    uVar5 = 0x20;
    uVar8 = uVar1;
    if (*(uint *)(lVar2 + 0x2868) < 0x20) {
      do {
        uVar5 = uVar5 >> 1;
        uVar8 = uVar8 ^ uVar8 >> (sbyte)uVar5;
      } while (*(uint *)(lVar2 + 0x2868) < uVar5);
    }
    puVar6 = *(uint **)(lVar2 + 0x2068 + (ulong)(uVar8 & 0xff) * 8);
    while( true ) {
      if (puVar6 == (uint *)0x0) goto LAB_1003043c0;
      if (*puVar6 == uVar1) break;
      puVar6 = *(uint **)(puVar6 + 2);
    }
    local_34 = puVar6[1];
    if (local_34 == 0) goto LAB_1003043c0;
    if (uVar1 == *(uint *)(param_1 + 0x1484)) {
      *(undefined4 *)(param_1 + 0x1484) = 0;
    }
    else if (uVar1 == *(uint *)(lVar4 + 8)) {
      *(undefined4 *)(lVar4 + 8) = 0;
    }
    else if (uVar1 == *(uint *)(param_1 + 0x1488)) {
      *(undefined4 *)(param_1 + 0x1488) = 0;
    }
    else if (uVar1 == *(uint *)(param_1 + 0x148c)) {
      *(undefined4 *)(param_1 + 0x148c) = 0;
    }
    else if (uVar1 == *(uint *)(param_1 + 0x1490)) {
      *(undefined4 *)(param_1 + 0x1490) = 0;
    }
    else if (uVar1 == *(uint *)(param_1 + 0x1494)) {
      *(undefined4 *)(param_1 + 0x1494) = 0;
    }
    else if (uVar1 == *(uint *)(param_1 + 0x1498)) {
      *(undefined4 *)(param_1 + 0x1498) = 0;
    }
    else if (uVar1 == *(uint *)(param_1 + 0x149c)) {
      *(undefined4 *)(param_1 + 0x149c) = 0;
    }
    if (uVar1 == 0) goto LAB_10030439f;
    uVar5 = 0x20;
    uVar8 = uVar1;
    if (*(uint *)(lVar2 + 0x2868) < 0x20) {
      do {
        uVar5 = uVar5 >> 1;
        uVar8 = uVar8 ^ uVar8 >> (sbyte)uVar5;
      } while (*(uint *)(lVar2 + 0x2868) < uVar5);
    }
    puVar6 = (uint *)(lVar2 + 0x2068 + (ulong)(uVar8 & 0xff) * 8);
    do {
      puVar7 = puVar6;
      puVar3 = *(uint **)puVar7;
      if (puVar3 == (uint *)0x0) goto LAB_10030439f;
      puVar6 = puVar3 + 2;
    } while (uVar1 != *puVar3);
    *(undefined8 *)puVar7 = *(undefined8 *)(puVar3 + 2);
    operator_delete(puVar3);
LAB_10030439f:
    (*(code *)DAT_1011c4a88[0x284])(*DAT_1011c4a88,1,&local_34);
LAB_1003043c0:
    iVar9 = (int)lVar10;
    lVar10 = lVar10 + 1;
    if (iVar9 == param_2 + -1) {
      return;
    }
  } while( true );
}

