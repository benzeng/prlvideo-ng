
void FUN_10071b2c0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100714a30();
  if (iVar1 - 4U < 6) {
    pcVar3 = (&PTR_s_PSBM_100bce390)[(int)(iVar1 - 4U)];
  }
  else {
    pcVar3 = "VZ";
  }
  if (param_2 != 3) {
    if (param_2 == 2) {
      ___snprintf_chk(param_3,param_4,0,0xffffffffffffffff,"%08lu",*(undefined8 *)(param_1 + 0x18));
      return;
    }
    if (param_2 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      pcVar2 = "%s.%08lu.%04u";
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      pcVar2 = "%s%08lu%04u";
    }
    ___snprintf_chk(param_3,param_4,0,0xffffffffffffffff,pcVar2,pcVar3,uVar4,uVar5);
    return;
  }
  ___snprintf_chk(param_3,param_4,0,0xffffffffffffffff,"%04u",*(undefined4 *)(param_1 + 0x20));
  return;
}

