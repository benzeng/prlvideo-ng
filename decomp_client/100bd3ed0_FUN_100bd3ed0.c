
undefined8 FUN_100bd3ed0(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  iVar3 = FUN_100be6d40();
  lVar5 = 0xe;
  if (iVar3 != 0xfeff) {
    iVar3 = FUN_100be6d40(param_1);
    lVar5 = (ulong)(iVar3 == 0x100) * 9 + 5;
  }
  uVar7 = 1;
  if (*(long *)(*(long *)(param_1 + 0x80) + 0x108) == 0) {
    uVar6 = (*(ulong *)(param_1 + 0x1a8) >> 7 & 0x400 ^ 0x403) +
            (ulong)(*(int *)(param_1 + 0x1c8) + 0x50) + lVar5;
    if ((*(ulong *)(param_1 + 0x1a8) & 0x800) == 0) {
      uVar6 = lVar5 + 0x53 + uVar6;
    }
    lVar5 = *(long *)(param_1 + 0x170);
    FUN_100bf2780(9,0xc,"s3_both.c",0x2a2);
    piVar2 = *(int **)(lVar5 + 0x228);
    if (((piVar2 == (int *)0x0) || (*piVar2 != (int)uVar6)) ||
       (puVar4 = *(undefined8 **)(piVar2 + 4), puVar4 == (undefined8 *)0x0)) {
      FUN_100bf2780(10,0xc,"s3_both.c",0x2ac);
      puVar4 = (undefined8 *)FUN_100bf3540(uVar6 & 0xffffffff,"s3_both.c",0x2ae);
    }
    else {
      *(undefined8 *)(piVar2 + 4) = *puVar4;
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        piVar2[0] = 0;
        piVar2[1] = 0;
      }
      FUN_100bf2780(10,0xc,"s3_both.c",0x2ac);
    }
    if (puVar4 == (undefined8 *)0x0) {
      FUN_100c62ee0(0x14,0x123,0x41,"s3_both.c",0x315);
      uVar7 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x80);
      *(undefined8 **)(lVar5 + 0x108) = puVar4;
      *(ulong *)(lVar5 + 0x110) = uVar6;
    }
  }
  return uVar7;
}

