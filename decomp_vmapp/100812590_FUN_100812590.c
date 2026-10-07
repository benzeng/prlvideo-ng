
undefined4 FUN_100812590(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_118 [184];
  int local_60;
  
  uVar3 = 0;
  if (param_2 != 0) {
    iVar2 = FUN_100885600(param_2);
    if (iVar2 != 0) {
      uVar3 = 0;
      uVar4 = FUN_100885620(param_2,0);
      iVar2 = FUN_1008b9a40(local_118,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x18),uVar4,
                            param_2);
      if (iVar2 == 0) {
        FUN_100887ce0(0x14,0xcf,0xb,"ssl_cert.c",0x1dc);
      }
      else {
        uVar3 = FUN_100811cb0();
        FUN_1008b9610(local_118,uVar3,param_1);
        if (*(int *)(param_1 + 0x38) == 0) {
          pcVar5 = "ssl_server";
        }
        else {
          pcVar5 = "ssl_client";
        }
        FUN_1008ba8f0(local_118,pcVar5);
        uVar4 = FUN_1008ba930(local_118);
        FUN_1008c11d0(uVar4,*(undefined8 *)(param_1 + 0xb0));
        if (*(long *)(param_1 + 0x148) != 0) {
          FUN_1008ba8c0(local_118);
        }
        pcVar1 = *(code **)(*(long *)(param_1 + 0x170) + 0x98);
        if (pcVar1 == (code *)0x0) {
          uVar3 = FUN_1008b7ff0(local_118);
        }
        else {
          uVar3 = (*pcVar1)(local_118,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xa0));
        }
        *(long *)(param_1 + 0x180) = (long)local_60;
        FUN_1008b9980(local_118);
      }
    }
  }
  return uVar3;
}

