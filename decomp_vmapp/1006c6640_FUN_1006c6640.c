
undefined8 FUN_1006c6640(uint param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  param_1 = param_1 & 0xfffffff;
  if (param_2 == '\0') {
    cVar1 = FUN_1006cb4e0(param_1,param_3,param_4);
    uVar5 = 0x80000009;
    if (cVar1 != '\0') {
      uVar5 = 0;
    }
  }
  else {
    iVar2 = QHostAddress::protocol();
    if (iVar2 == 1) {
      local_38 = QHostAddress::toIPv6Address();
      local_48 = QHostAddress::toIPv6Address();
      uVar5 = FUN_1006c87e0(param_1,0x8080691a,local_38,local_48);
    }
    else {
      if (iVar2 == 0) {
        uVar3 = QHostAddress::toIPv4Address();
        uVar4 = QHostAddress::toIPv4Address();
        uVar5 = FUN_1006c8650(param_1,0x8040691a,uVar3,uVar4);
        return uVar5;
      }
      uVar3 = QHostAddress::protocol();
      FUN_1008e3970("","prl_net",0,"setPrlAdapterIpAddress: unknown proto %d",uVar3);
      uVar5 = 0x80000009;
    }
  }
  return uVar5;
}

