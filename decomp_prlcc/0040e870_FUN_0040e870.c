
int FUN_0040e870(uint *param_1,long param_2,uint param_3,uint param_4,uint *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_58 [8];
  uint local_50;
  uint local_4c;
  int local_3c [3];
  
  if (((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_4 == 0 && param_3 == 0)) {
    iVar4 = -1;
  }
  else {
    uVar2 = *param_1;
    if (param_5 != (uint *)0x0) {
      *param_5 = 0;
    }
    param_1[1] = 0xfffffff6;
    iVar4 = FUN_0040e740(param_1,local_58,param_3);
    if (iVar4 == 0) {
      uVar9 = 0;
      uVar8 = 0;
      while( true ) {
        uVar10 = param_3 - uVar8;
        uVar11 = uVar10;
        if ((uVar2 < uVar10) && (uVar11 = uVar10 - uVar2, uVar2 < uVar10 - uVar2)) {
          uVar11 = uVar2;
        }
        uVar10 = uVar2;
        if (uVar11 == 0) {
          uVar3 = uVar9;
          if (param_4 - uVar9 <= uVar2) {
            uVar10 = param_4 - uVar9;
          }
        }
        else {
          uVar5 = uVar11;
          if (param_3 < param_4) {
            uVar5 = param_4 - uVar8;
          }
          uVar3 = uVar8;
          if (uVar5 <= uVar2) {
            uVar10 = uVar5;
          }
        }
        iVar4 = FUN_0040ef90(local_58,(ulong)uVar3 + param_2,uVar11,uVar10,local_3c);
        param_1[1] = local_4c;
        if (iVar4 != 0) {
          return iVar4;
        }
        if (param_4 < local_50) {
          if (local_4c != 2) {
            return -7;
          }
          FUN_0040ef30(local_58);
          return -7;
        }
        if (((uVar11 != 0) && (local_3c[0] != 0)) && (uVar9 < uVar8)) {
          iVar4 = 0;
          puVar7 = (undefined1 *)((ulong)uVar8 + param_2);
          puVar6 = (undefined1 *)((ulong)uVar9 + param_2);
          do {
            uVar1 = *puVar7;
            iVar4 = iVar4 + 1;
            puVar7 = puVar7 + 1;
            *puVar6 = uVar1;
            puVar6 = puVar6 + 1;
          } while (iVar4 != local_3c[0]);
        }
        uVar9 = uVar9 + local_3c[0];
        if (local_4c == 0) break;
        uVar8 = uVar8 + uVar11;
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar9;
      }
      param_1[1] = 0;
      iVar4 = 0;
    }
  }
  return iVar4;
}

