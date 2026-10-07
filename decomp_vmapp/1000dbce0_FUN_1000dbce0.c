
void FUN_1000dbce0(undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_8;
  *(undefined8 *)(param_1 + 4) = param_7;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_6;
  if (DAT_1011c3758 == (undefined4 *)0x0) {
    puVar4 = operator_new(0x34);
    lVar7 = *(long *)(DAT_1011c3698 + 0x1938);
    *puVar4 = 7;
    plVar5 = (long *)FUN_1000dcd50(7);
    lVar1 = *plVar5;
    puVar4[0xc] = 0x400;
    uVar8 = lVar1 + 0x43fU & 0xffffffffffffffc0;
    *(long *)(puVar4 + 8) = lVar1;
    *(ulong *)(puVar4 + 6) = uVar8;
    *(ulong *)(puVar4 + 2) = uVar8 + 0x2c0;
    *(ulong *)(puVar4 + 4) = uVar8 + 0x200;
    *(long *)(puVar4 + 10) = lVar7 + 0xa0d8;
    DAT_1011c3758 = puVar4;
  }
  puVar4 = DAT_1011c3758;
  if (param_1[4] == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puVar6 = (ulong *)FUN_1000dcd50(*DAT_1011c3758);
    uVar8 = *puVar6;
    lVar7 = FUN_1000dcd50(*puVar4);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar8 <= uVar3) && (uVar3 <= uVar8 + *(long *)(lVar7 + 8))) {
      *(undefined8 *)(*(long *)(puVar4 + 10) + (uVar3 - uVar8 & 0x7fffffff8)) = uVar2;
    }
  }
  param_1[3] = 0;
  return;
}

