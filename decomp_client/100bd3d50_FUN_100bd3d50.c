
undefined8 FUN_100bd3d50(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  iVar3 = FUN_100be6d40();
  lVar6 = 0x4150;
  if (iVar3 != 0xfeff) {
    iVar3 = FUN_100be6d40(param_1);
    lVar6 = (ulong)(iVar3 == 0x100) * 8 + 0x4148;
  }
  lVar7 = *(long *)(param_1 + 0x80);
  if (*(long *)(lVar7 + 0xf0) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x1a8);
    if ((uVar4 & 0x20) != 0) {
      *(undefined4 *)(lVar7 + 0xec) = 1;
      lVar6 = lVar6 + 0x4000;
    }
    uVar4 = uVar4 & 0x20000;
    lVar8 = lVar6;
    if (uVar4 == 0) {
      lVar8 = lVar6 + 0x400;
    }
    lVar7 = *(long *)(param_1 + 0x170);
    lVar9 = lVar6 + 0x400;
    if (uVar4 != 0) {
      lVar9 = lVar6;
    }
    FUN_100bf2780(9,0xc,"s3_both.c",0x2a2);
    piVar2 = *(int **)(lVar7 + 0x230);
    if (((piVar2 == (int *)0x0) || (*piVar2 != (int)lVar9)) ||
       (puVar5 = *(undefined8 **)(piVar2 + 4), puVar5 == (undefined8 *)0x0)) {
      FUN_100bf2780(10,0xc,"s3_both.c",0x2ac);
      puVar5 = (undefined8 *)FUN_100bf3540(lVar9,"s3_both.c",0x2ae);
    }
    else {
      *(undefined8 *)(piVar2 + 4) = *puVar5;
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        piVar2[0] = 0;
        piVar2[1] = 0;
      }
      FUN_100bf2780(10,0xc,"s3_both.c",0x2ac);
    }
    if (puVar5 == (undefined8 *)0x0) {
      FUN_100c62ee0(0x14,0x9c,0x41,"s3_both.c",0x2f0);
      return 0;
    }
    lVar7 = *(long *)(param_1 + 0x80);
    *(undefined8 **)(lVar7 + 0xf0) = puVar5;
    *(long *)(lVar7 + 0xf8) = lVar8;
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar7 + 0xf0);
  return 1;
}

