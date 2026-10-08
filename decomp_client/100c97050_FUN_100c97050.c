
undefined8 FUN_100c97050(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    iVar2 = FUN_100c60800(uVar1);
    iVar4 = iVar2;
    if ((param_3 <= iVar2) && (iVar4 = param_3, param_3 < 0)) {
      iVar4 = iVar2;
    }
    *(undefined4 *)(param_1 + 1) = 1;
    if (param_4 == -1) {
      if (iVar4 == 0) {
        bVar5 = true;
        iVar2 = 0;
      }
      else {
        lVar3 = FUN_100c60820(uVar1,iVar4 + -1);
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar5 = false;
      }
    }
    else {
      if (iVar4 < iVar2) {
        lVar3 = FUN_100c60820(uVar1,iVar4);
        iVar2 = *(int *)(lVar3 + 0x10);
      }
      else {
        iVar2 = 0;
        if (iVar4 != 0) {
          lVar3 = FUN_100c60820(uVar1,iVar4 + -1);
          iVar2 = *(int *)(lVar3 + 0x10) + 1;
        }
      }
      bVar5 = iVar2 == 0;
    }
    lVar3 = FUN_100c7c1b0(param_2);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x10) = iVar2;
      iVar2 = FUN_100c600c0(uVar1,lVar3,iVar4);
      if (iVar2 != 0) {
        if (!bVar5) {
          return 1;
        }
        iVar2 = FUN_100c60800(uVar1);
        if (iVar2 <= iVar4 + 1) {
          return 1;
        }
        do {
          lVar3 = FUN_100c60820(uVar1,iVar4);
          *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
          iVar4 = iVar4 + 1;
        } while (iVar2 + -1 != iVar4);
        return 1;
      }
      FUN_100c62ee0(0xb,0x71,0x41,"x509name.c",0x10d);
      FUN_100c7c190(lVar3);
    }
  }
  return 0;
}

