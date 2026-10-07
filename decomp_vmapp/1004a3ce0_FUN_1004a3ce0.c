
ulong FUN_1004a3ce0(long param_1,long param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x14);
  if (0xf < *(ushort *)(param_2 + 0x14)) {
    piVar2 = (int *)FUN_1002a6010(param_2);
    if (*piVar2 != 0x20000) {
      if (DAT_1011b55f8 < 1) {
        return 0xf0000001;
      }
      FUN_1008e3970("SIAHOST","SIAServer",1,"Invalid protocol version: 0x%08X (need 0x%08X)",*piVar2
                    ,0x20000);
      return 0xf0000001;
    }
    switch(piVar2[1]) {
    case 0:
      if (*(char *)(param_1 + 0xa8) == '\0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 0xa8) = 0;
      lVar3 = *(long *)(param_1 + 0x38);
      local_40 = 0x20000;
      break;
    case 1:
      if (*(char *)(param_1 + 0xa8) != '\0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 0xa8) = 1;
      lVar3 = *(long *)(param_1 + 0x38);
      local_40 = 0x100020000;
      break;
    case 2:
      uVar6 = FUN_1002a6120(param_2,0,0);
      uVar4 = FUN_1004a41d0(param_1,uVar6);
      return uVar4;
    case 3:
      lVar3 = FUN_1002a6120(param_2,0,1);
      if (lVar3 == 0) {
        return 0xf0000003;
      }
      uVar1 = *(uint *)(lVar3 + 8);
      if (uVar1 == 0x20) {
        QMutex::lock();
        local_28 = *(undefined8 *)(param_1 + 0x80);
        local_30 = *(undefined8 *)(param_1 + 0x78);
        local_40 = *(undefined8 *)(param_1 + 0x68);
        local_38 = *(undefined8 *)(param_1 + 0x70);
        QMutex::unlock();
        FUN_1002a5a50(lVar3,0,&local_40,0x20);
        *(undefined4 *)(lVar3 + 0x10) = 0x20;
        return 0;
      }
      pcVar5 = "invalid buffer 0 size = %d (need = %ld)";
      uVar6 = 0;
      uVar7 = 0x20;
      goto LAB_1004a3d33;
    default:
      if (DAT_1011b55f8 < 2) {
        return 0xf0000002;
      }
      FUN_1008e3970("SIAHOST","SIAServer",2,"Unknown SIA command: %d");
      return 0xf0000002;
    case 5:
      local_48 = 0;
      uVar1 = FUN_1004a5b40(param_1,param_2,&local_48);
      if (local_48 == 0) {
        return (ulong)uVar1;
      }
      FUN_1004c07d0(param_1 + 0x10,local_48,0xf0000000);
      return (ulong)uVar1;
    case 8:
      uVar6 = FUN_1002a6120(param_2,0,0);
      uVar4 = FUN_1004a4510(param_1,uVar6);
      return uVar4;
    case 9:
      uVar4 = FUN_1004a4c00(param_1,param_2);
      return uVar4;
    case 10:
      uVar4 = FUN_1004a5030(param_1,param_2);
      return uVar4;
    case 0xb:
      uVar4 = FUN_1004a5410();
      return uVar4;
    case 0xd:
      uVar4 = FUN_1004a55a0(param_1,param_2);
      return uVar4;
    case 0xe:
      uVar4 = FUN_1004a5720();
      return uVar4;
    }
    local_38 = 0x1000000000;
    FUN_100434830(*(undefined8 *)(lVar3 + 0xf0),0x1896d,&local_40,0x10,&DAT_1011ccb98,0);
    return 0;
  }
  if (DAT_1011b55f8 < 2) {
    return 0xf0000003;
  }
  pcVar5 = "Invalid inline data size: %d (need %ld)";
  uVar6 = 2;
  uVar7 = 0x10;
LAB_1004a3d33:
  FUN_1008e3970("SIAHOST","SIAServer",uVar6,pcVar5,uVar1,uVar7);
  return 0xf0000003;
}

