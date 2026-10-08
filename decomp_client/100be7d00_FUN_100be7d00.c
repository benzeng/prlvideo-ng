
undefined4 FUN_100be7d00(long param_1,long param_2)

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
    iVar2 = FUN_100c60800(param_2);
    if (iVar2 != 0) {
      uVar3 = 0;
      uVar4 = FUN_100c60820(param_2,0);
      iVar2 = FUN_100c94fc0(local_118,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x18),uVar4,
                            param_2);
      if (iVar2 == 0) {
        FUN_100c62ee0(0x14,0xcf,0xb,"ssl_cert.c",0x1dc);
      }
      else {
        uVar3 = FUN_100be7420();
        FUN_100c94b90(local_118,uVar3,param_1);
        if (*(int *)(param_1 + 0x38) == 0) {
          pcVar5 = "ssl_server";
        }
        else {
          pcVar5 = "ssl_client";
        }
        FUN_100c95e70(local_118,pcVar5);
        uVar4 = FUN_100c95eb0(local_118);
        FUN_100c9c750(uVar4,*(undefined8 *)(param_1 + 0xb0));
        if (*(long *)(param_1 + 0x148) != 0) {
          FUN_100c95e40(local_118);
        }
        pcVar1 = *(code **)(*(long *)(param_1 + 0x170) + 0x98);
        if (pcVar1 == (code *)0x0) {
          uVar3 = FUN_100c93570(local_118);
        }
        else {
          uVar3 = (*pcVar1)(local_118,*(undefined8 *)(*(long *)(param_1 + 0x170) + 0xa0));
        }
        *(long *)(param_1 + 0x180) = (long)local_60;
        FUN_100c94f00(local_118);
      }
    }
  }
  return uVar3;
}

