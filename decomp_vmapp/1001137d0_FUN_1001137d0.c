
undefined8 FUN_1001137d0(long param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  string local_48;
  char local_47 [15];
  char *local_38;
  
  iVar1 = *param_2;
  puVar5 = (uint *)(param_2 + 1);
  uVar7 = 0;
  if (0x277 < iVar1) {
    if (iVar1 == 0x278) {
      LOCK();
      **(undefined4 **)puVar5 = **(undefined4 **)puVar5;
      UNLOCK();
    }
    else if (iVar1 == 0x5dd) {
      FUN_100114d80(&local_48,param_1 + 0x298,*(undefined8 *)puVar5);
      if (((byte)local_48 & 1) == 0) {
        local_38 = local_47;
      }
      _strncpy((char *)puVar5,local_38,0x1fc);
      std::string::~string(&local_48);
    }
    else {
      if (iVar1 != 0x5de) {
        return 0;
      }
      FUN_1000c5340(param_1 + 0x130);
    }
    goto LAB_1001138ab;
  }
  switch(iVar1) {
  case 600:
    FUN_100112fb0(param_1,puVar5);
    break;
  case 0x259:
    FUN_1001134d0(param_1,*puVar5);
    break;
  case 0x25a:
    FUN_100113040(param_1,puVar5);
    break;
  default:
    goto switchD_100113813_caseD_25b;
  case 0x25e:
    uVar2 = *puVar5;
    lVar3 = FUN_1000e99d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1158),0x84,0);
    lVar4 = (ulong)uVar2 * 0x3024;
    uVar7 = 1;
    if (*(int *)(lVar3 + 0x2098 + lVar4) != 0) {
      uVar6 = 0;
      do {
        FUN_10008c980(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1940),
                      (ulong)*(uint *)(lVar4 + 0x20a4 + lVar3 + uVar6 * 4) << 0xc);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(lVar3 + 0x2098 + lVar4));
    }
    goto switchD_100113813_caseD_25b;
  }
LAB_1001138ab:
  uVar7 = 1;
switchD_100113813_caseD_25b:
  return uVar7;
}

