
undefined8 FUN_1008ab660(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = *(long *)(param_3 + 0x20);
  local_38 = param_2;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x18) == 0)) {
    FUN_100887ce0(0xd,0xd0,0xca,"bio_ndef.c",0x6a);
  }
  else {
    puVar3 = (undefined8 *)FUN_10081ddd0(0x30,"bio_ndef.c",0x6d);
    uVar4 = FUN_1008aaf00();
    lVar5 = FUN_10087d330(uVar4);
    lVar6 = FUN_10087dfb0(lVar5,param_1);
    if (((puVar3 != (undefined8 *)0x0) && (lVar5 != 0)) && (lVar6 != 0)) {
      FUN_1008aaf10(lVar5,FUN_1008ab7d0,FUN_1008ab860);
      FUN_1008aaf80(lVar5,FUN_1008ab8b0,FUN_1008ab990);
      local_40 = 0;
      local_48 = 0;
      local_50 = lVar6;
      iVar2 = (**(code **)(lVar1 + 0x18))(10,&local_38,param_3,&local_50);
      if (0 < iVar2) {
        *puVar3 = local_38;
        puVar3[1] = param_3;
        puVar3[2] = local_48;
        puVar3[4] = local_40;
        puVar3[3] = lVar6;
        FUN_10087db60(lVar5,0x99,0,puVar3);
        return local_48;
      }
    }
    if (lVar5 != 0) {
      FUN_10087d4e0(lVar5);
    }
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_10081e1a0(puVar3);
  }
  return 0;
}

