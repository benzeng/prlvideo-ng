
undefined8 FUN_100393a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  if (*(uint *)**(undefined8 **)(param_1 + 0x30) < 0xfffe0200) {
    cVar1 = FUN_1003a20f0(param_4);
    if (cVar1 != '\0') {
      FUN_1003a2430(param_4,"src0",*(undefined8 *)(param_1 + 0x28));
    }
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_1003a2680(param_3);
    uVar3 = FUN_1003a2750(param_3);
    uVar4 = FUN_1003a23f0(param_4);
    uVar5 = FUN_1003a23f0(param_4);
    FUN_1003a23f0(param_4);
    FUN_1003a23f0(param_4);
    FUN_1003a2850(param_3);
    pcVar6 = "%s = %svec4(exp2(floor(%s.w)), %s.w-floor(%s.w), exp2(%s.w), 1.0)%s;\n";
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = FUN_1003a2680(param_3);
    uVar3 = FUN_1003a2750(param_3);
    uVar4 = FUN_1003a23f0(param_4);
    uVar5 = FUN_1003a2850(param_3);
    pcVar6 = "%s = %svec4(exp2(%s.w))%s;\n";
  }
  FUN_10038e8e0(uVar7,pcVar6,uVar2,uVar3,uVar4,uVar5);
  return 0;
}

