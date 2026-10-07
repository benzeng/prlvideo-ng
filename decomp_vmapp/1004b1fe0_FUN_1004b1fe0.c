
undefined8 FUN_1004b1fe0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 1;
  local_19 = (*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2;
  local_20 = 0;
  local_24 = 0;
  iVar1 = FUN_1000ed430(5);
  if (iVar1 != 0) {
    iVar1 = FUN_1000ed5c0(&local_18,8);
    if (iVar1 != 0) {
      iVar1 = FUN_1000ed5c0(&local_19,1);
      if (iVar1 != 0) {
        iVar1 = FUN_1000ed5c0(param_1 + 0x88,4);
        if (iVar1 != 0) {
          iVar1 = FUN_1000ed5c0(&local_20,4);
          if (iVar1 != 0) {
            iVar1 = FUN_1000ed5c0(&local_24,4);
            if (iVar1 != 0) {
              iVar1 = FUN_1000ed7d0();
              uVar2 = 0;
              if (iVar1 != 0) goto LAB_1004b20ad;
            }
          }
        }
      }
    }
  }
  FUN_1008e3970("CHRSERVER","ChrToolSrv",0,"Error saving Coherence Tool Server state\n");
  uVar2 = 1;
LAB_1004b20ad:
  *(undefined1 *)(param_1 + 0x128) = local_19;
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x88);
  return uVar2;
}

