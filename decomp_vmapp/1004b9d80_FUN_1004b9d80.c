
void FUN_1004b9d80(long param_1,undefined4 param_2)

{
  double dVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_50;
  int local_48;
  int local_44;
  undefined1 local_40 [16];
  double local_30;
  double local_28;
  
  pcVar2 = DAT_1011ccd98;
  uVar3 = (*DAT_1011ccc38)();
  iVar4 = (*pcVar2)(uVar3,param_2,local_40);
  if (iVar4 == 0) {
    dVar1 = *(double *)(*(long *)(*(long *)(param_1 + 0x10) + 0x30) + 0x240);
    local_50 = 0;
    local_48 = (int)(local_30 * dVar1);
    local_44 = (int)(dVar1 * local_28);
    FUN_1004bf6a0(param_1 + 0x1030,&local_50);
  }
  return;
}

