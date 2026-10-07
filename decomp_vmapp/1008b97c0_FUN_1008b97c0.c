
undefined8 FUN_1008b97c0(long param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_3 == 0) {
    param_3 = param_2;
  }
  if (param_3 == 0) {
LAB_1008b981a:
    bVar1 = false;
    iVar2 = 0;
    if (param_4 != 0) {
LAB_1008b9826:
      iVar3 = FUN_1008bf960(param_4);
      bVar1 = true;
      iVar2 = param_4;
      if (iVar3 == -1) {
        uVar5 = 0x78;
        uVar6 = 0x7b6;
        goto LAB_1008b98b9;
      }
    }
    if ((param_3 != 0) && (*(int *)(*(long *)(param_1 + 0x28) + 0x20) == 0)) {
      *(int *)(*(long *)(param_1 + 0x28) + 0x20) = param_3;
    }
    uVar5 = 1;
    if ((bVar1) && (*(int *)(*(long *)(param_1 + 0x28) + 0x24) == 0)) {
      *(int *)(*(long *)(param_1 + 0x28) + 0x24) = iVar2;
    }
  }
  else {
    iVar2 = FUN_1008ca200(param_3);
    if (iVar2 != -1) {
      lVar4 = FUN_1008ca240(iVar2);
      if (*(int *)(lVar4 + 4) == -1) {
        iVar2 = FUN_1008ca200(param_2);
        if (iVar2 == -1) {
          uVar5 = 0x79;
          uVar6 = 0x7a9;
          goto LAB_1008b98b9;
        }
        lVar4 = FUN_1008ca240(iVar2);
      }
      if (param_4 == 0) {
        param_4 = *(int *)(lVar4 + 4);
        goto LAB_1008b981a;
      }
      goto LAB_1008b9826;
    }
    uVar5 = 0x79;
    uVar6 = 0x7a1;
LAB_1008b98b9:
    FUN_100887ce0(0xb,0x86,uVar5,"x509_vfy.c",uVar6);
    uVar5 = 0;
  }
  return uVar5;
}

