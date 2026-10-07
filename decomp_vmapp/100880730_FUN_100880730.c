
int FUN_100880730(long param_1,undefined1 *param_2,int param_3)

{
  undefined4 *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  param_3 = param_3 + -1;
  FUN_10087d610(param_1,0xf);
  iVar7 = puVar1[4];
  iVar8 = 0;
  do {
    if (iVar7 < 1) {
      iVar7 = FUN_10087d6a0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(puVar1 + 2),*puVar1);
      if (iVar7 < 1) {
        FUN_10087e580(param_1);
        *param_2 = 0;
        if (-1 < iVar7) {
          return iVar8;
        }
        if (0 < iVar8) {
          return iVar8;
        }
        return iVar7;
      }
      puVar1[4] = iVar7;
      puVar1[5] = 0;
      iVar4 = 0;
    }
    else {
      iVar4 = puVar1[5];
    }
    lVar5 = 0;
    puVar6 = param_2;
    if ((0 < param_3) && (0 < iVar7)) {
      lVar2 = *(long *)(puVar1 + 2);
      lVar5 = 0;
      do {
        param_2[lVar5] = *(undefined1 *)(iVar4 + lVar2 + lVar5);
        puVar6 = param_2 + lVar5 + 1;
        if (*(char *)(iVar4 + lVar2 + lVar5) == '\n') {
          iVar4 = (int)lVar5 + 1;
          iVar7 = puVar1[4];
          bVar3 = true;
          goto LAB_100880808;
        }
        lVar5 = lVar5 + 1;
        iVar7 = puVar1[4];
      } while ((lVar5 < param_3) && (lVar5 < iVar7));
    }
    iVar4 = (int)lVar5;
    bVar3 = false;
LAB_100880808:
    iVar8 = iVar8 + iVar4;
    iVar7 = iVar7 - iVar4;
    puVar1[4] = iVar7;
    puVar1[5] = puVar1[5] + iVar4;
    if ((bVar3) || (param_3 = param_3 - iVar4, param_2 = puVar6, param_3 == 0)) {
      *puVar6 = 0;
      return iVar8;
    }
  } while( true );
}

