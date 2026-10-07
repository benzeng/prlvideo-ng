
int FUN_100112840(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_70 [40];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 local_34;
  int local_30;
  
  iVar1 = FUN_100112250(param_1,param_2,local_70,param_3);
  if (iVar1 < 0) {
    FUN_1008e3970("","vm",0,"Invalid memory quota. SetPmmQuota (%u) failed. status=%x",param_3,iVar1
                 );
  }
  else {
    local_34 = 0;
    local_30 = -1;
    local_48 = 0x829;
    local_44 = 0x24;
    local_40 = 0;
    local_3c = local_70;
    iVar2 = FUN_100683330(param_1 + 0xc,0x601c7801,&local_48,0x1c);
    if ((iVar2 != 0 || local_30 != 0) && (iVar1 = -0x7ffffac8, 0 < DAT_1011b55f8)) {
      FUN_1008e3970("","vm",1,"IOCTL_PMM_SET_QUOTA failed (0x%x)");
    }
  }
  return iVar1;
}

