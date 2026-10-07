
undefined8 FUN_100393770(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cVar3 = FUN_1003a20f0(param_4);
  if (cVar3 != '\0') {
    FUN_1003a2430(param_4,"src0",*(undefined8 *)(param_1 + 0x28));
  }
  lVar1 = param_4 + 0xb8;
  cVar3 = FUN_1003a20f0(lVar1);
  if (cVar3 != '\0') {
    FUN_1003a2430(lVar1,"src1",*(undefined8 *)(param_1 + 0x28));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = FUN_1003a2680(param_3);
  uVar5 = FUN_1003a2750(param_3);
  uVar6 = FUN_1003a23f0(param_4);
  uVar7 = FUN_1003a23f0(lVar1);
  uVar8 = FUN_1003a23f0(param_4);
  uVar9 = FUN_1003a23f0(lVar1);
  uVar10 = FUN_1003a2850(param_3);
  FUN_10038e8e0(uVar2,"%s = %svec4(1.0, %s.y*%s.y, %s.z, %s.w)%s;\n",uVar4,uVar5,uVar6,uVar7,uVar8,
                uVar9,uVar10);
  return 0;
}

