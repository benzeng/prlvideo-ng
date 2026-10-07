
undefined8 FUN_100354420(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  
  if (*(uint *)**(undefined8 **)(param_1 + 0x38) < 0xffff0104) {
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = FUN_1003a2680(param_3);
    uVar5 = FUN_1003a2750(param_3);
    uVar6 = FUN_1003a23f0(param_4 + 0xb8);
    uVar7 = FUN_1003a23f0(param_4 + 0x170);
    FUN_1003a2850(param_3);
    pcVar9 = "%s = %s((r0.w > 0.5) ? %s : %s)%s;\n";
  }
  else {
    cVar3 = FUN_1003a20f0(param_4);
    if (cVar3 != '\0') {
      FUN_1003a2430(param_4,"src0",*(undefined8 *)(param_1 + 0x30));
    }
    lVar1 = param_4 + 0xb8;
    cVar3 = FUN_1003a20f0(lVar1);
    if (cVar3 != '\0') {
      FUN_1003a2430(lVar1,"src1",*(undefined8 *)(param_1 + 0x30));
    }
    lVar2 = param_4 + 0x170;
    cVar3 = FUN_1003a20f0(lVar2);
    if (cVar3 != '\0') {
      FUN_1003a2430(lVar2,"src2",*(undefined8 *)(param_1 + 0x30));
    }
    puVar8 = *(undefined1 **)(param_3 + 0x28);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = *(undefined1 **)(param_3 + 0x38);
    }
    *puVar8 = 0;
    *(undefined4 *)(param_3 + 0x20) = 0;
    FUN_10038e8e0(param_3 + 0x20,"dst");
    *(undefined4 *)(param_3 + 8) = 0;
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = FUN_1003a2680(param_3);
    uVar5 = FUN_1003a23f0(param_4);
    uVar6 = FUN_1003a23f0(lVar1);
    uVar7 = FUN_1003a23f0(lVar2);
    FUN_10038e8e0(uVar10,"%s.x = (%s.r > 0.5) ? %s.x : %s.x;\n",uVar4,uVar5,uVar6,uVar7);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = FUN_1003a2680(param_3);
    uVar5 = FUN_1003a23f0(param_4);
    uVar6 = FUN_1003a23f0(lVar1);
    uVar7 = FUN_1003a23f0(lVar2);
    FUN_10038e8e0(uVar10,"%s.y = (%s.g > 0.5) ? %s.y : %s.y;\n",uVar4,uVar5,uVar6,uVar7);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = FUN_1003a2680(param_3);
    uVar5 = FUN_1003a23f0(param_4);
    uVar6 = FUN_1003a23f0(lVar1);
    uVar7 = FUN_1003a23f0(lVar2);
    FUN_10038e8e0(uVar10,"%s.z = (%s.b > 0.5) ? %s.z : %s.z;\n",uVar4,uVar5,uVar6,uVar7);
    uVar10 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = FUN_1003a2680(param_3);
    uVar5 = FUN_1003a23f0(param_4);
    uVar6 = FUN_1003a23f0(lVar1);
    uVar7 = FUN_1003a23f0(lVar2);
    pcVar9 = "%s.w = (%s.a > 0.5) ? %s.w : %s.w;\n";
  }
  FUN_10038e8e0(uVar10,pcVar9,uVar4,uVar5,uVar6,uVar7);
  return 0;
}

