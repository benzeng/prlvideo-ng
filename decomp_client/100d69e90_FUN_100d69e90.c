
int FUN_100d69e90(long param_1,int param_2,uint *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  
  *param_3 = 0xffffffff;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00003.07:");
    return 0x8158002;
  }
  puVar8 = (uint *)*puVar1;
  if ((1 < *puVar8) || (*(long *)(puVar8 + 4) != 0x18)) {
    QByteArray::reallocData(puVar1,puVar8[1] + 1,puVar8[2] >> 0x1f);
    puVar8 = (uint *)*puVar1;
  }
  lVar2 = *(long *)(puVar8 + 4);
  uVar7 = param_2 + 4;
  if ((uVar7 & 7) != 0) {
    uVar7 = (param_2 + 0xc) - (uVar7 & 7);
  }
  iVar3 = FUN_100d698c0(param_1,uVar7,param_3);
  if (iVar3 != 0x8000000) {
    if (iVar3 != 0x8158005) {
      return iVar3;
    }
    iVar3 = FUN_100d69ae0(param_1,uVar7,param_3);
    if (iVar3 != 0x8000000) {
      FUN_100df99c0("","WinRegistry",0,"OA00003.08:");
      return 0x8158006;
    }
  }
  uVar5 = *(int *)((long)puVar8 + (ulong)*param_3 + lVar2) - uVar7;
  uVar4 = uVar7 + 4;
  if (uVar5 != 4) {
    uVar4 = uVar7;
  }
  uVar7 = 0;
  if (uVar5 != 4) {
    uVar7 = uVar5;
  }
  uVar5 = uVar7;
  if ((uVar7 & 7) != 0) {
    uVar5 = (uVar7 | 0xfffffff8) + uVar7;
    uVar4 = (uVar4 + 8) - (uVar7 * 2 & 6);
  }
  lVar6 = (long)(int)uVar4;
  *(uint *)((long)puVar8 + (ulong)*param_3 + lVar2) = -uVar4;
  ___bzero(lVar2 + 4 + (ulong)*param_3 + (long)puVar8,lVar6 + -4);
  if (uVar5 != 0) {
    *(uint *)((long)puVar8 + (ulong)*param_3 + lVar6 + lVar2) = uVar5;
    *(undefined4 *)((long)puVar8 + lVar2 + 4 + lVar6 + (ulong)*param_3) = 0xffffffff;
    ___bzero((long)puVar8 + (ulong)*param_3 + lVar6 + lVar2 + 8,(long)(int)uVar5 + -8);
  }
  return 0x8000000;
}

