
bool FUN_100cae1c0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  iVar3 = FUN_100bf7220(*(undefined8 *)(param_1 + 0x18));
  if ((iVar3 == 0x18) || (iVar3 == 0x16)) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    iVar3 = FUN_100bf7220(**(undefined8 **)(param_2 + 0x10));
    iVar4 = FUN_100c60800(uVar1);
    if (0 < iVar4) {
      iVar4 = 0;
      do {
        puVar6 = (undefined8 *)FUN_100c60820(uVar1,iVar4);
        iVar5 = FUN_100bf7220(*puVar6);
        if (iVar5 == iVar3) goto LAB_100cae285;
        iVar4 = iVar4 + 1;
        iVar5 = FUN_100c60800(uVar1);
      } while (iVar4 < iVar5);
    }
    puVar6 = (undefined8 *)FUN_100c7ae20();
    if (puVar6 != (undefined8 *)0x0) {
      lVar7 = FUN_100c83f00();
      puVar6[1] = lVar7;
      if (lVar7 != 0) {
        uVar8 = FUN_100bf6fe0(iVar3);
        *puVar6 = uVar8;
        *(undefined4 *)puVar6[1] = 5;
        iVar3 = FUN_100c604e0(uVar1,puVar6);
        if (iVar3 == 0) {
          FUN_100c7ae40(puVar6);
          return false;
        }
LAB_100cae285:
        iVar3 = FUN_100c604e0(uVar2,param_2);
        return iVar3 != 0;
      }
    }
    FUN_100c7ae40(puVar6);
    FUN_100c62ee0(0x21,0x67,0x41,"pk7_lib.c",0x112);
  }
  else {
    FUN_100c62ee0(0x21,0x67,0x71,"pk7_lib.c",0xff);
  }
  return false;
}

