
void FUN_100331410(undefined8 param_1,long param_2,uint *param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined8 in_RAX;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 uStack_38;
  
  for (puVar6 = *(undefined8 **)(param_2 + 0x50); puVar6 != (undefined8 *)0x0;
      puVar6 = (undefined8 *)*puVar6) {
    *(undefined4 *)(puVar6 + 1) = 0;
  }
  *(undefined8 *)(param_2 + 0x48) = 0;
  uStack_38 = in_RAX;
  ___bzero(param_2 + 0x58,0x8000);
  if ((param_4 >> 4 & 0xfffffff) != 0) {
    uVar8 = 0;
    do {
      uVar1 = *param_3;
      uVar2 = param_3[2];
      iVar5 = param_3[1] - uVar2;
      uVar3 = param_3[3];
      uStack_38 = CONCAT44(iVar5,(undefined4)uStack_38);
      if (uVar1 == 0) {
        lVar4 = *(long *)(param_2 + 0x10068);
        **(int **)(lVar4 + 0x28) = iVar5;
        *(uint *)(lVar4 + 0xc) = uVar3 + uVar2;
      }
      else {
        for (puVar7 = *(uint **)(param_2 + 0x8068 +
                                (ulong)((uVar1 >> 0xc ^ uVar1) & 0xfff ^ uVar1 >> 0x18) * 8);
            puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
          if (*puVar7 == uVar1) {
            lVar4 = *(long *)(puVar7 + 2);
            if (lVar4 != 0) {
              *(int *)(*(long *)(*(long *)(lVar4 + 8) + 0x28) + (ulong)*(uint *)(lVar4 + 4) * 0xc) =
                   iVar5;
            }
            break;
          }
        }
        FUN_1003323c0(param_2 + 0x48,uVar1,(long)&uStack_38 + 4);
      }
      param_3 = param_3 + 4;
      uVar8 = uVar8 + 1;
    } while (uVar8 < ((uint)(param_4 >> 4) & 0xfffffff));
  }
  return;
}

