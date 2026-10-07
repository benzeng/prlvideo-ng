
undefined8 FUN_1008bd1d0(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) == 0) {
      uVar1 = FUN_100885600(*(undefined8 *)(param_1 + 0x10));
    }
    else {
      uVar1 = (uint)(*(long *)(param_1 + 0x10) != 0);
    }
    uVar4 = 0;
    if (param_2 < (int)uVar1) {
      if (*(int *)(param_1 + 8) == 0) {
        lVar3 = FUN_100885620(*(undefined8 *)(param_1 + 0x10),param_2);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x10);
      }
      uVar4 = 0;
      if (lVar3 != 0) {
        iVar2 = FUN_10089b8b0(lVar3);
        if (iVar2 == param_3) {
          uVar4 = *(undefined8 *)(lVar3 + 8);
        }
        else {
          FUN_100887ce0(0xb,0x8b,0x7a,"x509_att.c",0x170);
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}

