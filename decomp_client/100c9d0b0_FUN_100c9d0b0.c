
undefined8
FUN_100c9d0b0(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4,
             undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long local_40;
  long local_38;
  
  lVar2 = FUN_100bf7360(param_1,0);
  if (lVar2 == 0) {
    FUN_100c62ee0(0x22,0x74,0x73,"v3_conf.c",0x111);
    pcVar7 = "name=";
LAB_100c9d1e3:
    lVar4 = 0;
    FUN_100c642a0(2,pcVar7,param_1);
  }
  else {
    if (param_4 != 2) {
      if (param_4 == 1) {
        lVar4 = FUN_100c9fc70(param_2,&local_40);
        goto LAB_100c9d172;
      }
LAB_100c9d1ae:
      FUN_100c62ee0(0x22,0x74,0x74,"v3_conf.c",0x11d);
      pcVar7 = "value=";
      param_1 = param_2;
      goto LAB_100c9d1e3;
    }
    local_38 = 0;
    lVar3 = FUN_100c88c70(param_2,param_5);
    lVar4 = 0;
    if (lVar3 != 0) {
      iVar1 = FUN_100c83ee0(lVar3,&local_38);
      local_40 = (long)iVar1;
      FUN_100c83f20(lVar3);
      lVar4 = local_38;
    }
LAB_100c9d172:
    if (lVar4 == 0) goto LAB_100c9d1ae;
    puVar5 = (undefined4 *)FUN_100c8b370(4);
    if (puVar5 != (undefined4 *)0x0) {
      *(long *)(puVar5 + 2) = lVar4;
      *puVar5 = (undefined4)local_40;
      lVar4 = 0;
      uVar6 = FUN_100c97970(0,lVar2,param_3,puVar5);
      goto LAB_100c9d1ed;
    }
    FUN_100c62ee0(0x22,0x74,0x41,"v3_conf.c",0x123);
  }
  puVar5 = (undefined4 *)0x0;
  uVar6 = 0;
LAB_100c9d1ed:
  FUN_100c74e10(lVar2);
  FUN_100c8b2f0(puVar5);
  if (lVar4 != 0) {
    FUN_100bf3910(lVar4);
  }
  return uVar6;
}

