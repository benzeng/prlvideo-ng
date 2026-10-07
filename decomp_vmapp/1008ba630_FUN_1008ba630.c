
undefined8 FUN_1008ba630(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = 1;
  if (*(long *)(param_1 + 0xe0) == 0) {
    iVar1 = FUN_1008cdeb0(param_1 + 0xa8,param_1 + 0xb0,*(undefined8 *)(param_1 + 0xa0),
                          *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30),
                          *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
    if (iVar1 == -2) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x0001008ba6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(param_1 + 0x40))(0,param_1);
      return uVar4;
    }
    if (iVar1 == 0) {
      FUN_100887ce0(0xb,0x91,0x41,"x509_vfy.c",0x5bf);
      uVar4 = 0;
    }
    else if (iVar1 == -1) {
      iVar1 = FUN_100885600(*(undefined8 *)(param_1 + 0xa0));
      uVar4 = 1;
      if (1 < iVar1) {
        iVar1 = 1;
        do {
          lVar3 = FUN_100885620(*(undefined8 *)(param_1 + 0xa0),iVar1);
          if ((*(byte *)(lVar3 + 0x49) & 8) != 0) {
            *(long *)(param_1 + 0xc0) = lVar3;
            *(undefined4 *)(param_1 + 0xb8) = 0x2a;
            iVar2 = (**(code **)(param_1 + 0x40))(0,param_1);
            if (iVar2 == 0) {
              return 0;
            }
          }
          iVar1 = iVar1 + 1;
          iVar2 = FUN_100885600(*(undefined8 *)(param_1 + 0xa0));
          uVar4 = 1;
        } while (iVar1 < iVar2);
      }
    }
    else {
      if ((*(byte *)(*(long *)(param_1 + 0x28) + 0x19) & 8) != 0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 0xb8) = 0;
        iVar1 = (**(code **)(param_1 + 0x40))(2,param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar4 = 1;
    }
  }
  return uVar4;
}

