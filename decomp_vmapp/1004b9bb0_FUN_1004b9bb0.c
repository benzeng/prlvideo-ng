
undefined8 FUN_1004b9bb0(long param_1,byte param_2)

{
  double dVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_50;
  int local_48;
  int local_44;
  undefined1 local_40 [16];
  double local_30;
  double local_28;
  
  *(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x24a) = param_2 ^ 1;
  pcVar3 = DAT_1011ccd98;
  if ((param_2 == 0) && (*(long *)(param_1 + 0x1018) != 0)) {
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x1018) + 8);
    uVar4 = (*DAT_1011ccc38)();
    iVar5 = (*pcVar3)(uVar4,uVar2,local_40);
    if (iVar5 == 0) {
      dVar1 = *(double *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x240);
      local_50 = 0;
      local_48 = (int)(local_30 * dVar1);
      local_44 = (int)(dVar1 * local_28);
      FUN_1004bf6a0(param_1 + 0x1030,&local_50);
    }
  }
  return 1;
}

