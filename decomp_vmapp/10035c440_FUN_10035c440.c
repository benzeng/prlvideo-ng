
void FUN_10035c440(undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  undefined1 local_34 [4];
  
  iVar1 = **(int **)(param_2 + 0x28);
  iVar8 = *(int *)(param_1 + 9);
  if (*(uint **)param_1[7] != (uint *)0x0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    puVar9 = *(uint **)param_1[7];
    do {
      while( true ) {
        puVar5 = (uint *)**(undefined8 **)(puVar9 + 0x10);
        lVar6 = *(long *)(puVar9 + 0xc);
        uVar3 = *puVar9;
        cVar7 = FUN_10035c570(param_1,puVar9,local_34,0);
        if ((cVar7 != '\0') && (uVar3 != 5)) break;
LAB_10035c4bc:
        puVar9 = puVar5;
        if (puVar5 == (uint *)0x0) goto LAB_10035c53f;
      }
      if (uVar3 < 2) {
        iVar4 = *(int *)(lVar6 + 0xc);
        if (0 < iVar4 - iVar8) {
          iVar8 = iVar4;
        }
      }
      else {
        uVar3 = *(uint *)(lVar6 + 8);
        if ((ulong)uVar2 - 4 < (ulong)uVar3) goto LAB_10035c4bc;
        FUN_1002fcd60(*param_1,local_34,uVar3 + iVar1,4);
      }
      lVar6 = *(long *)(puVar9 + 0x12);
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(puVar9 + 0x10);
      *(long *)(*(long *)(puVar9 + 0x10) + 0x10) = lVar6;
      *(uint **)(puVar9 + 0x10) = puVar9 + 0xe;
      *(uint **)(puVar9 + 0x12) = puVar9 + 0xe;
      puVar9 = puVar5;
    } while (puVar5 != (uint *)0x0);
  }
LAB_10035c53f:
  if (iVar8 != *(int *)(param_1 + 9)) {
    *(int *)(param_1 + 9) = iVar8;
    FUN_1002fcd60(*param_1,param_1 + 9,iVar1,4);
  }
  return;
}

