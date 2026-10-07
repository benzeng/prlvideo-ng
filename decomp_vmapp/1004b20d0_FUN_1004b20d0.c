
undefined8 FUN_1004b20d0(long param_1)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_1c;
  
  local_1c = 0;
  local_2c = 0;
  local_30 = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  iVar1 = FUN_1000ec2a0();
  if ((iVar1 == 0) || (iVar1 = FUN_1000ec3b0(&local_28,8,&local_1c,0), iVar1 == 0))
  goto LAB_1004b21fc;
  if (local_1c != 0) {
    if ((local_28 != 1) || (local_24 != 0)) {
      FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"Unsupported Coherence SaRe data version: [%d;%d]\n")
      ;
      goto LAB_1004b21fc;
    }
    iVar1 = FUN_1000ec3b0((undefined1 *)(param_1 + 0x128),1,&local_1c,0);
    if (iVar1 == 0) goto LAB_1004b21fc;
    if (local_1c == 0) {
      *(undefined1 *)(param_1 + 0x128) = 0;
    }
    iVar1 = FUN_1000ec3b0(param_1 + 300,4,&local_1c,0);
    if (((iVar1 == 0) || (iVar1 = FUN_1000ec3b0(&local_2c,4,&local_1c,0), iVar1 == 0)) ||
       (iVar1 = FUN_1000ec3b0(&local_30,4,&local_1c,0), iVar1 == 0)) goto LAB_1004b21fc;
  }
  iVar1 = FUN_1000ec640();
  if (iVar1 != 0) {
    return 0;
  }
LAB_1004b21fc:
  FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"Error loading Coherence Tool Server state\n");
  return 1;
}

