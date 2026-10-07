
void FUN_10028e710(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar2 = DAT_1011c3698;
  lVar1 = *(long *)(DAT_1011c3698 + 0x1938);
  ___bzero(lVar1 + 0x3000,0x5000);
  ___bzero(lVar1 + 0x2f120,0x108);
  ___bzero(lVar1 + 0x7690 + (long)param_1 * 0x300,0x300);
  DAT_1011c3e30 = FUN_1002f0000(8,(long)param_1 & 0xffff,0xffff);
  if (DAT_1011c3e30 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Failed to create monev for ahci-%u",param_1);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_100408ff0(lVar2 + 0x10b0,0x80000001,&local_48);
    FUN_10002d9d0(&local_48);
  }
  return;
}

