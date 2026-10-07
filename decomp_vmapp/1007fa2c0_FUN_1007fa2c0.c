
undefined8 FUN_1007fa2c0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    puVar8 = *(undefined8 **)(param_1 + 0xd0);
    lVar7 = *(long *)(param_1 + 0x80) + 0x120;
    lVar5 = 0;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      goto LAB_1007fa322;
    }
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0xe8);
    lVar7 = *(long *)(param_1 + 0x80) + 0x158;
    lVar5 = 0;
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      goto LAB_1007fa322;
    }
  }
  lVar5 = FUN_100894620(puVar8);
LAB_1007fa322:
  if (((lVar5 == 0) || (puVar8 == (undefined8 *)0x0)) || (*(long *)(param_1 + 0x130) == 0)) {
    _memmove(*(void **)(lVar7 + 0x10),*(void **)(lVar7 + 0x18),(ulong)*(uint *)(lVar7 + 4));
    *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar7 + 0x10);
    uVar6 = 1;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 4);
    uVar9 = (ulong)uVar1;
    iVar2 = FUN_1008945f0(*puVar8);
    if ((param_2 != 0) && (iVar2 != 1)) {
      lVar5 = (long)(int)uVar1 % (long)iVar2;
      iVar3 = iVar2 - (int)lVar5;
      uVar9 = uVar9 + (long)iVar3;
      ___bzero((ulong)*(uint *)(lVar7 + 4) + *(long *)(lVar7 + 0x18),(long)iVar3);
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + iVar3;
      *(char *)(*(long *)(lVar7 + 0x18) + -1 + uVar9) = ((char)iVar2 + -1) - (char)lVar5;
    }
    if ((param_2 != 0) || ((uVar6 = 0, uVar9 != 0 && (uVar6 = 0, uVar9 % (ulong)(long)iVar2 == 0))))
    {
      iVar3 = FUN_100894610(puVar8,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18),
                            uVar9 & 0xffffffff);
      uVar6 = 0xffffffff;
      if (0 < iVar3) {
        lVar5 = FUN_100894720(*(undefined8 *)(param_1 + 0xd8));
        uVar4 = 0;
        if (lVar5 != 0) {
          uVar6 = FUN_100894720(*(undefined8 *)(param_1 + 0xd8));
          uVar4 = FUN_1008946d0(uVar6);
        }
        uVar6 = 1;
        if ((param_2 == 0) && (iVar2 != 1)) {
          uVar6 = FUN_1007feaa0(param_1,lVar7,iVar2,uVar4);
          return uVar6;
        }
      }
    }
  }
  return uVar6;
}

