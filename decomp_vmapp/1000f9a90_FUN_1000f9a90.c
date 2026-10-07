
byte FUN_1000f9a90(long param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "dis";
  if ((param_2 & 1) != 0) {
    pcVar3 = "en";
  }
  FUN_1008e3970("","vm",0,"hdd: SF: exwr   %sabled in guest",pcVar3);
  pcVar3 = "dis";
  if ((param_2 & 2) != 0) {
    pcVar3 = "en";
  }
  FUN_1008e3970("","vm",0,"hdd: SF: pboost %sabled in guest",pcVar3);
  pcVar4 = "dis";
  pcVar3 = "dis";
  if ((param_2 & 4) != 0) {
    pcVar3 = "en";
  }
  FUN_1008e3970("","vm",0,"hdd: SF: cctl %sabled in guest",pcVar3);
  iVar1 = FUN_1007da300("devices.hdd.extend_writes",param_2 & 1);
  bVar2 = (iVar1 != 0) * '\x02';
  iVar1 = FUN_1007da300("devices.hdd.prio_boost",0);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 4;
  }
  pcVar3 = "dis";
  if ((bVar2 & 0xfc) != 0) {
    pcVar3 = "en";
  }
  FUN_1008e3970("","vm",0,"hdd: SF: pboost %sabled in host",pcVar3);
  iVar1 = FUN_1007da300("devices.hdd.cache_ctl",0);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 0x10;
  }
  pcVar3 = "dis";
  if ((bVar2 & 0x10) != 0) {
    pcVar3 = "en";
  }
  FUN_1008e3970("","vm",0,"hdd: SF: cctl %sabled in host",pcVar3);
  iVar1 = FUN_1007da300("devices.hdd.large_queue",*(undefined1 *)(param_1 + 0x22));
  if (iVar1 != 0) {
    bVar2 = bVar2 | 8;
  }
  pcVar3 = "dis";
  if ((bVar2 & 8) != 0) {
    pcVar3 = "en";
  }
  FUN_1008e3970("","vm",0,"hdd: SF: large queue %sabled in host",pcVar3);
  iVar1 = FUN_1007da300("devices.hdd.fast_submit",1);
  if (iVar1 != 0) {
    bVar2 = bVar2 | 0x20;
  }
  if ((bVar2 & 0x20) != 0) {
    pcVar4 = "en";
  }
  FUN_1008e3970("","vm",0,"hdd: SF: fsubmit %sbled in host",pcVar4);
  return bVar2;
}

