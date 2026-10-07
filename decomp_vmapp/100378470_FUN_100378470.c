
int FUN_100378470(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_50 [32];
  
  uVar3 = 0x19a;
  if (*(uint *)(DAT_1011c8478 + 4) < 0x19a) {
    uVar3 = 0x14a;
  }
  FUN_10038e8e0(param_4,
                "#version %u\n\n#define F2I floatBitsToInt\n#define I2F intBitsToFloat\n#define F2U floatBitsToUint\n#define U2F uintBitsToFloat\n\n"
                ,uVar3);
  iVar4 = *(int *)((long)param_2 + 0x17c);
  if (iVar4 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar2 != 0) {
      iVar4 = iVar4 * *(int *)(lVar2 + 0x1d0);
    }
    bVar1 = FUN_1003ac750(param_2);
    if ((bVar1 & 8) != 0) {
      FUN_10038e8e0(param_4,"vec4 V[%d];\n",iVar4);
    }
    if ((bVar1 & 4) != 0) {
      FUN_10038e8e0(param_4,"bvec4 bV[%d];\n",iVar4);
    }
    if ((bVar1 & 2) != 0) {
      FUN_10038e8e0(param_4,"ivec4 iV[%d];\n",iVar4);
    }
    if ((bVar1 & 1) != 0) {
      FUN_10038e8e0(param_4,"uvec4 uV[%d];\n",iVar4);
    }
    FUN_10038e8e0(param_4,"\n");
  }
  iVar4 = (int)param_2[0x30];
  if (iVar4 != 0) {
    bVar1 = FUN_1003ac7b0(param_2);
    if ((bVar1 & 8) != 0) {
      FUN_10038e8e0(param_4,"vec4 O[%d];\n",iVar4);
    }
    if ((bVar1 & 2) != 0) {
      FUN_10038e8e0(param_4,"ivec4 iO[%d];\n",iVar4);
    }
    if ((bVar1 & 1) != 0) {
      FUN_10038e8e0(param_4,"uvec4 uO[%d];\n",iVar4);
    }
    FUN_10038e8e0(param_4,"\n");
  }
  FUN_1003791f0();
  iVar4 = FUN_10039c3d0(*(undefined8 *)(param_1 + 0x10),param_2,param_4);
  if (iVar4 != 0) {
    return 2;
  }
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
      if (lVar2 == 0) goto LAB_100378669;
      iVar4 = FUN_10037a7f0(param_1,lVar2,param_3,param_4);
    }
    else {
      iVar4 = FUN_100379f20();
    }
  }
  else {
    iVar4 = FUN_1003797e0(param_1,lVar2,param_3,param_4);
  }
  if (iVar4 != 0) {
    return iVar4;
  }
LAB_100378669:
  FUN_1003bab40(local_50);
  iVar4 = FUN_1003bab80(local_50,param_2,param_4);
  FUN_1003bab70(local_50);
  return (uint)(iVar4 != 0) * 2;
}

