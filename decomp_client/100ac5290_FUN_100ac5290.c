
undefined1 FUN_100ac5290(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined1 uVar7;
  
  if (param_2 == -1) {
    uVar7 = 1;
  }
  else {
    lVar5 = FUN_100ad5f40(param_1,param_3);
    plVar6 = (long *)FUN_100adb590(param_1 + 0x100,param_2);
    uVar7 = 0;
    if ((lVar5 != 0) && (lVar1 = *plVar6, lVar1 != 0)) {
      if (*(int *)(lVar5 + 8) == *(int *)(lVar1 + 8)) {
        uVar7 = 1;
      }
      else {
        iVar3 = FUN_100d7b300(*(undefined4 *)(lVar1 + 0x48));
        iVar4 = FUN_100d7b300(*(undefined4 *)(lVar5 + 0x48));
        if (iVar3 == iVar4) {
          uVar7 = 1;
        }
        else {
          uVar7 = 1;
          if (0 < iVar4) {
            lVar5 = FUN_1000a9690(param_1 + 0x988);
            if ((lVar5 != 0) && (cVar2 = FUN_1000b7a80(lVar5,param_2,0), cVar2 != '\0')) {
              return 0;
            }
            uVar7 = 0;
            FUN_100ad5960(param_1,2,param_2,0);
          }
        }
      }
    }
  }
  return uVar7;
}

