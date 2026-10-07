
void FUN_10028e680(long param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == 0) {
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","FALSE",
                  "../Ahci/sata_dev.cpp",0x18b,"command_complete_cb");
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 4) = param_2;
    if (*(char *)(param_1 + 0xe) == '\0') {
      lVar2 = *(long *)(param_1 + 0x58) + 0x1048;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x58) + 0x1058;
    }
    plVar1 = *(long **)(lVar2 + 8);
    *(long *)(lVar2 + 8) = param_1 + 0x28;
    *(long *)(param_1 + 0x28) = lVar2;
    *(long **)(param_1 + 0x30) = plVar1;
    *plVar1 = param_1 + 0x28;
  }
  return;
}

