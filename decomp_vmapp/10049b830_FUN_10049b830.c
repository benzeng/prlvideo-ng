
void FUN_10049b830(long *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  string local_48 [24];
  
  puVar4 = (uint *)*param_1;
  uVar10 = puVar4[1] + 1;
  uVar9 = puVar4[2] & 0x7fffffff;
  if ((*puVar4 < 2) && (uVar10 <= uVar9)) {
    lVar7 = *(long *)(puVar4 + 4);
    lVar6 = (long)(int)puVar4[1];
    *(undefined1 *)((long)puVar4 + lVar6 * 0x28 + lVar7 + 0xc) =
         *(undefined1 *)((long)param_2 + 0xc);
    *(undefined4 *)((long)puVar4 + lVar6 * 0x28 + lVar7 + 8) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)((long)puVar4 + lVar6 * 0x28 + lVar7) = *param_2;
    std::string::string((string *)((long)puVar4 + lVar6 * 0x28 + lVar7 + 0x10),
                        (string *)(param_2 + 2));
  }
  else {
    uVar1 = *(undefined1 *)((long)param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar5 = *param_2;
    std::string::string(local_48,(string *)(param_2 + 2));
    iVar3 = *(int *)(*param_1 + 4);
    if (uVar9 < uVar10) {
      uVar8 = iVar3 + 1;
    }
    else {
      uVar8 = *(uint *)(*param_1 + 8) & 0x7fffffff;
    }
    FUN_10049bdd0(param_1,iVar3,uVar8,(ulong)(uVar9 < uVar10) << 3);
    lVar7 = *param_1;
    lVar6 = *(long *)(lVar7 + 0x10) + lVar7;
    lVar7 = (long)*(int *)(lVar7 + 4);
    *(undefined1 *)(lVar6 + 0xc + lVar7 * 0x28) = uVar1;
    *(undefined4 *)(lVar6 + 8 + lVar7 * 0x28) = uVar2;
    *(undefined8 *)(lVar6 + lVar7 * 0x28) = uVar5;
    std::string::string((string *)(lVar6 + 0x10 + lVar7 * 0x28),local_48);
    std::string::~string(local_48);
  }
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}

