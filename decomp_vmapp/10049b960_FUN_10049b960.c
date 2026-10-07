
void FUN_10049b960(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  string local_68 [24];
  undefined1 local_50;
  string local_48 [24];
  
  puVar3 = (uint *)*param_1;
  uVar7 = puVar3[1] + 1;
  uVar8 = puVar3[2] & 0x7fffffff;
  if ((*puVar3 < 2) && (uVar7 <= uVar8)) {
    lVar6 = *(long *)(puVar3 + 4);
    lVar5 = (long)(int)puVar3[1] * 0x40;
    *(undefined4 *)((long)puVar3 + lVar5 + lVar6) = *param_2;
    std::string::string((string *)((long)puVar3 + lVar5 + 8 + lVar6),(string *)(param_2 + 2));
    *(undefined1 *)((long)puVar3 + lVar5 + 0x20 + lVar6) = *(undefined1 *)(param_2 + 8);
    std::string::string((string *)((long)puVar3 + lVar5 + 0x28 + lVar6),(string *)(param_2 + 10));
  }
  else {
    uVar1 = *param_2;
    std::string::string(local_68,(string *)(param_2 + 2));
    local_50 = *(undefined1 *)(param_2 + 8);
    std::string::string(local_48,(string *)(param_2 + 10));
    iVar2 = *(int *)(*param_1 + 4);
    if (uVar8 < uVar7) {
      uVar4 = iVar2 + 1;
    }
    else {
      uVar4 = *(uint *)(*param_1 + 8) & 0x7fffffff;
    }
    FUN_10049c090(param_1,iVar2,uVar4,(ulong)(uVar8 < uVar7) << 3);
    lVar6 = *param_1;
    lVar5 = *(long *)(lVar6 + 0x10) + lVar6;
    lVar6 = (long)*(int *)(lVar6 + 4) * 0x40;
    *(undefined4 *)(lVar6 + lVar5) = uVar1;
    std::string::string((string *)(lVar6 + 8 + lVar5),local_68);
    *(undefined1 *)(lVar5 + 0x20 + lVar6) = local_50;
    std::string::string((string *)(lVar5 + 0x28 + lVar6),local_48);
    std::string::~string(local_48);
    std::string::~string(local_68);
  }
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}

