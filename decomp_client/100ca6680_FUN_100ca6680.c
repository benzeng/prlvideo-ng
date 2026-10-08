
long FUN_100ca6680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  undefined1 local_48 [8];
  char *local_40;
  undefined8 local_38;
  
  lVar3 = FUN_100c60010();
  if (lVar3 == 0) {
    FUN_100c62ee0(0x22,0x8b,0x41,"v3_info.c",0x9d);
LAB_100ca68bb:
    lVar3 = 0;
  }
  else {
    iVar1 = FUN_100c60800(param_3);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        lVar4 = FUN_100c60820(param_3,iVar1);
        plVar5 = (long *)FUN_100c7fb90(&DAT_1022551b0);
        if ((plVar5 == (long *)0x0) || (iVar2 = FUN_100c604e0(lVar3,plVar5), iVar2 == 0)) {
          FUN_100c62ee0(0x22,0x8b,0x41,"v3_info.c",0xa5);
LAB_100ca68ac:
          FUN_100c60790(lVar3,FUN_100ca6930);
          goto LAB_100ca68bb;
        }
        pcVar8 = *(char **)(lVar4 + 8);
        pcVar6 = _strchr(pcVar8,0x3b);
        if (pcVar6 == (char *)0x0) {
          FUN_100c62ee0(0x22,0x8b,0x8f,"v3_info.c",0xab);
          goto LAB_100ca68ac;
        }
        local_40 = pcVar6 + 1;
        local_38 = *(undefined8 *)(lVar4 + 0x10);
        lVar7 = FUN_100ca1630(plVar5[1],param_1,param_2,local_48,0);
        if (lVar7 == 0) goto LAB_100ca68ac;
        iVar2 = (int)pcVar6 - (int)pcVar8;
        pcVar8 = (char *)FUN_100bf3540(iVar2 + 1,"v3_info.c",0xb3);
        if (pcVar8 == (char *)0x0) {
          FUN_100c62ee0(0x22,0x8b,0x41,"v3_info.c",0xb5);
          goto LAB_100ca68ac;
        }
        _strncpy(pcVar8,*(char **)(lVar4 + 8),(long)iVar2);
        pcVar8[iVar2] = '\0';
        lVar4 = FUN_100bf7360(pcVar8,0);
        *plVar5 = lVar4;
        if (lVar4 == 0) {
          FUN_100c62ee0(0x22,0x8b,0x77,"v3_info.c",0xbd);
          FUN_100c642a0(2,"value=",pcVar8);
          FUN_100bf3910(pcVar8);
          goto LAB_100ca68ac;
        }
        FUN_100bf3910(pcVar8);
        iVar1 = iVar1 + 1;
        iVar2 = FUN_100c60800(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return lVar3;
}

