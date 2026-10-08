
undefined8 FUN_10079e9e0(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 local_2c;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar4 = 0;
  }
  else {
    cVar1 = FUN_100d3e730();
    iVar7 = 0;
    uVar4 = 0;
    if (cVar1 == '\0') {
      lVar5 = FUN_100d38810(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
      iVar2 = FUN_100d38910(lVar5);
      if (iVar2 != 0) {
        FUN_10079f510(param_1);
        iVar2 = 1;
        do {
          iVar7 = iVar2;
          lVar6 = FUN_100d38920(lVar5,0);
          if (lVar6 == 0) break;
          lVar5 = FUN_100d38920(lVar5,0);
          iVar3 = FUN_100d38910(lVar5);
          iVar2 = iVar7 + 1;
        } while (iVar3 != 0);
      }
      local_2c = 0;
      do {
        FUN_10079f700(param_1,lVar5,0,iVar7,&local_2c);
        iVar7 = iVar7 + -1;
        lVar5 = FUN_100d38830(lVar5);
      } while (lVar5 != 0);
      uVar4 = 1;
    }
  }
  return uVar4;
}

