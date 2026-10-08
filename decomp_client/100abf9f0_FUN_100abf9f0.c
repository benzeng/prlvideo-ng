
void FUN_100abf9f0(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar7 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar7 + 0x10) != 0) && (lVar10 = *(long *)(lVar7 + 0x20), lVar10 != lVar7 + 8)) {
    do {
      lVar7 = *(long *)(lVar10 + 0x28);
      local_60 = 0;
      uStack_5c = 0;
      local_58 = 0xffffffff;
      uStack_54 = 0xffffffff;
      cVar6 = FUN_100ac03f0(lVar7,&local_60);
      if (cVar6 != '\0') {
        uVar1 = *(undefined4 *)(lVar7 + 0x30);
        uVar3 = *(undefined8 *)(lVar7 + 0x28);
        puVar4 = (uint *)*param_2;
        uVar2 = puVar4[1];
        uVar8 = uVar2 + 1;
        uVar9 = puVar4[2] & 0x7fffffff;
        if ((*puVar4 < 2) && (uVar8 <= uVar9)) {
          lVar7 = *(long *)(puVar4 + 4);
          lVar10 = (long)(int)uVar2 * 0x20;
          *(ulong *)((long)puVar4 + lVar10 + 0x18 + lVar7) = CONCAT44(uStack_54,local_58);
          *(ulong *)((long)puVar4 + lVar10 + 0x10 + lVar7) = CONCAT44(uStack_5c,local_60);
          *(ulong *)((long)puVar4 + lVar10 + 8 + lVar7) = CONCAT44(uStack_64,uVar1);
          *(undefined8 *)((long)puVar4 + lVar10 + lVar7) = uVar3;
        }
        else {
          local_48 = CONCAT44(uStack_64,uVar1);
          local_40 = CONCAT44(uStack_5c,local_60);
          local_38 = CONCAT44(uStack_54,local_58);
          uVar5 = uVar9;
          if (uVar9 < uVar8) {
            uVar5 = uVar8;
          }
          local_50 = uVar3;
          FUN_100abff00(param_2,(long)(int)uVar2,uVar5,(ulong)(uVar9 < uVar8) << 3);
          lVar7 = *param_2;
          lVar10 = *(long *)(lVar7 + 0x10) + lVar7;
          lVar7 = (long)*(int *)(lVar7 + 4) * 0x20;
          *(undefined8 *)(lVar7 + 0x18 + lVar10) = local_38;
          *(undefined8 *)(lVar7 + 0x10 + lVar10) = local_40;
          *(undefined8 *)(lVar7 + 8 + lVar10) = local_48;
          *(undefined8 *)(lVar7 + lVar10) = local_50;
        }
        *(int *)(*param_2 + 4) = *(int *)(*param_2 + 4) + 1;
      }
      lVar10 = QMapNodeBase::nextNode();
    } while (lVar10 != *(long *)(param_1 + 8) + 8);
  }
  return;
}

