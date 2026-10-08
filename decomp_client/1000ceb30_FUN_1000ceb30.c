
void FUN_1000ceb30(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined1 local_88 [96];
  
  param_1 = param_1 + 0x158;
  FUN_1000f3390(param_1,1);
  FUN_1000f3e00(param_1,1);
  lVar4 = *param_2;
  iVar2 = *(int *)(lVar4 + 8);
  if (iVar2 != *(int *)(lVar4 + 0xc)) {
    plVar3 = (long *)(lVar4 + 0x10 + (long)iVar2 * 8);
    lVar4 = (long)*(int *)(lVar4 + 0xc) * 8 + (long)iVar2 * -8;
    do {
      FUN_1000e6090(local_88);
      lVar1 = *plVar3;
      iVar2 = FUN_1000f3ec0(param_1,*(long *)(lVar1 + 0x10) + lVar1,*(undefined4 *)(lVar1 + 4),0,0,
                            local_88);
      if (iVar2 == 0) {
        FUN_1000f4760(param_1,1,local_88);
      }
      FUN_1000e6210(local_88);
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}

