
uint FUN_100c9e650(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  ulong param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  
  uVar5 = param_5 & 0xf;
  if (uVar5 == 1) {
    iVar1 = -1;
    bVar6 = false;
LAB_100c9e684:
    lVar2 = FUN_100c9d600(param_2,param_4,param_3);
    if (lVar2 == 0) {
      FUN_100c62ee0(0x22,0x8c,0x90,"v3_lib.c",0x13b);
      return 0;
    }
    lVar4 = *param_1;
    if (!bVar6) {
      if (lVar4 == 0) {
        lVar4 = FUN_100c60010();
        *param_1 = lVar4;
        if (lVar4 == 0) {
          return 0xffffffff;
        }
      }
      iVar1 = FUN_100c604e0(lVar4,lVar2);
      bVar6 = iVar1 == 0;
      goto LAB_100c9e7b5;
    }
    uVar3 = FUN_100c60820(lVar4,iVar1);
    FUN_100c86400(uVar3);
    lVar2 = FUN_100c60850(*param_1,iVar1,lVar2);
  }
  else {
    iVar1 = FUN_100c975c0(*param_1,param_2,0xffffffff);
    if (iVar1 < 0) {
      uVar3 = 0x66;
      if ((uVar5 == 3) || (uVar5 == 5)) goto LAB_100c9e768;
      bVar6 = false;
      goto LAB_100c9e684;
    }
    uVar3 = 0x91;
    if (uVar5 == 0) {
LAB_100c9e768:
      if ((param_5 & 0x10) != 0) {
        return 0;
      }
      FUN_100c62ee0(0x22,0x8c,uVar3,"v3_lib.c",0x151);
      return 0;
    }
    if (uVar5 == 4) {
      return 1;
    }
    bVar6 = true;
    if (uVar5 != 5) goto LAB_100c9e684;
    lVar2 = FUN_100c60270(*param_1);
  }
  bVar6 = lVar2 == 0;
LAB_100c9e7b5:
  return -(uint)bVar6 | 1;
}

