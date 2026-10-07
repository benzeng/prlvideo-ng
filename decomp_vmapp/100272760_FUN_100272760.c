
void FUN_100272760(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_100baf7c0;
  ___bzero(&DAT_1011c3820,0x400);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  DAT_101115c70 = FUN_1007da300("devices.net.track_link_status",1);
  DAT_101115c74 = FUN_1007da300("devices.net.sleep_disconnects_link",1);
  cVar1 = FUN_1006bc2e0();
  uVar4 = 0x100;
  if (cVar1 != '\0') {
    uVar4 = 1;
  }
  uVar2 = FUN_1007da300("devices.net.activate_iterations",uVar4);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  DAT_1011b89cc = 0x100000;
  if (uVar2 < 0x100001) {
    DAT_1011b89cc = uVar2;
  }
  iVar3 = FUN_1007da300("devices.net.activate_resched",1);
  DAT_101115c79 = iVar3 != 0;
  DAT_1011c380c = FUN_1007da300("devices.net.e1000.jumbo_mtu",9000);
  DAT_1011c3810 = FUN_1007da300("devices.net.e1000.mtu",0x5dc);
  if (0x3eae < DAT_1011c380c - 0x40U) {
    FUN_1008e3970("","LocalDevices",0,
                  "Invalid e1000-jumbo-mtu value %d. Must be [64 : 16110]. Forcing 9000");
    DAT_1011c380c = 9000;
  }
  if (0x59c < DAT_1011c3810 - 0x40U) {
    FUN_1008e3970("","LocalDevices",0,
                  "Invalid e1000-mtu value %d. Must be [64 : 1500]. Forcing 1500",DAT_1011c3810);
    DAT_1011c3810 = 0x5dc;
  }
  param_1[1] = param_2;
  DAT_100bfa8f4 = param_1;
  DAT_100bfa90d = DAT_100bfa90d | 1;
  return;
}

