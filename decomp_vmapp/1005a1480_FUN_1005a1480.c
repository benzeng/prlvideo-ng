
undefined4 FUN_1005a1480(long *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  
  uVar1 = 0x80000003;
  if (param_1 != (long *)0x0) {
    sVar2 = (**(code **)(*param_1 + 0x2e0))(param_1);
    puVar3 = _valloc(sVar2);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_1008e3970("","vdisk",0,"Can\'t allocate memory for MBR data");
      uVar1 = 0x80000002;
    }
    else {
      ___bzero(puVar3,sVar2);
      puVar3[5] = DAT_10111de18;
      puVar3[4] = DAT_10111de10;
      puVar3[3] = DAT_10111de08;
      puVar3[2] = DAT_10111de00;
      puVar3[1] = DAT_10111ddf8;
      *puVar3 = DAT_10111ddf0;
      _memcpy(puVar3 + 0x20,s_The_hard_disk_drive_is_not_prepa_10111de20,0x58);
      uVar1 = (**(code **)(*param_1 + 0xf0))(param_1,puVar3,sVar2 & 0xffffffff,0);
      _free(puVar3);
    }
  }
  return uVar1;
}

