
undefined8 FUN_10080ca10(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  char cVar12;
  long lVar13;
  int local_38;
  
  if (param_2 == 0) {
    lVar6 = FUN_100894720(*(undefined8 *)(param_1 + 0xd8));
    local_38 = 0;
    if (lVar6 != 0) {
      uVar7 = FUN_100894720(*(undefined8 *)(param_1 + 0xd8));
      local_38 = FUN_1008946d0(uVar7);
      if (local_38 < 0) {
        FUN_10081d560("d1_enc.c",0xac,"mac_size >= 0");
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0xd0);
    lVar6 = *(long *)(param_1 + 0x80) + 0x120;
    lVar13 = 0;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      lVar13 = FUN_100894620(puVar10);
    }
  }
  else {
    lVar6 = FUN_100894720(*(undefined8 *)(param_1 + 0xf0));
    local_38 = 0;
    if (lVar6 != 0) {
      uVar7 = FUN_100894720(*(undefined8 *)(param_1 + 0xf0));
      local_38 = FUN_1008946d0(uVar7);
      if (local_38 < 0) {
        return 0xffffffff;
      }
    }
    lVar2 = *(long *)(param_1 + 0x80);
    puVar10 = *(undefined8 **)(param_1 + 0xe8);
    lVar6 = lVar2 + 0x158;
    lVar13 = 0;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      lVar13 = FUN_100894620(puVar10);
      if (*(long *)(lVar2 + 0x168) == *(long *)(lVar2 + 0x170)) {
        iVar4 = FUN_1008945f0(*puVar10);
        if (1 < iVar4) {
          uVar7 = *(undefined8 *)(lVar2 + 0x170);
          uVar3 = FUN_1008945f0(*puVar10);
          iVar4 = FUN_100886f00(uVar7,uVar3);
          if (iVar4 < 1) {
            return 0xffffffff;
          }
        }
      }
      else {
        _fprintf(*(FILE **)PTR____stderrp_100ba2328,"%s:%d: rec->data != rec->input\n","d1_enc.c",
                 0xa2);
      }
    }
  }
  if (((lVar13 == 0) || (puVar10 == (undefined8 *)0x0)) || (*(long *)(param_1 + 0x130) == 0)) {
    _memmove(*(void **)(lVar6 + 0x10),*(void **)(lVar6 + 0x18),(ulong)*(uint *)(lVar6 + 4));
    *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar6 + 0x10);
    uVar7 = 1;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 4);
    uVar8 = (ulong)uVar1;
    iVar4 = FUN_1008945f0(*puVar10);
    if ((param_2 != 0) && (iVar4 != 1)) {
      iVar9 = (int)uVar1 % iVar4;
      uVar11 = iVar4 - iVar9;
      cVar12 = (char)uVar11 + -1;
      if (((*(byte *)(param_1 + 0x1a9) & 2) != 0) && ((**(byte **)(param_1 + 0x80) & 8) != 0)) {
        cVar12 = (char)uVar11;
      }
      uVar8 = (long)(int)uVar11 + uVar8;
      if ((int)uVar1 < (int)uVar8) {
        lVar13 = (long)(int)uVar1;
        if ((uVar11 & 3) != 0) {
          iVar5 = -(uVar11 & 3);
          do {
            *(char *)(*(long *)(lVar6 + 0x18) + lVar13) = cVar12;
            lVar13 = lVar13 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0);
        }
        if (2 < (uint)((iVar4 + -1) - iVar9)) {
          do {
            *(char *)(*(long *)(lVar6 + 0x18) + lVar13) = cVar12;
            *(char *)(*(long *)(lVar6 + 0x18) + 1 + lVar13) = cVar12;
            *(char *)(*(long *)(lVar6 + 0x18) + 2 + lVar13) = cVar12;
            *(char *)(*(long *)(lVar6 + 0x18) + 3 + lVar13) = cVar12;
            lVar13 = lVar13 + 4;
          } while ((uVar1 + iVar4) - iVar9 != (int)lVar13);
        }
      }
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + uVar11;
    }
    if ((param_2 != 0) || ((uVar7 = 0, uVar8 != 0 && (uVar7 = 0, uVar8 % (ulong)(long)iVar4 == 0))))
    {
      iVar9 = FUN_100894610(puVar10,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
      uVar7 = 0xffffffff;
      if ((0 < iVar9) && ((uVar7 = 1, param_2 == 0 && (iVar4 != 1)))) {
        uVar7 = FUN_1007feb00(param_1,lVar6,iVar4,local_38);
        return uVar7;
      }
    }
  }
  return uVar7;
}

