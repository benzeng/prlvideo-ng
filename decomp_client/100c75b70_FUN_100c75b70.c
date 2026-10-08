
uint * FUN_100c75b70(uint *param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  size_t sVar4;
  uint *puVar5;
  undefined1 local_68 [56];
  undefined8 local_30;
  
  local_30 = param_2;
  if ((param_1 == (uint *)0x0) && (param_1 = (uint *)FUN_100c8b370(0x18), param_1 == (uint *)0x0)) {
    return (uint *)0x0;
  }
  puVar2 = (undefined4 *)FUN_100bf5d30(&local_30,local_68);
  puVar5 = (uint *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    if (((param_3 != 0) || (param_4 != 0)) &&
       (iVar1 = FUN_100bf5d90(puVar2,param_3,param_4), iVar1 == 0)) {
      return (uint *)0x0;
    }
    pcVar3 = *(char **)(param_1 + 2);
    if ((pcVar3 == (char *)0x0) || (*param_1 < 0x14)) {
      pcVar3 = (char *)FUN_100bf3540(0x14,"a_gentm.c",0xfb);
      if (pcVar3 == (char *)0x0) {
        FUN_100c62ee0(0xd,0xd8,0x41,"a_gentm.c",0xfd);
        return (uint *)0x0;
      }
      if (*(long *)(param_1 + 2) != 0) {
        FUN_100bf3910();
      }
      *(char **)(param_1 + 2) = pcVar3;
    }
    FUN_100c5d5b0(pcVar3,0x14,"%04d%02d%02d%02d%02d%02dZ",puVar2[5] + 0x76c,puVar2[4] + 1,puVar2[3],
                  puVar2[2],puVar2[1],*puVar2);
    sVar4 = _strlen(pcVar3);
    *param_1 = (uint)sVar4;
    param_1[1] = 0x18;
    puVar5 = param_1;
  }
  return puVar5;
}

