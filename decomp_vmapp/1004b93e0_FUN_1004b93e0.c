
undefined1 FUN_1004b93e0(long param_1,undefined4 *param_2)

{
  double dVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined1 local_48 [16];
  double local_38;
  double local_30;
  
  switch(*param_2) {
  case 5:
    uVar4 = FUN_1004b9680(param_1,param_2[4]);
    break;
  case 6:
    uVar4 = FUN_1004b9980(param_1,param_2[4]);
    break;
  case 7:
    uVar4 = FUN_1004b9a20(param_1,param_2[4]);
    break;
  case 8:
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x24a) = 0;
    uVar4 = 1;
    break;
  case 9:
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x24a) = 1;
    pcVar3 = DAT_1011ccd98;
    uVar4 = 1;
    if (*(long *)(param_1 + 0x1018) != 0) {
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1018) + 8);
      uVar5 = (*DAT_1011ccc38)();
      iVar6 = (*pcVar3)(uVar5,uVar2,local_48);
      if (iVar6 == 0) {
        dVar1 = *(double *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x240);
        local_58 = 0;
        local_50 = (int)(local_38 * dVar1);
        local_4c = (int)(dVar1 * local_30);
        FUN_1004bf6a0(param_1 + 0x1030,&local_58);
      }
    }
    break;
  default:
    if (DAT_1011b55f8 < 3) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      FUN_1008e3970("CHRSERVER","ChrToolSrv",3,"Unknown Full Screen window command %d");
    }
  }
  return uVar4;
}

