
undefined1 FUN_1000461e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined1 uVar6;
  undefined1 local_48 [32];
  
  iVar1 = FUN_10078cf30(local_48,param_2,param_3,0);
  uVar6 = 1;
  if (iVar1 == 0) {
    iVar1 = FUN_10078d0d0(local_48);
    if (iVar1 == 0x2019) {
      iVar1 = FUN_10078d0c0(local_48);
      if (iVar1 == 8) {
        pvVar5 = (void *)FUN_10078d0a0(local_48);
        uVar2 = FUN_10078d0c0(local_48);
        _memcpy(param_4,pvVar5,(ulong)uVar2);
      }
      else if (DAT_1011b55f8 < 2) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        FUN_1008e3970("SGAH","vm",2,"bitbox contains broken version data");
      }
    }
    else if (DAT_1011b55f8 < 2) {
      uVar6 = 0;
    }
    else {
      uVar3 = FUN_10078d0d0(local_48);
      uVar4 = FUN_10078d0c0(local_48);
      uVar6 = 0;
      FUN_1008e3970("SGAH","vm",2,"Unsupported data skipped, type=%u, size=%u",uVar3,uVar4);
    }
  }
  return uVar6;
}

