
int FUN_100353d70(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_4d8 [184];
  undefined1 local_420 [184];
  undefined1 local_368 [184];
  undefined1 local_2b0 [184];
  uint local_1f8 [8];
  int local_1d8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = param_1 + 0x78;
  FUN_1003a25c0(local_1f8,lVar1);
  FUN_1003a2020(local_4d8,lVar1);
  FUN_1003a2020(local_420,lVar1);
  FUN_1003a2020(local_368,lVar1);
  FUN_1003a2020(local_2b0,lVar1);
  iVar3 = FUN_1003a2ef0(param_1,param_2,param_3,param_4,local_1f8);
  if (iVar3 != 0) goto LAB_100354171;
  uVar4 = param_2 & 0xffff;
  if (uVar4 < 0x40) {
    if (uVar4 == 0xe) {
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = FUN_1003a2680(local_1f8);
      uVar6 = FUN_1003a2750(local_1f8);
      uVar7 = FUN_1003a23f0(local_4d8);
      uVar8 = FUN_1003a2850(local_1f8);
      FUN_10038e8e0(uVar2,"%s = %svec4(exp2(%s.w))%s;\n",uVar5,uVar6,uVar7,uVar8);
    }
    else {
      if (uVar4 != 0x1c) goto switchD_100353ec7_caseD_47;
      if (*(char *)(param_1 + 0x6c) != '\0') {
        *(undefined1 *)(param_1 + 0x6c) = 0;
        FUN_100353770();
      }
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x30),"}\n");
    }
  }
  else {
    switch(uVar4) {
    case 0x40:
      FUN_100354e80(param_1,param_1,local_1f8,local_4d8);
      break;
    case 0x41:
      FUN_100355110(param_1,param_1,local_1f8);
      break;
    case 0x42:
      if (*(uint *)**(undefined8 **)(param_1 + 0x38) < 0xffff0104) {
        FUN_1003546d0(param_1,param_1,local_1f8);
      }
      else if (*(uint *)**(undefined8 **)(param_1 + 0x38) == 0xffff0104) {
        FUN_100354810(param_1,param_1,local_1f8,local_4d8);
      }
      else {
        FUN_1003548d0(param_1,param_2,local_1f8,local_4d8);
      }
      break;
    case 0x43:
      FUN_100354cd0(param_1,param_2,local_1f8,local_4d8);
      break;
    case 0x44:
      FUN_100354cd0(param_1,param_2,local_1f8,local_4d8);
      break;
    case 0x45:
    case 0x46:
    case 0x52:
      FUN_1003551e0(param_1,param_2,local_1f8,local_4d8);
      break;
    default:
switchD_100353ec7_caseD_47:
      iVar3 = FUN_1003a3030(param_1,param_2,local_1f8,local_4d8);
      if (iVar3 != 0) goto LAB_100354171;
      break;
    case 0x50:
      FUN_100354420(param_1,param_1,local_1f8,local_4d8);
      break;
    case 0x53:
      FUN_100354fd0(param_1,param_1,local_1f8,local_4d8);
      break;
    case 0x55:
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = FUN_1003a2680(local_1f8);
      uVar6 = FUN_1003a2750(local_1f8);
      uVar7 = FUN_1003a23f0(local_4d8);
      uVar8 = FUN_1003a2850(local_1f8);
      FUN_10038e8e0(uVar2,"%s = %svec4(dot(texcoord[%d].xyz, %s.xyz))%s;\n",uVar5,uVar6,
                    local_1f8[0] & 0x7ff,uVar7,uVar8);
      break;
    case 0x57:
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = FUN_1003a2680(local_1f8);
      uVar6 = FUN_1003a2680(local_1f8);
      uVar7 = FUN_1003a2680(local_1f8);
      FUN_10038e8e0(uVar2,"gl_FragDepth = (%s.y == 0.0) ? 1.0 : clamp(%s.x/%s.y, 0.0, 1.0);\n",uVar5
                    ,uVar6,uVar7);
      break;
    case 0x59:
      FUN_100354340(param_1,param_1,local_1f8,local_4d8);
      break;
    case 0x5d:
    case 0x5f:
      FUN_1003548d0(param_1,param_2,local_1f8,local_4d8);
    }
  }
  iVar3 = 0;
  if (local_1d8 != 0) {
    FUN_1003a29e0(local_1f8,*(undefined8 *)(param_1 + 0x30));
  }
LAB_100354171:
  FUN_1003a20d0(local_2b0);
  FUN_1003a20d0(local_368);
  FUN_1003a20d0(local_420);
  FUN_1003a20d0(local_4d8);
  FUN_1003a2670(local_1f8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

