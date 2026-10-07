
void FUN_100115640(long *param_1,undefined8 *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  string local_48 [24];
  
  puVar2 = (uint *)*param_1;
  uVar8 = puVar2[1] + 1;
  uVar5 = puVar2[2] & 0x7fffffff;
  if ((*puVar2 < 2) && (uVar8 <= uVar5)) {
    lVar7 = *(long *)(puVar2 + 4);
    lVar6 = (long)(int)puVar2[1] * 0x20;
    *(undefined8 *)((long)puVar2 + lVar6 + lVar7) = *param_2;
    std::string::string((string *)((long)puVar2 + lVar6 + 8 + lVar7),(string *)(param_2 + 1));
    *(undefined8 *)((long)puVar2 + lVar6 + lVar7) = *param_2;
  }
  else {
    std::string::string(local_48,(string *)(param_2 + 1));
    uVar3 = *param_2;
    iVar1 = *(int *)(*param_1 + 4);
    if (uVar5 < uVar8) {
      uVar4 = iVar1 + 1;
    }
    else {
      uVar4 = *(uint *)(*param_1 + 8) & 0x7fffffff;
    }
    FUN_100115b50(param_1,iVar1,uVar4,(ulong)(uVar5 < uVar8) << 3);
    lVar7 = *param_1;
    lVar6 = *(long *)(lVar7 + 0x10) + lVar7;
    lVar7 = (long)*(int *)(lVar7 + 4) * 0x20;
    *(undefined8 *)(lVar7 + lVar6) = uVar3;
    std::string::string((string *)(lVar7 + 8 + lVar6),local_48);
    *(undefined8 *)(lVar6 + lVar7) = uVar3;
    std::string::~string(local_48);
  }
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}

