
undefined1 FUN_10008bdd0(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ushort *puVar7;
  
  uVar2 = FUN_1000e99d0(*(undefined8 *)(param_2 + 0x1158),0x25c,0);
  *(undefined8 *)(param_1 + 200) = uVar2;
  uVar2 = FUN_1000e99d0(*(undefined8 *)(param_2 + 0x1158),0x25d,0);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  FUN_1007d7430(uVar2,0x400);
  puVar3 = (ushort *)FUN_1000e99d0(*(undefined8 *)(param_2 + 0x1158),0x261,0);
  uVar1 = *puVar3;
  uVar4 = (ulong)uVar1;
  if ((ushort)(uVar1 - 1) < 0xff) {
    puVar7 = puVar3 + 8;
    uVar6 = 0;
    do {
      if (((puVar7[-2] == 0xe) && (puVar7[-1] == 0)) && (*puVar7 == 0xffff)) goto LAB_10008bee0;
      uVar6 = uVar6 + 1;
      puVar7 = puVar7 + 0xc;
    } while (uVar6 < uVar4);
  }
  if (uVar1 < 0x100) {
    puVar3[uVar4 * 0xc + 9] = uVar1;
    *puVar3 = uVar1 + 1;
    puVar3[uVar4 * 0xc + 6] = 0xe;
    puVar3[uVar4 * 0xc + 7] = 0;
    puVar3[uVar4 * 0xc + 8] = 0xffff;
    (puVar3 + uVar4 * 0xc + 10)[0] = 0xffff;
    (puVar3 + uVar4 * 0xc + 10)[1] = 0xffff;
    uVar6 = uVar4;
LAB_10008bee0:
    *(ushort **)(param_1 + 0xb0) = puVar3 + uVar6 * 0xc + 4;
    (puVar3 + uVar6 * 0xc + 10)[0] = 1;
    (puVar3 + uVar6 * 0xc + 10)[1] = 0;
    uVar5 = 1;
  }
  else {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"[GuestMem] unable to create monitor event");
  }
  return uVar5;
}

