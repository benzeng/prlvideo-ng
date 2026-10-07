
undefined8 FUN_100393870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  cVar2 = FUN_1003a20f0(param_4);
  if (cVar2 != '\0') {
    FUN_1003a2430(param_4,"src0",*(undefined8 *)(param_1 + 0x28));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = FUN_1003a2680(param_3);
  uVar4 = FUN_1003a2750(param_3);
  uVar5 = FUN_1003a23f0(param_4);
  uVar6 = FUN_1003a23f0(param_4);
  uVar7 = FUN_1003a23f0(param_4);
  uVar8 = FUN_1003a23f0(param_4);
  uVar9 = FUN_1003a2850(param_3);
  FUN_10038e8e0(uVar1,
                "%s = %svec4(1.0, max(%s.x, 0.0), %s.x > 0.0 ? pow(max(%s.y, 0.0), clamp(%s.w, -128.0, 128.0)) : 0.0, 1.0)%s;\n"
                ,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return 0;
}

