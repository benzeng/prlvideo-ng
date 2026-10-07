
undefined8 FUN_1008b9a40(long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  lVar2 = FUN_1008c0ed0();
  param_1[5] = lVar2;
  if (lVar2 == 0) {
    FUN_100887ce0(0xb,0x8f,0x41,"x509_vfy.c",0x7f2);
    return 0;
  }
  if (param_2 == 0) {
    *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) | 0x11;
    param_1[0x12] = 0;
LAB_1008b9b6e:
    uVar3 = FUN_1008c1440("default");
    iVar1 = FUN_1008c1000(lVar2,uVar3);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        param_1[10] = (long)FUN_1008b9d50;
        param_1[9] = (long)FUN_1008be880;
        param_1[8] = (long)FUN_1008b9dc0;
        param_1[7] = (long)FUN_1008b8c40;
        param_1[0xb] = (long)FUN_1008b9dd0;
        param_1[0xc] = 0;
        param_1[0xd] = (long)FUN_1008ba100;
        param_1[0xe] = (long)FUN_1008ba590;
        param_1[0x10] = (long)FUN_1008be4d0;
LAB_1008b9ce8:
        pcVar5 = FUN_1008be6c0;
      }
      else {
        pcVar5 = FUN_1008b9d50;
        if (*(code **)(param_2 + 0x38) != (code *)0x0) {
          pcVar5 = *(code **)(param_2 + 0x38);
        }
        param_1[10] = (long)pcVar5;
        puVar4 = *(undefined **)(param_2 + 0x30);
        if (*(undefined **)(param_2 + 0x30) == (undefined *)0x0) {
          puVar4 = PTR_FUN_100ba20b0;
        }
        param_1[9] = (long)puVar4;
        pcVar5 = FUN_1008b9dc0;
        if (*(code **)(param_2 + 0x28) != (code *)0x0) {
          pcVar5 = *(code **)(param_2 + 0x28);
        }
        param_1[8] = (long)pcVar5;
        pcVar5 = FUN_1008b8c40;
        if (*(code **)(param_2 + 0x20) != (code *)0x0) {
          pcVar5 = *(code **)(param_2 + 0x20);
        }
        param_1[7] = (long)pcVar5;
        pcVar5 = FUN_1008b9dd0;
        if (*(code **)(param_2 + 0x40) != (code *)0x0) {
          pcVar5 = *(code **)(param_2 + 0x40);
        }
        param_1[0xb] = (long)pcVar5;
        param_1[0xc] = *(long *)(param_2 + 0x48);
        pcVar5 = FUN_1008ba100;
        if (*(code **)(param_2 + 0x50) != (code *)0x0) {
          pcVar5 = *(code **)(param_2 + 0x50);
        }
        param_1[0xd] = (long)pcVar5;
        pcVar5 = FUN_1008ba590;
        if (*(code **)(param_2 + 0x58) != (code *)0x0) {
          pcVar5 = *(code **)(param_2 + 0x58);
        }
        param_1[0xe] = (long)pcVar5;
        puVar4 = *(undefined **)(param_2 + 0x60);
        if (*(undefined **)(param_2 + 0x60) == (undefined *)0x0) {
          puVar4 = PTR_FUN_100ba20b8;
        }
        param_1[0x10] = (long)puVar4;
        pcVar5 = *(code **)(param_2 + 0x68);
        if (pcVar5 == (code *)0x0) goto LAB_1008b9ce8;
      }
      param_1[0x11] = (long)pcVar5;
      param_1[0xf] = (long)FUN_1008ba630;
      iVar1 = FUN_10081f930(5,param_1,param_1 + 0x1d);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = 0x845;
      goto LAB_1008b9d35;
    }
  }
  else {
    iVar1 = FUN_1008c1000(lVar2,*(undefined8 *)(param_2 + 0x18));
    param_1[8] = *(long *)(param_2 + 0x28);
    param_1[0x12] = *(long *)(param_2 + 0x70);
    if (iVar1 != 0) {
      lVar2 = param_1[5];
      goto LAB_1008b9b6e;
    }
  }
  uVar3 = 0x80a;
LAB_1008b9d35:
  FUN_100887ce0(0xb,0x8f,0x41,"x509_vfy.c",uVar3);
  FUN_1008b9980(param_1);
  return 0;
}

