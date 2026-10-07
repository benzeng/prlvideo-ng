
undefined1 FUN_100038b50(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined1 local_50 [32];
  
  iVar1 = FUN_10078cf30(local_50,param_2,param_3,0x50);
  uVar6 = 0;
  if (iVar1 == 0) {
    uVar6 = 0;
    do {
      iVar1 = FUN_10078d0d0(local_50);
      if (iVar1 == 0x200e) {
        uVar2 = FUN_10078d0c0(local_50);
        if (3 < uVar2) {
          puVar5 = (undefined4 *)FUN_10078d0a0(local_50);
          *param_1 = *puVar5;
          uVar6 = 1;
        }
      }
      else if (1 < DAT_1011b55f8) {
        uVar3 = FUN_10078d0d0(local_50);
        uVar4 = FUN_10078d0c0(local_50);
        FUN_1008e3970("PRINTING_TOOL","vm",2,"Unsupported data skipped, type = %u, size = %u",uVar3,
                      uVar4);
      }
      iVar1 = FUN_10078d020(local_50);
    } while (iVar1 == 0);
  }
  return uVar6;
}

