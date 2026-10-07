
uint * FUN_10089a070(uint *param_1,undefined8 param_2,int param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  size_t sVar5;
  undefined1 local_70 [56];
  undefined8 local_38;
  
  bVar1 = false;
  local_38 = param_2;
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)FUN_1008afdf0(0x17);
    if (param_1 == (uint *)0x0) {
      return (uint *)0x0;
    }
    bVar1 = true;
  }
  puVar3 = (undefined4 *)FUN_1008205c0(&local_38,local_70);
  if (((puVar3 != (undefined4 *)0x0) &&
      (((param_3 == 0 && (param_4 == 0)) ||
       (iVar2 = FUN_100820620(puVar3,param_3,param_4), iVar2 != 0)))) &&
     (iVar2 = puVar3[5], iVar2 - 0x32U < 100)) {
    pcVar4 = *(char **)(param_1 + 2);
    if ((pcVar4 == (char *)0x0) || (*param_1 < 0x14)) {
      pcVar4 = (char *)FUN_10081ddd0(0x14,"a_utctm.c",0xe1);
      if (pcVar4 == (char *)0x0) {
        FUN_100887ce0(0xd,0xda,0x41,"a_utctm.c",0xe3);
        goto LAB_10089a1c7;
      }
      if (*(long *)(param_1 + 2) != 0) {
        FUN_10081e1a0();
      }
      *(char **)(param_1 + 2) = pcVar4;
      iVar2 = puVar3[5];
    }
    FUN_1008823b0(pcVar4,0x14,"%02d%02d%02d%02d%02d%02dZ",iVar2 % 100,puVar3[4] + 1,puVar3[3],
                  puVar3[2],puVar3[1],*puVar3);
    sVar5 = _strlen(pcVar4);
    *param_1 = (uint)sVar5;
    param_1[1] = 0x17;
    return param_1;
  }
LAB_10089a1c7:
  if (bVar1) {
    FUN_1008afd70(param_1);
  }
  return (uint *)0x0;
}

