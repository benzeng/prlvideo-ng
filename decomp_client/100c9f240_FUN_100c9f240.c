
long FUN_100c9f240(undefined8 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long local_30;
  
  local_30 = 0;
  if (param_2 == (char *)0x0) {
    uVar5 = 0x6d;
    uVar6 = 0xb6;
  }
  else {
    local_30 = FUN_100c26720();
    cVar1 = *param_2;
    pcVar7 = param_2 + 1;
    if (cVar1 != '-') {
      pcVar7 = param_2;
    }
    if ((*pcVar7 == '0') && ((byte)(pcVar7[1] | 0x20U) == 0x78)) {
      pcVar7 = pcVar7 + 2;
      iVar3 = FUN_100c2a3e0(&local_30,pcVar7);
    }
    else {
      iVar3 = FUN_100c2a670(&local_30,pcVar7);
    }
    if ((iVar3 == 0) || (pcVar7[iVar3] != '\0')) {
      FUN_100c266b0(local_30);
      uVar5 = 100;
      uVar6 = 0xcd;
    }
    else {
      bVar2 = false;
      if ((cVar1 == '-') && (bVar2 = false, *(int *)(local_30 + 8) != 0)) {
        bVar2 = true;
      }
      lVar4 = FUN_100c76a10(local_30,0);
      FUN_100c266b0(local_30);
      if (lVar4 != 0) {
        if (!bVar2) {
          return lVar4;
        }
        *(byte *)(lVar4 + 5) = *(byte *)(lVar4 + 5) | 1;
        return lVar4;
      }
      uVar5 = 0x65;
      uVar6 = 0xd8;
    }
  }
  FUN_100c62ee0(0x22,0x6c,uVar5,"v3_utl.c",uVar6);
  return 0;
}

