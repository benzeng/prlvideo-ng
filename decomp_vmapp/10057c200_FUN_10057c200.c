
int FUN_10057c200(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(byte *)(param_1 + 0x1140) & 0x20) == 0) {
    FUN_1008e3970("","vdisk",0,"Disk must be opened with PRL_DISK_XML_CHANGE flag");
    iVar1 = -0x7ffdefcb;
  }
  else {
    iVar1 = 0;
    for (puVar3 = *(undefined8 **)(param_1 + 0x1128); puVar3 != *(undefined8 **)(param_1 + 0x1130);
        puVar3 = puVar3 + 1) {
      iVar1 = FUN_100597180(*puVar3,param_2);
      if (iVar1 < 0) break;
    }
  }
  if (param_3 != (code *)0x0) {
    iVar2 = 0x3ed;
    if (iVar1 < 0) {
      iVar2 = iVar1;
    }
    (*param_3)(iVar2,param_4);
  }
  return iVar1;
}

