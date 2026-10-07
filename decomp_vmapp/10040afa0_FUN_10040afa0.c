
undefined1 FUN_10040afa0(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  char *pcVar5;
  byte bVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 local_34;
  code *local_30;
  undefined8 local_28;
  
  bVar1 = *(byte *)(param_2 + 0x44);
  if (*(char *)(param_1 + 0x46) == '\0') {
    local_34 = 1;
    iVar2 = _AudioUnitSetProperty
                      (*(undefined8 *)(param_2 + 0x30),0x7d3,(bVar1 == 0) + '\x01',bVar1,&local_34,4
                      );
    if (iVar2 != 0) {
      pcVar8 = "output";
      if (bVar1 != 0) {
        pcVar8 = "input";
      }
      pcVar5 = "Failed to set %s I/O mode enabled (%d)";
      goto LAB_10040b128;
    }
    if (bVar1 == 0) goto LAB_10040b0a7;
    local_34 = 0;
    iVar2 = _AudioUnitSetProperty(*(undefined8 *)(param_2 + 0x30),0x7d3,2,0,&local_34,4);
    if (iVar2 != 0) {
      FUN_1008e3970("","PrlAudioCore",0,
                    "Failed to set output I/O mode disabled (for input stream) (%d)");
      return 0;
    }
    puVar3 = (undefined8 *)(param_1 + 0x50);
  }
  else if (bVar1 == 0) {
LAB_10040b0a7:
    puVar3 = (undefined8 *)(param_1 + 0x58);
  }
  else {
    puVar3 = (undefined8 *)(param_1 + 0x50);
  }
  local_30 = FUN_10040b160;
  local_28 = *puVar3;
  uVar7 = 0x17;
  if (bVar1 != 0) {
    uVar7 = 0x7d5;
  }
  if (*(char *)(param_1 + 0x46) == '\0') {
    bVar6 = bVar1 ^ 1;
    bVar4 = 0;
  }
  else {
    bVar6 = 0;
    bVar4 = bVar1;
  }
  iVar2 = _AudioUnitSetProperty(*(undefined8 *)(param_2 + 0x30),uVar7,bVar6,bVar4,&local_30,0x10);
  if (iVar2 == 0) {
    return 1;
  }
  pcVar8 = "output";
  if (bVar1 != 0) {
    pcVar8 = "input";
  }
  pcVar5 = "Failed to set callback for %s device (%d)";
LAB_10040b128:
  FUN_1008e3970("","PrlAudioCore",0,pcVar5,pcVar8);
  return 0;
}

